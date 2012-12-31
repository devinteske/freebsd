 * Copyright (c) 1999-2005 Apple Inc.
	tot_rec_size = rec->len + AUDIT_HEADER_SIZE + AUDIT_TRAILER_SIZE;
	hdr = au_to_header32_tm(tot_rec_size, event, 0, tm);
#define	EXTATTR_TOKENS do {						\
			tok = au_to_arg32(3, "attrnamespace",		\
			    ar->ar_arg_value);				\
		if (sizeof(ar->ar_arg_auditon.au_flags) > 4)
			tok = au_to_arg64(1, "policy",
			    ar->ar_arg_auditon.au_flags);
		else
			tok = au_to_arg32(1, "policy",
			    ar->ar_arg_auditon.au_flags);
		tok = au_to_arg32(3, "setqctrl:aq_hiwater",
		tok = au_to_arg32(3, "setqctrl:aq_lowater",
		tok = au_to_arg32(3, "setqctrl:aq_bufsz",
		tok = au_to_arg32(3, "setqctrl:aq_delay",
		tok = au_to_arg32(3, "setqctrl:aq_minfree",
		tok = au_to_arg32(3, "setumask:as_success",
		tok = au_to_arg32(3, "setumask:as_failure",
		tok = au_to_arg32(3, "setsmask:as_success",
		tok = au_to_arg32(3, "setsmask:as_failure",
		if (sizeof(ar->ar_arg_auditon.au_cond) > 4)
			tok = au_to_arg64(3, "setcond",
			    ar->ar_arg_auditon.au_cond);
		else
			tok = au_to_arg32(3, "setcond",
			    ar->ar_arg_auditon.au_cond);
		tok = au_to_arg32(3, "setclass:ec_class",
			tok = au_to_arg32(1,"domain",
			tok = au_to_arg32(2,"type",
			tok = au_to_arg32(3,"protocol",
	case AUE_LSEEK:
	case AUE_NFS_SVC:
	case AUE_MKFIFO:
		if (ARG_IS_VALID(kar, ARG_MODE)) {
			tok = au_to_arg32(2, "mode", ar->ar_arg_mode);
			kau_write(rec, tok);
		}
		/* FALLTHROUGH */

	case AUE_ACCESS:
	case AUE_EACCESS:
			tok = au_to_arg32(2, "fd", ar->ar_arg_fd);
			tok = au_to_arg32(0, "signal", ar->ar_arg_signum);
		EXTATTR_TOKENS;
		EXTATTR_TOKENS;
		EXTATTR_TOKENS;
			if (ARG_IS_VALID(kar, ARG_CMD)) {
				tok = au_to_arg32(2, "cmd", ar->ar_arg_cmd);
				kau_write(rec, tok);
			}
		if (ARG_IS_VALID(kar, ARG_ADDR)) {
			tok = au_to_arg32(1, "arg",
			    (u_int32_t)(uintptr_t)ar->ar_arg_addr);
			kau_write(rec, tok);
		}
		if (ARG_IS_VALID(kar, ARG_ADDR)) {
			tok = au_to_arg32(4, "base addr",
			    (u_int32_t)(uintptr_t)ar->ar_arg_addr);
			kau_write(rec, tok);
		}
		if (ARG_IS_VALID(kar, ARG_ADDR)) {
			tok = au_to_arg32(1, "addr",
			    (u_int32_t)(uintptr_t)ar->ar_arg_addr);
			kau_write(rec, tok);
		}
		if (ARG_IS_VALID(kar, ARG_ADDR)) {
			tok = au_to_arg32(1, "base addr",
			    (u_int32_t)(uintptr_t)ar->ar_arg_addr);
			kau_write(rec, tok);
		}
		if (ARG_IS_VALID(kar, ARG_ADDR)) {
			tok = au_to_arg32(3, "addr",
			    (u_int32_t)(uintptr_t)ar->ar_arg_addr);
			kau_write(rec, tok);
		}
			tok = au_to_arg32(1, "gid", ar->ar_arg_egid);
			tok = au_to_arg32(1, "uid", ar->ar_arg_euid);
			tok = au_to_arg32(2, "priority", ar->ar_arg_value);
		if (ARG_IS_VALID(kar, ARG_PID)) {
			tok = au_to_arg32(0, "pid", ar->ar_arg_pid);
	tok = au_to_return32((char)ar->ar_errno, ar->ar_retval);