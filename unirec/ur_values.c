/************* THIS IS AUTOMATICALLY GENERATED FILE, DO NOT EDIT *************/
/* Edit "values" file and run ur_values.sh script to add UniRec values.      */

#include "ur_values.h"

const ur_values_t ur_values[] = {
   {0x1, "TCP_FIN", "Finish bit"},
   {0x2, "TCP_SYN", "Synchronize bit"},
   {0x4, "TCP_RST", "Reset bit"},
   {0x8, "TCP_PSH", "Push bit"},
   {0x10, "TCP_ACK", "Acknowledgement bit"},
   {0x20, "TCP_URG", "Urgent bit"},
   {1, "DIR_IN", "Direction"},
   {0, "DIR_OUT", "Direction"},
   {0x8, "DIR_FLAG_REQ", "Request"},
   {0x4, "DIR_FLAG_RSP", "Response"},
   {0x2, "DIR_FLAG_SF", "Single"},
   {0x1, "DIR_FLAG_NRC", "Not"},
   {0, "IPV6_TUN_NATIVE", "Native"},
   {1, "IPV6_TUN_TEREDO", "Teredo"},
   {2, "IPV6_TUN_ISATAP", "ISATAP"},
   {4, "IPV6_TUN_6TO4", "6to4"},
   {8, "IPV6_TUN_AYIYA", "AYIYA"},
   {16, "IPV6_TUN_OTHER", "Other protocol"},
   {32, "IPV6_TUN_6OVER4", "6over4"},
   {0x1, "SPOOF_BOGONS", "Bogon"},
   {0x2, "SPOOF_SYMETRIC", "Symetric"},
   {0x4, "SPOOF_NEWIP", "New IP"},
   {0x8, "SPOOF_TCPHIST", "TCP history"},
   {1, "EVT_T_PORTSCAN", "Portscan (unspecified"},
   {2, "EVT_T_PORTSCAN_H", "Horizontal portscan (one or a few ports, many"},
   {3, "EVT_T_PORTSCAN_V", "Vertical portscan (one address, many"},
   {10, "EVT_T_DOS", "Denial of service attack (unspecified"},
   {11, "EVT_T_SYNFLOOD", "TCP SYN"},
   {15, "EVT_T_DNSAMP", "DNS Amplification"},
   {30, "EVT_T_BRUTEFORCE", "Bruteforce password"},
   {40, "EVT_T_VOIP_PREFIX_GUESS", "VoIP prefix"},
   {41, "EVT_T_VOIP_CALL_DIFFERENT_COUNTRY", "VoIP call to different"},
   {1, "TUN_T_REQUEST_TUNNEL", "Request anomaly - detected"},
   {2, "TUN_T_REQUEST_OTHER", "Request anomaly - detected other anomaly than"},
   {3, "TUN_T_REQUEST_MALFORMED_P", "Request anomaly - malformed"},
   {4, "TUN_T_RESPONSE_TUNNEL_REQ", "Response anomaly - detected tunnel in request string"},
   {5, "TUN_T_RESPONSE_TUNNEL_TXT", "Response anomaly - detected tunnel in TXT"},
   {6, "TUN_T_RESPONSE_TUNNEL_CNAME", "Response anomaly - detected tunnel in CNAME"},
   {7, "TUN_T_RESPONSE_TUNNEL_MX", "Response anomaly - detected tunnel in MX"},
   {8, "TUN_T_RESPONSE_TUNNEL_NS", "Response anomaly - detected tunnel in NS"},
   {9, "TUN_T_RESPONSE_OTHER", "Response anomaly - detected other anomaly than"},
   {10, "TUN_T_RESPONSE_MALFORMED_P", "Response anomaly - malformed"},
   {24, "HB_HEARTBEAT", "Type of message is heartbeat"},
   {0, "HB_UNKNOWN", "Unknow direction - if message is"},
   {1, "HB_REQUEST", "Heartbeat"},
   {2, "HB_RESPONSE", "Heartbeat"},
   {1, "HB_AT_MIN_SIZE", "Request smaller then minimal request"},
   {2, "HB_AT_DIFF_SIZE", "Payload size is greater then real message"},
   {4, "HB_AT_DIFF_REQ_RESP", "Difference of request and response size is too"},
   {8, "HB_AVG_RESP", "Average response size is suspicious (only if do not have"},
   {1, "WT_PORTSCAN", ""},
   {2, "WT_BRUTEFORCE", ""},
   {3, "WT_PROBE", ""},
   {4, "WT_SPAM", ""},
   {5, "WT_PHISHING", ""},
   {6, "WT_BOTNET_C_C", ""},
   {7, "WT_DOS", ""},
   {8, "WT_MALWARE", ""},
   {9, "WT_COPYRIGHT", ""},
   {10, "WT_WEBATTACK", ""},
   {11, "WT_VULNERABILITY", ""},
   {12, "WT_TEST", ""},
   {13, "WT_OTHER", ""},
   {1, "HTTP_SDM_METHOD_GET", "Constants taken from http-sdm.h in sources of http-sdm exporter"},
   {2, "HTTP_SDM_METHOD_POST", ""},
   {4, "HTTP_SDM_METHOD_HEAD", ""},
   {5, "HTTP_SDM_METHOD_PUT", ""},
   {6, "HTTP_SDM_METHOD_OPTIONS", ""},
   {7, "HTTP_SDM_METHOD_DELETE", ""},
   {8, "HTTP_SDM_METHOD_TRACE", ""},
   {9, "HTTP_SDM_METHOD_CONNECT", ""},

};
