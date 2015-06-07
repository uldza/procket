struct procket_define {
    const char *key;
    int val;
};

const struct procket_define procket_socket_level[] = {
#ifdef IPPROTO_AH
    {"IPPROTO_AH", IPPROTO_AH},
#endif
#ifdef IPPROTO_BEETPH
    {"IPPROTO_BEETPH", IPPROTO_BEETPH},
#endif
#ifdef IPPROTO_CARP
    {"IPPROTO_CARP", IPPROTO_CARP},
#endif
#ifdef IPPROTO_COMP
    {"IPPROTO_COMP", IPPROTO_COMP},
#endif
#ifdef IPPROTO_DCCP
    {"IPPROTO_DCCP", IPPROTO_DCCP},
#endif
#ifdef IPPROTO_DIVERT
    {"IPPROTO_DIVERT", IPPROTO_DIVERT},
#endif
#ifdef IPPROTO_DIVERT_INIT
    {"IPPROTO_DIVERT_INIT", IPPROTO_DIVERT_INIT},
#endif
#ifdef IPPROTO_DIVERT_RESP
    {"IPPROTO_DIVERT_RESP", IPPROTO_DIVERT_RESP},
#endif
#ifdef IPPROTO_DSTOPTS
    {"IPPROTO_DSTOPTS", IPPROTO_DSTOPTS},
#endif
#ifdef IPPROTO_EGP
    {"IPPROTO_EGP", IPPROTO_EGP},
#endif
#ifdef IPPROTO_ENCAP
    {"IPPROTO_ENCAP", IPPROTO_ENCAP},
#endif
#ifdef IPPROTO_EON
    {"IPPROTO_EON", IPPROTO_EON},
#endif
#ifdef IPPROTO_ESP
    {"IPPROTO_ESP", IPPROTO_ESP},
#endif
#ifdef IPPROTO_ETHERIP
    {"IPPROTO_ETHERIP", IPPROTO_ETHERIP},
#endif
#ifdef IPPROTO_FRAGMENT
    {"IPPROTO_FRAGMENT", IPPROTO_FRAGMENT},
#endif
#ifdef IPPROTO_GGP
    {"IPPROTO_GGP", IPPROTO_GGP},
#endif
#ifdef IPPROTO_GRE
    {"IPPROTO_GRE", IPPROTO_GRE},
#endif
#ifdef IPPROTO_HELLO
    {"IPPROTO_HELLO", IPPROTO_HELLO},
#endif
#ifdef IPPROTO_HOPOPTS
    {"IPPROTO_HOPOPTS", IPPROTO_HOPOPTS},
#endif
#ifdef IPPROTO_ICMP
    {"IPPROTO_ICMP", IPPROTO_ICMP},
#endif
#ifdef IPPROTO_ICMPV6
    {"IPPROTO_ICMPV6", IPPROTO_ICMPV6},
#endif
#ifdef IPPROTO_IDP
    {"IPPROTO_IDP", IPPROTO_IDP},
#endif
#ifdef IPPROTO_IGMP
    {"IPPROTO_IGMP", IPPROTO_IGMP},
#endif
#ifdef IPPROTO_IP
    {"IPPROTO_IP", IPPROTO_IP},
#endif
#ifdef IPPROTO_IPCOMP
    {"IPPROTO_IPCOMP", IPPROTO_IPCOMP},
#endif
#ifdef IPPROTO_IPIP
    {"IPPROTO_IPIP", IPPROTO_IPIP},
#endif
#ifdef IPPROTO_IPV4
    {"IPPROTO_IPV4", IPPROTO_IPV4},
#endif
#ifdef IPPROTO_IPV6
    {"IPPROTO_IPV6", IPPROTO_IPV6},
#endif
#ifdef IPPROTO_L2TP
    {"IPPROTO_L2TP", IPPROTO_L2TP},
#endif
#ifdef IPPROTO_MH
    {"IPPROTO_MH", IPPROTO_MH},
#endif
#ifdef IPPROTO_MOBILE
    {"IPPROTO_MOBILE", IPPROTO_MOBILE},
#endif
#ifdef IPPROTO_MPLS
    {"IPPROTO_MPLS", IPPROTO_MPLS},
#endif
#ifdef IPPROTO_MTP
    {"IPPROTO_MTP", IPPROTO_MTP},
#endif
#ifdef IPPROTO_NAMES
    {"IPPROTO_NAMES", IPPROTO_NAMES},
#endif
#ifdef IPPROTO_ND
    {"IPPROTO_ND", IPPROTO_ND},
#endif
#ifdef IPPROTO_NONE
    {"IPPROTO_NONE", IPPROTO_NONE},
#endif
#ifdef IPPROTO_OSPF
    {"IPPROTO_OSPF", IPPROTO_OSPF},
#endif
#ifdef IPPROTO_PFSYNC
    {"IPPROTO_PFSYNC", IPPROTO_PFSYNC},
#endif
#ifdef IPPROTO_PGM
    {"IPPROTO_PGM", IPPROTO_PGM},
#endif
#ifdef IPPROTO_PIGP
    {"IPPROTO_PIGP", IPPROTO_PIGP},
#endif
#ifdef IPPROTO_PIM
    {"IPPROTO_PIM", IPPROTO_PIM},
#endif
#ifdef IPPROTO_PRM
    {"IPPROTO_PRM", IPPROTO_PRM},
#endif
#ifdef IPPROTO_PUP
    {"IPPROTO_PUP", IPPROTO_PUP},
#endif
#ifdef IPPROTO_PVP
    {"IPPROTO_PVP", IPPROTO_PVP},
#endif
#ifdef IPPROTO_RAW
    {"IPPROTO_RAW", IPPROTO_RAW},
#endif
#ifdef IPPROTO_RCCMON
    {"IPPROTO_RCCMON", IPPROTO_RCCMON},
#endif
#ifdef IPPROTO_RDP
    {"IPPROTO_RDP", IPPROTO_RDP},
#endif
#ifdef IPPROTO_RESERVED_253
    {"IPPROTO_RESERVED_253", IPPROTO_RESERVED_253},
#endif
#ifdef IPPROTO_RESERVED_254
    {"IPPROTO_RESERVED_254", IPPROTO_RESERVED_254},
#endif
#ifdef IPPROTO_ROUTING
    {"IPPROTO_ROUTING", IPPROTO_ROUTING},
#endif
#ifdef IPPROTO_RSVP
    {"IPPROTO_RSVP", IPPROTO_RSVP},
#endif
#ifdef IPPROTO_RVD
    {"IPPROTO_RVD", IPPROTO_RVD},
#endif
#ifdef IPPROTO_SATEXPAK
    {"IPPROTO_SATEXPAK", IPPROTO_SATEXPAK},
#endif
#ifdef IPPROTO_SATMON
    {"IPPROTO_SATMON", IPPROTO_SATMON},
#endif
#ifdef IPPROTO_SCCSP
    {"IPPROTO_SCCSP", IPPROTO_SCCSP},
#endif
#ifdef IPPROTO_SCTP
    {"IPPROTO_SCTP", IPPROTO_SCTP},
#endif
#ifdef IPPROTO_SDRP
    {"IPPROTO_SDRP", IPPROTO_SDRP},
#endif
#ifdef IPPROTO_SEND
    {"IPPROTO_SEND", IPPROTO_SEND},
#endif
#ifdef IPPROTO_SEP
    {"IPPROTO_SEP", IPPROTO_SEP},
#endif
#ifdef IPPROTO_SHIM6
    {"IPPROTO_SHIM6", IPPROTO_SHIM6},
#endif
#ifdef IPPROTO_SKIP
    {"IPPROTO_SKIP", IPPROTO_SKIP},
#endif
#ifdef IPPROTO_SPACER
    {"IPPROTO_SPACER", IPPROTO_SPACER},
#endif
#ifdef IPPROTO_SRPC
    {"IPPROTO_SRPC", IPPROTO_SRPC},
#endif
#ifdef IPPROTO_ST
    {"IPPROTO_ST", IPPROTO_ST},
#endif
#ifdef IPPROTO_SVMTP
    {"IPPROTO_SVMTP", IPPROTO_SVMTP},
#endif
#ifdef IPPROTO_SWIPE
    {"IPPROTO_SWIPE", IPPROTO_SWIPE},
#endif
#ifdef IPPROTO_TCF
    {"IPPROTO_TCF", IPPROTO_TCF},
#endif
#ifdef IPPROTO_TCP
    {"IPPROTO_TCP", IPPROTO_TCP},
#endif
#ifdef IPPROTO_TLSP
    {"IPPROTO_TLSP", IPPROTO_TLSP},
#endif
#ifdef IPPROTO_TP
    {"IPPROTO_TP", IPPROTO_TP},
#endif
#ifdef IPPROTO_TPXX
    {"IPPROTO_TPXX", IPPROTO_TPXX},
#endif
#ifdef IPPROTO_TRUNK1
    {"IPPROTO_TRUNK1", IPPROTO_TRUNK1},
#endif
#ifdef IPPROTO_TRUNK2
    {"IPPROTO_TRUNK2", IPPROTO_TRUNK2},
#endif
#ifdef IPPROTO_TTP
    {"IPPROTO_TTP", IPPROTO_TTP},
#endif
#ifdef IPPROTO_UDP
    {"IPPROTO_UDP", IPPROTO_UDP},
#endif
#ifdef IPPROTO_UDPLITE
    {"IPPROTO_UDPLITE", IPPROTO_UDPLITE},
#endif
#ifdef IPPROTO_VINES
    {"IPPROTO_VINES", IPPROTO_VINES},
#endif
#ifdef IPPROTO_VISA
    {"IPPROTO_VISA", IPPROTO_VISA},
#endif
#ifdef IPPROTO_VMTP
    {"IPPROTO_VMTP", IPPROTO_VMTP},
#endif
#ifdef IPPROTO_VRRP
    {"IPPROTO_VRRP", IPPROTO_VRRP},
#endif
#ifdef IPPROTO_WBEXPAK
    {"IPPROTO_WBEXPAK", IPPROTO_WBEXPAK},
#endif
#ifdef IPPROTO_WBMON
    {"IPPROTO_WBMON", IPPROTO_WBMON},
#endif
#ifdef IPPROTO_WSN
    {"IPPROTO_WSN", IPPROTO_WSN},
#endif
#ifdef IPPROTO_XNET
    {"IPPROTO_XNET", IPPROTO_XNET},
#endif
#ifdef IPPROTO_XTP
    {"IPPROTO_XTP", IPPROTO_XTP},
#endif
#ifdef SOL_AAL
    {"SOL_AAL", SOL_AAL},
#endif
#ifdef SOL_ATALK
    {"SOL_ATALK", SOL_ATALK},
#endif
#ifdef SOL_ATM
    {"SOL_ATM", SOL_ATM},
#endif
#ifdef SOL_AX25
    {"SOL_AX25", SOL_AX25},
#endif
#ifdef SOL_CAN_BASE
    {"SOL_CAN_BASE", SOL_CAN_BASE},
#endif
#ifdef SOL_CAN_RAW
    {"SOL_CAN_RAW", SOL_CAN_RAW},
#endif
#ifdef SOL_DECNET
    {"SOL_DECNET", SOL_DECNET},
#endif
#ifdef SOL_FILTER
    {"SOL_FILTER", SOL_FILTER},
#endif
#ifdef SOL_HCI_RAW
    {"SOL_HCI_RAW", SOL_HCI_RAW},
#endif
#ifdef SOL_ICMPV6
    {"SOL_ICMPV6", SOL_ICMPV6},
#endif
#ifdef SOL_IP
    {"SOL_IP", SOL_IP},
#endif
#ifdef SOL_IPV6
    {"SOL_IPV6", SOL_IPV6},
#endif
#ifdef SOL_IPX
    {"SOL_IPX", SOL_IPX},
#endif
#ifdef SOL_IRDA
    {"SOL_IRDA", SOL_IRDA},
#endif
#ifdef SOL_IRLMP
    {"SOL_IRLMP", SOL_IRLMP},
#endif
#ifdef SOL_IRTTP
    {"SOL_IRTTP", SOL_IRTTP},
#endif
#ifdef SOL_L2CAP
    {"SOL_L2CAP", SOL_L2CAP},
#endif
#ifdef SOL_NETLINK
    {"SOL_NETLINK", SOL_NETLINK},
#endif
#ifdef SOL_NETROM
    {"SOL_NETROM", SOL_NETROM},
#endif
#ifdef SOL_PACKET
    {"SOL_PACKET", SOL_PACKET},
#endif
#ifdef SOL_PNPIPE
    {"SOL_PNPIPE", SOL_PNPIPE},
#endif
#ifdef SOL_RAW
    {"SOL_RAW", SOL_RAW},
#endif
#ifdef SOL_RDS
    {"SOL_RDS", SOL_RDS},
#endif
#ifdef SOL_RESEL
    {"SOL_RESEL", SOL_RESEL},
#endif
#ifdef SOL_RFCOMM
    {"SOL_RFCOMM", SOL_RFCOMM},
#endif
#ifdef SOL_ROSE
    {"SOL_ROSE", SOL_ROSE},
#endif
#ifdef SOL_ROUTE
    {"SOL_ROUTE", SOL_ROUTE},
#endif
#ifdef SOL_SCO
    {"SOL_SCO", SOL_SCO},
#endif
#ifdef SOL_SCTP
    {"SOL_SCTP", SOL_SCTP},
#endif
#ifdef SOL_SOCKET
    {"SOL_SOCKET", SOL_SOCKET},
#endif
#ifdef SOL_TCP
    {"SOL_TCP", SOL_TCP},
#endif
#ifdef SOL_TIPC
    {"SOL_TIPC", SOL_TIPC},
#endif
#ifdef SOL_UDP
    {"SOL_UDP", SOL_UDP},
#endif
#ifdef SOL_X25
    {"SOL_X25", SOL_X25},
#endif
    {NULL, -1}
};

const struct procket_define procket_socket_optname[] = {
#ifdef IPV6_RECVPKTINFO
    {"IPV6_RECVPKTINFO", IPV6_RECVPKTINFO},
#endif
#ifdef SO_ACCEPTCONN
    {"SO_ACCEPTCONN", SO_ACCEPTCONN},
#endif
#ifdef SO_ACCEPTFILTER
    {"SO_ACCEPTFILTER", SO_ACCEPTFILTER},
#endif
#ifdef SO_ACCEPTOR
    {"SO_ACCEPTOR", SO_ACCEPTOR},
#endif
#ifdef SO_ALLZONES
    {"SO_ALLZONES", SO_ALLZONES},
#endif
#ifdef SO_ANON_MLP
    {"SO_ANON_MLP", SO_ANON_MLP},
#endif
#ifdef SO_ATTACH_FILTER
    {"SO_ATTACH_FILTER", SO_ATTACH_FILTER},
#endif
#ifdef SO_BINDANY
    {"SO_BINDANY", SO_BINDANY},
#endif
#ifdef SO_BINDTODEVICE
    {"SO_BINDTODEVICE", SO_BINDTODEVICE},
#endif
#ifdef SO_BINTIME
    {"SO_BINTIME", SO_BINTIME},
#endif
#ifdef SO_BROADCAST
    {"SO_BROADCAST", SO_BROADCAST},
#endif
#ifdef SO_BSDCOMPAT
    {"SO_BSDCOMPAT", SO_BSDCOMPAT},
#endif
#ifdef SO_DEBUG
    {"SO_DEBUG", SO_DEBUG},
#endif
#ifdef SO_DETACH_FILTER
    {"SO_DETACH_FILTER", SO_DETACH_FILTER},
#endif
#ifdef SO_DGRAM_ERRIND
    {"SO_DGRAM_ERRIND", SO_DGRAM_ERRIND},
#endif
#ifdef SO_DOMAIN
    {"SO_DOMAIN", SO_DOMAIN},
#endif
#ifdef SO_DONTLINGER
    {"SO_DONTLINGER", SO_DONTLINGER},
#endif
#ifdef SO_DONTROUTE
    {"SO_DONTROUTE", SO_DONTROUTE},
#endif
#ifdef SO_ERROR
    {"SO_ERROR", SO_ERROR},
#endif
#ifdef SO_EXCLBIND
    {"SO_EXCLBIND", SO_EXCLBIND},
#endif
#ifdef SO_FALLBACK
    {"SO_FALLBACK", SO_FALLBACK},
#endif
#ifdef SO_FILEP
    {"SO_FILEP", SO_FILEP},
#endif
#ifdef SO_KEEPALIVE
    {"SO_KEEPALIVE", SO_KEEPALIVE},
#endif
#ifdef SO_LABEL
    {"SO_LABEL", SO_LABEL},
#endif
#ifdef SO_LINGER
    {"SO_LINGER", SO_LINGER},
#endif
#ifdef SO_LISTENINCQLEN
    {"SO_LISTENINCQLEN", SO_LISTENINCQLEN},
#endif
#ifdef SO_LISTENQLEN
    {"SO_LISTENQLEN", SO_LISTENQLEN},
#endif
#ifdef SO_LISTENQLIMIT
    {"SO_LISTENQLIMIT", SO_LISTENQLIMIT},
#endif
#ifdef SO_MAC_EXEMPT
    {"SO_MAC_EXEMPT", SO_MAC_EXEMPT},
#endif
#ifdef SO_MAC_IMPLICIT
    {"SO_MAC_IMPLICIT", SO_MAC_IMPLICIT},
#endif
#ifdef SO_MARK
    {"SO_MARK", SO_MARK},
#endif
#ifdef SO_NETPROC
    {"SO_NETPROC", SO_NETPROC},
#endif
#ifdef SO_NO_CHECK
    {"SO_NO_CHECK", SO_NO_CHECK},
#endif
#ifdef SO_NO_DDP
    {"SO_NO_DDP", SO_NO_DDP},
#endif
#ifdef SO_NO_OFFLOAD
    {"SO_NO_OFFLOAD", SO_NO_OFFLOAD},
#endif
#ifdef SO_NOSIGPIPE
    {"SO_NOSIGPIPE", SO_NOSIGPIPE},
#endif
#ifdef SO_OOBINLINE
    {"SO_OOBINLINE", SO_OOBINLINE},
#endif
#ifdef SO_PASSCRED
    {"SO_PASSCRED", SO_PASSCRED},
#endif
#ifdef SO_PASSSEC
    {"SO_PASSSEC", SO_PASSSEC},
#endif
#ifdef SO_PEERCRED
    {"SO_PEERCRED", SO_PEERCRED},
#endif
#ifdef SO_PEERLABEL
    {"SO_PEERLABEL", SO_PEERLABEL},
#endif
#ifdef SO_PEERNAME
    {"SO_PEERNAME", SO_PEERNAME},
#endif
#ifdef SO_PEERSEC
    {"SO_PEERSEC", SO_PEERSEC},
#endif
#ifdef SO_PRIORITY
    {"SO_PRIORITY", SO_PRIORITY},
#endif
#ifdef SO_PROTOCOL
    {"SO_PROTOCOL", SO_PROTOCOL},
#endif
#ifdef SO_PROTOTYPE
    {"SO_PROTOTYPE", SO_PROTOTYPE},
#endif
#ifdef SO_RCVBUF
    {"SO_RCVBUF", SO_RCVBUF},
#endif
#ifdef SO_RCVBUFFORCE
    {"SO_RCVBUFFORCE", SO_RCVBUFFORCE},
#endif
#ifdef SO_RCVLOAWAT
    {"SO_RCVLOAWAT", SO_RCVLOAWAT},
#endif
#ifdef SO_RCVLOWAT
    {"SO_RCVLOWAT", SO_RCVLOWAT},
#endif
#ifdef SO_RCVPSH
    {"SO_RCVPSH", SO_RCVPSH},
#endif
#ifdef SO_RCVTIMEO
    {"SO_RCVTIMEO", SO_RCVTIMEO},
#endif
#ifdef SO_RECVUCRED
    {"SO_RECVUCRED", SO_RECVUCRED},
#endif
#ifdef SO_REUSEADDR
    {"SO_REUSEADDR", SO_REUSEADDR},
#endif
#ifdef SO_REUSEPORT
    {"SO_REUSEPORT", SO_REUSEPORT},
#endif
#ifdef SO_RTABLE
    {"SO_RTABLE", SO_RTABLE},
#endif
#ifdef SO_RXQ_OVFL
    {"SO_RXQ_OVFL", SO_RXQ_OVFL},
#endif
#ifdef SO_SECATTR
    {"SO_SECATTR", SO_SECATTR},
#endif
#ifdef SO_SECURITY_AUTHENTICATION
    {"SO_SECURITY_AUTHENTICATION", SO_SECURITY_AUTHENTICATION},
#endif
#ifdef SO_SECURITY_ENCRYPTION_NETWORK
    {"SO_SECURITY_ENCRYPTION_NETWORK", SO_SECURITY_ENCRYPTION_NETWORK},
#endif
#ifdef SO_SECURITY_ENCRYPTION_TRANSPORT
    {"SO_SECURITY_ENCRYPTION_TRANSPORT", SO_SECURITY_ENCRYPTION_TRANSPORT},
#endif
#ifdef SO_SETFIB
    {"SO_SETFIB", SO_SETFIB},
#endif
#ifdef SO_SNDBUF
    {"SO_SNDBUF", SO_SNDBUF},
#endif
#ifdef SO_SNDBUFFORCE
    {"SO_SNDBUFFORCE", SO_SNDBUFFORCE},
#endif
#ifdef SO_SND_BUFINFO
    {"SO_SND_BUFINFO", SO_SND_BUFINFO},
#endif
#ifdef SO_SND_COPYAVOID
    {"SO_SND_COPYAVOID", SO_SND_COPYAVOID},
#endif
#ifdef SO_SNDLOWAT
    {"SO_SNDLOWAT", SO_SNDLOWAT},
#endif
#ifdef SO_SNDTIMEO
    {"SO_SNDTIMEO", SO_SNDTIMEO},
#endif
#ifdef SO_SOCKSTR
    {"SO_SOCKSTR", SO_SOCKSTR},
#endif
#ifdef SO_SPLICE
    {"SO_SPLICE", SO_SPLICE},
#endif
#ifdef SO_SRCADDR
    {"SO_SRCADDR", SO_SRCADDR},
#endif
#ifdef SO_TIMESTAMP
    {"SO_TIMESTAMP", SO_TIMESTAMP},
#endif
#ifdef SO_TIMESTAMPING
    {"SO_TIMESTAMPING", SO_TIMESTAMPING},
#endif
#ifdef SO_TIMESTAMPNS
    {"SO_TIMESTAMPNS", SO_TIMESTAMPNS},
#endif
#ifdef SO_TYPE
    {"SO_TYPE", SO_TYPE},
#endif
#ifdef SO_UNIX_CLOSE
    {"SO_UNIX_CLOSE", SO_UNIX_CLOSE},
#endif
#ifdef SO_USELOOPBACK
    {"SO_USELOOPBACK", SO_USELOOPBACK},
#endif
#ifdef SO_USER_COOKIE
    {"SO_USER_COOKIE", SO_USER_COOKIE},
#endif
#ifdef SO_VENDOR
    {"SO_VENDOR", SO_VENDOR},
#endif
#ifdef SO_VRRP
    {"SO_VRRP", SO_VRRP},
#endif
    {NULL, -1}
};
