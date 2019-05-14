#pragma once

#include <tss2/tss2_sys.h>

bool get_next_key_params(TPMT_PUBLIC_PARMS *key_params);

bool get_next_sign_scheme(TPMT_SIG_SCHEME *scheme, TPM2_ALG_ID type);

bool get_next_rsa_keylen(TPMI_RSA_KEY_BITS *keylen);
