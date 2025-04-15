export memory memory(initial: 2, max: 0);

global stack_pointer:int = 65536;
global g_b:int = 0;
global g_c:int = 0;

table T_a:funcref(min: 5, max: 5);

data rodata(offset: 65536) =
  "expand 32-byte k-0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0"
  "\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0"
  "\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0"
  "\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0"
  "\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0"
  "\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1"
  "\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1"
  "\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1"
  "\f1\f1\f1\f1\f1\f1\f1\f1\02\02\02\02\02\02\02\02\02\02\02\02\02\02\02\02"
  "\02\02\02\02\02\02\02\02\02\02\02\02\02\02\13\03\03\03\03\03\03\03\03\03"
  "\03\03\03#\03\034\04\04\04D\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\f1\80\bf\a0\bf"
  "\80\9f\90\bf\80\8f";
data rodata_1(offset: 65842) =
  "KeyNumFieldChanDir\00\00meta\000123456789abcef\00\00z\00\00\00\fcR\01\00"
  "\84\01\01\00\0d\02\01\00reflectlite.ValueError\00\00Z\00\00\00\a8\01\01"
  "\00\0d\02\01\00\0c\00\00\00\02\00\00\00\b0P\01\00(\03\01\000Q\01\001\02"
  "\01\00\d5\00\00\00\84\01\01\00fmt\00reflect\00errors\00os\00\09\04fmtF"
  "lags\00io/fs\00\04\10Err\00\04\10LayoutElem\00\04\18ValueElem\00syscal"
  "l\00\04\08Path\00\04\08Value\00internal/reflectlite\00time\00\04 Messa"
  "ge\00\04\08Kind\00invalidboolintint8int16int32int64uintuint8uint16uint"
  "32uint64uintptrfloat32float64complex64complex128stringunsafe.Pointerch"
  "aninterfaceptrslicearrayfuncmapstructkind\00z\00\00\00\ecR\01\00\04\03"
  "\01\00\0d\02\01\00reflectlite.TypeError\00\00\00Z\00\00\00 \03\01\00\0d"
  "\02\01\00\08\00\00\00\01\00\00\00\b0P\01\00(\03\01\00\d5\00\00\00\04\03"
  "\01\00\04\00Method\00unimplemented: size of type\00\00\00\001\03\01\00"
  "\1b\00\00\00chan<- <-chan chan (chan *[][]struct {}; }interface {}stru"
  "ct {reflect: field index out of range\00\96\03\01\00!\00\00\00reflect:"
  " cannot make *****T type\c0\03\01\00 \00\00\00reflect: call of reflect"
  ".Type. on invalid typeBoolComplexElemFieldFloatreflect: slice index ou"
  "t of range/\04\01\00!\00\00\00reflect: string index out of range\00\00"
  "\00\00\00\00X\04\01\00\22\00\00\00IndexInt(reflect.Value).Interface: u"
  "nexported\00\00\00\90\04\01\00%\00\00\00IsNilLen< Value>UintUnsafePoin"
  "terMapRangereflect.MapIter.Value called on invalid iterator\00\00\00\00"
  "\00\00\00\e9\04\01\000\00\00\00 on zero Valuereflect: call of  on  Val"
  "ue\00\00\00z\00\00\00\bcR\01\00x\05\01\00\bc\01\01\00errors.errorStrin"
  "g\00\00Z\00\00\00\94\05\01\00\bc\01\01\00\08\00\00\00\01\00\00\00\b0P\01"
  "\00\9c\05\01\00\d5\00\00\00x\05\01\00\00\00s\00sync: unlock of unlocke"
  "d Mutex\00\00\a0\05\01\00\1e\00\00\00stack overflowfree: invalid point"
  "er\00\00\00\00\00\d6\05\01\00\15\00\00\00realloc: invalid pointer\f8\05"
  "\01\00\18\00\00\00out of memorycomparing un-comparable typetype assert"
  " failedpanic: panic: runtime error: nil pointer dereferenceindex out o"
  "f rangeslice out of rangeunsafe.Slice/String: len out of rangeunreacha"
  "ble\00\00\00\00\00\d0\06\01\00\0b\00\00\00Running Round Robbindeadlock"
  "ed: no event source\0d\00RawType\00\00\00\00\c3\00\00\00,\07\01\00\d5\00"
  "\00\00$\07\01\00\c4\00\00\00<\07\01\00\d5\00\00\004\07\01\00\c7\00\00\00"
  "L\07\01\00\d5\00\00\00D\07\01\00\c9\00\00\00\5c\07\01\00\d5\00\00\00T\07"
  "\01\00bad type in compare: file already existsfile does not existfile "
  "already closederrno \04\01\00\00\09\01\00\00\0e\04\00\00\10\04\00\00\12"
  "\04\00\00\14\01\00\00SundayTuesdayWednesdayThursdayFridaySaturdayFebru"
  "aryMarchAprilMayJuneJulyAugustSeptemberOctoberNovemberDecemberJanJanua"
  "ryMonMondayMST2006-070000-07:00:00-0700-07:00-07Z070000Z07:00:00Z0700Z"
  "07:00Z07: cannot parse  as parsing time \ef\bf\bdz\00\00\00dS\01\00\d8"
  "\08\01\00\22\02\01\00time.ParseError\00Z\00\00\00\14\09\01\00\22\02\01"
  "\00(\00\00\00\05\00\00\00\b0P\01\00\1c\09\01\00\b0P\01\00\05\02\01\00\b0"
  "P\01\00\dd\01\01\00\b0P\01\00\ea\01\01\00\b0P\01\00'\02\01\00\d5\00\00"
  "\00\d8\08\01\00\04\00Layout\00\00\00wall\00\00\08ext\00\00\10loc\00\00"
  "\08zone\00\00\00name\00\00\08offset\00\00\0cisDST\00\00\14tx\00\00\00w"
  "hen\00\00\08index\00\00\09isstd\00\00\0aisutc\00\00 extend\00\00(cache"
  "Start\00\000cacheEnd\00\008cacheZone\00time.Date(, time.time.UTCtime.L"
  "ocaltime.Location(2006-01-02 15:04:05.999999999 -0700 MST m=PMAMpmam%!"
  "Month()UTC,M3.2.0,M11.1.0Local\00\d0\07\01\00\06\00\00\00L\08\01\00\06"
  "\00\00\00\d6\07\01\00\07\00\00\00\dd\07\01\00\09\00\00\00\e6\07\01\00\08"
  "\00\00\00\ee\07\01\00\06\00\00\00\f4\07\01\00\08\00\00\00B\08\01\00\07"
  "\00\00\00\fc\07\01\00\08\00\00\00\04\08\01\00\05\00\00\00\09\08\01\00\05"
  "\00\00\00\0e\08\01\00\03\00\00\00\11\08\01\00\04\00\00\00\15\08\01\00\04"
  "\00\00\00\19\08\01\00\06\00\00\00\1f\08\01\00\09\00\00\00(\08\01\00\07"
  "\00\00\00/\08\01\00\08\00\00\007\08\01\00\08\00\00\00dalTLDpSugct?rwxr"
  "wxrwx : \04\00Op\00\00\00\da\00\00\00\f8\0a\01\007\02\01";
data rodata_2(offset: 68344) =
  "\d5\00\00\00\e4\0a\01\00/dev/stdout\00\cc\00\00\00\14\0b\01\00\d5\00\00"
  "\00\0c\0b\01\00z\00\00\00\14S\01\00<\0b\01\00\d1\01\01\00fs.PathError\00"
  "\00\00\00Z\00\00\00h\0b\01\00\d1\01\01\00\18\00\00\00\03\00\00\00\b0P\01"
  "\00\dd\0a\01\00\b0P\01\00\fe\01\01\00\18O\01\00\d7\01\01\00\d5\00\00\00"
  "<\0b\01\00\09\00file\00\00\00handle\00\00\08name\00\00\10dirinfo\00\00"
  "\00_\00\00\14appendMode\00/\00\ca\00\00\00\ac\0b\01\00\d5\00\00\00\a4\0b"
  "\01\00\c6\00\00\00\bc\0b\01\00\d5\00\00\00\b4\0b\01\00\da\00\00\00\f0\0b"
  "\01\00\22\02\01\00\18\00\00\00\03\00\00\00\f8\0b\01\00%\09\01\00\b4\0b"
  "\01\00,\09\01\00\5cS\01\002\09\01\00\d5\00\00\00\c4\0b\01\00\cb\00\00\00"
  "\00\0c\01\00\d5\00\00\00\f8\0b\01\00:\00\00\00\5cS\01\00(\0c\01\00\22\02"
  "\01\00time.Location\00\00\00\1a\00\00\00t\0c\01\00\22\02\01\00@\00\00\00"
  "\07\00\00\00\b0P\01\00?\09\01\00|\0c\01\008\09\01\00\e8\0c\01\00W\09\01"
  "\00\b0P\01\00{\09\01\00\b4\0b\01\00\84\09\01\00\b4\0b\01\00\91\09\01\00"
  "\ac\0c\01\00\9c\09\01\00\d5\00\00\00(\0c\01\00\16\00\00\00\88\0c\01\00"
  "\90\0c\01\00\d5\00\00\00|\0c\01\00z\00\00\00\ac\0c\01\00\b4\0c\01\00\22"
  "\02\01\00time.zone\00\00\00\d5\00\00\00\90\0c\01\00Z\00\00\00\e0\0c\01"
  "\00\22\02\01\00\10\00\00\00\03\00\00\00\b0P\01\00?\09\01\00\c0P\01\00F"
  "\09\01\000N\01\00O\09\01\00\d5\00\00\00\b4\0c\01\00\16\00\00\00\f4\0c\01"
  "\00\fc\0c\01\00\d5\00\00\00\e8\0c\01\00\fa\00\00\00\1c\0d\01\00$\0d\01"
  "\00\22\02\01\00time.zoneTrans\00\00\d5\00\00\00\fc\0c\01\00\da\00\00\00"
  "X\0d\01\00\22\02\01\00\10\00\00\00\04\00\00\00\b4\0b\01\00\5c\09\01\00"
  "lL\01\00c\09\01\000N\01\00k\09\01\000N\01\00s\09\01\00\d5\00\00\00$\0d"
  "\01\00write\00\00\00\a2\0b\01\00\01\00\00\00\1cR\01\00\00\00\00\005251"
  "2562531251562578125390625195312597656254882812524414062512207031256103"
  "5156253051757812515258789062576293945312538146972656251907348632812595"
  "3674316406254768371582031252384185791015625119209289550781255960464477"
  "5390625298023223876953125149011611938476562574505805969238281253725290"
  "2984619140625186264514923095703125931322574615478515625465661287307739"
  "2578125232830643653869628906251164153218269348144531255820766091346740"
  "7226562529103830456733703613281251455191522836685180664062572759576141"
  "8342590332031253637978807091712951660156251818989403545856475830078125"
  "9094947017729282379150390625454747350886464118957519531252273736754432"
  "3205947875976562511368683772161602973937988281255684341886080801486968"
  "9941406252842170943040400743484497070312514210854715202003717422485351"
  "5625710542735760100185871124267578125355271367880050092935562133789062"
  "5177635683940025046467781066894531258881784197001252323389053344726562"
  "5444089209850062616169452667236328125222044604925031308084726333618164"
  "0625111022302462515654042363166809082031255551115123125782702118158340"
  "4541015625277555756156289135105907917022705078125138777878078144567552"
  "9539585113525390625693889390390722837764769792556762695312534694469519"
  "5361418882384896278381347656251734723475976807094411924481391906738281"
  "25867361737988403547205962240695953369140625\00\00\00\00S\e4`\cdi\c82\17"
  "\88\02\1c\08\a0\d5\8f\fa\b4\8e\5c B\bd\7f\0e\95\81\11\05\84\e5\99\9ca\b2"
  "s\a8\92\ac\1fR\fa\e1U\06\e5^\c0\c3\f9\9e\90R\b7\97\a7\e6xZ\ebG\9ev\b0\f4"
  "\5cc\9a\93\d2\be(\90\8b\18\f3\ec\22J\ee\983\fc\808\87\ee2t\ae\de/\a8\ab"
  "\dc)\bf?;\a1\06)\aa?\11Z\d6;\92\d6S\f4\ee\07\c5$\a4Y\ca\c7J\f8ee\1bf\b4"
  "X\95I\f6-\0d\f0\bcy]v\bf>\a2\7f\e1\ae\ba\dcsy\10,,\d8\f4So\ce\8a\df\99"
  "Z\e9i\e8K\8a\9b\1b\07y\94\05\c1\b6+\a0\d8\91\84\e2\del\82\e2H\97\f9Fq\a4"
  "6\c8N\b6%\9b\16\08#\1b\1b\fd\b7\98\8dMDz\e2\e3\f7 \0e\e5\f5\f00\fer\7f"
  "x\b0j\8cm\8e5\a9Q^3-\bd\bdO\9f\96\5c\85\ef\08\b2\82\13\e65\80x,\ad#G\bc"
  "\b3f+\8b\de1\cc\af!P\cb;Lv\acU0 \fb\16\8b=\bf\1b*$\beJ\df\93\17k<\e8\b9"
  "\dc\ad\0d\af\a24\adm\1d\d7x\dd\85Kb\e8S\d9h\ad\e5@\8cdr\86k\aa3o=q\d4\87"
  "\c2\18\1fQ\af\fd\0eh\06\95\00\cb\8c\8d\c9\a9\f2\def%\1b\bd\12\02H\ba\c0"
  "\fd\ef\f0;\d4WK`\f70\b6K\01mt\98\fe\95v\a5\84-^85\bd\a3\9eA\88\91>~;\d4"
  "\ce\a5\b9u\86\82\acL\06R\ea5\ce]J\89B\cf\93\09\94\d1\eb\efCs\b2\e1\a0z"
  "\ce\95\89\81\f8\0b\f9\c5\e6\eb\14\10\1f\1aI\19B\fb\eb\a1\f6Nww\e0&\1a\d4"
  "\a6`\9b\9f\12\faf\ca\b4\22U\95\98\b0 \89\d08\82G\97\b8\00\fd\b05U]_n\b4"
  "U\82c\b1\8c^s \9e\1d\83\aa4\f7\89!\ebb\bc\dd/6\90\a8\c5\e4#\d5\01u\ec\e9"
  "\a5{+\d5\bbC\b4\12\f7n6%!\c93\b2G-;eU\aa\b0k\9a\0a\84ni\bb\c0\9e\99\f8"
  "\89\be\ea\d4\9c\06\c1\0d%\caC\eap\06\c0v,n%\0aDH\f1(W^j\92\06\048\ca\db"
  "dW\86*\cd\96\f2\ec\f5\047\08\05\c6\bc\12>\ed'u\80\bc.h3\c6DJ\86\f7k\97"
  "\8d\e8q\92\a0\eb\1d!\e0\fbj\ee\b3z\a3~X1\87[D\93d)\d8\ba\05\ea`YL\9e\ae"
  "\fdhr\15\b8\bd3\8e)\87$\b9o\dfE\1a=\03\cf\1a\e6V\e0\f8y\d4\b6\d3\a5\ab"
  "k0\06b\c1\d0\8fl\18w\98\89\a4H\8f\96\86\bc\87\ba\f1\c4\b3\87\de\94\fe\ab"
  "\cd\1a3<\a8\ab)).\b6\e0\14\0b\1d\7f\8b\c0\f0\9f%I\0b\ba\d9\dcq\8c\d9M\e4"
  "^\ae\f0\ec\07o\1b\8e(\10T\8e\afPa\9d\f6\d9,\e8\c9J\a2\b12\14\e9q\db\d2"
  "\5c\22:\08\1c1\ben\05\af\9f\ac1'\89\06\f4\aaH\0ac\bdm\ca\c6\9a\c7\17\fe"
  "p\ab\08\b1\d5\da\cc\bb,\09}x\81\b9\9d=M\d6\a5\8e\c5\08`\f5\bb%N\eb\f0\93"
  "\82F\f0\85N\f2\f6\0a\b8\f2*\af!&\ed8#Xl\a7\e1\ae\b4\0df\af\f5\1a\aao(\07"
  ",nG\d1M\ed\90\c8\9f\8d\d9P\caEy\84\db\a4\cc\82\a0(\b5\ba\07\f1\0f\e5<\97"
  "\97e\12\ce\7f\a3\c8rb\a9I\edS\1e\0c}\fd\fe\96\c1_\ccz\0f\bb\13\9c\e8\e8"
  "%O\dc\bc\be\fc\b1w\ff\ac\e9T\8ca\91\b1w\b1\096\f7=\cf\aa\9f\17$j\ef\b9"
  "\f5\9d\d5\1d\8c\03u\0d\83\95\c7\1d\adDk(s\05K%oD\d2\d0\e3z\f92\ec\0aC\f9"
  "g\e3Nw\c5j\83b\ce\ec\9b?\a7\cd\93\f7A\9c\22\d5vE$\fb\01\e8\c2\0f\11\c1"
  "xuRCk\8a\d4V\edy\02\a2\f3\a9\aaxk\89\13\0a\83\d6DV4\8cAE\98S\d5V\c6k\98"
  "\cc#\0c\d6kA\ef\91V\be\a8\8a\ec\b7\86\be\bf,\8f\cb\c6\11k6\ec\ed\a9\d6"
  "\f32\14\d7\f7{9?\1c\eb\02\a2\b3\94S\cc\b0?\d9\cc\f5\da\07O\e3\a5\83\8a"
  "\e0\b9h\ff\9c\8f\0f@\b3\d1\c9\22\5c\8f$\adX\e8\a1\1f\c2\b9\09\08\10#\be"
  "\95\99\d96l7\91\8a\a72(\0c\0a\d4\ab-\fb\ff\8fDG\85\b5lQ?2\8f\0c\c9\16\f9"
  "\f9\ff\b3\15\99\e6\e2\e3\92g\7f\d9\a7=\ae;\fc\7f\90\ad\1f\d0\8d\9cwA\df"
  "\cf\11\cd\99J\fb\9f\f4\98'D\b1\83\d5\11\d7CV@@\1d\fa\c71\7f1\95\ddr%kf"
  "\ea5(HR\fc\1c\7f\ef>}\8a\cf\ee\05\00eC2\daf;\e4^\ab\8e\1c\ad\82j\07@>\d4"
  "\be\90@J\9d6V\b2c\d8\91\a2\04\e8\a6DwZhN\22\e2uO>\876\cb\05\a2\d0\15\15"
  "q\02\e2\aaZS\e3\0d\a9\03>\87\caD[Z\0d\83\9aU1(\5cQ\d3\c2\86\94\fe\0ayX"
  "\e8\91\80\d5\1e\99\d9\12\84r\a89\beM\97nb\b6\e0\8af\ff\8f\17\a5\8f\12\c8"
  "-!=\0a\fb\e3\98-@\ffs]\ce\99\0b\9d\bc4f\e6|\8e\7f\1c\88\7fh\fa\80\80N\c4"
  "\eb\c1\ff\1f\1cr\9f#j\9f\029\a1 b\b5f\b2\ff'\a3N\87\acDGC\87\c9\a8\bab"
  "\00\9f\ff\f1K\22\a9\d7\15\19\14\e9\fb\a9\b4=`\c3?wo\b5\c9\a6\ad\8f\acq"
  "\9d\d3!M8\b4\0fU\cb\22|\10\99\b3\17\ce\c4Hj`F\a1S*~+\9bT\7f\a0\9d\01\f6"
  "mB\fc\cbDt\da.\fb\e0\94O\84\02\c1\99\08S\fb\feU\11\91\fa9\19zc%C1\c0\ca"
  "'\ba~\abU5y\88\9fX\bc\ee\93=\f0\deX4/\8bU\c1K\b5c\b75u|&\96\16o\01\fb\ed"
  "\aa\b1\9e\a2<%\83\92\1b\b0\bb\dc\ca\c1y\a9\15^F\cb\8b\ee#w\22\9c\ea\c9"
  "\1e\19\ec\89\cd\fa\0b_\17uv\8a\95\a1\92{f\1fg\ec\80\f9\ce6]\12\14\ed\fa"
  "I\b7\1a@\e7\80'\e1\b7\82\84\f4\16Y\a8y\1c\e5\10\88\90\b0\b8\ec\b2\d1\d2"
  "X\ae7\09\cc1\8f\15\aa\b4\dc\e6\a7\1f\86\07\ef\99\85\0b?\fe\b2\9a\d4\e1"
  "\93\e0\91\a7g\c9j\00g\ce\ce\bd\df\e0$m\5c,\bb\c8\e0\bdB`\00A\a1\d6\8b\18"
  "n\88s\f7\e9\faXmSx@\91I\cc\ae\9e\89jPu\a49\afHh\96\90\f5[\7f\da\03\96B"
  "R\c9\06\84m-\01^zy\99\8f\88\83;\d3\a6{\08\e5\c8x\81\f5\d8\d7\7f\b3\aad"
  "\0a\88\90\9aJ\1e\fb\d6\e12\cf\cd_`\d5\7f\06U\9a\a0\ee\f2\5c&\cd\7f\a1\e0"
  ";\5c\85\1eH\ea\c0H\aa/\f4o\c0\df\c9\d8J\b3\a6&\da$\f1\da\94;\f1\8b\b0W"
  "\fc\8e\1d`\d0X\08\b7\d6\08=\c5vW\ce\b6]y\12<\82n\cad\0cK\8cvT\ed\81$\b5"
  "\17\17\cb\a2\09\fd}\cf]/\94\a9h\a2m\a2\dd\dc}\cbL|]C5;\f9\d3\02\0b\09\0b"
  "\15T]\fe\afm\1aJ\01\c5{\c4\e1\a6\e5&\8dT\fa\9e\1b\09\a1\9cA\b6\9a5\9a\10"
  "\9fp\b0\e9\b8\c6bK\c9\03\d2c\01\c3\c0\d4\c6\8c\1c$g\f8\1d\cf]Bc\de\e0y"
  "\f8D\fc\d7\91v@\9b\e4B\f5\12\fc\15Y\986V\fbM6\94\10\c2\9d\93\b2\17{[o>"
  "\c4+z\e1C\b9\94\f2B\9c\cf\ee,\99\05\a7Z[\ecl\ca\f3\9c\97S\83\83*x\ff\c6"
  "P1r'\08\bd0\84\bd(d$5V\bf\f8\a4\bdN1J\ec<\e5\ec\99\be6\e1\95w\1b\876\d1"
  "^\ae\13F\0f\94?n\84Y{U\e2(\84\85\f6\99\98\17\13\b9\cf\89\e5/\da\ea\1a3"
  "\e5&t\c0~\ddW\e7!v\ef]\c8\d2\f0?O\98H8o\ea\96\90\a9Skuz\07\ed\0fc\beZ\06"
  "\0b\a5\bc\b4\94(\c6\12YI\e8\d3\fbm\f1\c7M\ce\eb\e1\5c\d9\bb\ab\d7-qd\bd"
  "\e4\f6\9c\f0`3\8d\b3\cf\aa\96My\8d\bd\ec\9d4\c4,9\80\b0\a0\83U\fc\a0\d7"
  "\f0\ecg\c5A\f5wG\a0\dcDr\b5\9d\c4\86\16\f4`\1bI\f9\aa,\e4\89\d5\ce\22\c5"
  "u(\1c19b\9b\b7\d57]\ac\8b\82k6\932c}\c7:\82%\cb\85t\d7\971\03\02\9c\ff"
  "]\ae\bcdq\f7\9e\d3\a8\86\fc\fd\83\02\83\7f\f5\d9\eb\bdM\b5\86\08S\a8{\fd"
  "$\c3c\dfr\d0f-\a1b\a8\cag\d2m\1e\f7Y\9e\cbGB`\bc\a4=\a9\de\80\83\08\e6"
  "t\f0\85\be\d9Rx\eb\0d\8dS\16a\a4\8b\1f\92l'.\90gVfQp\e8[y\cd\b6S\db\a3"
  "\d8\1c\ba\00\f6\df2Fq\d9k\80\a4(\d2\cc\0e\a4\e8\80\f3\97\bf\97\cd\cf\86"
  "\a0\cd\b2\06\80\12\cd\22a\f0}\af\fd\c0\83\a8\c8\81_\08 W\80kyl]\1b=\b1"
  "\a4\d2\fa\b0;\05t60\e3\cbc\1a1\c6\ee\a6\c3\9c\9c\8a\06\11D\fc\db\be\fc"
  "`\bdw\aa\90\f4\c3D-H\15U\fb\92\ee;\b9\ac\15\d5\b4\f1\f4J\1cM-\15\dd\1b"
  "u\c5\f3\8b-\05\11\17\99]c\a0xZ\d4b\d2\b6\f0\eexF\d5\5c\bf4|\c8\16q\89\fb"
  "\86\e4\ac*\17\98\0a4\ef\a0M=\ae\e65]\d4\0e\acz\0e\9f\86\80\95\09\a1\cc"
  "Y`\83t\89\12W\19\d2F\a8\e0\baK\c9?p8\a4\d1+\d7\ac\9f\86X\d2\98\e9\cf\dd"
  "'F\a3\06c{\06\cc#Tw\83\ff\91B\d5\b1\17L\c8;\1a\08\bf,)Ud\7f\b6\93J\9e\1d"
  "_\ba\ca \ca\eewsj=\1f\e4\9c\ee\82r{\b4~T>\f5*\88b\86\93\8eC\aa#O\9aa\9e"
  "\e9\8d\b25*\fbg8\b2\d4\94\ec\e2\00\fa\05d1\1f\c3\f4\f9\81\c6\de\04\dd\d3"
  "\8d@\bc\83\de~\f3\f98<\11<\8bE\d4H\b1P\ab$\96^p8G\8b\15\0b\aeW\09\9b\dd"
  "$\d6\ad;v\8c\06\19\ee\da\8d\d9\d6\e5\80\0a\d7\a5L\e5\c9\17\a4\cf\d4\a8"
  "\f8\87L\1f!\cdL\cf\9f^\bc\1d\8d\03\0a\d3\f6\a9\1fgi\00 \c3Gv+ep\84\cc\87"
  "t\d4s\e0A\00\f4\d9\ec);?\c6\d2\df\d4\c8\84\90XR\00q\10h\f4\09\cfw\c7\17"
  "\0a\fb\a5\b4\eef@\8d\14\82q\cc\c2U\b9\9d\ccy\cf0U@H\d8L\f1\c6\bf\99\d5"
  "\93\e2\1f\ac\81|jPZ\0e\a0\ad\b8/\00\cb8\db'\17\a2\1c\85\e4\f0\11\08\d9"
  "\a6;\c0\fd\06\d2\f1\9c\cac\a6\1dm\16J\8f\90J0\bd\88F.D\fd\fe\872\04N\8e"
  "Y\9a.>v\15\ec\9cJ\9e\fd)?\85\e1\f1\ef@\ba\cd\d3\1a'D\dd\c5|\f4\8e\e6Y\ee"
  "+\d1(\c1\88\e10\95T\f7\ceX\190\f8t\bb\82\b9x\f5\8c>\dd\94\9a\01\af\1f<"
  "6Rj\e3\e7\d620\8e\14:\c1\c1\9a'\cb\c3\e6D\dc\a1\8c?\bc\b1\99\88\f1\b9\c0"
  "\f8^:\10\ab)\e5\b7\a7\15\0f`\f5\96\e7\f0\b6\f6H\d4\15t\de\a5\11\db\12\b8"
  "\b2\bc!\add4[I\1b\11V\0f\d6\91\17f\df\eb4\ec\be\00\d9\0d\b1\ca\95\c9%\bb"
  "\ce\9fk\93B\a7\ee@OQ]=\fb;\efi\c2\87F\b8\12Q*\11\a3\a5\b4\0c\fa\0ak\04"
  "\b3)X\e6\abr\ba\ea\85\e7\f0G\dc\e6\c2\e2\0f\1a\f7\8fV\0fieg!\edY\93\a0"
  "s\db\93\e0\f4\b3,S\c3>\c1ih0\b8\88P\d2\b8\18\f2\e0\fb\13:\c7\18BA\1esU"
  "r\83sO\97\8c\fa\98\08\f9\9e\92\d1\e5\cf\eaNdP#\bd\af9\bfJ\b7F\f7E\df\83"
  "\a5b}$l\ac\db\83\b7\8e2\8c\ba\8bkr\a7]\ce\96\c3K\89de2?/\a9n\06O\11\f5"
  "\81|\b4\9e\ab\bd\fe\fe\0e{S\0a\c8\a2Ur\a2\9ba\86\d66__\e9,t\06\bd\85u\87"
  "E\01\fd\13\86\047\b7#8\11H,\e7R\e9\96A\fc\98\a7\c5\04\a5,\86\15Z\f7\a0"
  "\a7\a3\fcQ;\7f\d1\fb\22\e7\dbsM\98\9a\c4H\e6=\13\85\ef\82\ba\eb\e0\d2\d0"
  "`>\c1\f5\da_\0dXf\ab\a3\a8&\99\07\05\f9\8d1\b3\d1\b7\10\ee?\96\ccRp\7f"
  "IFw\f1\fd\1f\c6\e5\94\e9\cf\bb\ff3\a6\ef\ed\8b\ea\b6\fe\d3\9b\0f\fd\f1"
  "a\d5\9f\c0\8fk\e9.\a5d\fe\c8\82S|n\ba\ca\c7\b0s\c6\a3z\ce\fd={ch\1b\0a"
  "i\bd\f9N\08\5c\a6\0c\a1\be\06->!Q\a6a\16\9cb\0a\f3\cfOInH\b8\8di\e5\0f"
  "\fa\1b\c3\fa\cc\ef\c3\a3\db\89Z&\f1\c3\de\93\f8\e2\f3\1c\e0uZF)\96\f8\b7"
  "v:k\5c\dbm\98#X\13\f1\97\b3\bb\f6e\14\09\863R\89\be,.X\ed}\a0jt\7fY\8b"
  "g\c0\a6+\ee\dc\1cW\b4N\a4\c2\a8\ef\17\b7@8H\db\94\13\e4labM\f3\92\eb\dd"
  "\e4PF\1a\12\ba\17\1d\c8\f9\ba \b0wf\15\1e\e5\d7\a0\96\e8.\12\1d\dct\14"
  "\ce\0a`\cd2\ef\86$^\91\baV$\13\92\99\81\0d\b8\80\ff\aa\a8\ad\b5\b5il\ed"
  "\97\f6\ff\e1\10\e6`\bf\d5\12\19#\e3\c1c\f4\1e\fa?\8d\ca\8f\9c\97\c5\ab"
  "\ef\f5\8d\b2|\b1\a6\f8\8f0\bd\b3\83\fd\b6\96ks\b1\de\db]\d0\f6\b3|\ac\a0"
  "\e4\bcd|F\d0\ddk\a9:Bz\f0\cdk\e4\0e\f6\be\0d,\a2\8a\c6S\c9\d2\98l\c1\86"
  "\9d\92\b3.\11\b7J\ad\b7\a8{\07\bf\c7q\e8Dw`z\d5d\9d\d8rI\add\d7\1cG\11"
  "\8bJ|l\05_b\87\cf\9b\d8=\0d\e4\98\d5-]\9b\c7\c6\f6:\a9\c3\c2N\8d\10\1d"
  "\ffJy4\82yx\b4\89\d3\ba9QX*r\df\ce\cb`\f1K\cb\106\84(\88e\ee\b4N\97\c2"
  "\fe\b8\ed\1e\fe\94C\a52\ea\fe)b\22=s>'\a9\a6=z\94\ce_R?Z}5\06\08\87\b8"
  ")\88f\cc\1c\81\f7&\cf\b0\dc\c2\07\ca\a8&4*\80\ffc\a1\b5\f0\02\dd\93\b3"
  "\89\fcR0\c14`\ff\bc\c9\e2\acC\d4x \ac\bbg|\f1A8?,\fc\0dL\aa\84K\94K\d5"
  "\c0\ed6)\83\a7\9b\9d\11\df\d4e^y\9e\0a1\a9\84\f3c\91\02\c5\d5\16J\ff\b5"
  "\17FM}\d3e\f0\bc5C\f6EN\8e\bf\d1\ceKP.\a4?\16\96\01\ea\99\d6\e1q/\86\c2"
  "^\e49\8d\cf\9b\fb\81d\c0LZN\bb'sv]\88p\c3\82z\a2}\f0o\f8\10\d5\f8\07j:"
  "U&\ba\91\8c\85N\96\8b6U\0a\f7\89\04\89\ea\af(\b6\ef&\e2\bb.\84\ea\cct\ac"
  "E+\e5\db\b2\a3\ab\b0\da\ea\9d\92\12\00\c9\8b\0b;o\c9OFk\ae\c8\92D7\17@"
  "\bbn\ce\09\cb\bb\e3\17\06\daz\b7\15\05\1d\10j\0aB\cc\bd\aa\dc\9d\87\90"
  "Y\e5-#\12J\82F\a9\9f\b6\ea\a9\c2T\faW\8f\f9\ab\96\dc\22\98\93GdeT\f3\e9"
  "\f8-\b3\f7V\bc\93+~xY\bd~)p$w\f9\dfZ\b6U<\dbN\ebW6\ef\19\c6v\ea\fb\8b\f1"
  "#k\0b\92\22\e6\ed\03k\a0w\14\e5\fa\ae\ed\ecE\8e6\ab_\e9\c4\85\88\95Y\9e"
  "\b9\da\14\b4\eb\18\02\cb\db\11\9bSu\fd\f7\02\b4\88\19\a1&\9f\c2\bdR\d6"
  "\81\a8\d2\fc\b5\03\e1\aa_I\f0F3m\e7K\a2R\07|\a3D\99\d5\db-V\0c@\a4po\a5"
  "\93\84-\e6\ca\7f\85R\b9k\0fP\cdL\cb\8e\b8\e5\b8\9f\bd\df\a6\a7\a7F\13\a4"
  "\00 ~\b2&\1f\a7\07\ad\97\d0\c8(\0c\8cf\00\d4\8e/xs\c8$\cc^\82\fa2\0f/\80"
  "\00\89r;V\90\fa-\7f\f6\a2\b9\ff\d2:\a0@+O\cak4y\f9\1e\b4\cb\a8\bf\87I\c8"
  "\10\f6\e2\bc\86\81\d7\b7&\a1\fe\c9\d7\f4-}\ca\d9\0d6\f4\b0\e62\b8$\9f\bb"
  "\0dry\1c=P\91C1]\a0?\e6\ed\c6*\91\ce\97cL\a4u\94}t\88\cf_\a9\f8\ba\1a\e1"
  ">\be\af\86\c9|\ceH\b5\e1\dbi\9bha\99\ce\ad[\e8\fb\1b\02\9b\22\daRD\c2\c3"
  "\b9?B\99r\e2\fa\a2\c2A\ab\90g\d5\f2\1a\d4g\c9\9f\87\cd\dc\a5\19\09k\ba"
  "`\c5\97 \c9\c1\bb\87\e9\00T\0f`\cb\05\e9\b8\b6\bdh;\b2\aa\e9#\01)\138>"
  "G#g$\ed!e\af\0ar\b6\a0\f9\0b\e3\86\0cv\c06\94i>[\8d\0e\e4\08\f8\ce\9b\a8"
  "\8f\93pD\b9\04\0e\b20\12\1d\0b\b6\c2\c2\92s\b8\8c\95\e7\c2Ho^+\f2\c6\b1"
  "\b9\b9;H\f3w\bd\90\f3\1a\0b6\b6\ae8\1e(\a8J\1a\f0\d5\ec\b4\b0\e1\8d\c3"
  "c\da\c6%2R\dd l\0b(\e2\0e\ad8Z~H\9cW_S\8a\94#\07Y\8dQ\d8\c6\f0\9dZ\83-"
  "7\e8\acy\ecH\af\b0e\8e\f8lE1\e4\f8D\22\18\98'\1b\db\dc\ffX\1bd\cb\9e\8e"
  "\1bk\15\0f\bf\f8\f0\08\8a?/\22=~Fr\e2\c5\da\d2\ee6-\8b\ac\0f\bbj\cc\1d"
  "\d8\0e[w\91\87\aa\84\f8\ad\d7\e9\b4\c2\9f\12G\e9\98\ea\ba\94\eaR\bb\cc"
  "\86$b\b3G\d7\98#?\a5\e99\a5'\ea\7f\a8\ad:\a0\19\0d\7f\ec\8e\0ed\88\8e\b1"
  "\e4\9f\d2\ac$\040h\cfS\19\89>\15\f9\ee\ee\a3\83\d7-\05<B\c3\a8_+\8eZ\b7"
  "\aa\ea\8c\a4My\06\cb\12\f4\927\b611eU%\b0\cd\d0\0b\e4\be\8b\d8\bb\e2\11"
  "\bf>_U\17\8e\80\c4\0e\9d\ae\ae\cej[\d6n\0e\b7*\9d\b1\a0uRDZZ\82E\f2\8b"
  "\0a\d2du\04\de\c8\12g\d5\f0\f0\e2\d6\ee.\8d\06\be\92\85\15\fbk`\85\96\d6"
  "MFU=\18\c4\b6{s\ed\9c\86\b8&<L\e1\97\aaL\1eu\a4Z\d0(\c4\a8f0K\9f\d9=\d5"
  "\dfe\92Mq\043\f5)@\fe\8e\03\a8F\e5\ab\7f{\d0\c6\e2?\993\d0\bdr\04R\98\de"
  "\96_\9a\84x\db\8f\bf@Dm\8f\85f>\96|\f7\c0\a5V\d2s\ef\a8J\a4y\13\00\e7\dd"
  "\ad\9a\98'vc\a8\95R]\0dX\18\c0`UY\c1~\b1S|\12\bb\a6\b4\10n\1e\f0\b8\aa"
  "\afq\de\9dh\1b\d7\e9\e8p\ca\04\13\96\b3\ca\0d\07\abb!q&\92\22\0d\fd\c5"
  "\97{`=\d1\c8U\bbi\0d\b0\b6jP|\b7}\9a\b8\8c\05;+*\c4\10\5c\e4B\b2\ad\92"
  "\8e`\f3w\e3\04[\9az\8a\b9\8e\d3\1eY7\b28\f0U\1c\c6\f1@\19\edg\b2\88f/\c5"
  "\deFlk\a37.\91_\e8\01\df\15\a0=;K\ac##\c6\e2\bc\ba;1a\8b\1a\08\0d\0a^\97"
  "\ec\abw\1bl\a9\8a}9\ae!J\90\8c5\bd\e7\96U\22\c7S\ed\dc\c7\d9T.\dawA\d6"
  "P~uu\5cT\14\ea\1c\88\e9\b9\d0\d5\d1\0b\e5\dd\d2\92si\99$$\aad\e8DK\c6N"
  "^\95\87w\d0\c3\bf-\ad\d4>\11\0b\ef;\f1Z\bd\b4Jb\da\97<\ec\84\8e\d5\cd\ea"
  "\8a\ad\b1\eca\dd\fa\d0\bdK'\a6\f2J\81\a5\ed\18\deg\ba\949E\ad\1e\b1\cf"
  "\d7\cep\87\94\cf\ea\80\f4\fcCK,\b3\ce\81\8d\02M\a9y\83%\a11\fc\14^\f7_"
  "B\a20C\a0\13X\e4n\09>;\9a5\f5\f7\d2\ca\fcS\88\18n\9d\ca\8b\0d\ca\00\83"
  "\f2\b5\87\fd}4U\cfd\a2^wH~\e0\91\b7\d1t\9e\9d\81*\03\feJ6\95\da\9dXv%\06"
  "\12\c6\04\22\f5\83\bd\dd\83:Q\c5\ee\d3\ae\87\96\f7B5yr\96j\92\c4R;uD\cd"
  "\14\be\9a\93\82\17\0f<\05\b7u'\8a\92\95\00\9am\c18c\dd\12\8b\c6$S\b1,\f7"
  "\ba\80\00\c9\f1\03^\ca\eb\16\fc\f6\d3\ee{\datP\a0\1d\97\84\f5\bc\a6\1c"
  "\bb\f4\88\ea\1a\11\92d\08\e5\bc\e52l\d0\e3\e91+\a5a\95\b6}J\1e\ec\cf\9f"
  "Cb.2\ff:\07]\1d\92\8e\ee\92\93\c2\87\d4\fa\b9\fe\be\09I\b4\a462\aaw\b8"
  "\b3\a9\89yh\be.L[\e1M\c4\be\94\95\e6\10\0a\f6K\017\9d\0f\d9\ac\b0:\f7|"
  "\1d\90\94\8c\f3\9e\c1\84\84S\0f\d8\5c\095\dc$\b4\b9o\b0\06\f2\a5e(\13\0e"
  "\b4KB\13.\e1\d3E.D\b7\87?\f9\cb\88Po\09\cc\bc\8cH\d79\15\a5i\8f\f7\fe\aa"
  "$\cb\0b\ff\eb\af\1bM\88Z\0eDs\b5\be\d5\ed\bd\ce\fe\e6\db00\95\f8\88\0a"
  "h1\97\a5\b46A_p\89=|\ba6+\0d\c2\fd\fc\cea\84\11w\cc\abL\1bi\04v\902=\bc"
  "Bz\e5\d5\94\bf\d6\0f\b1\c1\c2I\9a?\a6\b5il\af\05\bd7\86S\1dr3\dc\80\cf"
  "\0f#\84G\1bG\ac\c5\a7\a8\a4N@\13a\c3\d3+e\19\e2X\17\b7\d1\e9&1\08\ac\1c"
  "Zd;\dfO\8d\97n\12\83\a3p=\0a\d7\a3p=\0a\d7\a3p=\0a\d7\a3\cc\cc\cc\cc\cc"
  "\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc";
data rodata_3(offset: 75879) = "\80";
data rodata_4(offset: 75895) = "\a0";
data rodata_5(offset: 75911) = "\c8";
data rodata_6(offset: 75927) = "\fa";
data rodata_7(offset: 75942) = "@\9c";
data rodata_8(offset: 75958) = "P\c3";
data rodata_9(offset: 75974) = "$\f4";
data rodata_10(offset: 75989) = "\80\96\98";
data rodata_11(offset: 76005) = " \bc\be";
data rodata_12(offset: 76021) = "(k\ee";
data rodata_13(offset: 76037) = "\f9\02\95";
data rodata_14(offset: 76052) = "@\b7C\ba";
data rodata_15(offset: 76068) = "\10\a5\d4\e8";
data rodata_16(offset: 76084) = "*\e7\84\91";
data rodata_17(offset: 76099) = "\80\f4 \e6\b5";
data rodata_18(offset: 76115) = "\a01\a9_\e3";
data rodata_19(offset: 76131) = "\04\bf\c9\1b\8e";
data rodata_20(offset: 76147) = "\c5.\bc\a2\b1";
data rodata_21(offset: 76162) = "@v:k\0b\de";
data rodata_22(offset: 76178) = "\e8\89\04#\c7\8a";
data rodata_23(offset: 76194) = "b\ac\c5\ebx\ad";
data rodata_24(offset: 76209) = "\80z\17\b7&\d7\d8";
data rodata_25(offset: 76225) = "\90\acn2x\86\87";
data rodata_26(offset: 76241) = "\b4W\0a?\16h\a9";
data rodata_27(offset: 76257) =
  "\a1\ed\cc\ce\1b\c2\d3\00\00\00\00\00\00\00\00\a0\84\14@aQY\84\00\00\00"
  "\00\00\00\00\00\c8\a5\19\90\b9\a5o\a5\00\00\00\00\00\00\00\00:\0f \f4'"
  "\8f\cb\ce\00\00\00\00\00\00\00@\84\09\94\f8x9?\81\00\00\00\00\00\00\00"
  "P\e5\0b\b96\d7\07\8f\a1\00\00\00\00\00\00\00\a4\deNg\04\cd\c9\f2\c9\00"
  "\00\00\00\00\00\00M\96\22\81E@|o\fc\00\00\00\00\00\00 \f0\9d\b5p+\a8\ad"
  "\c5\9d\00\00\00\00\00\00(l\05\e3L6\12\197\c5\00\00\00\00\00\002\c7\c6\1b"
  "\e0\c3V\df\84\f6\00\00\00\00\00@\7f<\5c\11l:\96\0b\13\9a\00\00\00\00\00"
  "\10\9fK\b3\15\07\c9{\ce\97\c0\00\00\00\00\00\d4\86\1e \dbH\bb\1a\c2\bd"
  "\f0\00\00\00\00\80D\14\13\f4\88\0d\b5P\99v\96\00\00\00\00\a0U\d9\171\eb"
  "P\e2\a4?\14\bc\00\00\00\00\08\ab\cf]\fd%\e5\1a\8eO\19\eb\00\00\00\00\e5"
  "\ca\a1Z\be7\cf\d0\b8\d1\ef\92\00\00\00@\9e=J\f1\ad\05\03\05'\c6\ab\b7\00"
  "\00\00\d0\05\cd\9cm\19\c7C\c6\b0\b7\96\e5\00\00\00\a2#\00\82\e4o\5c\ea"
  "{\ce2~\8f\00\00\80\8a,\80\a2\dd\8b\f3\e4\1a\82\bf]\b3\00\00 \ad7 \0b\d5"
  "n0\9e\a1b/5\e0\00\004\cc\22\f4&EE\de\02\a5\9d=!\8c\00\00A\7f+\b1p\96\d6"
  "\95C\0e\05\8d)\af\00@\11_v\dd\0c<L{\d4QF\f0\f3\da\00\c8j\fbi\0a\88\a5\0f"
  "\cd$\f3+v\d8\88\00zEz\04\0d\ea\8eS\00\ee\ef\b6\93\0e\ab\80\d8\d6\98E\90"
  "\a4rh\80\e9\ab\a48\d2\d5PG\86\7f+\da\a6GA\f0q\ebfc\a3\85$\d9g_\b6\90\90"
  "\99QlN\a6@<\0c\a7m\cfA\f7\e3\b4\f4\ffe\07\e2\cfPK\cf\d0\a4!\89z\0e\f1\f8"
  "\bf\9fD\ed\81\12\8f\81\82\0dj+\19R-\f7\af\c7\95h\22\d7\f2!\a3\90Dv\9f\a6"
  "\f8\f4\9b9\bb\02\eb\8co\ea\cb\b4\d5SG\d06\f2\02\08j\c3%p\0b\e5\fe\90e\94"
  ",Bb\d7\01E\22\9a\17&'O\9f\f5~\b9\b7\d2:MB\d6\aa\80\9d\ef\f0\22\c7\b2\de"
  "\a7e\87\89\e0\d2\8b\d5\e0\84+\ad\eb\f8/\eb\88\9f\f4U\cccw\85\0c3;L\93\9b"
  "\fb%k\c7qk\bf<\d5\a6\cf\ffI\1fx\c2z\efE9NF\ef\8b\8a\90\c3\7f\1c'\16\f3"
  "\ac\b5\cb\e3\f0\8bu\97V:\da\cfq\d8\ed\97\17\a3\be\1c\ed\eeR=\ec\c8\d0C"
  "\8eN\e9\bd\ddK\eec\a8\aa\a7L'\fb\c4\d41\a2c\edj\eft>\a9\ca\e8\8f\f8\1c"
  "\fb$_E^\94D+\12\8eS\fd\e2\b36\e49\ee\b6\d6u\b9\16\b6\96q\a8\bc\db`D]\c8"
  "\a9dL\d3\e7\cd1\feF\e9U\89\bcJ:\1d\ea\be\0f\e4\90A\be\bd\98c\ab\abk\dd"
  "\88\a4\a4\ae\13\1d\b5\d1-\ed~<\96\96\c6\14\ab\cdM\9aXd\e2\a2<T\cf\e5\1d"
  "\1e\fc\ec\8a\a0p`\b7~\8d\cbK)C_\a5%;\a8\ad\c8\8c8e\de\b0\be\9e\f3\13\b7"
  "\0e\efI\12\d9\fa\af\86\fe\15\dd7Cxl2i5n\ab\c7\fc-\14\bf-\8a\04T\96\07\7f"
  "\c3\c2I\96\f9{9\d9.\b9\ac\06\e9{\c9^t3\dc\fb\f7\da\87\8fz\e7\d7\a3q\ed"
  "=\bb(\a0i\fd\da\e8\b4\99\ac\f0\86\0c\ceh\0d\ea2\08\c4\bc\11#\22\c0\d7\ac"
  "\a8\90\01\c3\90\a4?\0a\f5+\d6\ab*\b0\0d\d8\d2\fa\e0y\da\c6g&y\dbe\ab\1a"
  "\8e\08\c7\838Y\18\91\b8\01pWR?V\a1\b1\ca\b8\a4\86o^\b5&\02L\ed&\cf\ab\09"
  "^\fd\e6\cd\b4\05[1X\81OTxa\0b\c6Z^\b0\80!\c7\b1=\aeaci\d69\8ew\f1u\dc\a0"
  "\e98\1e\cd\19:\bc\03L\c8q\d5m\93\13\c9#\c7e@\a0H\ab\04_:\ceJIxX\fbv\9c"
  "?(d\0d\ebb{\e4\c0\ce-K\17\9d\94\83O2\bd\d0\a5;\9a\1dqB\f9\1d]\c4yd\e3~"
  "\ecD\8f\ca\00e\0d\93wet\f5\cb\1eN\cf\13\8b\99~ _\e8\bbj\bfh\99~\a6!\c3"
  "\d8\ed?\9e\e8v\e2jE\ef\c2\bf\1e\10\ea\f3N\e9\cf\c5\a2\14\9b\c5\16\ab\b3"
  "\ef\12JrX\d1\f1\a1\bb\e5\ec\80;\eeJ\d0\95\97\dc\8e\aeEn\8a*\1f(a\ca\a9"
  "]D\bb\bd\932\1a\d7\09-\f5&r\f9<\14u\15\eaV\9c_p&&<YX\e7\1b\a6,iM\92l\83"
  "w\0c\b0/\8bo.\e1\a2\cfw\c3\e0\b6Gd\95\0f\9c\fbm\0bz\99\8b\c3U\f4\98\e4"
  "\ac^\bd\89A\bd$G\ec?7\9a\b5\98\df\8eW\b6,\ec\91\ec\edX\e7\0f\c5\00\e3~"
  "\97\b2\ed\e37g\b6g)/\e1S\f6\c0\9b^=\dft\ee\82\00\d2\e0y\bdl\f4\99X![\86"
  "\8b\11\aa\a3\80\06Y\d8\ec\87q\c0\ae\e9\f1g\ae\95\94\cc Ho\0e\e8\e9\8dp"
  "\1ad\ee\01\da\dd\dc\7f\14\8d\05\091\b2X\86\90\fe4A\88\15\d4\9fY\f0FK\bd"
  "\de\ee\a74>\82Q\aa\1a\c9\07p\ac\18\9el\96\ea\d1\c1\cd\e2\e5\d4\b0\dd\04"
  "\c6k\cf\e2\03\9e2#\99\c0\ad\0f\85\1c\15\86\b7F\83\db\84E\ffk\bf0\99S\a6"
  "c\9age\18d\12\e6\16\ffF\ef|\7f\e8\cf~\c0`?\8f~\cbOn_\8c\15\aeO\f1\81\9d"
  "\f08\0f3^\be\e3Iw\ef\9a\99\a3m\a2\c5,\07\d3\bf\f5\ad\5c\1cU\ab\01\80\0c"
  "\09\cb\f6\f7\c8\c7/s\d9sc*\16\02\a0O\cb\fd\fa\9a\dd\dc\fd\e7g(~\daM\01"
  "\c4\11\9f\9e\b8\01\15T\fd\e1\81\b2\1dQ\a1\015\d6F\c6&B\1a\a9|Z\22\1fe\a5"
  "\09B\c2\8b\d8\f7Xi\b0\e9\8dxu3_\07FiYW\e7\9a\ae\83\1cd\b1\d6R\007\89\97"
  "\c3/-\a1\c1\9a\a4#\bd]\8cg\c0\84k}\b4{x\09\f2\e0F6\96\ba\b7@\f82c\cePM"
  "\ebE\97\98\d8\c3;\a9\e5P\b6\ff\fb\01\a5 f\17\bd\be\ce\b4\8a\13\1f\e5\a3"
  "\ffzB\ce\a8?]\ec7\01\b16l3o\c6\df\8c\e9\80\c9G\ba\93\84A]DG\00\0b\b8\17"
  "\f0#\e1\bb\d9\a8\b8\e5\91t\15Y\c0\0d\a6\1d\ecl\d9*\10\d3\e6/\dbh\ad7\98"
  "\c8\87\92\13\e4\c7\1a\eaC\90\fb\11\c3\98E\be\ba)w\18\ddy\a1\e4T\b4z\d6"
  "\f3\fe\d6m)\f4\94^T\d8\c9\1dj\e1\0cfX_\a6\e4\99\18\1d\bb4'\9eR\e2\8c\8f"
  "\7f.\f7\cf]\c0^\e4\e9\01\b1E\e7\1a\b0s\1f\fa\f4Cupv]dB\1d\17\a1!\dc\a8"
  "S\1cyJI\06j\ba~Ir\ae\04\95\89\92hc\17\9d\db\87\04i\de\db\0e\daE\fa\ab\b6"
  "B<]\84\d2\a9E\03\d6\92\92P\d7\f8\d6\b2\a9E\ba\92#\8a\0b\c2\c5\9b[\92\86"
  "[\86\1e\14\d7hw\acl\8e2\b7\82\f26h\f2\a7&\d9\0cC\95\d7\072\ffd#\afD\02"
  "\ef\d1\b8\07\e8I\bd\e6D\7f\1f\1fv\edja5\83\a6\09b\9cl \16_\e7\a6\d3\a8"
  "\c5\b9\02\a4\0f\8cz\c3\87\a8\db6\a1\90\08\137h\03\cd\89\97,\daTII\c2dZ"
  "\e5k\22!\22\80l\bd\b7\10\aa\9b\db\f2\fd\b0\de\06k\a9*\a0\c7\ac\e5\94\94"
  "\82\92o=]\96\c8\c5S5\c8\f9\17\1f\ba9#w\cb\8c\f4\bb:\b7\a8B\fa\fbnS\14\04"
  "v*\ff\d7x\b5\84r\a9i\9c\baJh\19\85\13\f5\fe\0d\d7\e2%\cf\13\84\c3i]\c2"
  "_fX\b2~\d1\8c[\ef\c2\18e\f4az\d9\fb?w/\ef\028\99\d5y/\bf\98\fa\d8\cf\fa"
  "\0fU\fb\aa\03\86\ffJX\fb\ee\be8\cf\83\f9S*\ba\95\84g\bf].\ba\aa\ee\83a"
  "\f2{tZ\94\dd\b2\a0\97\fa\5c\b4*\95\e4\f9\ee\9a\11q\f9\94\df\88=9tau\ba"
  "]\b8\aa\01V\cd7z\17\eb\8cG\d1\b9\12\e9:\b3\0a\c1U\e0b\ac\ee\12\b8\cc\22"
  "\b4\ab\91\09`M1k\98{W\aa\17\e6\7f+\a1\16\b6\0b\b8\a0\fd\85~Z\ed\94\9d\df"
  "_vI\9c\e3\07s\84\be\13\8fX\14}\c2\eb\fb\e9\adA\8e\c8\8f%\ae\d8\b2nY\1c"
  "\b3\e6zd\19\d2\b1\bb\f3\ae\d9\8e_\cao\e3_\a0\99\bd\9fF\deTX\0dH\b9{\de"
  "%\ee;\04\80\d6#\ec\8aj\ae\10\9a\a7\1aV\af\e9J\05 \cc,\a7\ad\04\da\94\80"
  "Q\a1+\1b\a4\9d\06(\ff\f7\10\d9B\08]\f0\d2D\fb\90\86\22\04y\ff\9a\aa\87"
  "SJt\ac\07\16:5(+EW\bfA\95\a9\e8\5c\91\97\89\9b\88B\f2u\16-/\92\fa\d3\11"
  "\da\ba\fe5a\95i\b7\09.|]\9b|\84\95\90i~\83\b9\faC%\8c9\db4\c2\9b\a5\bb"
  "\f4\03^\e4g\f9\94.\ef\07\12\c2\b2\02\cf\f5x\c2\ba\ee\e0\1b\1d}\f5DK\b9"
  "\afa\812\17si*\d9bd\dc2\16\9e\a7\1b\ba\a1\fe\dc\cf\03u\8f{}\93\bf\9b\85"
  "\91\a2(\ca>\d4\c3DRs\da\5cx\af\02\e75\cb\b2\fc\a7d\faj\13\88\08:\ab\ad"
  "a\b0\01\bf\ef\9d\d0\fd\b8E\18\aa\8a\08\16\19z\1c\c2\aek\c5E='W\9eT\ad\8a"
  "[\9f\98\a3r\9a\c6\f6K\86x\f6\e2T\ac6\99c?\a6\87 <\9a\dd\a7\16\b4\1bjW\84"
  "\7f<\cf\8f\a9(\cb\c0\d5Q\1c\a1\a2Dme\9f\0b\c3\f3\d3\f2\fd\f0%\b3\b1\a4"
  "\e5Jd\9fC\e7Yx\c4\b7\9e\96\ee\1f\de\0d\9f]=\87\14ap\96\b5eF\bc\ea\a7U\d1"
  "\06\b5\0c\a9Yy\0c\fc\22\ffW\eb\f2\88\d5B$\f1\a7\09\d8\cb\87\ddu\ff\16\93"
  "/\eb\8aSm\ed\11\0c\ce\be\e9TS\bf\dc\b7\fa\a5m\a8\c8h\16\8f\81.$*(\ef\d3"
  "\e5\bc\87Di}\01n\f9\10\9dV\1ayu\a4\8f\ac\a9\95\c3\dc\81\c97UD\ec`\d7\92"
  "\8d\b3\17\14{\f4S\e2\bb\85jU'9\8d\f7p\e0\8e\ec\ccxtm\95\93b\95\b8C\b8\9a"
  "F\8c\b2'\00\97\d1\c8z8\bb\ba\a6TfAX\af\9e1\c0\fc\05{\99\06ji\d0\e9\bfQ"
  ".\db\03\1f\f8\bd\e3\ec\1fD\e2A\22\f2\17\f3\fc\88\c3&v\ad\1c\e8'\d5Z\d2"
  "\aa\ee\dd/<\abt\b0\d3\d8#\e2q\8a\f1\86Uj\d5;\0b\d6IN\84gV-\87\f6Vtube\05"
  "\c7\85\dbae\01\ac\f8(\b4l\d1\12\bb\be\c68\a7R\ba\be\01\d763\e1\c7\85\d7"
  "in\f8\06\d1s4\17aF\02\c0\ec\9c\b3&\02E[\a4\82\90\01]\f9\d7\02\f0'\84`\b0"
  "B\16rM\a3\f4A\b4\f7\8d\03\ec1\a5x\5c\d3\9b\ce \ccqR\a1uq\04g~\ce\963\c8"
  "B\02)\ff\86\d3\84\e9\c6b\00\0fA> \bdi\a1y\9fh\08\e6\a3x{\c0R\d1Mh,\c4\09"
  "X\c7\82\8a\df\ccV\9ap\a7Ea\8275\0c.\f9\91\b6\0b@v`\a6\88\cb|\b1B\a1\c7"
  "\bc\9b5\a4\0e\d0\93\f8\cfj\fe\db]\93\89\f9\ab\c2CM\12\c4\b8\f6\83\05\fe"
  "R5\f8\eb\f7V\f3Jp\8bz3zr\c3\deS!{\f3Z\16\98\5cL.Y\c0\18Ot\d6\a8\e9Y\b0"
  "\f1\1b\bes\dfyo\f0\deb\11\0c\13dp\1c\ee\a2\ed\a8+\acEV\cb\dd\8a\e7\8b>"
  "\c6\d1\d4\85\94\926\17\d7+>\95m\e1.\ce7\06J\a7\b97\04\dd\cc\b6\8d\fa\c8"
  "\99\ba\c1\c5\87\1c\11\e8\a2\22\0a@\92\98\9c\1d\a0\14\99\db\d4\b1\0a\91"
  "K\ab\0c\d0\b6\be\03%\c8Y\7f\12J^M\b5\1d\d6\0f\84d\aeD.:0\1f\97\dc\b5\a0"
  "\e2\d2\e5\89\d2\fe\ec\ea\5c$~s\de\a9q\a4\8dG_,\87>\a8%t\ad]\10V\14\8e\0d"
  "\b1\19w\f7(N\12/\d1\18u\94k\99\f1P\ddo\aa\9a\d9pk\bd\82/\c9<\e3\ff\96R"
  "\8a\0bU\01\10M\c6lc{\fb\0b\dc\bf<\e7\acN\aa\01T\e0\f7G<Z\fa\0e\d3\ef\0b"
  "!\d8q\0a\814\ec\fa\acex\5c\e9\e3u\a7\14\87\0dM\a1A\a79\18\7f\96\b3\e3\5c"
  "S\d1\d9\a8P\a0\09\12\11H\de\1e|\a0\1c4\a8E\10\d32\04F\ab\0a\edJ\93M\e4"
  "\91 \89+\ea\83?\85\17VM\a8\1d\f8`]\b6hk\b6\e4\a4\8ef\9d\ab`\12%6\b9\f4"
  "\e3B\06\e4\1d\ce\19`Bk|+\d7\c1\f3x\ce\e9\83\ae\d2\80\1f\f8\12\86[\f6L\b2"
  "0\17B\e4$Z\07\a1'\b6\97g\f23\e0\de\fc\9cR\1d\ae0I\c9\b1\a3}\01\ef@\98\16"
  "<D\a7\a4\d9|\9b\fbN\86\ee`\95(\1f\8e\a5\8a\e8\06\08.A\9d\e2'*\b9\ba\f2"
  "\a6\f1N\ad\a2\08\8ay\91\c4\db\b1tgi\af\10\ae\a2X\cb\8a\ec\d7\b5\f5)\ef"
  "\a8\e0\a1m\ca\ace\17\bf\d6\f3\a6\91\99\f3*\d3X\0a\09\fd\17?\ddn\cc\b0\10"
  "\f6\bf\b0\f5\07\efLK\fc\dd\8e\94\8a\ff\dc\94\f3\ef\8e\f9d\15\10\af\bdJ"
  "\d9\9c\b6\1f\0a=\f8\95\f17\be\1a\d4\1am\9d\0fD\a4\a7LLv\bb\ed\c5m!\89a"
  "\c8\84\13U\8d\d1_\dfS\ea\b4\9b\e4\b4\f5<\fd2,U\f8\e2\9bkt\92\a1\c2\1d\22"
  "3\8c\bc?wj\b6\db\82\86\11\b7J3\a5\ea?\af\ab\0f\15\05\a4\92#\e8\d5\e4\0e"
  "@\a7\f2\87M\cb)-\83\a6;\16\b1\05\8f\12\10Q\ef\e9 >t\f8#\90\ca[\1d\c7\b2"
  "\16T%k$\a9M\91\f6,4\bd\b2\e4x\df\8eT\f7\c2\b6\89\d0\1a\1a\9c@\b6\ef\8e"
  "\ab\8b\b1)\b5s$\ac\84\a1 \c3\d0\a3\abr\96\ae\1et\a2\90-\d7\e5\c9\e8\f3"
  "\c4\8cV\0f<\da\92\88ez|\a6/~q\18\fb\17\96\89e\88\b7\ea\fe\98\1b\90\bb\dd"
  "\8d\de\f9\9d\fb\eb~\aae\a5>\7f\22t*U1Vx\85\fa\a6\1e\d5_'\87\8f\95\88:\d5"
  "\de5k\93\5c(3\857\f1h\f3\ba*\89\8aV\03F\b8s\f2\7f\a6\85-C\b0iu+-,\84W\a6"
  "\10\ef\1f\d0s\fc)\0eb);\9c\9b\b2\f6gj\f5\13\82\8f{\b4\91\ba\f3I\83B_\f4"
  "\01\c5\f2\98\a2s\9a!6\a9p\1c$\13wqBv/?\cb\10\01\aa\83\d3\8c#\ed\d7\d4\0d"
  "\d3S\fb\0e\fe\aa@J2\0486\f4\06\a5\e8c\14]\c9\9e\d5\d0\dc>\05\c6C\b1H\ce"
  "\e2|Y\b4{\c6\0a\05\94\8e\86\b7\94\dd\da\81\1b\dco\a1\1a\f8&\83\1c\19\b4"
  "\f2|\ca(1\91\e9\e5\a4\10\9b\f0\a3c\1fa/\1c\fdr}\f5c\1f\ce\d4\c1\ec\8c<"
  "g9;c\bc\cf\dc\f2<\a7\01J\f2\13\d8\85\e0\03\05\be\d5\01\ca\17\86\08An\97"
  "\18N\a7\d8D\86-K\82\bc\9d\a7J\d1I\bd\9e!\d1\0e\d6\e7\f8\dd\a2+\85Q\9dE"
  "\9c\ec\03\b5B\c9\e5\90\bb\caE;\f3R\82\ab\e1\93Cb\93;\1fuj=\17\0a\b0\e7"
  "b\16\da\b8\d4:x\0ag\12\c5\0c\9d\0c\9c\a1\fb\9b\10\e7\c5$\8bf\80+\fb'\e2"
  "\87\01E}aj\90\f6\ed-\80`\f6\f9\b1\da\e9A\96\dc\f9\84\b4si9\a0\f8sx^Qd\d2"
  "\bbS8\a6\e1\e8\e1#d{H\0b\db\b2~cU4\e3\07\8db\da,=\9a\1a\ce\91_^\bcj\01"
  "\dcI\b0\fb\10x\cc@\a1Av\f7uk\c5\01S\5c\dc\9d\0a\cb\7f\c8\04\e9\a9\ba)c"
  "\1b\e1\b3\b9\89D\cd\bd\9f\faEcT)\f4;b\d9 (\ac\95@\adGy\17|\a93\f1\ca\ba"
  "\0f)2\d7]H\cc\cc\ab\8e\edI\c0\d6\be\d4\a9Y\7f\86tZ\ff\bfV\f2h\5cp\8c\ee"
  "I\140\1f\a8\111\ffo\ec.\83s\8c/j\5c\19\fc&\d2\ab~\ff\c5S\fd1\c8\b7]\c2"
  "\d9\8f]X\83U^\7f\b7\a8|>\ba%\f52\d0\f3t.\a4\eb5_\e5\d2\1b\ce(o\b2?\c40"
  "\12:\cd\b3\81[\cfc\d1\80y\85\cf\a7z^KD\80\1fb2\c3\bc\05\e1\d7f\c3Q\196"
  "^U\a0\a7\fa\fe\f3+G\d9\8d@4\a6\9f\c3\b5j\c8Q\b9\fe\f0\f6\98O\b1P\c1\8f"
  "\874c\85\fa\d33\9fV\9a\bf\d1n\d2\d8\b9\d4\00^\93\9c\c8\00G\ec\80/\86\0a"
  "\07O\e8\09\815\b8\c3\fa\c0X'a\bb'\cd\c8bbL\e1B\a6\f4\9cx\97\b8\1c\d58\80"
  "\bd}\bd\cf\cc\e9\e7\98\c3V\bd\e6c\0aG\e0,\dd\ac\03@\e4!\bft\acl\e0\fc\cc"
  "X\18x\14\98\04P]\ea\ee\c8\ebC\0c\1e\807\0f\cb\0c\df\02RzR\95\ba\e6T\8f"
  "%`\05\d3\fd\cf\96\83\e6\18\a7\bai *\f3.\b8\c6G\fd\83|$ \dfP\e9AT\faW\1d"
  "3\dcL~\d2\cd\16t\8b\d2\91R\e9\f8\ad\e4?\13\e0\1dG\81\1cQ.G\b6\a6#w\d9\dd"
  "\0f\18X\e5\98\a1c\e5\f9\d8\e3Hv\ea\a7\ea\09\0fW\8f\ffD^/\9cg\8e\da\13\e5"
  "Qe\cc\d2,s?\d65;\83\01\b2\d1X^\a6~\7f\07\f8O\cfK\03\0a\e4\81\de\82\f7\fa"
  "'\af\af\04\fb\91a\0fB\86.\11\8bc\b5\f9\f1\9a\db\c5y\f69\93\d2'z\d5\ad\bc"
  "\22x\ae\81R7\18t\088\c7\b1\d8J\d9\b5\15\0b\0d\91\93\22\8fH\05\83\1co\c7"
  "\ce\87\22\dbMPu8\eb\b2\9a\c6\a3\e3Jy\c2\a9\ebQa\a4\92\06\a6_A\b8\8c\9c"
  "\9d\173\d43\d3\bc\a6\1b\c4\c7\db(\f3\d7\81\c2\ee\9f\84\00\08l\90\22\b5"
  "\b9\12\f3\efM\22s\ea\c7\a5\00\0a\874k\22h\d7\efk\e1\ea\0f\e59\cf@f\d4\00"
  "\83\15\a1\e6u\e3\cc\f2)/\84\81\d0\7f\09\c1\e3ZI`S\1c\80o\f4:\e5\a1\c4\df"
  "K\b1\9c\b1[8h#`\8b\b1\89^\ca\b5\d7\9e\dd\03\9erFB,8\ee\1d,\f6\fc\d1F\83"
  "j\c2\a2\07l\a9\1b\e3\b4\92\db\19\9e\85\18$\05s\8b\09\c7\93\e2\1bbwR\a0"
  "\c5\a7\1em\c6O\ee\cb\b88\db\a2:\15g\08\f7(3\04\dc\f1t\7fs\03\c9\a5Dm@e"
  "\9a\f2?\05S.R_PD;\cf\95\88\90\fe\c0\ef\8f\c6\e7\b9&wd\15\0aC\bb\aa4>\f1"
  "\f5\19\dc04x\ca^M\e6\09\b5\ea\e0\c6\96r \13=A\16}\b6\e0_Lb%\99x\bc\8f\e8"
  "W\8c\d1[\1c\e4\d8w\df\ban\bf\96\ebY\f1\b6\f7b\b9\91\8e\e7\aa\cb4\a57>\93"
  "\b0\ad\a4\b5\bb'6r\a1\95\fe\81\8e\c5\0d\b8\1c\d9\0d\a3\aa\b1\c3\ce\09;"
  "~\22\f26\11\e6\b1\a7\e8\a5\0aO:!\e6\e4\8eUW\c2\ca\8f\9d\d1bO\cd\e2\88\a9"
  "\1f\9e\f2*\edr\bd\b3\05\86;\a3\80\1b\eb\93\a7E\afu\a8\cf\ac\e0\c33\05f"
  "0\f1r\bc\88\8b\8dI\c9\01l\8c\b4\80\86\7f|\ad\8f\ebj\ee\f0\9b;\02\87\af"
  "\e1 h\9f\db\98s\a6\05*\ed\82\ca\c2h\db\8c\14\a1C\89?\08\88C:\d4\91\bey"
  "!\89\b0Y\89\94kO\0aj\d4HI6.\d8i\ab\1c\b0\abyF\e3\8c\84\09\9b\db\c39ND\d6"
  "\11N\0b\0c\0c\0e\d8\f2\e5@i\1a\e4\b0\ea\85\95!\0e\0f\8f\11\8eo\1f\91\03"
  "!\1d]e\a7\fb\a9\d1\d2\f2\95qKguDid\b4>\d1\17\00\00\00\08\00\00\00\81\ff"
  "\ff\ff4\00\00\00\0b\00\00\00\01\fc\ff\ff\01\00\00\00\00\00\00\00\0a\00"
  "\00\00\00\00\00\00d\00\00\00\00\00\00\00\e8\03\00\00\00\00\00\00\10'\00"
  "\00\00\00\00\00\a0\86\01\00\00\00\00\00@B\0f\00\00\00\00\00\80\96\98\00"
  "\00\00\00\00\00\e1\f5\05\00\00\00\00\00\ca\9a;\00\00\00\00\00\e4\0bT\02"
  "\00\00\00\00\e8vH\17\00\00\00\00\10\a5\d4\e8\00\00\00\00\a0rN\18\09\00"
  "\00\00@z\10\f3Z\00\00\00\80\c6\a4~\8d\03\00\00\00\c1o\f2\86#\00\00\00\8a"
  "]xEc\01\00\00d\a7\b3\b6\e0\0d\00\00\e8\89\04#\c7\8astrconv: illegal Ap"
  "pendFloat/FormatFloat bitSize\d0>\01\000\00\00\00NaN-Inf+Infnot enough"
  " significant bits after mult64bitPow10\00\00\00\00\00\13?\01\000\00\00"
  "\00not enough significant bits after mult128bitPow10\00\00\00\00\00\00"
  "\00P?\01\001\00\00\000001020304050607080910111213141516171819202122232"
  "4252627282930313233343536373839404142434445464748495051525354555657585"
  "9606162636465666768697071727374757677787980818283848586878889909192939"
  "49596979899mult64bitPow10: power of 10 is out of range\00\00\00\00\00X"
  "@\01\00+\00\00\00mult128bitPow10: power of 10 is out of range\00\00\00"
  "\00\90@\01\00,\00\00\00\5ca\5cb\5cf\5cn\5cr\5ct\5cv\5cx\5cu\5cU0123456"
  "789abcdef";
data rodata_28(offset: 82168) =
  "\01\00\00\00x\0d\01\00\01\00\00\00\01\00\00\00y\0d\01\00\02\00\00\00\01"
  "\00\00\00{\0d\01\00\03\00\00\00\02\00\00\00~\0d\01\00\03\00\00\00\02\00"
  "\00\00\81\0d\01\00\04\00\00\00\02\00\00\00\85\0d\01\00\05\00\00\00\03\00"
  "\00\00\8a\0d\01\00\05\00\00\00\03\00\00\00\8f\0d\01\00\06\00\00\00\03\00"
  "\00\00\95\0d\01\00\07\00\00\00\04\00\00\00\9c\0d\01\00\07\00\00\00\04\00"
  "\00\00\a3\0d\01\00\08\00\00\00\04\00\00\00\ab\0d\01\00\09\00\00\00\04\00"
  "\00\00\b4\0d\01\00\0a\00\00\00\05\00\00\00\be\0d\01\00\0a\00\00\00\05\00"
  "\00\00\c8\0d\01\00\0b\00\00\00\05\00\00\00\d3\0d\01\00\0c\00\00\00\06\00"
  "\00\00\df\0d\01\00\0c\00\00\00\06\00\00\00\eb\0d\01\00\0d\00\00\00\06\00"
  "\00\00\f8\0d\01\00\0e\00\00\00\07\00\00\00\06\0e\01\00\0e\00\00\00\07\00"
  "\00\00\14\0e\01\00\0f\00\00\00\07\00\00\00#\0e\01\00\10\00\00\00\07\00"
  "\00\003\0e\01\00\11\00\00\00\08\00\00\00D\0e\01\00\11\00\00\00\08\00\00"
  "\00U\0e\01\00\12\00\00\00\08\00\00\00g\0e\01\00\13\00\00\00\09\00\00\00"
  "z\0e\01\00\13\00\00\00\09\00\00\00\8d\0e\01\00\14\00\00\00\09\00\00\00"
  "\a1\0e\01\00\15\00\00\00\0a\00\00\00\b6\0e\01\00\15\00\00\00\0a\00\00\00"
  "\cb\0e\01\00\16\00\00\00\0a\00\00\00\e1\0e\01\00\17\00\00\00\0a\00\00\00"
  "\f8\0e\01\00\18\00\00\00\0b\00\00\00\10\0f\01\00\18\00\00\00\0b\00\00\00"
  "(\0f\01\00\19\00\00\00\0b\00\00\00A\0f\01\00\1a\00\00\00\0c\00\00\00[\0f"
  "\01\00\1a\00\00\00\0c\00\00\00u\0f\01\00\1b\00\00\00\0c\00\00\00\90\0f"
  "\01\00\1c\00\00\00\0d\00\00\00\ac\0f\01\00\1c\00\00\00\0d\00\00\00\c8\0f"
  "\01\00\1d\00\00\00\0d\00\00\00\e5\0f\01\00\1e\00\00\00\0d\00\00\00\03\10"
  "\01\00\1f\00\00\00\0e\00\00\00\22\10\01\00\1f\00\00\00\0e\00\00\00A\10"
  "\01\00 \00\00\00\0e\00\00\00a\10\01\00!\00\00\00\0f\00\00\00\82\10\01\00"
  "!\00\00\00\0f\00\00\00\a3\10\01\00\22\00\00\00\0f\00\00\00\c5\10\01\00"
  "#\00\00\00\10\00\00\00\e8\10\01\00#\00\00\00\10\00\00\00\0b\11\01\00$\00"
  "\00\00\10\00\00\00/\11\01\00%\00\00\00\10\00\00\00T\11\01\00&\00\00\00"
  "\11\00\00\00z\11\01\00&\00\00\00\11\00\00\00\a0\11\01\00'\00\00\00\11\00"
  "\00\00\c7\11\01\00(\00\00\00\12\00\00\00\ef\11\01\00(\00\00\00\12\00\00"
  "\00\17\12\01\00)\00\00\00\12\00\00\00@\12\01\00*\00\00\00\13\00\00\00j"
  "\12\01\00*\00\00\00\00\00\01\00M\00\01\00P\00\01\00]\00\01\00\80\00\01"
  "\00\fa\00\01\00\00\01\01\00\02\01\01\00\07\01\01\003\01\01\007\01\01\00"
  "\9c\01\01\00\a0\01\01\00\a0\01\01\00\d0\01\01\00\fd\01\01\00\80\02\01\00"
  "\9c\02\01\00\a0\02\01\00\d0\02\01\00\e0\02\01\00\fb\02\01\00\00\03\01\00"
  "#\03\01\00-\03\01\00J\03\01\00P\03\01\00z\03\01\00\80\03\01\00\c3\03\01"
  "\00\c8\03\01\00\d5\03\01\00\00\04\01\00\9d\04\01\00\a0\04\01\00\a9\04\01"
  "\00\b0\04\01\00\d3\04\01\00\d8\04\01\00\fb\04\01\00\00\05\01\00'\05\01"
  "\000\05\01\00c\05\01\00o\05\01\00\bc\05\01\00\00\06\01\006\07\01\00@\07"
  "\01\00U\07\01\00`\07\01\00g\07\01\00\80\07\01\00\ba\07\01\00\00\08\01\00"
  "\05\08\01\00\08\08\01\008\08\01\00<\08\01\00<\08\01\00?\08\01\00\9e\08"
  "\01\00\a7\08\01\00\af\08\01\00\e0\08\01\00\f5\08\01\00\fb\08\01\00\1b\09"
  "\01\00\1f\09\01\009\09\01\00?\09\01\00?\09\01\00\80\09\01\00\b7\09\01\00"
  "\bc\09\01\00\cf\09\01\00\d2\09\01\00\06\0a\01\00\0c\0a\01\005\0a\01\00"
  "8\0a\01\00:\0a\01\00?\0a\01\00H\0a\01\00P\0a\01\00X\0a\01\00`\0a\01\00"
  "\9f\0a\01\00\c0\0a\01\00\e6\0a\01\00\eb\0a\01\00\f6\0a\01\00\00\0b\01\00"
  "5\0b\01\009\0b\01\00U\0b\01\00X\0b\01\00r\0b\01\00x\0b\01\00\91\0b\01\00"
  "\99\0b\01\00\9c\0b\01\00\a9\0b\01\00\af\0b\01\00\00\0c\01\00H\0c\01\00"
  "\80\0c\01\00\b2\0c\01\00\c0\0c\01\00\f2\0c\01\00\fa\0c\01\00'\0d\01\00"
  "0\0d\01\009\0d\01\00`\0e\01\00\ad\0e\01\00\b0\0e\01\00\b1\0e\01\00\fd\0e"
  "\01\00'\0f\01\000\0f\01\00Y\0f\01\00p\0f\01\00\89\0f\01\00\b0\0f\01\00"
  "\cb\0f\01\00\e0\0f\01\00\f6\0f\01\00\00\10\01\00M\10\01\00R\10\01\00u\10"
  "\01\00\7f\10\01\00\c2\10\01\00\d0\10\01\00\e8\10\01\00\f0\10\01\00\f9\10"
  "\01\00\00\11\01\00G\11\01\00P\11\01\00v\11\01\00\80\11\01\00\f4\11\01\00"
  "\00\12\01\00A\12\01\00\80\12\01\00\a9\12\01\00\b0\12\01\00\ea\12\01\00"
  "\f0\12\01\00\f9\12\01\00\00\13\01\00\0c\13\01\00\0f\13\01\00\10\13\01\00"
  "\13\13\01\00D\13\01\00G\13\01\00H\13\01\00K\13\01\00M\13\01\00P\13\01\00"
  "P\13\01\00W\13\01\00W\13\01\00]\13\01\00c\13\01\00f\13\01\00l\13\01\00"
  "p\13\01\00t\13\01\00\00\14\01\00a\14\01\00\80\14\01\00\c7\14\01\00\d0\14"
  "\01\00\d9\14\01\00\80\15\01\00\b5\15\01\00\b8\15\01\00\dd\15\01\00\00\16"
  "\01\00D\16\01\00P\16\01\00Y\16\01\00`\16\01\00l\16\01\00\80\16\01\00\b9"
  "\16\01\00\c0\16\01\00\c9\16\01\00\00\17\01\00\1a\17\01\00\1d\17\01\00+"
  "\17\01\000\17\01\00F\17\01\00\00\18\01\00;\18\01\00\a0\18\01\00\f2\18\01"
  "\00\ff\18\01\00\06\19\01\00\09\19\01\00\09\19\01\00\0c\19\01\008\19\01"
  "\00;\19\01\00F\19\01\00P\19\01\00Y\19\01\00\a0\19\01\00\a7\19\01\00\aa"
  "\19\01\00\d7\19\01\00\da\19\01\00\e4\19\01\00\00\1a\01\00G\1a\01\00P\1a"
  "\01\00\a2\1a\01\00\b0\1a\01\00\f8\1a\01\00\00\1b\01\00\09\1b\01\00\00\1c"
  "\01\00E\1c\01\00P\1c\01\00l\1c\01\00p\1c\01\00\8f\1c\01\00\92\1c\01\00"
  "\b6\1c\01\00\00\1d\01\006\1d\01\00:\1d\01\00G\1d\01\00P\1d\01\00Y\1d\01"
  "\00`\1d\01\00\98\1d\01\00\a0\1d\01\00\a9\1d\01\00\e0\1e\01\00\f8\1e\01"
  "\00\00\1f\01\00:\1f\01\00>\1f\01\00Y\1f\01\00\b0\1f\01\00\b0\1f\01\00\c0"
  "\1f\01\00\f1\1f\01\00\ff\1f\01\00\99#\01\00\00$\01\00t$\01\00\80$\01\00"
  "C%\01\00\90/\01\00\f2/\01\00\000\01\00/4\01\00@4\01\00U4\01\00\00D\01\00"
  "FF\01\00\00h\01\008j\01\00@j\01\00ij\01\00nj\01\00\c9j\01\00\d0j\01\00"
  "\edj\01\00\f0j\01\00\f5j\01\00\00k\01\00Ek\01\00Pk\01\00wk\01\00}k\01\00"
  "\8fk\01\00@n\01\00\9an\01\00\00o\01\00Jo\01\00Oo\01\00\87o\01\00\8fo\01"
  "\00\9fo\01\00\e0o\01\00\e4o\01\00\f0o\01\00\f1o\01\00\00p\01\00\f7\87\01"
  "\00\00\88\01\00\d5\8c\01\00\00\8d\01\00\08\8d\01\00\f0\af\01\00\22\b1\01"
  "\002\b1\01\002\b1\01\00P\b1\01\00R\b1\01\00U\b1\01\00U\b1\01\00d\b1\01"
  "\00g\b1\01\00p\b1\01\00\fb\b2\01\00\00\bc\01\00j\bc\01\00p\bc\01\00|\bc"
  "\01\00\80\bc\01\00\88\bc\01\00\90\bc\01\00\99\bc\01\00\9c\bc\01\00\9f\bc"
  "\01\00\00\cf\01\00-\cf\01\000\cf\01\00F\cf\01\00P\cf\01\00\c3\cf\01\00"
  "\00\d0\01\00\f5\d0\01\00\00\d1\01\00&\d1\01\00)\d1\01\00r\d1\01\00{\d1"
  "\01\00\ea\d1\01\00\00\d2\01\00E\d2\01\00\c0\d2\01\00\d3\d2\01\00\e0\d2"
  "\01\00\f3\d2\01\00\00\d3\01\00V\d3\01\00`\d3\01\00x\d3\01\00\00\d4\01\00"
  "\9f\d4\01\00\a2\d4\01\00\a2\d4\01\00\a5\d4\01\00\a6\d4\01\00\a9\d4\01\00"
  "\0a\d5\01\00\0d\d5\01\00F\d5\01\00J\d5\01\00\a5\d6\01\00\a8\d6\01\00\cb"
  "\d7\01\00\ce\d7\01\00\8b\da\01\00\9b\da\01\00\af\da\01\00\00\df\01\00\1e"
  "\df\01\00%\df\01\00*\df\01\00\00\e0\01\00\18\e0\01\00\1b\e0\01\00*\e0\01"
  "\000\e0\01\00m\e0\01\00\8f\e0\01\00\8f\e0\01\00\00\e1\01\00,\e1\01\000"
  "\e1\01\00=\e1\01\00@\e1\01\00I\e1\01\00N\e1\01\00O\e1\01\00\90\e2\01\00"
  "\ae\e2\01\00\c0\e2\01\00\f9\e2\01\00\ff\e2\01\00\ff\e2\01\00\d0\e4\01\00"
  "\f9\e4\01\00\e0\e7\01\00\c4\e8\01\00\c7\e8\01\00\d6\e8\01\00\00\e9\01\00"
  "K\e9\01\00P\e9\01\00Y\e9\01\00^\e9\01\00_\e9\01\00q\ec\01\00\b4\ec\01\00"
  "\01\ed\01\00=\ed\01\00\00\ee\01\00$\ee\01\00'\ee\01\00;\ee\01\00B\ee\01"
  "\00B\ee\01\00G\ee\01\00T\ee\01\00W\ee\01\00d\ee\01\00g\ee\01\00\9b\ee\01"
  "\00\a1\ee\01\00\bb\ee\01\00\f0\ee\01\00\f1\ee\01\00\00\f0\01\00+\f0\01"
  "\000\f0\01\00\93\f0\01\00\a0\f0\01\00\ae\f0\01\00\b1\f0\01\00\f5\f0\01"
  "\00\00\f1\01\00\ad\f1\01\00\e6\f1\01\00\02\f2\01\00\10\f2\01\00;\f2\01"
  "\00@\f2\01\00H\f2\01\00P\f2\01\00Q\f2\01\00`\f2\01\00e\f2\01\00\00\f3\01"
  "\00\d7\f6\01\00\dc\f6\01\00\ec\f6\01\00\f0\f6\01\00\fc\f6\01\00\00\f7\01"
  "\00v\f7\01\00{\f7\01\00\d9\f7\01\00\e0\f7\01\00\eb\f7\01\00\f0\f7\01\00"
  "\f0\f7\01\00\00\f8\01\00\0b\f8\01\00\10\f8\01\00G\f8\01\00P\f8\01\00Y\f8"
  "\01\00`\f8\01\00\87\f8\01\00\90\f8\01\00\ad\f8\01\00\b0\f8\01\00\b1\f8"
  "\01\00\00\f9\01\00S\fa\01\00`\fa\01\00m\fa\01\00p\fa\01\00|\fa\01\00\80"
  "\fa\01\00\88\fa\01\00\90\fa\01\00\c5\fa\01\00\ce\fa\01\00\db\fa\01\00\e0"
  "\fa\01\00\e8\fa\01\00\f0\fa\01\00\f8\fa\01\00\00\fb\01\00\ca\fb\01\00\f0"
  "\fb\01\00\f9\fb\01\00\00\00\02\00\df\a6\02\00\00\a7\02\009\b7\02\00@\b7"
  "\02\00\1d\b8\02\00 \b8\02\00\a1\ce\02\00\b0\ce\02\00\e0\eb\02\00\00\f8"
  "\02\00\1d\fa\02\00\00\00\03\00J\13\03\00P\13\03\00\af#\03\00\00\01\0e\00"
  "\ef\01\0e\00:\00\00\00\d4R\01\00\d0K\01\00\b0\01\01\00fmt.pp\00\00\1a\00"
  "\00\004L\01\00\b0\01\01\00\90\00\00\00\0a\00\00\00<L\01\00\8cM\01\00\84"
  "L\01\00|L\01\00@R\01\00\94L\01\000M\01\00(M\01\000N\01\00\b8N\01\000N\01"
  "\00\c4N\01\000N\01\00\d1N\01\000N\01\00\ddN\01\000N\01\00\e8N\01\00\04"
  "O\01\00\f4N\01\00\d5\00\00\00\d0K\01\006\00\00\00\c4R\01\00XL\01\00\b0"
  "\01\01\00fmt.buffer\00\00\16\00\00\00dL\01\00lL\01\00\d5\00\00\00XL\01"
  "\00\c8\00\00\00tL\01\00\d5\00\00\00lL\01\00\00\0carg\00\00\00T\00\00\00"
  "\8cL\01\00\d5\00\00\00\84L\01\00\00\14value\00\0d\00Value\00Z\00\00\00"
  "\d0L\01\00\0d\02\01\00\0c\00\00\00\03\00\00\00\e4R\01\00\d8L\01\00\10M"
  "\01\00\08M\01\00\9cQ\01\00 M\01\00\d5\00\00\00\a4L\01\00\00\00typecode"
  "\00\00\da\00\00\00\00M\01\00\0d\02\01\00\01\00\00\00\01\00\00\00lL\01\00"
  "D\01\01\00\d5\00\00\00\e4L\01\00\00\04value\00R\00\00\00\18M\01\00\d5\00"
  "\00\00\10M\01\00\00\08flags\00\00 fmt\00\00\00\fa\00\00\00\ccR\01\00HM"
  "\01\00\b0\01\01\00fmt.fmt\00\da\00\00\00\84M\01\00\b0\01\01\00\5c\00\00"
  "\00\05\00\00\00\c4R\01\00\8cM\01\00\94M\01\00\c6\01\01\00\c0P\01\00\85"
  "N\01\00\c0P\01\00\8bN\01\00\9cN\01\00\92N\01\00\d5\00\00\00HM\01\00\00"
  "\00buf\00\00\00\fa\00\00\00\b4M\01\00\bcM\01\00\b0\01\01\00fmt.fmtFlag"
  "s\00\00\00\00\d5\00\00\00\94M\01\00\da\00\00\00\18N\01\00\b0\01\01\00\09"
  "\00\00\00\09\00\00\000N\01\00 N\01\000N\01\00@N\01\000N\01\00NN\01\000"
  "N\01\00VN\01\000N\01\00]N\01\000N\01\00eN\01\000N\01\00mN\01\000N\01\00"
  "tN\01\000N\01\00|N\01\00\d5\00\00\00\bcM\01\00\00\00widPresent\00\00\00"
  "\00\c1\00\00\008N\01\00\d5\00\00\000N\01\00\00\01precPresent\00\00\02m"
  "inus\00\00\03plus\00\00\04sharp\00\00\05space\00\00\06zero\00\00\07plu"
  "sV\00\00\08sharpV\00\00\10wid\00\00\14prec\00\00\18intbuf\00\00\d7\00\00"
  "\00\b0N\01\00lL\01\00D\00\00\00XL\01\00\d5\00\00\00\9cN\01\00\00|reord"
  "ered\00\00}goodArgNum\00\00~panicking\00\00\7ferroring\00\00\80\01wrap"
  "Errs\00\00\84\01wrappedErrs\00\00\16\00\00\00\10O\01\00\c0P\01\00\d5\00"
  "\00\00\04O\01\00t\00\01\000O\01\008O\01\007\02\01\00.error\00\00\d5\00"
  "\00\00\18O\01\00T\00\00\00@O\01\00\d5\00\00\008O\01\00truefalsefmt: un"
  "known base; can't happenQO\01\00\1f\00\00\00`%!i)0123456789abcdefx)(ni"
  "lGoStringErrorString[]byte<invalid reflect.Value>map[<nil>(nil), \00z\00"
  "\00\00,S\01\00\ecO\01\00\c3\01\01\00os.file\00Z\00\00\00 P\01\00\c3\01"
  "\01\00\18\00\00\00\04\00\00\00(P\01\00w\0b\01\00\b0P\01\00\80\0b\01\00"
  "$S\01\00\87\0b\01\000N\01\00\95\0b\01\00\d5\00\00\00\ecO\01\00t\00\07\00"
  "HP\01\00PP\01\00\c3\01\01\00os.FileHandle\00\00\00\d5\00\00\00(P\01\00"
  "T\00\00\00XP\01\00\d5\00\00\00PP\01\00\fa\00\00\00$S\01\00|P\01\00\c3\01"
  "\01\00os.dirInfo\00\00\da\00\00\00\98P\01\00\c3\01\01\00\04\00\00\00\01"
  "\00\00\00\a0P\01\00\91\0b\01\00\d5\00\00\00|P\01\00\c5\00\00\00\a8P\01"
  "\00\d5\00\00\00\a0P\01\00Q\00\00\00\b8P\01\00\d5\00\00\00\b0P\01\00\c2"
  "\00\00\00\c8P\01\00\d5\00\00\00\c0P\01\001 :\00\00\00\00\00\d0P\01\00\03"
  "\00\00\002 :\00\00\00\00\00\e0P\01\00\03\00\00\003 :\00\00\00\00\00\f0"
  "P\01\00\03\00\00\004 :\00\00\00\00\00\00Q\01\00\03\00\00\005 :\00\00\00"
  "\00\00\10Q\01\00\03\00\00\006 :\00\00\00\00\00 Q\01\00\03\00\00\00\e8\00"
  "\01\00\dcR\01\00lL\01\00\0d\02\01\00reflectlite.Kind\00\00\00\00\fa\00"
  "\04\00\e4R\01\00\e4L\01\00\0d\02\01\00reflectlite.RawType\00z\00F\00\f4"
  "R\01\00\a4L\01\00\0d\02\01\00reflectlite.Value\00\00\00\e8\00\00\00\04"
  "S\01\00lL\01\00\0d\02\01\00reflectlite.valueFlags\00\00\ea\00\05\00\0c"
  "S\01\00\a4\0b\01\00\d1\01\01\00fs.FileMode\00\fa\00\00\00\1cS\01\00\c4"
  "S\01\00\c3\01\01\00os.File\00\ec\00\08\004S\01\00\0c\0b\01\00\c3\01\01"
  "\00os.unixFileHandle\00\00\00\fa\00\03\00<S\01\00\e4\0a\01\00\c3\01\01"
  "\00os.unixFilesystem\00\00\00z\00J\00DS\01\00\a8S\01\00\b4\01\01\00ref"
  "lect.Value\00\00\00\fa\00\04\00LS\01\00\8cS\01\00\b4\01\01\00reflect.r"
  "awType\00\ec\00\04\00TS\01\00\0c\0b\01\00\f6\01\01\00syscall.Errno\00\00"
  "\00\fa\00+\00lS\01\00\c4\0b\01\00\22\02\01\00time.Time\00\00\00\d5\00\01"
  "\00T\05\01\00\d5\00\00\00<L\01\00\d5\00\00\000M\01\00\d5\00\05\00\b8K\01"
  "\00\d5\00\01\000Q\01\00\d5\00\19\00TQ\01\00\d5\00\01\00\dc\02\01\00\d5"
  "\00F\00xQ\01\00\d5\00\01\00\5c\01\01\00\d5\00\00\00\9cQ\01\00\d5\00\05"
  "\00\c4Q\01\00\d5\00\03\00\1c\0b\01\00\d5\00\15\00\e0Q\01\00\d5\00\00\00"
  "`P\01\00\d5\00\00\00\d4O\01\00\d5\00\08\00\f8Q\01\00\d5\00\03\00\1cR\01"
  "\00\d5\00J\00@R\01\00\d5\00#\00`R\01\00\d5\00\04\00\80R\01\00\d5\00\01"
  "\00\08\0c\01\00\d5\00\01\00\b8\08\01\00\d5\00/\00\a0R\01\00\d5\00\19\00"
  "\8cS\01\00\d5\00F\00\a8S\01\00\d5\00\00\00\c4S\01\00\da\00\04\00tS\01\00"
  "\b4\01\01\00\01\00\00\00\01\00\00\00TQ\01\00\17\07\01\00Z\00F\00|S\01\00"
  "\b4\01\01\00\0c\00\00\00\01\00\00\00xQ\01\00\9cL\01\00\da\00\00\00\84S"
  "\01\00\c3\01\01\00\04\00\00\00\01\00\00\00,S\01\00p\0b\01";
data data(offset: 87008) = "x\9c\19\f6d\5c\01";
data data_1(offset: 87056) = "\e8\03";
data data_2(offset: 87072) =
  "@]\01\00\c1\82\01\00\00\00\00\00\04\00\00\00\0c\00\00\00\01\00\00\00\00"
  "\00\00\00\03\00\00\00\00\00\00\00\04\00\00\00\14\0a\01\00\03";
data data_3(offset: 87176) =
"\8cT\01\00\f8Q\01\00\01\00\00\00\00\0b\01\00\0b";
data data_4(offset: 87204) =
  " \00~\00\a1\00w\03z\03\7f\03\84\03V\05Y\05\8a\05\8d\05\c7\05\d0\05\ea\05"
  "\ef\05\f4\05\06\06\0d\07\10\07J\07M\07\b1\07\c0\07\fa\07\fd\07-\080\08"
  "[\08^\08j\08p\08\8e\08\98\08\8c\09\8f\09\90\09\93\09\b2\09\b6\09\b9\09"
  "\bc\09\c4\09\c7\09\c8\09\cb\09\ce\09\d7\09\d7\09\dc\09\e3\09\e6\09\fe\09"
  "\01\0a\0a\0a\0f\0a\10\0a\13\0a9\0a<\0aB\0aG\0aH\0aK\0aM\0aQ\0aQ\0aY\0a"
  "^\0af\0av\0a\81\0a\b9\0a\bc\0a\cd\0a\d0\0a\d0\0a\e0\0a\e3\0a\e6\0a\f1\0a"
  "\f9\0a\0c\0b\0f\0b\10\0b\13\0b9\0b<\0bD\0bG\0bH\0bK\0bM\0bU\0bW\0b\5c\0b"
  "c\0bf\0bw\0b\82\0b\8a\0b\8e\0b\95\0b\99\0b\9f\0b\a3\0b\a4\0b\a8\0b\aa\0b"
  "\ae\0b\b9\0b\be\0b\c2\0b\c6\0b\cd\0b\d0\0b\d0\0b\d7\0b\d7\0b\e6\0b\fa\0b"
  "\00\0c9\0c<\0cM\0cU\0cZ\0c]\0c]\0c`\0cc\0cf\0co\0cw\0c\b9\0c\bc\0c\cd\0c"
  "\d5\0c\d6\0c\dd\0c\e3\0c\e6\0c\f3\0c\00\0dO\0dT\0dc\0df\0d\96\0d\9a\0d"
  "\bd\0d\c0\0d\c6\0d\ca\0d\ca\0d\cf\0d\df\0d\e6\0d\ef\0d\f2\0d\f4\0d\01\0e"
  ":\0e?\0e[\0e\81\0e\bd\0e\c0\0e\d9\0e\dc\0e\df\0e\00\0fl\0fq\0f\da\0f\00"
  "\10\c7\10\cd\10\cd\10\d0\10M\12P\12]\12`\12\8d\12\90\12\b5\12\b8\12\c5"
  "\12\c8\12\15\13\18\13Z\13]\13|\13\80\13\99\13\a0\13\f5\13\f8\13\fd\13\00"
  "\14\9c\16\a0\16\f8\16\00\17\15\17\1f\176\17@\17S\17`\17s\17\80\17\dd\17"
  "\e0\17\e9\17\f0\17\f9\17\00\18\19\18 \18x\18\80\18\aa\18\b0\18\f5\18\00"
  "\19+\190\19;\19@\19@\19D\19m\19p\19t\19\80\19\ab\19\b0\19\c9\19\d0\19\da"
  "\19\de\19\1b\1a\1e\1a|\1a\7f\1a\89\1a\90\1a\99\1a\a0\1a\ad\1a\b0\1a\ce"
  "\1a\00\1bL\1bP\1b\f3\1b\fc\1b7\1c;\1cI\1cM\1c\88\1c\90\1c\ba\1c\bd\1c\c7"
  "\1c\d0\1c\fa\1c\00\1d\15\1f\18\1f\1d\1f \1fE\1fH\1fM\1fP\1f}\1f\80\1f\d3"
  "\1f\d6\1f\ef\1f\f2\1f\fe\1f\10 ' 0 ^ p q t \9c \a0 \c0 \d0 \f0 \00!\8b"
  "!\90!&$@$J$`$s+v+\f3,\f9,'-----0-g-o-p-\7f-\96-\a0-].\80.\f3.\00/\d5/\f0"
  "/\fb/\010\960\990\ff0\051\e31\f01\8c\a4\90\a4\c6\a4\d0\a4+\a6@\a6\f7\a6"
  "\00\a7\ca\a7\d0\a7\d9\a7\f2\a7,\a80\a89\a8@\a8w\a8\80\a8\c5\a8\ce\a8\d9"
  "\a8\e0\a8S\a9_\a9|\a9\80\a9\d9\a9\de\a96\aa@\aaM\aaP\aaY\aa\5c\aa\c2\aa"
  "\db\aa\f6\aa\01\ab\06\ab\09\ab\0e\ab\11\ab\16\ab \abk\abp\ab\ed\ab\f0\ab"
  "\f9\ab\00\ac\a3\d7\b0\d7\c6\d7\cb\d7\fb\d7\00\f9m\fap\fa\d9\fa\00\fb\06"
  "\fb\13\fb\17\fb\1d\fb\c2\fb\d3\fb\8f\fd\92\fd\c7\fd\cf\fd\cf\fd\f0\fd\19"
  "\fe \fek\fep\fe\fc\fe\01\ff\be\ff\c2\ff\c7\ff\ca\ff\cf\ff\d2\ff\d7\ff\da"
  "\ff\dc\ff\e0\ff\ee\ff\fc\ff\fd\ff\ad\00\8b\03\8d\03\a2\030\05\90\05\1c"
  "\06\dd\06?\08_\08\e2\08\84\09\a9\09\b1\09\de\09\04\0a)\0a1\0a4\0a7\0a="
  "\0a]\0a\84\0a\8e\0a\92\0a\a9\0a\b1\0a\b4\0a\c6\0a\ca\0a\00\0b\04\0b)\0b"
  "1\0b4\0b^\0b\84\0b\91\0b\9b\0b\9d\0b\c9\0b\0d\0c\11\0c)\0cE\0cI\0cW\0c"
  "\8d\0c\91\0c\a9\0c\b4\0c\c5\0c\c9\0c\df\0c\f0\0c\0d\0d\11\0dE\0dI\0d\80"
  "\0d\84\0d\b2\0d\bc\0d\d5\0d\d7\0d\83\0e\85\0e\8b\0e\a4\0e\a6\0e\c5\0e\c7"
  "\0e\cf\0eH\0f\98\0f\bd\0f\cd\0f\c6\10I\12W\12Y\12\89\12\b1\12\bf\12\c1"
  "\12\d7\12\11\13\80\16m\17q\17\0e\18\1f\19_\1a\7f\1bX\1fZ\1f\5c\1f^\1f\b5"
  "\1f\c5\1f\dc\1f\f5\1f\8f \96+&-\a7-\af-\b7-\bf-\c7-\cf-\d7-\df-\9a.@00"
  "1\8f1\1f2\d2\a7\d4\a7\ce\a9\ff\a9'\ab/\ab7\fb=\fb?\fbB\fbE\fbS\feg\feu"
  "\fe\e7\ff\0c\00'\00;\00>\00\8f\01\9e\03{\05\8b\05\93\05\96\05\a2\05\b2"
  "\05\ba\05\86\07\b1\07\09\086\08V\08\f3\08\04\0a\14\0a\18\0a\7f\0e\aa\0e"
  "\bd\105\11\e0\11\12\12\87\12\89\12\8e\12\9e\12\04\13)\131\134\13:\13\5c"
  "\14\14\19\17\196\19\09\1c7\1c\a8\1c\07\1d\0a\1d;\1d>\1df\1di\1d\8f\1d\92"
  "\1d\11\1fo$_j\bfjZkbk\f4\af\fc\af\ff\afU\d4\9d\d4\ad\d4\ba\d4\bc\d4\c4"
  "\d4\06\d5\15\d5\1d\d5:\d5?\d5E\d5Q\d5\a0\da\07\e0\22\e0%\e0\e7\e7\ec\e7"
  "\ef\e7\ff\e7\04\ee \ee#\ee(\ee3\ee8\ee:\eeH\eeJ\eeL\eeP\eeS\eeX\eeZ\ee"
  "\5c\ee^\ee`\eec\eek\ees\eex\ee}\ee\7f\ee\8a\ee\a4\ee\aa\ee\c0\f0\d0\f0"
  "\be\fa\93\fb\00\00!\04\01\00\04\00\00\002\01\01\00\03\00\00\00%\04\01\00"
  "\05\00\00\00\c5\04\01\00\03\00\00\005\01\01\00\08\00\00\00=\01\01\00\07"
  "\00\00\00y\07\01\00\13\00\00\00\8c\07\01\00\13\00\00\00\9f\07\01\00\13"
  "";

import function runtime_fd_write(a:int, b:int, c:int, d:int):int; // func0

import function runtime_proc_exit(a:int); // func1

import function runtime_poll_oneoff(a:int, b:int, c:int, d:int):int; // func2

import function runtime_clock_time_get(a:int, b:long, c:int):int; // func3

import function runtime_args_sizes_get(a:int, b:int):int; // func4

import function runtime_args_get(a:int, b:int):int; // func5

import function imported_wasi_snapshot_preview1_random_get(a:int, b:int):int; // func6

function wasm_call_ctors() { // func7
}

function tinygo_unwind(a:int_ptr) { // func8
  if (88616[0]:ubyte) {
    asyncify_stop_rewind();
    88616[0]:byte = 0;
  } else {
    a[1] = stack_pointer;
    asyncify_start_unwind(a);
  }
}

function tinygo_launch(a:int_ptr) { // func9
  let t0 = stack_pointer;
  stack_pointer = a[3];
  call_indirect(a[1], a[0]);
  asyncify_stop_unwind();
  stack_pointer = t0;
}

function tinygo_rewind(a:int_ptr) { // func10
  let t0 = stack_pointer;
  stack_pointer = a[3];
  let t1, t2 = a[1], a[0];
  88616[0]:byte = 1;
  asyncify_start_rewind(a + 8);
  call_indirect(t1, t2);
  asyncify_stop_unwind();
  stack_pointer = t0;
}

function write(a:int, b:int, c:int):int { // func11
  var d:{ a:int, b:int, c:int, d:int }
  var e:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    d = d.d;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 16;
          stack_pointer = d;
          d.d = c;
          d.c = b;
          c = d + 4;
          b = d + 8;
        }
        if (eqz(g_b) | eqz(e)) {
          wasi_fd_write(a, b, 1, c);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          c = t0;
        }
        if (eqz(g_b)) {
          let t1 = {
                     if (c) {
                       88620[0]:int = select_if(8, c, c == 76);
                       -1;
                       goto B_g;
                     }
                     d.b;
                     label B_g:
                   }
          stack_pointer = d + 16;
          return t1;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function wasi_fd_write(a:int, b:int, c:int, d:{ a:int, b:int, c:int, d:int }):int { // func12
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    d = d.d;
  }
  var e:{ a:int, b:int, c:int, d:int } = 
    {
      if (eqz(g_b) |
          eqz(if (g_b == 2) {
                g_c[0]:int = g_c[0]:int - 4;
                (g_c[0]:int)[0]:int;
              } else {
                0
              })) {
        runtime_fd_write(a, b, c, d);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        a = t0;
      }
      if (eqz(g_b)) { return a & 65535 }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function wasi_random_get(a:int, b:{ a:int, b:int }):int { // func13
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = 
    {
      if (eqz(g_b) |
          eqz(if (g_b == 2) {
                g_c[0]:int = g_c[0]:int - 4;
                (g_c[0]:int)[0]:int;
              } else {
                0
              })) {
        imported_wasi_snapshot_preview1_random_get(a, b);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        a = t0;
      }
      if (eqz(g_b)) { return a & 65535 }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function dummy() { // func14
}

function strlen(a:int):int { // func15
  var b:ubyte_ptr;
  var d:int;
  b = a;
  if (eqz(b & 3)) goto B_b;
  if (eqz(b[0])) { return 0 }
  b = a + 1;
  if (eqz(b & 3)) goto B_b;
  if (eqz(b[0])) goto B_a;
  b = a + 2;
  if (eqz(b & 3)) goto B_b;
  if (eqz(b[0])) goto B_a;
  b = a + 3;
  if (eqz(b & 3)) goto B_b;
  if (eqz(b[0])) goto B_a;
  b = a + 4;
  if (b & 3) goto B_a;
  label B_b:
  var c:int = b - 4;
  b = b - 5;
  loop L_d {
    b = b + 4;
    if (
      ((16843008 - (d = (c = c + 4)[0]:int) | d) & -2139062144) ==
      -2139062144) continue L_d;
  }
  loop L_e {
    b = b + 1;
    let t0 = c[0]:ubyte;
    c = c + 1;
    if (t0) continue L_e;
  }
  label B_a:
  return b - a;
}

function getentropy(a:int, b:int):int { // func16
  var e:int;
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    c = c.c;
  }
  var d:{ a:int, b:int, c:int } = {
                                    if (g_b == 2) {
                                      g_c[0]:int = g_c[0]:int - 4;
                                      e = (g_c[0]:int)[0]:int;
                                    }
                                    if (if (g_b) {
                                          0
                                        } else {
                                          c = 29;
                                          b > 256;
                                        } &
                                        eqz(g_b)) goto B_d;
                                    if (eqz(g_b) | eqz(e)) {
                                      wasi_random_get(a, b);
                                      let t0 = 0;
                                      if (g_b == 1) goto B_b;
                                      c = t0;
                                    }
                                    if (eqz(g_b)) {
                                      if (c) goto B_d;
                                      return 0;
                                    }
                                    label B_d:
                                    if (eqz(g_b)) {
                                      88620[0]:int = c;
                                      return -1;
                                    }
                                    unreachable;
                                    label B_b:
                                  }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  g_c[0]:int = g_c[0]:int + 12;
  return 0;
}

function memcpy(a:{ a:byte, b:byte, c:byte, d:byte }, b:int, c:int):int { // func17
  var d:int;
  var f:int;
  var e:int;
  var g:int;
  e = {
        if (c <= 32) {
          if (eqz(b & 3) | eqz(c)) goto B_c;
          a.a = b[0]:ubyte;
          e = a + 1;
          e;
          if (eqz((d = b + 1) & 3) | eqz(f = c - 1)) goto B_b;
          a.b = b[1]:ubyte;
          e = a + 2;
          e;
          if (eqz((d = b + 2) & 3) | eqz(f = c - 2)) goto B_b;
          a.c = b[2]:ubyte;
          e = a + 3;
          e;
          if (eqz((d = b + 3) & 3) | eqz(f = c - 3)) goto B_b;
          a.d = b[3]:ubyte;
          f = c - 4;
          d = b + 4;
          a + 4;
          goto B_b;
        }
        memory_copy(a, b, c);
        return a;
        label B_c:
        f = c;
        d = b;
        a;
        label B_b:
      }
  c = e & 3;
  if (eqz(c)) {
    if (f < 16) {
      c = f;
      goto B_f;
    }
    c = f - 16;
    if (eqz(c & 16)) {
      e[0]:long@4 = d[0]:long@4;
      e[2]:long@4 = d[2]:long@4;
      e = e + 16;
      f = c;
      d = d + 16;
    }
    if (c < 16) goto B_f;
    c = f;
    loop L_i {
      e[0]:long@4 = d[0]:long@4;
      e[2]:long@4 = d[2]:long@4;
      e[4]:long@4 = d[4]:long@4;
      e[6]:long@4 = d[6]:long@4;
      e = e + 32;
      d = d + 32;
      c = c - 32;
      if (c > 15) continue L_i;
    }
    label B_f:
    if (c >= 8) {
      e[0]:long@4 = d[0]:long@4;
      e = e + 8;
      d = d + 8;
    }
    if (c & 4) {
      e[0]:int = d[0]:int;
      e = e + 4;
      d = d + 4;
    }
    if (c & 2) {
      e[0]:short@1 = d[0]:ushort@1;
      e = e + 2;
      d = d + 2;
    }
    if (eqz(c & 1)) goto B_a;
    e[0]:byte = d[0]:ubyte;
    return a;
  }
  c = {
        if (f >= 32) {
          e[0]:byte = (f = d[0]:int);
          br_table[B_s, B_r, ..B_p](c - 2)
          label B_s:
          e[1]:byte = f >> 8;
          e[6@4]:long@4 = (d + 6)[0]:long@2;
          e[2@4]:int = d[1]:int << 16 | f >> 16;
          b = d + 18;
          g = 14;
          d = (d + 14)[0]:int@2;
          f = 14;
          e + 18;
          goto B_o;
          label B_r:
          e[5@4]:long@4 = (d + 5)[0]:long@1;
          e[1@4]:int = d[1]:int << 24 | f >> 8;
          b = d + 17;
          g = 13;
          d = (d + 13)[0]:int@1;
          f = 15;
          e + 17;
          goto B_o;
        }
        b = {
              if (f < 16) {
                c = e;
                d;
                goto B_t;
              }
              e[0]:byte = d[0]:ubyte;
              e[1]:int@1 = d[1]:int@1;
              e[5]:long@1 = d[5]:long@1;
              e[13]:short@1 = d[13]:ushort@1;
              e[15]:byte = d[15]:ubyte;
              c = e + 16;
              d + 16;
              label B_t:
            }
        if (f & 8) goto B_n;
        goto B_m;
        label B_p:
        e[2]:byte = f >> 16;
        e[1]:byte = f >> 8;
        e[7@4]:long@4 = (d + 7)[0]:long@1;
        e[3@4]:int = d[1]:int << 8 | f >> 24;
        b = d + 19;
        g = 15;
        d = (d + 15)[0]:int@1;
        f = 13;
        e + 19;
        label B_o:
      }
  (e + g)[0]:int = d;
  label B_n:
  c[0]:long@1 = b[0]:long@1;
  c = c + 8;
  b = b + 8;
  label B_m:
  if (f & 4) {
    c[0]:int@1 = b[0]:int@1;
    c = c + 4;
    b = b + 4;
  }
  if (f & 2) {
    c[0]:short@1 = b[0]:ushort@1;
    c = c + 2;
    b = b + 2;
  }
  if (eqz(f & 1)) goto B_a;
  c[0]:byte = b[0]:ubyte;
  label B_a:
  return a;
}

function memset(a:{ a:byte, b:byte, c:byte, d:byte }, b:int, c:{ a:long, b:long, c:long, d:long }):int { // func18
  var g:int;
  if (c >= 33) {
    memory_fill(a, b, c);
    return a;
  }
  if (eqz(c)) goto B_b;
  a.a = b;
  var d:int = a + c;
  (d - 1)[0]:byte = b;
  if (c < 3) goto B_b;
  a.c = b;
  a.b = b;
  (d - 3)[0]:byte = b;
  (d - 2)[0]:byte = b;
  if (c < 7) goto B_b;
  a.d = b;
  (d - 4)[0]:byte = b;
  if (c < 9) goto B_b;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int } = 
    a + (g = 0 - a & 3);
  e.a = (d = (b & 255) * 16843009);
  c = e + (b = c - g & 60);
  (c - 4)[0]:int = d;
  if (b < 9) goto B_b;
  e.c = d;
  e.b = d;
  (c - 8)[0]:int = d;
  (c - 12)[0]:int = d;
  if (b < 25) goto B_b;
  e.g = d;
  e.f = d;
  e.e = d;
  e.d = d;
  (c - 16)[0]:int = d;
  (c - 20)[0]:int = d;
  (c - 24)[0]:int = d;
  (c - 28)[0]:int = d;
  b = b - (c = (e & 4) | 24);
  if (b < 32) goto B_b;
  var f:long = i64_extend_i32_u(d) * 4294967297L;
  c = c + e;
  loop L_c {
    c.d = f;
    c.c = f;
    c.b = f;
    c.a = f;
    c = c + 32;
    b = b - 32;
    if (b > 31) continue L_c;
  }
  label B_b:
  return a;
}

function arc4random_buf(a:int, b:{ a:int, b:int }) { // func19
  var c:int;
  var e:int;
  var d:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (select_if(g_b, 1, if (g_b) { 0 } else { 88624[0]:int })) {
          if (eqz(g_b) | eqz(c)) {
            getentropy(88632, 32);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { 88624[0]:long@4 = 2199023255553L }
        }
        if (eqz(g_b)) {
          if (eqz(b)) goto B_i;
          c = 88628[0]:int;
          loop L_j {
            if (c == 512) {
              if (b >= 512) {
                loop L_m {
                  chacha20_rng(a + e, 88632);
                  e = e + 512;
                  b = b - 512;
                  if (b > 511) continue L_m;
                }
              }
              if (eqz(b)) goto B_i;
              chacha20_rng(88664, 88632);
              88628[0]:int = 0;
              c = 0;
            }
            var f:int = c + 88664;
            d = 512 - c;
            c = d > b;
            memcpy(a + e, f, d = select_if(b, d, c));
            memset(88628[0]:int + 88664, 0, d);
            88628[0]:int = (c = 88628[0]:int + d);
            e = d + e;
            b = b - d;
            if (b) continue L_j;
          }
          label B_i:
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function chacha20_rng(a:long_ptr@1, b:long_ptr@1) { // func20
  var d:long_ptr@1;
  var e:long_ptr@1;
  var f:long_ptr@1;
  var c:long_ptr = stack_pointer + -64;
  stack_pointer = c;
  (c + 56)[0]:long = 0L;
  (c + 24)[0]:long = (d = b + 8)[0];
  (c + 32)[0]:long = (e = b + 16)[0];
  (c + 40)[0]:long = (f = b + 24)[0];
  c[6] = 0L;
  c[1] = rodata[1]:long;
  c[0] = rodata[0]:long;
  c[2] = b[0];
  chacha20_update(a, c);
  f[0] = (a + 24)[0]:long@1;
  e[0] = (a + 16)[0]:long@1;
  d[0] = (a + 8)[0]:long@1;
  b[0] = a[0];
  chacha20_update(a, c);
  chacha20_update(a - -64, c);
  chacha20_update(a + 128, c);
  chacha20_update(a + 192, c);
  chacha20_update(a + 256, c);
  chacha20_update(a + 320, c);
  chacha20_update(a + 384, c);
  chacha20_update(a + 448, c);
  stack_pointer = c - -64;
}

function chacha20_update(a:int_ptr@1, b:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int }) { // func21
  var ka:int;
  var la:int;
  var s:int = -2;
  var t:int = b.e;
  var c:int = t;
  var u:int = b.a;
  var g:int = u;
  var v:int = b.m;
  var h:int = v;
  var w:int = b.i;
  var i:int = w;
  var x:int = b.f;
  var d:int = x;
  var y:int = b.b;
  var j:int = y;
  var z:int = b.n;
  var k:int = z;
  var aa:int = b.j;
  var p:int = aa;
  var ba:int = b.g;
  var e:int = ba;
  var ca:int = b.c;
  var l:int = ca;
  var da:int = b.o;
  var q:int = da;
  var ea:int = b.k;
  var m:int = ea;
  var fa:int = b.h;
  var f:int = fa;
  var ga:int = b.d;
  var r:int = ga;
  var ha:int = b.p;
  var n:int = ha;
  var ia:int = b.l;
  var o:int = ia;
  loop L_a {
    n = (n ^ (r = f + r)) << 16;
    o = n + o;
    f = (o ^ f) << 12;
    var ja:int = f + r;
    r = 
      ja +
      (c = 
         ((i = 
             (h = 
                ((g = (c = ((i = (h = (h ^ (g = c + g)) << 16) + i) ^ c) << 12) + g) ^
                 h) <<
                8) +
             i) ^
          c) <<
         7);
    q = 
      (r ^
       (ka = 
          ((l = (e = ((m = (q = (q ^ (l = e + l)) << 16) + m) ^ e) << 12) + l) ^
           q) <<
          8)) <<
      16;
    p = 
      q +
      (la = 
         (k = 
            ((j = (d = ((p = (k = (k ^ (j = d + j)) << 16) + p) ^ d) << 12) + j) ^
             k) <<
            8) +
         p);
    c = (p ^ c) << 12;
    r = c + r;
    q = (r ^ q) << 8;
    p = q + p;
    c = (p ^ c) << 7;
    n = (n ^ ja) << 8;
    o = n + o;
    f = (o ^ f) << 7;
    l = f + l;
    k = (l ^ k) << 16;
    i = k + i;
    f = (i ^ f) << 12;
    l = f + l;
    k = (l ^ k) << 8;
    i = k + i;
    f = (i ^ f) << 7;
    m = m + ka;
    e = (m ^ e) << 7;
    j = e + j;
    h = (j ^ h) << 16;
    o = h + o;
    e = (o ^ e) << 12;
    j = e + j;
    h = (j ^ h) << 8;
    o = h + o;
    e = (o ^ e) << 7;
    n = (n ^ (g = (d = (d ^ la) << 7) + g)) << 16;
    m = n + m;
    d = (m ^ d) << 12;
    g = d + g;
    n = (g ^ n) << 8;
    m = n + m;
    d = (m ^ d) << 7;
    s = s + 2;
    if (s < 18) continue L_a;
  }
  b.m = h;
  b.a = g;
  b.e = c;
  b.i = i;
  b.f = d;
  b.n = k;
  b.b = j;
  b.j = p;
  b.g = e;
  b.o = q;
  b.c = l;
  b.k = m;
  b.h = f;
  b.p = n;
  b.d = r;
  b.l = o;
  a[60] = n + ha;
  a[56] = q + da;
  a[52] = k + z;
  a[48] = h + v;
  a[44] = o + ia;
  a[40] = m + ea;
  a[36] = p + aa;
  a[32] = i + w;
  a[28] = f + fa;
  a[24] = e + ba;
  a[20] = d + x;
  a[16] = c + t;
  a[12] = r + ga;
  a[8] = l + ca;
  a[4] = j + y;
  a[0] = g + u;
  b.m = b.m + 1;
}

function arc4random():int { // func22
  var a:int_ptr;
  var c:{ a:int, b:int }
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    a = g_c[0]:int;
    b = a[0];
    a = a[1];
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          a = stack_pointer - 16;
          stack_pointer = a;
          b = a + 12;
        }
        if (eqz(g_b) | eqz(c)) {
          arc4random_buf(b, 4);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          let t0 = a[3];
          stack_pointer = a + 16;
          return t0;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = b;
  c.b = a;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function internal_itoa_Itoa(a:{ a:int, b:int }, b:int) { // func23
  var d:int_ptr;
  var c:int;
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var f:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    f = f.e;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 32;
          stack_pointer = d;
          c = b >= 0;
        }
        b = {
              if (eqz(g_b)) {
                if (c) goto B_f;
                c = d + 16;
                b = 0 - b;
              }
              if (eqz(g_b) | eqz(e)) {
                internal_itoa_Uitoa(c, b);
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[4];
                f = d[5];
                b = d + 8;
              }
              if (eqz(g_b) | e == 1) {
                runtime_stringConcat(b, 65552, 1, c, f);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[2];
                d[3];
                goto B_e;
              }
              label B_f:
              c = select_if(c, d + 24, g_b);
              if (eqz(g_b) | e == 2) {
                internal_itoa_Uitoa(c, b);
                2;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                b
              } else {
                c = d[6];
                d[7];
              }
              label B_e:
            }
        if (eqz(g_b)) {
          a.a = c;
          a.b = b;
          stack_pointer = d + 32;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  g_c[0]:int = g_c[0]:int + 20;
}

function internal_itoa_Uitoa(a:{ a:int, b:int }, b:int) { // func24
  var c:int;
  var e:{ a:int, b:int, c:long }
  var d:int;
  var g:int;
  var f:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    c = g_c[0]:int;
    a = c[0]:int;
    b = c[1]:int;
    d = c[2]:int;
    e = c[3]:int;
    c = c[4]:int;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer;
          e = c - 32;
          stack_pointer = e;
        }
        if (eqz(g_b)) {
          if (eqz(b)) {
            b = 1;
            d = 65553;
            goto B_e;
          }
          (e + 24)[0]:int = 0;
          (e + 16)[0]:long = 0L;
          e.c = 0L;
          c = e + 8;
          g = c + 19;
          d = 0;
        }
        if (eqz(g_b)) {
          loop L_j {
            c = d + 19;
            if (b < 10) goto B_k;
            if (c > 19) goto B_h;
            (d + g)[0]:byte = (c = b / 10) * 246 + b + 48;
            d = d - 1;
            b = c;
            continue L_j;
            label B_k:
          }
          if (c > 19) goto B_h;
          c = d + e + 27;
          c[0]:byte = b | 48;
          b = 1 - d;
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_stringFromBytes(e, c, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = e.b;
          d = e.a;
          goto B_e;
        }
        label B_h:
        if (eqz(g_b) | f == 1) {
          runtime_lookupPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          a.a = d;
          a.b = b;
          stack_pointer = e + 32;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = d;
  f.d = e;
  f.e = c;
  g_c[0]:int = g_c[0]:int + 20;
}

function runtime_stringConcat(a:{ a:int, b:int }, b:int, c:int, d:int, e:int) { // func25
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    e = f.e;
    h = f.f;
    f = f.g;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          if (eqz(c)) {
            h = d;
            f = e;
            goto B_d;
          }
          if (eqz(e)) {
            h = b;
            f = c;
            goto B_d;
          }
          f = c + e;
        }
        if (eqz(g_b) | eqz(g)) {
          runtime_alloc(f);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          h = t0;
        }
        if (eqz(g_b)) {
          memory_copy(h, b, c);
          memory_copy(c + h, d, e);
        }
        label B_d:
        if (eqz(g_b)) {
          a.b = f;
          a.a = h;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = h;
  g.g = f;
  g_c[0]:int = g_c[0]:int + 28;
}

function runtime_stringFromBytes(a:{ a:int, b:int }, b:int, c:int) { // func26
  var d:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    d = d.d;
  }
  var e:{ a:int, b:int, c:int, d:int } = 
    {
      if (eqz(g_b) |
          eqz(if (g_b == 2) {
                g_c[0]:int = g_c[0]:int - 4;
                (g_c[0]:int)[0]:int;
              } else {
                0
              })) {
        runtime_alloc(c);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        d = t0;
      }
      if (eqz(g_b)) {
        memory_copy(d, b, c);
        a.b = c;
        a.a = d;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  g_c[0]:int = g_c[0]:int + 16;
}

function runtime_lookupPanic() { // func27
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67207, 18);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function math_bits_Mul64(a:{ a:long, b:long }, b:long, c:long) { // func28
  var d:long;
  var e:long;
  a.b = b * c;
  a.a =
    ((d = ((d = c & 4294967295L) * (e = b & 4294967295L) >> 32L) +
          d * (b = b >> 32L)) >>
     32L) +
    (c = c >> 32L) * b +
    (c * e + (d & 4294967295L) >> 32L);
}

function unicode_utf8_DecodeRuneInString(a:{ a:int, b:int }, b:{ a:ubyte, b:ubyte, c:byte, d:byte }, c:int) { // func29
  var g:int;
  var e:int;
  var i:int;
  a = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        var f:int = b.a;
        var d:int = (f + 65554)[0]:ubyte;
        var j:int = f - 245;
        if (j < -51) {
          e = 1;
          g = (f & (b = d & 1) - 1) | (0 - b & 65533);
          goto B_e;
        }
        e = 1;
        g = 65533;
        if ((d & 7) > c) goto B_e;
        if (c == 1) goto B_d;
        var h:int = b.b;
        if (h < ((d = d >> 3 & 30) + 65810)[0]:ubyte) goto B_e;
        if (h > (d + 65811)[0]:ubyte) goto B_e;
        if (j <= -22) {
          g = (h & 63) | (f & 31) << 6;
          e = 2;
          goto B_e;
        }
        if (c < 3) goto B_d;
        d = b.c;
        if (d > -65) goto B_e;
        if (j <= -6) {
          g = (d & 63) | ((h & 63) << 6 | (f & 15) << 12);
          e = 3;
          goto B_e;
        }
        if (c == 3) goto B_d;
        b = b.d;
        if (b > -65) goto B_e;
        g = (b & 63) | (((h & 63) << 12 | (f & 7) << 18) | (d & 63) << 6);
        e = 4;
        label B_e:
        a.a = g;
        a.b = e;
        return ;
        label B_d:
      }
      if (eqz(g_b) | eqz(i)) {
        runtime_lookupPanic();
        0;
        if (g_b == 1) goto B_a;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_a:
    }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function unicode_utf8_AppendRune(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int) { // func30
  var f:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    g = g_c[0]:int;
    a = g.a;
    b = g.b;
    c = g.c;
    d = g.d;
    e = g.e;
    f = g.f;
    g = g.g;
  }
  h = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 96;
          stack_pointer = f;
          g = e >= 128;
        }
        c = {
              if (eqz(g_b)) {
                if (g) goto B_f;
                f[83]:byte = e;
                e = f + 83;
              }
              if (eqz(g_b) | eqz(h)) {
                runtime_sliceAppend(f, b, e, c, d, 1, 1);
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = f[2]:int;
                d = f[1]:int;
                f[0]:int;
                goto B_e;
              }
              label B_f:
              g = select_if(g, e > 2047, g_b);
              if (eqz(g_b)) {
                if (g) goto B_j;
                f[85]:byte = (e & 63) | 128;
                f[84]:byte = e >> 6 | 192;
                g = f + 84;
                e = f + 16;
              }
              if (eqz(g_b) | h == 1) {
                runtime_sliceAppend(e, b, g, c, d, 2, 1);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = f[6]:int;
                d = f[5]:int;
                f[4]:int;
                goto B_e;
              }
              label B_j:
              g = select_if(g, e < 55296, g_b);
              if (eqz(g_b)) {
                if (eqz(g)) {
                  g = (e & -8192) != 57344;
                  if (g) goto B_n;
                }
                f[88]:byte = (e & 63) | 128;
                f[86]:byte = e >> 12 | 224;
                f[87]:byte = (e >> 6 & 63) | 128;
                g = f + 86;
                e = f + 32;
              }
              if (eqz(g_b) | h == 2) {
                runtime_sliceAppend(e, b, g, c, d, 3, 1);
                2;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = f[10]:int;
                d = f[9]:int;
                f[8]:int;
                goto B_e;
              }
              label B_n:
              g = select_if(g, e - 65536 > 1048575, g_b);
              if (eqz(g_b)) {
                if (g) goto B_s;
                f[92]:byte = (e & 63) | 128;
                f[89]:byte = e >> 18 | 240;
                f[91]:byte = (e >> 6 & 63) | 128;
                f[90]:byte = (e >> 12 & 63) | 128;
                g = f + 89;
                e = f + 48;
              }
              if (eqz(g_b) | h == 3) {
                runtime_sliceAppend(e, b, g, c, d, 4, 1);
                3;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = f[14]:int;
                d = f[13]:int;
                f[12]:int;
                goto B_e;
              }
              label B_s:
              if (eqz(g_b)) {
                f[95]:byte = 189;
                f[93]:short@1 = 49135;
                g = f + 93;
                e = f - -64;
              }
              if (eqz(g_b) | h == 4) {
                runtime_sliceAppend(e, b, g, c, d, 3, 1);
                4;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                c
              } else {
                e = f[18]:int;
                d = f[17]:int;
                f[16]:int;
              }
              label B_e:
            }
        if (eqz(g_b)) {
          a.a = c;
          a.b = d;
          a.c = e;
          stack_pointer = f + 96;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = h;
  g_c[0]:int = g_c[0]:int + 4;
  h = g_c[0]:int;
  h.a = a;
  h.b = b;
  h.c = c;
  h.d = d;
  h.e = e;
  h.f = f;
  h.g = g;
  g_c[0]:int = g_c[0]:int + 28;
}

function runtime_sliceAppend(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int, f:int, g:int) { // func31
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  var j:int;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    h = g_c[0]:int;
    a = h.a;
    b = h.b;
    c = h.c;
    d = h.d;
    e = h.e;
    f = h.f;
    g = h.g;
    j = h.h;
    h = h.i;
  }
  i = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          i = (g_c[0]:int)[0]:int;
        }
        h = select_if(h, d + f, g_b);
        if (eqz(g_b)) {
          if (eqz(f)) {
            j = b;
            goto B_d;
          }
          j = e < h;
        }
        if (eqz(g_b)) {
          if (eqz(j)) {
            j = b;
            goto B_g;
          }
          j = g * (e = select_if(1 << 32 - (e = clz(h)), 0, e));
        }
        if (eqz(g_b) | eqz(i)) {
          runtime_alloc(j);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          j = t0;
        }
        if (eqz(g_b)) {
          if (eqz(d)) goto B_g;
          memory_copy(j, b, d * g);
        }
        label B_g:
        if (eqz(g_b)) { memory_copy(j + d * g, c, f * g) }
        label B_d:
        if (eqz(g_b)) {
          a.c = e;
          a.b = h;
          a.a = j;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = i;
  g_c[0]:int = g_c[0]:int + 4;
  i = g_c[0]:int;
  i.a = a;
  i.b = b;
  i.c = c;
  i.d = d;
  i.e = e;
  i.f = f;
  i.g = g;
  i.h = j;
  i.i = h;
  g_c[0]:int = g_c[0]:int + 36;
}

function unicode_utf8_RuneCountInString(a:int, b:int):int { // func32
  var e:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var g:int;
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    e = c.c;
    f = c.d;
    g = c.e;
    c = c.f;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 32;
          stack_pointer = e;
          e[6]:int = 0;
          f = -1;
        }
        loop L_e {
          if (eqz(g_b)) {
            g = e + 8;
            c = e + 24;
          }
          if (eqz(g_b) | eqz(d)) {
            runtime_stringNext(g, a, b, c);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            f = f + 1;
            g = e[8]:ubyte;
            if (g) continue L_e;
          }
        }
        if (eqz(g_b)) {
          stack_pointer = e + 32;
          return f;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = e;
  d.d = f;
  d.e = g;
  d.f = c;
  g_c[0]:int = g_c[0]:int + 24;
  return 0;
}

function runtime_stringNext(a:{ a:byte, b:int, c:int }, b:{ a:int, b:int, c:int, d:int, e:int }, c:int, d:int_ptr) { // func33
  var h:int;
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var i:int;
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    d = e.c;
    f = e.d;
    h = e.e;
    c = e.b;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          i = (g_c[0]:int)[0]:int;
        }
        d = {
              if (eqz(g_b | eqz(select_if(1, d, g_b)))) {
                if (c <= (h = d[0])) {
                  h = 0;
                  c = 0;
                  0;
                  goto B_d;
                }
                var g:byte_ptr = b + h;
                b = g[0];
                if (b >= 0) {
                  f = 1;
                  c = b;
                  goto B_e;
                }
                e = c - h;
                if ((b & -32) == -64) {
                  c = 65533;
                  if (e < 2) goto B_f;
                  f = 1;
                  g = (g + 1)[0]:ubyte;
                  if ((g & 192) != 128) goto B_e;
                  b = b & 31;
                  if (b < 2) goto B_e;
                  c = (g & 63) | b << 6;
                  f = 2;
                  goto B_e;
                }
                if ((b & -16) == -32) {
                  c = 65533;
                  if (e < 3) goto B_f;
                  f = 1;
                  e = (g + 1)[0]:ubyte;
                  if ((e & 192) != 128) goto B_e;
                  g = (g + 2)[0]:ubyte;
                  if ((g & 192) != 128) goto B_e;
                  b = (e & 63) << 6 | (e = b & 15) << 12;
                  if (b < 2048 | (e <= 13 & b > 55295)) goto B_e;
                  c = (g & 63) | b;
                  f = 3;
                  goto B_e;
                }
                f = 1;
                c = 65533;
                if ((b & -8) != -16 | e < 4) goto B_e;
                e = (g + 1)[0]:ubyte;
                if ((e & 192) != 128) goto B_e;
                i = (g + 2)[0]:ubyte;
                if ((i & 192) != 128) goto B_e;
                g = (g + 3)[0]:ubyte;
                if ((g & 192) != 128) goto B_e;
                b = (b & 7) << 18 | (e & 63) << 12;
                if (b - 65536 > 1048575) goto B_e;
                c = ((g & 63) | (i & 63) << 6) | b;
                f = 4;
                goto B_e;
              }
              if (eqz(g_b) | eqz(i)) {
                runtime_nilPanic();
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_f:
              f = select_if(f, 1, g_b);
              label B_e:
              if (g_b) {
                d
              } else {
                d[0] = f + h;
                1;
              }
              label B_d:
            }
        if (eqz(g_b)) {
          a.b = h;
          a.a = d & 1;
          a.c = c;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = c;
  b.c = d;
  b.d = f;
  b.e = h;
  g_c[0]:int = g_c[0]:int + 20;
}

function Size(a:int):int { // func34
  var b:int;
  var d:int;
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
  }
  c = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        d = (g_c[0]:int)[0]:int;
      }
      b = select_if(b, eqz(a), g_b);
      if (eqz(g_b)) {
        if (b) goto B_d;
        b = a & 3;
      }
      if (eqz(g_b)) {
        if (b) goto B_l;
        b = 1;
        br_table[B_f, B_l, B_f, B_n, B_l, B_j, B_l, B_f, B_n, B_l, B_j, B_l, B_l, B_j, B_j, B_m, B_j, B_l, B_l, B_j, B_l, B_k, B_i, B_j, B_l, B_g, ..B_d](
          (a[0]:ubyte & 31) - 1)
        label B_n:
        return 2;
        label B_m:
        return 16;
        label B_l:
        return 4;
        label B_k:
        return 12;
        label B_j:
        return 8;
        label B_i:
      }
      if (eqz(g_b) | eqz(d)) {
        elem(a);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        b = t0;
      }
      if (eqz(g_b) | d == 1) {
        Size(b);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        b = t1;
      }
      if (eqz(g_b) | d == 2) {
        Len(a);
        let t2 = 2;
        if (g_b == 1) goto B_b;
        a = t2;
      }
      if (eqz(g_b)) { return a * b }
      label B_g:
      if (eqz(g_b) | d == 3) {
        underlying(a);
        let t3 = 3;
        if (g_b == 1) goto B_b;
        a = t3;
      }
      if (eqz(g_b)) { b = a[3]:int }
      label B_f:
      if (eqz(g_b)) { return b }
      label B_d:
      if (eqz(g_b) | d == 4) {
        runtime_panic(86192, 66384);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function elem(a:{ a:ubyte, b:int, c:int }):int { // func35
  var c:int;
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(select_if(g_b, 1, a & 3))) { return a - 1 }
        if (eqz(g_b) | eqz(c)) {
          underlying(a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          if (eqz(a)) goto B_g;
          if (eqz(a & 3)) {
            b = a.a & 31;
            if (b > 25) goto B_g;
            if (1 << b & 46661632) goto B_h;
            if (b != 21) goto B_g;
          }
          return a.b;
          label B_h:
          return a.c;
          label B_g:
        }
        if (eqz(g_b) | c == 1) {
          runtime_panic(86764, 88544);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function Len(a:int):int { // func36
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b | select_if(0, a & 3, g_b))) {
          if ((a[0]:ubyte & 31) == 23) goto B_d
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_panic(86764, 88568);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b) | b == 1) {
          underlying(a);
          let t0 = 1;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) { return a[3]:int }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function underlying(a:int_ptr):int { // func37
  var b:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = 
    {
      if (eqz(g_b) |
          eqz(if (g_b == 2) {
                g_c[0]:int = g_c[0]:int - 4;
                (g_c[0]:int)[0]:int;
              } else {
                0
              })) {
        isNamed(a);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        b = t0;
      }
      if (eqz(g_b)) { return if (b & 1) { a[2] } else { a } }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function runtime_panic(a:int, b:{ a:int, b:int }) { // func38
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = {
                             if (eqz(g_b) |
                                 eqz(if (g_b == 2) {
                                       g_c[0]:int = g_c[0]:int - 4;
                                       (g_c[0]:int)[0]:int;
                                     } else {
                                       0
                                     })) {
                               runtime_panicOrGoexit(a, b);
                               0;
                               if (g_b == 1) goto B_b;
                             }
                             if (eqz(g_b)) { unreachable }
                             return ;
                             label B_b:
                           }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function isNamed(a:ubyte_ptr):int { // func39
  var b:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          return if (a & 3) {
                   0
                 } else {
                   if (eqz(a)) goto B_d;
                   (a[0] & 32) >> 5;
                 }
          label B_d:
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_nilPanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function runtime_nilPanic() { // func40
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67184, 23);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function NumField(a:int):int { // func41
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b | select_if(0, a & 3, g_b))) {
          if ((a[0]:ubyte & 31) == 26) goto B_d
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_panic(86764, 88576);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b) | b == 1) {
          underlying(a);
          let t0 = 1;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) { return a[8]:ushort }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function String(a:{ a:int, b:int }, b:{ a:ubyte, b:ushort }) { // func42
  var d:int;
  var c:int;
  var f:int;
  var g:int;
  var l:ubyte_ptr;
  var e:int;
  var n:int;
  var r:int;
  var q:int;
  var i:int;
  var j:int;
  var p:int;
  var o:int;
  var k:int;
  var m:int;
  var s:int;
  var t:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 72;
    h = g_c[0]:int;
    a = h.a;
    c = h.c;
    d = h.d;
    e = h.e;
    g = h.f;
    i = h.g;
    j = h.h;
    k = h.i;
    l = h.j;
    m = h.k;
    n = h.l;
    o = h.m;
    p = h.n;
    q = h.o;
    r = h.p;
    s = h.q;
    t = h.r;
    b = h.b;
  }
  h = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = stack_pointer;
        c = d - 672;
        stack_pointer = c;
      }
      if (eqz(g_b) | eqz(f)) {
        isNamed(b);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        d = t0;
      }
      d = select_if(d, eqz(d & 1), g_b);
      if (eqz(g_b)) {
        if (eqz(d)) {
          d = c + 8;
          internal_reflectlite_readStringZ(d, b + 16);
          g = c[3]:int;
          b = eqz(g);
          if (b) goto B_h;
          l = c[2]:int;
          if (l[0] != 46) goto B_f;
          g = g - 1;
          l = l + 1;
          goto B_f;
        }
        if (eqz(b)) {
          d = 0;
          goto B_g;
        }
        d = b & 3;
      }
      if (eqz(g_b)) {
        if (d) goto B_r;
        g = 12;
        l = 66434;
        d = b.a & 31;
        e = d - 19;
        br_table[B_t, B_f, B_r, B_q, B_p, B_g, B_o, B_n, ..B_g](e);
        label B_t:
        d = c - -64;
      }
      if (eqz(g_b) | f == 1) {
        elem(b);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        e = t1;
      }
      if (eqz(g_b) | f == 2) {
        String(d, e);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = (b.a & 31) != 19;
        if (d) goto B_m;
        d = c[17]:int;
        n = c[16]:int;
        g = 4;
        l = 66224;
        b = b.b - 1;
      }
      if (eqz(g_b)) {
        br_table[B_z, B_l, B_x, ..B_f](b)
        label B_z:
        b = c + 32;
      }
      if (eqz(g_b) | f == 3) {
        runtime_stringConcat(b, 66399, 7, n, d);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[9]:int;
        l = c[8]:int;
        goto B_f;
      }
      label B_x:
      if (eqz(g_b)) {
        b = eqz(d);
        if (b) goto B_h;
        b = n[0]:ubyte != 60;
      }
      if (eqz(g_b)) {
        if (b) goto B_da;
        b = c + 48;
      }
      if (eqz(g_b) | f == 4) {
        runtime_stringConcat(b, 66406, 6, n, d);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = c[12]:int;
        e = c[13]:int;
        b = c + 40;
      }
      if (eqz(g_b) | f == 5) {
        runtime_stringConcat(b, d, e, 68115, 1);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[11]:int;
        l = c[10]:int;
        goto B_f;
      }
      label B_da:
      b = select_if(b, c + 56, g_b);
      if (eqz(g_b) | f == 6) {
        runtime_stringConcat(b, 66412, 5, n, d);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[15]:int;
        l = c[14]:int;
        goto B_f;
      }
      label B_r:
      d = select_if(d, c + 80, g_b);
      if (eqz(g_b) | f == 7) {
        elem(b);
        let t2 = 7;
        if (g_b == 1) goto B_b;
        b = t2;
      }
      if (eqz(g_b) | f == 8) {
        String(d, b);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = c[20]:int;
        e = c[21]:int;
        b = c + 72;
      }
      if (eqz(g_b) | f == 9) {
        runtime_stringConcat(b, 66417, 1, d, e);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[19]:int;
        l = c[18]:int;
        goto B_f;
      }
      label B_q:
      d = select_if(d, c + 96, g_b);
      if (eqz(g_b) | f == 10) {
        elem(b);
        let t3 = 10;
        if (g_b == 1) goto B_b;
        b = t3;
      }
      if (eqz(g_b) | f == 11) {
        String(d, b);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = c[24]:int;
        e = c[25]:int;
        b = c + 88;
      }
      if (eqz(g_b) | f == 12) {
        runtime_stringConcat(b, 66418, 2, d, e);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[23]:int;
        l = c[22]:int;
        goto B_f;
      }
      label B_p:
      d = select_if(d, c + 136, g_b);
      if (eqz(g_b) | f == 13) {
        Len(b);
        let t4 = 13;
        if (g_b == 1) goto B_b;
        e = t4;
      }
      if (eqz(g_b) | f == 14) {
        internal_itoa_Itoa(d, e);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[35]:int;
        e = c[34]:int;
        d = c + 128;
      }
      if (eqz(g_b) | f == 15) {
        runtime_stringConcat(d, 66420, 1, e, g);
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[33]:int;
        e = c[32]:int;
        d = c + 120;
      }
      if (eqz(g_b) | f == 16) {
        runtime_stringConcat(d, e, g, 66421, 1);
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[31]:int;
        l = c[30]:int;
        d = c + 112;
      }
      if (eqz(g_b) | f == 17) {
        elem(b);
        let t5 = 17;
        if (g_b == 1) goto B_b;
        b = t5;
      }
      if (eqz(g_b) | f == 18) {
        String(d, b);
        18;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = c[28]:int;
        e = c[29]:int;
        b = c + 104;
      }
      if (eqz(g_b) | f == 19) {
        runtime_stringConcat(b, l, g, d, e);
        19;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[27]:int;
        l = c[26]:int;
        goto B_f;
      }
      label B_o:
      d = select_if(d, c + 176, g_b);
      if (eqz(g_b) | f == 20) {
        key(b);
        let t6 = 20;
        if (g_b == 1) goto B_b;
        e = t6;
      }
      if (eqz(g_b) | f == 21) {
        String(d, e);
        21;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[45]:int;
        e = c[44]:int;
        d = c + 168;
      }
      if (eqz(g_b) | f == 22) {
        runtime_stringConcat(d, 85955, 4, e, g);
        22;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[43]:int;
        e = c[42]:int;
        d = c + 160;
      }
      if (eqz(g_b) | f == 23) {
        runtime_stringConcat(d, e, g, 66421, 1);
        23;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[41]:int;
        l = c[40]:int;
        d = c + 152;
      }
      if (eqz(g_b) | f == 24) {
        elem(b);
        let t7 = 24;
        if (g_b == 1) goto B_b;
        b = t7;
      }
      if (eqz(g_b) | f == 25) {
        String(d, b);
        25;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = c[38]:int;
        e = c[39]:int;
        b = c + 144;
      }
      if (eqz(g_b) | f == 26) {
        runtime_stringConcat(b, l, g, d, e);
        26;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[37]:int;
        l = c[36]:int;
        goto B_f;
      }
      label B_n:
      if (eqz(g_b) | f == 27) {
        NumField(b);
        let t8 = 27;
        if (g_b == 1) goto B_b;
        r = t8;
      }
      if (eqz(g_b)) {
        if (eqz(r)) {
          g = 9;
          l = 66422;
          goto B_f;
        }
        t = r - 1;
        p = 66446;
        q = 0;
        o = 8;
      }
      loop L_wb {
        d = select_if(d, q == r, g_b);
        if (eqz(g_b)) {
          if (d) goto B_yb;
          d = c + 624;
        }
        if (eqz(g_b) | f == 28) {
          rawField(d, b, q);
          28;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = c[162]:int;
          n = c[161]:int;
          g = c[160]:int;
          i = c[157]:int;
          e = c[156]:int;
          d = c + 616;
        }
        if (eqz(g_b) | f == 29) {
          runtime_stringConcat(d, 68314, 1, e, i);
          29;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = c[155]:int;
          e = c[154]:int;
          d = c + 608;
        }
        if (eqz(g_b) | f == 30) {
          runtime_stringConcat(d, e, i, 68314, 1);
          30;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = c[152]:int;
          e = c + 600;
          d = c[153]:int;
        }
        if (eqz(g_b) | f == 31) {
          String(e, g);
          31;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = c[150]:int;
          j = c[151]:int;
          e = c + 592;
        }
        if (eqz(g_b) | f == 32) {
          runtime_stringConcat(e, i, d, g, j);
          32;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = c[149]:int;
          e = c[148]:int;
          d = c + 584;
        }
        if (eqz(g_b) | f == 33) {
          runtime_stringConcat(d, p, o, e, g);
          33;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          o = c[147]:int;
          p = c[146]:int;
          d = eqz(l);
          if (d) goto B_xb;
          g = l * 3;
          d = g < -1;
        }
        if (eqz(g_b)) {
          if (d) goto B_mc;
          g = g / 2;
        }
        if (eqz(g_b) | f == 34) {
          runtime_alloc(g);
          let t9 = 34;
          if (g_b == 1) goto B_b;
          d = t9;
        }
        if (eqz(g_b)) {
          c[661]:byte = 34;
          i = c + 661;
          e = c + 568;
        }
        if (eqz(g_b) | f == 35) {
          runtime_sliceAppend(e, d, i, 0, g, 1, 1);
          35;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j = c[143]:int;
          k = c[142]:int;
          i = c[144]:int;
        }
        loop L_sc {
          d = select_if(d, l <= 0, g_b);
          if (eqz(g_b)) {
            if (d) goto B_xc;
            g = 1;
            d = n[0]:byte;
            e = d >= 0;
          }
          if (eqz(g_b)) {
            if (e) goto B_zc;
            d = c + 520;
          }
          if (eqz(g_b) | f == 36) {
            unicode_utf8_DecodeRuneInString(d, n, l);
            36;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d = c[130]:int;
            g = c[131]:int;
            e = g != 1;
            if (e) goto B_zc;
            e = d != 65533;
            if (e) goto B_zc;
            d = c + 232;
          }
          if (eqz(g_b) | f == 37) {
            runtime_sliceAppend(d, k, 82134, j, i, 2, 1);
            37;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = n[0]:ubyte >> 4;
            d = g == 15;
            if (d) goto B_h;
            d = c[60]:int;
            i = c[59]:int;
            j = c[58]:int;
            c[662]:byte = (g + 65867)[0]:ubyte;
            g = c + 662;
            e = c + 216;
          }
          if (eqz(g_b) | f == 38) {
            runtime_sliceAppend(e, j, g, i, d, 1, 1);
            38;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = n[0]:ubyte & 15;
            d = g == 15;
            if (d) goto B_h;
            d = c[56]:int;
            i = c[55]:int;
            j = c[54]:int;
            c[663]:byte = (g + 65867)[0]:ubyte;
            g = 1;
            k = c + 663;
            e = c + 200;
          }
          if (eqz(g_b) | f == 39) {
            runtime_sliceAppend(e, j, k, i, d, 1, 1);
            39;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[52]:int;
            j = c[51]:int;
            k = c[50]:int;
            goto B_tc;
          }
          label B_zc:
          if (eqz(g_b)) {
            c[166]:int = 0;
            e = d == 92;
          }
          if (eqz(g_b)) {
            if (eqz(e)) {
              e = d != 34;
              if (e) goto B_kd;
            }
            c[670]:byte = 92;
            m = c + 670;
            e = c + 504;
          }
          if (eqz(g_b) | f == 40) {
            runtime_sliceAppend(e, k, m, j, i, 1, 1);
            40;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[671]:byte = d;
            i = c + 671;
            j = c[127]:int;
            k = c[128]:int;
            e = c[126]:int;
            d = c + 488;
          }
          if (eqz(g_b) | f == 41) {
            runtime_sliceAppend(d, e, i, j, k, 1, 1);
            41;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[124]:int;
            j = c[123]:int;
            k = c[122]:int;
            goto B_tc;
          }
          label B_kd:
          if (eqz(g_b)) {
            if (d > 255) goto B_sd;
            e = d - 32 < 95;
            if (e) goto B_wc;
            if (d == 173 | d < 161) goto B_sd;
            c[665]:byte = (e = (d & 63) | 128);
            c[664]:byte = d >> 6 | 192;
            d = 2;
            goto B_uc;
            label B_sd:
            e = d - 7;
          }
          if (eqz(g_b)) {
            br_table[B_td, B_be, B_wd, B_yd, B_vd, B_zd, B_xd, ..B_ud](e)
            label B_be:
            d = c + 392;
          }
          if (eqz(g_b) | f == 42) {
            runtime_sliceAppend(d, k, 82122, j, i, 2, 1);
            42;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[100]:int;
            j = c[99]:int;
            k = c[98]:int;
            goto B_tc;
          }
          label B_zd:
          d = select_if(d, c + 408, g_b);
          if (eqz(g_b) | f == 43) {
            runtime_sliceAppend(d, k, 82124, j, i, 2, 1);
            43;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[104]:int;
            j = c[103]:int;
            k = c[102]:int;
            goto B_tc;
          }
          label B_yd:
          d = select_if(d, c + 424, g_b);
          if (eqz(g_b) | f == 44) {
            runtime_sliceAppend(d, k, 82126, j, i, 2, 1);
            44;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[108]:int;
            j = c[107]:int;
            k = c[106]:int;
            goto B_tc;
          }
          label B_xd:
          d = select_if(d, c + 440, g_b);
          if (eqz(g_b) | f == 45) {
            runtime_sliceAppend(d, k, 82128, j, i, 2, 1);
            45;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[112]:int;
            j = c[111]:int;
            k = c[110]:int;
            goto B_tc;
          }
          label B_wd:
          d = select_if(d, c + 456, g_b);
          if (eqz(g_b) | f == 46) {
            runtime_sliceAppend(d, k, 82130, j, i, 2, 1);
            46;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[116]:int;
            j = c[115]:int;
            k = c[114]:int;
            goto B_tc;
          }
          label B_vd:
          d = select_if(d, c + 472, g_b);
          if (eqz(g_b) | f == 47) {
            runtime_sliceAppend(d, k, 82132, j, i, 2, 1);
            47;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[120]:int;
            j = c[119]:int;
            k = c[118]:int;
            goto B_tc;
          }
          label B_ud:
          e = select_if(e, d < 32, g_b);
          if (eqz(g_b)) {
            if (eqz(e)) {
              e = d != 127;
              if (e) goto B_oe;
            }
            e = c + 296;
          }
          if (eqz(g_b) | f == 48) {
            runtime_sliceAppend(e, k, 82134, j, i, 2, 1);
            48;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = d >> 4 & 15;
            if (i == 15) goto B_h;
            j = c[76]:int;
            k = c[75]:int;
            m = c[74]:int;
            c[670]:byte = (i + 65867)[0]:ubyte;
            i = c + 670;
            e = c + 280;
          }
          if (eqz(g_b) | f == 49) {
            runtime_sliceAppend(e, m, i, k, j, 1, 1);
            49;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d = d & 15;
            if (d == 15) goto B_h;
            i = c[72]:int;
            j = c[71]:int;
            k = c[70]:int;
            c[671]:byte = (d + 65867)[0]:ubyte;
            e = c + 671;
            d = c + 264;
          }
          if (eqz(g_b) | f == 50) {
            runtime_sliceAppend(d, k, e, j, i, 1, 1);
            50;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[68]:int;
            j = c[67]:int;
            k = c[66]:int;
            goto B_tc;
          }
          label B_oe:
          if (eqz(g_b)) {
            if (d >= 55296) {
              e = 65533;
              m = d - 57344 >= 1056768;
              if (m) goto B_vc;
            }
            if (d < 65536) {
              e = d;
              goto B_vc;
            }
            e = c + 360;
          }
          if (eqz(g_b) | f == 51) {
            runtime_sliceAppend(e, k, 82138, j, i, 2, 1);
            51;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            m = 28;
            j = c[91]:int;
            k = c[90]:int;
            i = c[92]:int;
          }
          loop L_cf {
            if (eqz(g_b)) {
              e = m < 0;
              if (e) goto B_tc;
              e = d >> select_if(31, m, m >= 31) & 15;
              if (e == 15) goto B_h;
              c[671]:byte = (e + 65867)[0]:ubyte;
              s = c + 671;
              e = c + 344;
            }
            if (eqz(g_b) | f == 52) {
              runtime_sliceAppend(e, k, s, j, i, 1, 1);
              52;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              m = m - 4;
              i = c[88]:int;
              j = c[87]:int;
              k = c[86]:int;
              continue L_cf;
            }
          }
          label B_td:
          d = select_if(d, c + 376, g_b);
          if (eqz(g_b) | f == 53) {
            runtime_sliceAppend(d, k, 82120, j, i, 2, 1);
            53;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[96]:int;
            j = c[95]:int;
            k = c[94]:int;
            goto B_tc;
          }
          label B_xc:
          if (eqz(g_b)) {
            c[664]:byte = 34;
            e = c + 664;
            d = c + 552;
          }
          if (eqz(g_b) | f == 54) {
            runtime_sliceAppend(d, k, e, j, i, 1, 1);
            54;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = c[139]:int;
            e = c[138]:int;
            d = c + 544;
          }
          if (eqz(g_b) | f == 55) {
            runtime_stringFromBytes(d, e, g);
            55;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = c[137]:int;
            e = c[136]:int;
            d = c + 536;
          }
          if (eqz(g_b) | f == 56) {
            runtime_stringConcat(d, 68314, 1, e, g);
            56;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = c[135]:int;
            e = c[134]:int;
            d = c + 528;
          }
          if (eqz(g_b) | f == 57) {
            runtime_stringConcat(d, p, o, e, g);
            57;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            o = c[133]:int;
            p = c[132]:int;
            goto B_xb;
          }
          label B_wc:
          if (eqz(g_b)) {
            c[664]:byte = d;
            d = 1;
            goto B_uc;
          }
          label B_vc:
          d = select_if(d, c + 328, g_b);
          if (eqz(g_b) | f == 58) {
            runtime_sliceAppend(d, k, 82136, j, i, 2, 1);
            58;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[84]:int;
            j = c[83]:int;
            k = c[82]:int;
            d = 12;
          }
          loop L_uf {
            if (eqz(g_b)) {
              m = d < 0;
              if (m) goto B_tc;
              m = e >> select_if(31, d, d >= 31) & 15;
              if (m == 15) goto B_h;
              c[671]:byte = (m + 65867)[0]:ubyte;
              s = c + 671;
              m = c + 312;
            }
            if (eqz(g_b) | f == 59) {
              runtime_sliceAppend(m, k, s, j, i, 1, 1);
              59;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              d = d - 4;
              i = c[80]:int;
              j = c[79]:int;
              k = c[78]:int;
              continue L_uf;
            }
          }
          label B_uc:
          if (eqz(g_b)) {
            m = c + 664;
            e = c + 248;
          }
          if (eqz(g_b) | f == 60) {
            runtime_sliceAppend(e, k, m, j, i, d, 1);
            60;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            j = c[63]:int;
            k = c[62]:int;
            i = c[64]:int;
          }
          label B_tc:
          if (eqz(g_b)) {
            d = g > l;
            if (d) goto B_mc;
            l = l - g;
            n = g + n;
            continue L_sc;
          }
        }
        label B_mc:
        if (eqz(g_b) | f == 61) {
          runtime_slicePanic();
          61;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_yb:
        b = select_if(b, c + 184, g_b);
        if (eqz(g_b) | f == 62) {
          runtime_stringConcat(b, p, o, 66432, 2);
          62;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = c[47]:int;
          l = c[46]:int;
          goto B_f;
        }
        label B_xb:
        d = select_if(d, q >= t, g_b);
        if (eqz(g_b)) {
          if (d) goto B_gg;
          d = c + 192;
        }
        if (eqz(g_b) | f == 63) {
          runtime_stringConcat(d, p, o, 66431, 1);
          63;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          p = c[48]:int;
          o = c[49]:int;
        }
        label B_gg:
        if (eqz(g_b)) {
          q = q + 1;
          continue L_wb;
        }
      }
      label B_m:
      if (eqz(g_b) | f == 64) {
        runtime_panic(86764, 88584);
        64;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_l:
      b = select_if(b, c + 24, g_b);
      if (eqz(g_b) | f == 65) {
        runtime_stringConcat(b, 66392, 7, n, d);
        65;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = c[7]:int;
        l = c[6]:int;
        goto B_f;
      }
      label B_h:
      if (eqz(g_b) | f == 66) {
        runtime_lookupPanic();
        66;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      b = select_if(b, c + 16, g_b);
      if (eqz(g_b) | f == 67) {
        String_1(b, d);
        67;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[4]:int;
        g = c[5]:int;
      }
      label B_f:
      if (eqz(g_b)) {
        a.a = l;
        a.b = g;
        stack_pointer = c + 672;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = h;
  g_c[0]:int = g_c[0]:int + 4;
  h = g_c[0]:int;
  h.a = a;
  h.b = b;
  h.c = c;
  h.d = d;
  h.e = e;
  h.f = g;
  h.g = i;
  h.h = j;
  h.i = k;
  h.j = l;
  h.k = m;
  h.l = n;
  h.m = o;
  h.n = p;
  h.o = q;
  h.p = r;
  h.q = s;
  h.r = t;
  g_c[0]:int = g_c[0]:int + 72;
}

function internal_reflectlite_readStringZ(a:{ a:int, b:int }, b:int) { // func43
  var c:int;
  loop L_a {
    if ((b + c)[0]:ubyte) {
      c = c + 1;
      continue L_a;
    }
  }
  a.b = c;
  a.a = b;
}

function key(a:int):int { // func44
  var d:int;
  var c:int;
  var b:{ a:int, b:int }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 8;
          b = g_c[0]:int;
          a = b.a;
          c = b.b;
        }
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(d)) {
          underlying(a);
          let t0 = 0;
          if (g_b == 1) goto B_a;
          a = t0;
        }
        if (eqz(g_b | ((c = select_if(c, eqz(a), g_b)) | (a & 3)))) {
          if ((a[0]:ubyte & 31) == 25) goto B_e
        }
        if (eqz(g_b) | d == 1) {
          runtime_panic(86764, 88552);
          1;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) { return a[3]:int }
        unreachable;
        label B_a:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = c;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function rawField(a:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:byte }, b:ubyte_ptr, c:int) { // func45
  var g:{ a:int, b:int, c:int, d:int }
  var f:ubyte_ptr;
  var k:int;
  var j:int;
  var l:int;
  var e:int;
  var h:int;
  var i:int_ptr;
  var m:int;
  var n:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 48;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    e = d.d;
    f = d.e;
    g = d.f;
    h = d.g;
    i = d.h;
    j = d.i;
    l = d.j;
    m = d.k;
    n = d.l;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          k = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 16;
          stack_pointer = g;
          f = b & 3;
        }
        if (eqz(g_b)) {
          if (f) goto B_f;
          f = (b[0] & 31) != 26;
          if (f) goto B_f;
        }
        if (eqz(g_b) | eqz(k)) {
          underlying(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          j = t0;
        }
        if (eqz(g_b)) { b = c >= j[8]:ushort }
        if (eqz(g_b)) {
          if (b) goto B_j;
          b = j + (c << 3);
          f = (b + 24)[0]:int;
          l = f + 1;
          if (eqz(l)) goto B_e;
          i = b + 20;
          m = f[0];
          n = 0;
          h = 0;
          c = 0;
          b = 1;
        }
        loop L_l {
          e = select_if(e, b != 6, g_b);
          if (eqz(g_b)) {
            if (eqz(e)) {
              b = 0;
              goto B_o;
            }
            e = (b + f)[0]:byte;
            if (e < 0) goto B_m;
            n = h | select_if(e << c, 0, c <= 31);
            label B_o:
            c = g + 8;
            internal_reflectlite_readStringZ(c, f = b + l);
            b = eqz(i);
            if (eqz(b)) {
              b = g.d;
              c = 0;
              h = 0;
              e = 0;
              if (m & 2) {
                e = b + f;
                h = e + 2;
                e = (e + 1)[0]:ubyte;
              }
              l = g.c;
              i = i[0];
              f = 0;
              if (eqz(m & 4)) {
                internal_reflectlite_readStringZ(g, j[2]:int);
                f = g.b;
                c = g.a;
              }
              a.h = n;
              a.f = h;
              a.e = i;
              a.c = c;
              a.b = b;
              a.a = l;
              a.i = m & 1;
              a.g = e;
              a.d = f;
              stack_pointer = g + 16;
              return ;
            }
          }
          if (eqz(g_b) | k == 1) {
            runtime_nilPanic();
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { unreachable }
          label B_m:
          if (eqz(g_b)) {
            h = h | (e = select_if((e & 127) << c, 0, c <= 31));
            b = b + 1;
            c = c + 7;
            continue L_l;
          }
        }
        label B_j:
        if (eqz(g_b) | k == 2) {
          runtime_panic(86192, 66488);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        if (eqz(g_b) | k == 3) {
          runtime_panic(86764, 88560);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b) | k == 4) {
          runtime_unsafeSlicePanic();
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  d.d = e;
  d.e = f;
  d.f = g;
  d.g = h;
  d.h = i;
  d.i = j;
  d.j = l;
  d.k = m;
  d.l = n;
  g_c[0]:int = g_c[0]:int + 48;
}

function runtime_alloc(a:int):int { // func46
  var b:int;
  var d:int;
  var c:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    c = (g_c[0]:int)[0]:int;
  }
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          89320[0]:long = 89320[0]:long + 1L;
          89308[0]:int = (a = (b = a + 15 & -16) + (c = 89308[0]:int));
          89312[0]:long = 89312[0]:long + i64_extend_i32_u(b);
          b = 89180[0]:int;
        }
        if (eqz(g_b)) {
          loop L_g {
            if (a < b) goto B_e;
            if (memory_grow(memory_size()) != -1) {
              89180[0]:int = (b = memory_size() << 16);
              a = 89308[0]:int;
              continue L_g;
            }
          }
        }
        if (eqz(g_b) | eqz(d)) {
          runtime_runtimePanic(67096, 13);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) { return c }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function runtime_slicePanic() { // func47
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67225, 18);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function String_1(a:{ a:int, b:int }, b:int) { // func48
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var g:int;
  var f:{ a:int, b:int, c:int, d:int, e:int }
  var c:int;
  var d:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    d = e.d;
    e = e.e;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 16;
        stack_pointer = e;
        d = 7;
        g = b & 255;
        c = 66104;
      }
      if (eqz(g_b)) {
        br_table[B_e, B_ga, B_fa, B_ea, B_da, B_ca, B_ba, B_aa, B_z, B_y, B_x, B_w, B_v, B_u, B_t, B_s, B_r, B_q, B_p, B_o, B_n, B_m, B_l, B_k, B_j, B_i, B_h, ..B_g](
          g)
        label B_ga:
        d = 4;
        c = 66111;
        goto B_e;
        label B_fa:
        d = 3;
        c = 66115;
        goto B_e;
        label B_ea:
        d = 4;
        c = 66118;
        goto B_e;
        label B_da:
        d = 5;
        c = 66122;
        goto B_e;
        label B_ca:
        d = 5;
        c = 66127;
        goto B_e;
        label B_ba:
        d = 5;
        c = 66132;
        goto B_e;
        label B_aa:
        d = 4;
        c = 66137;
        goto B_e;
        label B_z:
        d = 5;
        c = 66141;
        goto B_e;
        label B_y:
        d = 6;
        c = 66146;
        goto B_e;
        label B_x:
        d = 6;
        c = 66152;
        goto B_e;
        label B_w:
        d = 6;
        c = 66158;
        goto B_e;
        label B_v:
        c = 66164;
        goto B_e;
        label B_u:
        c = 66171;
        goto B_e;
        label B_t:
        c = 66178;
        goto B_e;
        label B_s:
        d = 9;
        c = 66185;
        goto B_e;
        label B_r:
        d = 10;
        c = 66194;
        goto B_e;
        label B_q:
        d = 6;
        c = 66204;
        goto B_e;
        label B_p:
        d = 14;
        c = 66210;
        goto B_e;
        label B_o:
        d = 4;
        c = 66224;
        goto B_e;
        label B_n:
        d = 9;
        c = 66228;
        goto B_e;
        label B_m:
        d = 3;
        c = 66237;
        goto B_e;
        label B_l:
        d = 5;
        c = 66240;
        goto B_e;
        label B_k:
        d = 5;
        c = 66245;
        goto B_e;
        label B_j:
        d = 4;
        c = 66250;
        goto B_e;
        label B_i:
        d = 3;
        c = 66254;
        goto B_e;
        label B_h:
        d = 6;
        c = 66257;
        goto B_e;
        label B_g:
        c = e + 8;
        b = i32_extend8_s(b);
      }
      if (eqz(g_b) | eqz(f)) {
        internal_itoa_Itoa(c, b);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c = e.d;
        b = e.c;
      }
      if (eqz(g_b) | f == 1) {
        runtime_stringConcat(e, 66263, 4, b, c);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = e.b;
        c = e.a;
      }
      label B_e:
      if (eqz(g_b)) {
        a.a = c;
        a.b = d;
        stack_pointer = e + 16;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = d;
  f.e = e;
  g_c[0]:int = g_c[0]:int + 20;
}

function runtime_unsafeSlicePanic() { // func49
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67243, 37);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function Len_1(a:ubyte_ptr, b:int, c:int):int { // func50
  var e:{ a:int, b:int, c:int, d:int }
  var d:{ a:int, b:int, c:int, d:int }
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    e = e.d;
  }
  d = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      e = select_if(e, a & 3, g_b);
      if (eqz(g_b)) {
        if (e) goto B_e;
        d = (a[0] & 31) - 17;
      }
      if (eqz(g_b)) {
        br_table[B_g, B_e, B_i, B_e, B_e, B_g, B_k, B_e, B_h, ..B_e](d)
        label B_k:
      }
      if (eqz(g_b) | eqz(f)) {
        Len(a);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        a = t0;
      }
      if (eqz(g_b)) { return a }
      label B_i:
      if (eqz(g_b)) {
        if (c & 1) { b = b[0]:int }
        if (eqz(b)) goto B_d;
        return b[3]:int;
      }
      label B_h:
      if (eqz(g_b)) {
        if (c & 1) { b = b[0]:int }
        if (eqz(b)) goto B_d;
        return b[2]:int;
      }
      label B_g:
      if (eqz(g_b)) { return b[1]:int }
      label B_e:
      c = select_if(c, 21, g_b);
      if (eqz(g_b) | f == 1) {
        runtime_alloc(12);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        b = t1;
      }
      if (eqz(g_b)) {
        b[8]:byte = if (e) { c } else { a[0] & 31 }
        b[1]:int = 3;
        b[0]:int = 66757;
      }
      if (eqz(g_b) | f == 2) {
        runtime_panic(86780, b);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_d:
      if (eqz(g_b)) { return 0 }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  d.d = e;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function Index(a:{ a:int, b:int, c:byte }, b:ubyte_ptr, c:{ a:int, b:int }, d:int, e:int) { // func51
  var g:int;
  var h:int;
  var i:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    f = g_c[0]:int;
    a = f.a;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    h = f.g;
    b = f.b;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = eqz(b & 3) & b != 0;
        h = eqz(g);
      }
      if (eqz(g_b)) {
        if (h) goto B_i;
        h = (b[0] & 31) - 17;
      }
      if (eqz(g_b)) {
        br_table[B_l, B_i, B_i, B_i, B_i, B_n, B_k, ..B_i](h)
        label B_n:
        if (c.b <= e) goto B_h;
        g = d & 2;
        d = (g | ((d & 12) != 0) << 3) | 1;
        c = c.a;
      }
      if (eqz(g_b) | eqz(i)) {
        elem(b);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        b = t0;
      }
      if (eqz(g_b) | i == 1) {
        Size(b);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        g = t1;
      }
      if (eqz(g_b)) {
        c = e * g + c;
        goto B_e;
      }
      label B_l:
      if (eqz(g_b)) {
        b = e >= c.b;
        if (b) goto B_g;
        d = d & 2;
        c = (e + c.a)[0]:ubyte;
        b = 85100;
        goto B_e;
      }
      label B_k:
      if (eqz(g_b) | i == 2) {
        elem(b);
        let t2 = 2;
        if (g_b == 1) goto B_b;
        g = t2;
      }
      if (eqz(g_b) | i == 3) {
        Size(g);
        let t3 = 3;
        if (g_b == 1) goto B_b;
        g = t3;
      }
      if (eqz(g_b) | i == 4) {
        Size(b);
        let t4 = 4;
        if (g_b == 1) goto B_b;
        h = t4;
      }
      if (eqz(g_b)) {
        if (eqz(h)) {
          c = 0;
          goto B_f;
        }
        if (g >= 5) {
          c = e * g + c;
          goto B_f;
        }
        f = d & 1;
        if (eqz(eqz(f) & h <= 4)) {
          c = e * g + c;
          if (f) goto B_f;
          c = internal_reflectlite_loadValue(c, g);
          goto B_f;
        }
        c = select_if(c >> (e = e * g << 3), 0, e <= 31) &
            select_if(-1 >> 32 - (g << 3), 0, g);
        goto B_f;
      }
      label B_i:
      if (eqz(g_b) | i == 5) {
        runtime_alloc(12);
        let t5 = 5;
        if (g_b == 1) goto B_b;
        a = t5;
      }
      if (eqz(g_b)) {
        a.c = (b = if (g) { b[0] & 31 } else { select_if(21, 0, b) });
        a.b = 5;
        a.a = 66696;
      }
      if (eqz(g_b) | i == 6) {
        runtime_panic(86780, a);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_h:
      if (eqz(g_b) | i == 7) {
        runtime_panic(86192, 66640);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      if (eqz(g_b) | i == 8) {
        runtime_panic(86192, 66688);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      if (eqz(g_b) | i == 9) {
        elem(b);
        let t6 = 9;
        if (g_b == 1) goto B_b;
        b = t6;
      }
      label B_e:
      if (eqz(g_b)) {
        a.c = d;
        a.b = c;
        a.a = b;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = d;
  f.e = e;
  f.f = g;
  f.g = h;
  g_c[0]:int = g_c[0]:int + 28;
}

function internal_reflectlite_loadValue(a:ubyte_ptr, b:int):int { // func52
  var c:int;
  var d:int;
  loop L_a {
    if (b) {
      d = select_if(a[0] << c, 0, c <= 31) | d;
      b = b - 1;
      a = a + 1;
      c = c + 8;
      continue L_a;
    }
  }
  return d;
}

function IsNil(a:ubyte_ptr, b:{ a:int, b:int, c:byte }, c:{ a:int, b:int }):int { // func53
  var d:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        var e:int = eqz(select_if(1, a, g_b));
        if (eqz(g_b)) {
          if (e) goto B_f;
          if (a & 3) goto B_j;
          br_table[B_j, B_j, B_g, B_j, B_h, B_f, B_i, B_j, ..B_f](
            (a[0] & 31) - 18);
          label B_j:
          return eqz(if (c & 1) { b.a } else { b });
          label B_i:
          if (eqz(b)) goto B_d;
          return eqz(b.b);
          label B_h:
          if (eqz(b)) goto B_d;
          return eqz(b.a);
          label B_g:
          return eqz(b.a);
          label B_f:
        }
        if (eqz(g_b) | eqz(d)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) {
          b.c =
            {
              0;
              if (eqz(a)) goto B_n;
              21;
              if (a & 3) goto B_n;
              a[0] & 31;
              label B_n:
            }
          b.b = 5;
          b.a = 66752;
        }
        if (eqz(g_b) | d == 1) {
          runtime_panic(86780, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b)) { return 1 }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function UnsafePointer(a:ubyte_ptr, b:{ a:int, b:int, c:byte }, c:{ a:int, b:int }):int { // func54
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        var d:int = eqz(select_if(1, a, g_b));
        if (eqz(g_b)) {
          if (d) goto B_i;
          if (a & 3) goto B_j;
          d = a[0] & 31;
          if (d > 25) goto B_i;
          if (1 << d & 36438016) goto B_j;
          if (d == 22) goto B_g;
          if (d != 24) goto B_i;
          a = eqz(b);
          if (a) goto B_f;
          a = b.a;
          if (a) goto B_d;
          b = b + 4;
          goto B_e;
          label B_j:
          a = b;
          if (eqz(c & 1)) goto B_d;
          goto B_e;
          label B_i:
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) {
          b.c =
            (a = {
                   0;
                   if (eqz(a)) goto B_m;
                   21;
                   if (a & 3) goto B_m;
                   a[0] & 31;
                   label B_m:
                 });
          b.b = 13;
          b.a = 66772;
        }
        if (eqz(g_b) | e == 1) {
          runtime_panic(86780, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_g:
        if (eqz(select_if(g_b, 1, b))) goto B_e;
        label B_f:
        if (eqz(g_b) | e == 2) {
          runtime_nilPanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) { a = b.a }
        label B_d:
        if (eqz(g_b)) { return a }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function Elem(a:{ a:int, b:int, c:byte }, b:ubyte_ptr, c:{ a:int, b:int }, d:int) { // func55
  var f:int;
  var g:int;
  var e:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        f = select_if(f, eqz(b), g_b);
        if (eqz(g_b)) {
          if (f) goto B_e;
          f = b & 3;
        }
        if (eqz(g_b)) {
          if (f) goto B_i;
          f = (b[0] & 31) - 20;
          br_table[B_g, B_i, ..B_e](f);
          label B_i:
          f = if (d & 1) { c.a } else { c }
          if (eqz(f)) {
            b = 0;
            f = 0;
            d = 0;
            goto B_d;
          }
          c = d & 2;
          d = c | 1;
        }
        if (eqz(g_b) | eqz(g)) {
          elem(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) goto B_d;
        label B_g:
        if (eqz(g_b)) {
          d = d & 254;
          f = c.b;
          b = c.a;
          goto B_d;
        }
        label B_e:
        if (eqz(g_b) | g == 1) {
          runtime_alloc(12);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          a = t1;
        }
        if (eqz(g_b)) {
          a.c =
            (b = {
                   0;
                   if (eqz(b)) goto B_p;
                   21;
                   if (b & 3) goto B_p;
                   b[0] & 31;
                   label B_p:
                 });
          a.b = 4;
          a.a = 66593;
        }
        if (eqz(g_b) | g == 2) {
          runtime_panic(86780, a);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b)) {
          a.a = b;
          a.b = f;
          a.c = d;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  g_c[0]:int = g_c[0]:int + 20;
}

function Field(a:{ a:int, b:int, c:byte }, b:ubyte_ptr, c:int, d:int, e:int) { // func56
  var g:int;
  var h:int;
  var i:int;
  var k:int;
  var j:int;
  var l:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    f = g_c[0]:int;
    a = f.a;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    h = f.g;
    i = f.h;
    j = f.i;
    l = f.j;
    b = f.b;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        k = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = stack_pointer - 48;
        stack_pointer = g;
        h = eqz(b & 3) & b != 0;
        i = eqz(h);
      }
      if (eqz(g_b | i)) {
        i = (b[0] & 31) == 26;
        if (i) goto B_e;
      }
      if (eqz(g_b) | eqz(k)) {
        runtime_alloc(12);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        g = t0;
      }
      if (eqz(g_b)) {
        g[8]:byte =
          (b = if (h) { (a = b[0]) & 31 } else { select_if(21, 0, b) });
        g[1]:int = 5;
        g[0]:int = 66597;
      }
      if (eqz(g_b) | k == 1) {
        runtime_panic(86780, g);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      h = select_if(h, g + 8, g_b);
      if (eqz(g_b) | k == 2) {
        rawField(h, b, e);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        h = g[40]:ubyte;
        i = g[9]:int;
        l = g[5]:int;
        e = g[6]:int;
      }
      if (eqz(g_b) | k == 3) {
        Size(b);
        let t1 = 3;
        if (g_b == 1) goto B_b;
        j = t1;
      }
      if (eqz(g_b) | k == 4) {
        Size(e);
        let t2 = 4;
        if (g_b == 1) goto B_b;
        b = t2;
      }
      if (eqz(g_b)) {
        a.b =
          {
            c + i;
            if (eqz(eqz(d & 1) & b < 5)) goto B_q;
            0;
            if (eqz(b)) goto B_q;
            if (j >= 5) {
              internal_reflectlite_loadValue(c + i, b);
              goto B_q;
            }
            -1 >> 32 - (b << 3) & select_if(c >> (b = i << 3), 0, b <= 31);
            label B_q:
          }
        a.a = e;
        a.c = (d & 249) | select_if(select_if(4, 8, h & 1), 2, l);
        stack_pointer = g + 48;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = d;
  f.e = e;
  f.f = g;
  f.g = h;
  f.h = i;
  f.i = j;
  f.j = l;
  g_c[0]:int = g_c[0]:int + 40;
}

function internal_reflectlite_New(a:{ a:int, b:int }, b:{ a:ubyte, b:int }) { // func57
  var e:int;
  var c:int;
  var d:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(e)) {
          isNamed(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          c = t0;
        }
        c = select_if(c, c & 1, g_b);
        c = {
              if (eqz(g_b)) {
                if (c) goto B_f;
                c = eqz(b);
                if (c) goto B_f;
                c = b & 3;
                br_table[B_j, B_i, B_i, B_h, ..B_i](c);
                label B_j:
                c = b.a & 31;
                if (c == 26) goto B_f;
                c = c != 21;
                if (c) goto B_f;
                label B_i:
                b + 1;
                goto B_e;
                label B_h:
              }
              if (eqz(g_b) | e == 1) {
                runtime_panic(86192, 66528);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_f:
              if (g_b) { c } else { b.b }
              label B_e:
            }
        if (eqz(g_b) | e == 2) {
          Size(b);
          let t1 = 2;
          if (g_b == 1) goto B_b;
          b = t1;
        }
        if (eqz(g_b) | e == 3) {
          runtime_alloc(b);
          let t2 = 3;
          if (g_b == 1) goto B_b;
          b = t2;
        }
        if (eqz(g_b)) {
          a.b = b;
          a.a = c;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  g_c[0]:int = g_c[0]:int + 12;
}

function Interface(a:{ a:int, b:int }, b:ubyte_ptr, c:{ a:int, b:int }, d:int) { // func58
  var f:int;
  var g:int;
  var e:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        f = select_if(f, eqz(d & 2), g_b);
        if (eqz(g_b)) {
          if (f) goto B_f;
          f = b & 3;
          if (f) goto B_h;
          f = (b[0] & 31) != 20;
          if (f) goto B_h;
          f = c.b;
          b = c.a;
          goto B_d;
          label B_h:
          d = eqz(d & 1);
          if (d) goto B_e;
        }
        if (eqz(g_b) | eqz(g)) {
          Size(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b)) {
          d = d > 4;
          if (d) goto B_e;
          f = 0;
          c = c - 1;
        }
        if (eqz(g_b) | g == 1) {
          Size(b);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          d = t1;
        }
        if (eqz(g_b)) {
          loop L_m {
            if (eqz(d)) goto B_d;
            f = (c + d)[0]:ubyte | f << 8;
            d = d - 1;
            continue L_m;
          }
          unreachable;
        }
        label B_f:
        if (eqz(g_b) | g == 2) {
          runtime_panic(86192, 66744);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        f = select_if(f, c, g_b);
        label B_d:
        if (eqz(g_b)) {
          a.b = f;
          a.a = b;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  g_c[0]:int = g_c[0]:int + 20;
}

function Bool(a:ubyte_ptr, b:int, c:{ a:int, b:int, c:byte }):int { // func59
  var d:{ a:int, b:int, c:int }
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    d = g_c[0]:int;
    a = d.a;
    c = d.b;
    d = d.c;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = eqz(a & 3) & a != 0;
          if (eqz(d)) goto B_e;
          if ((a[0] & 31) != 1) goto B_e;
          if (c & 1) { return b[0]:ubyte }
          return b != 0;
          label B_e:
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          c = t0;
        }
        if (eqz(g_b)) {
          c.c = if (d) { a[0] & 31 } else { select_if(21, 0, a) }
          c.b = 4;
          c.a = 66582;
        }
        if (eqz(g_b) | e == 1) {
          runtime_panic(86780, c);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b[0]:int = a;
  b[1]:int = c;
  b[2]:int = d;
  g_c[0]:int = g_c[0]:int + 12;
  return 0;
}

function Float(a:ubyte_ptr, b:int, c:{ a:int, b:int, c:int }):double { // func60
  var d:{ a:int, b:int, c:int }
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    d = d.c;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = eqz(a & 3) & a != 0;
          if (eqz(d)) goto B_e;
          br_table[B_g, B_f, ..B_e]((a[0] & 31) - 13)
          label B_g:
          if (c & 1) { return f64_promote_f32(b[0]:float) }
          return f64_promote_f32(f32_reinterpret_i32(b));
          label B_f:
          return b[0]:double;
          label B_e:
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) {
          b[8]:byte = if (d) { a[0] & 31 } else { select_if(21, 0, a) }
          b[1]:int = 5;
          b[0]:int = 66602;
        }
        if (eqz(g_b) | e == 1) {
          runtime_panic(86780, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = d;
  g_c[0]:int = g_c[0]:int + 12;
  return 0.0;
}

function Uint(a:ubyte_ptr, b:int, c:{ a:int, b:int, c:int }):long { // func61
  var d:{ a:int, b:int, c:int }
  var f:int;
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    d = d.c;
  }
  c = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        e = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = eqz(a & 3) & a != 0;
        f = eqz(d);
      }
      if (eqz(g_b)) {
        if (f) goto B_g;
        br_table[B_k, B_m, B_l, B_j, B_h, B_n, ..B_g]((a[0] & 31) - 7)
        label B_n:
        if (c & 1) goto B_i;
        goto B_e;
        label B_m:
        if (eqz(c & 1)) goto B_e;
        return b[0]:ubyte;
        label B_l:
        if (eqz(c & 1)) goto B_e;
        return b[0]:ushort;
        label B_k:
        if (eqz(c & 1)) goto B_e;
        goto B_i;
        label B_j:
        if (eqz(c & 1)) goto B_e;
        label B_i:
        return b[0]:uint;
        label B_h:
        return b[0]:long;
        label B_g:
      }
      if (eqz(g_b) | eqz(e)) {
        runtime_alloc(12);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        b = t0;
      }
      if (eqz(g_b)) {
        b[8]:byte = if (d) { a[0] & 31 } else { select_if(21, 0, a) }
        b[1]:int = 4;
        b[0]:int = 66768;
      }
      if (eqz(g_b) | e == 1) {
        runtime_panic(86780, b);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b)) { return i64_extend_i32_u(b) }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = d;
  g_c[0]:int = g_c[0]:int + 12;
  return 0L;
}

function Int(a:ubyte_ptr, b:int, c:{ a:int, b:int, c:int }):long { // func62
  var d:{ a:int, b:int, c:int }
  var f:int;
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    d = d.c;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = eqz(a & 3) & a != 0;
          f = eqz(d);
        }
        if (eqz(g_b)) {
          if (f) goto B_g;
          br_table[B_m, B_l, B_k, B_j, B_h, ..B_g]((a[0] & 31) - 2)
          label B_m:
          if (c & 1) goto B_i;
          goto B_e;
          label B_l:
          if (c & 1) { return b[0]:byte }
          return i64_extend8_s(i64_extend_i32_u(b));
          label B_k:
          if (c & 1) { return b[0]:short }
          return i64_extend16_s(i64_extend_i32_u(b));
          label B_j:
          if (eqz(c & 1)) goto B_e;
          label B_i:
          return b[0]:int;
          label B_h:
          return b[0]:long;
          label B_g:
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) {
          b[8]:byte = if (d) { a[0] & 31 } else { select_if(21, 0, a) }
          b[1]:int = 3;
          b[0]:int = 66701;
        }
        if (eqz(g_b) | e == 1) {
          runtime_panic(86780, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) { return i64_extend_i32_s(b) }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = d;
  g_c[0]:int = g_c[0]:int + 12;
  return 0L;
}

function Complex(a:int, b:ubyte_ptr, c:int) { // func63
  var d:{ a:int, b:int, c:int }
  var f:double;
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    d = d.c;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = eqz(b & 3) & b != 0;
          if (eqz(d)) goto B_e;
          a[1]:double =
            {
              br_table[B_h, B_g, ..B_e]((b[0] & 31) - 15)
              label B_h:
              f = f64_promote_f32(c[0]:float);
              f64_promote_f32(c[1]:float);
              goto B_f;
              label B_g:
              f = c[0]:double;
              c[1]:double;
              label B_f:
            }
          a[0]:double = f;
          return ;
          label B_e:
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          a[8]:byte = if (d) { b[0] & 31 } else { select_if(21, 0, b) }
          a[1]:int = 7;
          a[0]:int = 66586;
        }
        if (eqz(g_b) | e == 1) {
          runtime_panic(86780, a);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c[0]:int = a;
  c[1]:int = b;
  c[2]:int = d;
  g_c[0]:int = g_c[0]:int + 12;
}

function String_2(a:{ a:int, b:int }, b:ubyte_ptr, c:{ a:int, b:int }) { // func64
  var e:int_ptr;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  var f:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    e = d.d;
    d = d.e;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 32;
          stack_pointer = e;
          d = eqz(b);
        }
        if (eqz(g_b)) {
          if (d) goto B_g;
          d = b & 3;
          if (d) goto B_g;
          d = (b[0] & 31) != 17;
          if (d) goto B_g;
          b = c.b;
          c = c.a;
          goto B_e;
          label B_g:
          c = e + 24;
        }
        if (eqz(g_b) | eqz(f)) {
          String(c, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = e[6];
          d = e[7];
          b = e + 16;
        }
        if (eqz(g_b) | f == 1) {
          runtime_stringConcat(b, 66760, 1, c, d);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = e[4];
          d = e[5];
          b = e + 8;
        }
        if (eqz(g_b) | f == 2) {
          runtime_stringConcat(b, c, d, 66761, 7);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = e[2];
          b = e[3];
        }
        label B_e:
        if (eqz(g_b)) {
          a.b = b;
          a.a = c;
          stack_pointer = e + 32;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = e;
  f.e = d;
  g_c[0]:int = g_c[0]:int + 20;
}

function interface_Error_func_string_Error_invoke(a:{ a:int, b:int }, b:int, c:int) { // func65
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int, w:int, x:int, y:int, z:int, aa:int, ba:int, ca:int, da:int, ea:int, fa:int, ga:int, ha:int, ia:int, ja:int, ka:int, la:int, ma:int, na:int, oa:int, pa:int, qa:int, ra:int, sa:int, ta:int, ua:int, va:int, wa:int, xa:int, ya:int, za:int, ab:int, bb:int, cb:int, db:int, eb:int, fb:int, gb:int, hb:int }
  var e:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var f:int;
  var h:int;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    i = g_c[0]:int;
    a = i.a;
    b = i.b;
    c = i.c;
    d = i.d;
    e = i.e;
    f = i.f;
    h = i.g;
    i = i.h;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 240;
          stack_pointer = d;
          e = c != 86884;
        }
        b = {
              if (eqz(g_b)) {
                if (e) goto B_g;
                if (eqz(b)) goto B_e;
                c = b[9]:int;
              }
              if (eqz(g_b)) {
                if (c) goto B_i;
                e = b[2]:int;
                f = b[3]:int;
                c = d + 80;
              }
              if (eqz(g_b) | eqz(g)) {
                time_quote(c, e, f);
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.u;
                f = d.v;
                c = d + 72;
              }
              if (eqz(g_b) | g == 1) {
                runtime_stringConcat(c, 67752, 13, e, f);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.s;
                f = d.t;
                c = d - -64;
              }
              if (eqz(g_b) | g == 2) {
                runtime_stringConcat(c, e, f, 67748, 4);
                2;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.q;
                f = d + 56;
                h = b[0]:int;
                i = b[1]:int;
                c = d.r;
              }
              if (eqz(g_b) | g == 3) {
                time_quote(f, h, i);
                3;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                h = d.o;
                i = d.p;
                f = d + 48;
              }
              if (eqz(g_b) | g == 4) {
                runtime_stringConcat(f, e, c, h, i);
                4;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.m;
                f = d.n;
                c = d + 40;
              }
              if (eqz(g_b) | g == 5) {
                runtime_stringConcat(c, e, f, 67733, 15);
                5;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.k;
                f = d + 32;
                h = b[6]:int;
                i = b[7]:int;
                c = d.l;
              }
              if (eqz(g_b) | g == 6) {
                time_quote(f, h, i);
                6;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                h = d.i;
                i = d.j;
                f = d + 24;
              }
              if (eqz(g_b) | g == 7) {
                runtime_stringConcat(f, e, c, h, i);
                7;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.g;
                f = d.h;
                c = d + 16;
              }
              if (eqz(g_b) | g == 8) {
                runtime_stringConcat(c, e, f, 67748, 4);
                8;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.f;
                e = d.e;
                f = d + 8;
                h = b[4]:int;
                b = b[5]:int;
              }
              if (eqz(g_b) | g == 9) {
                time_quote(f, h, b);
                9;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                f = d.d;
                b = d.c;
              }
              if (eqz(g_b) | g == 10) {
                runtime_stringConcat(d, e, c, b, f);
                10;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.b;
                d.a;
                goto B_f;
              }
              label B_i:
              if (eqz(g_b)) {
                e = b[2]:int;
                f = b[3]:int;
                c = d + 104;
              }
              if (eqz(g_b) | g == 11) {
                time_quote(c, e, f);
                11;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.aa;
                f = d.ba;
                c = d + 96;
              }
              if (eqz(g_b) | g == 12) {
                runtime_stringConcat(c, 67752, 13, e, f);
                12;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d + 88;
                e = d.y;
                f = d.z;
                h = b[8]:int;
                b = b[9]:int;
              }
              if (eqz(g_b) | g == 13) {
                runtime_stringConcat(c, e, f, h, b);
                13;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.x;
                d.w;
                goto B_f;
              }
              label B_g:
              e = select_if(e, c != 86868, g_b);
              if (eqz(g_b)) {
                if (e) goto B_na;
                if (eqz(b)) goto B_e;
                c = d + 112;
                b = b[0]:int;
              }
              if (eqz(g_b) | g == 14) {
                Error(c, b);
                14;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.da;
                d.ca;
                goto B_f;
              }
              label B_na:
              e = select_if(e, c != 86804, g_b);
              if (eqz(g_b)) {
                if (e) goto B_ra;
                if (eqz(b)) goto B_e;
                e = b[0]:int;
                f = b[1]:int;
                c = d + 152;
              }
              if (eqz(g_b) | g == 15) {
                runtime_stringConcat(c, e, f, 68314, 1);
                15;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.ma;
                f = d.na;
                h = b[2]:int;
                i = b[3]:int;
                c = d + 144;
              }
              if (eqz(g_b) | g == 16) {
                runtime_stringConcat(c, e, f, h, i);
                16;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.ka;
                f = d.la;
                c = d + 136;
              }
              if (eqz(g_b) | g == 17) {
                runtime_stringConcat(c, e, f, 68315, 2);
                17;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.ja;
                e = d.ia;
                f = d + 128;
                h = b[5]:int;
                b = b[4]:int;
              }
              if (eqz(g_b) | g == 18) {
                interface_Error_func_string_Error_invoke(f, h, b);
                18;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                f = d.ga;
                h = d.ha;
                b = d + 120;
              }
              if (eqz(g_b) | g == 19) {
                runtime_stringConcat(b, e, c, f, h);
                19;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.fa;
                d.ea;
                goto B_f;
              }
              label B_ra:
              e = select_if(e, c != 86780, g_b);
              if (eqz(g_b)) {
                if (e) goto B_db;
                if (eqz(b)) goto B_e;
                e = b[0]:int;
                f = b[8]:ubyte;
                c = b[1]:int;
              }
              if (eqz(g_b)) {
                if (f) goto B_fb;
                b = d + 168;
              }
              if (eqz(g_b) | g == 20) {
                runtime_stringConcat(b, 66870, 17, e, c);
                20;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.qa;
                e = d.ra;
                b = d + 160;
              }
              if (eqz(g_b) | g == 21) {
                runtime_stringConcat(b, c, e, 66856, 14);
                21;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.pa;
                d.oa;
                goto B_f;
              }
              label B_fb:
              f = select_if(f, d + 208, g_b);
              if (eqz(g_b) | g == 22) {
                runtime_stringConcat(f, 66870, 17, e, c);
                22;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = d.ab;
                f = d.bb;
                c = d + 200;
              }
              if (eqz(g_b) | g == 23) {
                runtime_stringConcat(c, e, f, 66887, 4);
                23;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.za;
                e = d.ya;
                f = d + 192;
                b = b[8]:ubyte;
              }
              if (eqz(g_b) | g == 24) {
                String_1(f, b);
                24;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                f = d.wa;
                h = d.xa;
                b = d + 184;
              }
              if (eqz(g_b) | g == 25) {
                runtime_stringConcat(b, e, c, f, h);
                25;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.ua;
                e = d.va;
                b = d + 176;
              }
              if (eqz(g_b) | g == 26) {
                runtime_stringConcat(b, c, e, 66891, 6);
                26;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.ta;
                d.sa;
                goto B_f;
              }
              label B_db:
              e = select_if(e, c != 86764, g_b);
              if (eqz(g_b)) {
                if (e) goto B_vb;
                if (eqz(b)) goto B_e;
                c = d + 224;
                e = b[0]:int;
                b = b[1]:int;
              }
              if (eqz(g_b) | g == 27) {
                runtime_stringConcat(c, 66536, 30, e, b);
                27;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.eb;
                e = d.fb;
                b = d + 216;
              }
              if (eqz(g_b) | g == 28) {
                runtime_stringConcat(b, c, e, 66566, 16);
                28;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d.db;
                d.cb;
                goto B_f;
              }
              label B_vb:
              if (eqz(g_b)) {
                if (c == 86716) {
                  if (eqz(b)) goto B_e;
                  c = b[1]:int;
                  b[0]:int;
                  goto B_f;
                }
                if (c != 86656) goto B_e;
                c = d + 232;
              }
              if (eqz(g_b) | g == 29) {
                Error(c, b);
                29;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                b
              } else {
                c = d.hb;
                d.gb;
              }
              label B_f:
            }
        if (eqz(g_b)) {
          a.b = c;
          a.a = b;
          stack_pointer = d + 240;
          return ;
        }
        label B_e:
        if (eqz(g_b) | g == 30) {
          runtime_nilPanic();
          30;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = f;
  g.g = h;
  g.h = i;
  g_c[0]:int = g_c[0]:int + 32;
}

function time_quote(a:{ a:int, b:int }, b:int, c:int) { // func66
  var d:int;
  var h:int;
  var f:ubyte_ptr;
  var l:int;
  var j:byte_ptr;
  var e:int;
  var i:int;
  var k:int;
  var m:int;
  var n:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 48;
    g = g_c[0]:int;
    a = g.a;
    c = g.c;
    d = g.d;
    e = g.e;
    f = g.f;
    h = g.g;
    i = g.h;
    j = g.i;
    k = g.j;
    m = g.k;
    n = g.l;
    b = g.b;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        l = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = stack_pointer - 144;
        stack_pointer = d;
        h = c + 2;
        f = h <= 0;
      }
      if (eqz(select_if(g_b, 1, f))) goto B_e;
      if (eqz(g_b) | eqz(l)) {
        runtime_alloc(h);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        j = t0;
      }
      if (eqz(g_b)) {
        j[0] = 34;
        d[34]:int = 0;
        k = 1;
      }
      loop L_h {
        if (eqz(g_b)) {
          f = d + 120;
          e = d + 136;
        }
        if (eqz(g_b) | l == 1) {
          runtime_stringNext(f, b, c, e);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { f = eqz(d[120]:ubyte) }
        if (eqz(g_b)) {
          if (f) goto B_m;
          f = d[32]:int;
          e = f - 128 > -97;
        }
        if (eqz(g_b)) {
          if (e) goto B_o;
          e = d[31]:int;
          if (f == 65533) {
            f = 1;
            i = e + 2 >= c;
            if (i) goto B_l;
            if (e + 3 > c | e > -4) goto B_e;
            f = select_if(3, 1, runtime_stringEqual(b + e, 3, 67765, 3) & 1);
            goto B_l;
          }
          i = d + 48;
        }
        if (eqz(g_b) | l == 2) {
          runtime_stringFromUnicode(i, f);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = d[13]:int;
          goto B_l;
        }
        label B_o:
        e = select_if(e, f == 92, g_b);
        if (eqz(g_b)) {
          if (eqz(e)) {
            e = f != 34;
            if (e) goto B_t;
          }
          d[141]:byte = 92;
          i = d + 141;
          e = d + 80;
        }
        if (eqz(g_b) | l == 3) {
          runtime_sliceAppend(e, j, i, k, h, 1, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = d[21]:int;
          j = d[20]:int;
          h = d[22]:int;
        }
        label B_t:
        e = select_if(e, d + 72, g_b);
        if (eqz(g_b) | l == 4) {
          runtime_stringFromUnicode(e, f);
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = d[19]:int;
          f = d + 56;
          e = d[18]:int;
        }
        if (eqz(g_b) | l == 5) {
          runtime_sliceAppend(f, j, e, k, h, i, 1);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h = d[16]:int;
          k = d[15]:int;
          j = d[14]:int;
          continue L_h;
        }
        label B_m:
        if (eqz(g_b)) {
          d[140]:byte = 34;
          c = d + 140;
          b = d + 104;
        }
        if (eqz(g_b) | l == 6) {
          runtime_sliceAppend(b, j, c, k, h, 1, 1);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[26]:int;
          f = d[27]:int;
          b = d + 96;
        }
        if (eqz(g_b) | l == 7) {
          runtime_stringFromBytes(b, c, f);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = d[25]:int;
          a.a = d[24]:int;
          a.b = f;
          stack_pointer = d + 144;
          return ;
        }
        label B_l:
        if (eqz(g_b)) {
          i = c - e;
          m = i > c;
          m = select_if(0, i, m);
          i = select_if(f, 0, f > 0);
          f = b + e;
        }
        loop L_ia {
          if (eqz(g_b)) {
            e = eqz(i);
            if (e) continue L_h;
            e = d + 32;
          }
          if (eqz(g_b) | l == 8) {
            runtime_sliceAppend(e, j, 82134, k, h, 2, 1);
            8;
            if (g_b == 1) goto B_b;
          }
          h = select_if(h, eqz(m), g_b);
          if (eqz(g_b)) {
            if (h) goto B_la;
            h = d[10]:int;
            j = d[9]:int;
            k = d[8]:int;
            d[143]:byte = ((f[0] >> 4) + 82140)[0]:ubyte;
            n = d + 143;
            e = d + 16;
          }
          if (eqz(g_b) | l == 9) {
            runtime_sliceAppend(e, k, n, j, h, 1, 1);
            9;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d[142]:byte = ((f[0] & 15) + 82140)[0]:ubyte;
            h = d[4]:int;
            k = d[5]:int;
            j = d + 142;
            e = d[6]:int;
          }
          if (eqz(g_b) | l == 10) {
            runtime_sliceAppend(d, h, j, k, e, 1, 1);
            10;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = i - 1;
            m = m - 1;
            f = f + 1;
            h = d[2]:int;
            k = d[1]:int;
            j = d[0]:int;
            continue L_ia;
          }
          label B_la:
        }
      }
      if (eqz(g_b) | l == 11) {
        runtime_lookupPanic();
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b) | l == 12) {
        runtime_slicePanic();
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = f;
  g.g = h;
  g.h = i;
  g.i = j;
  g.j = k;
  g.k = m;
  g.l = n;
  g_c[0]:int = g_c[0]:int + 48;
}

function Error(a:{ a:int, b:int }, b:int) { // func67
  var d:{ a:int, b:int, c:int, d:int }
  var e:{ a:int, b:int, c:int, d:int }
  var c:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    d = c.c;
    c = c.d;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 16;
          stack_pointer = d;
          c = d + 8;
        }
        if (eqz(g_b) | eqz(e)) {
          internal_itoa_Itoa(c, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d.d;
          b = d.c;
        }
        if (eqz(g_b) | e == 1) {
          runtime_stringConcat(d, 67506, 6, b, c);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = d.b;
          a.a = d.a;
          a.b = b;
          stack_pointer = d + 16;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = d;
  e.d = c;
  g_c[0]:int = g_c[0]:int + 16;
}

function internal_task_Pause() { // func68
  var a:int_ptr;
  var c:int_ptr;
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          a = 89176[0]:int;
          c = eqz(a);
        }
        if (eqz(g_b)) {
          if (c) goto B_f;
          c = a[8];
          if (eqz(c)) goto B_f;
          if (c[0] != -1204030091) goto B_e;
          a = a + 24;
        }
        if (eqz(g_b) | eqz(b)) {
          tinygo_unwind(a);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_f:
        if (eqz(g_b) | b == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b) | b == 2) {
          runtime_runtimePanic(67016, 14);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_runtimePanic(a:int, b:{ a:int, b:int }) { // func69
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = {
                             if (eqz(g_b) |
                                 eqz(if (g_b == 2) {
                                       g_c[0]:int = g_c[0]:int - 4;
                                       (g_c[0]:int)[0]:int;
                                     } else {
                                       0
                                     })) {
                               runtime_runtimePanicAt(a, b);
                               0;
                               if (g_b == 1) goto B_b;
                             }
                             if (eqz(g_b)) { unreachable }
                             return ;
                             label B_b:
                           }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function Unlock(a:int) { // func70
  var b:{ a:int, b:int }
  var d:int;
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        b = select_if(b, eqz(a), g_b);
        if (eqz(g_b)) {
          if (b) goto B_d;
          b = eqz(a[0]:ubyte);
        }
        if (eqz(g_b)) {
          if (b) goto B_f;
          b = a[1]:int;
          d = eqz(b);
        }
        if (eqz(g_b)) {
          if (d) goto B_h;
          a[1]:int = b.a;
          b.a = 0;
        }
        if (eqz(g_b) | eqz(c)) {
          Push(b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_h:
        if (eqz(g_b)) {
          a[0]:byte = 0;
          return ;
        }
        label B_f:
        if (eqz(g_b) | c == 1) {
          runtime_panic(86192, 67008);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b) | c == 2) {
          runtime_nilPanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function Push(a:int_ptr) { // func71
  var b:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          var c:int_ptr = 89388[0]:int;
          if (c) { c[0] = a }
          89388[0]:int = a;
          if (a) {
            a[0] = 0;
            if (eqz(89384[0]:int)) { 89384[0]:int = a }
            return ;
          }
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_nilPanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function internal_task_start(a:int, b:int_ptr) { // func72
  var e:int;
  var d:int_ptr;
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    d = c.c;
    b = c.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_alloc(48);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b)) {
          d[5] = b;
          d[4] = a;
        }
        if (eqz(g_b) | e == 1) {
          runtime_alloc(65536);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          b = t1;
        }
        if (eqz(g_b)) {
          b[0] = -1204030091;
          d[8] = b;
          d[7] = b + 65536;
          d[6] = b + 4;
        }
        if (eqz(g_b) | e == 2) {
          Push(d);
          2;
          if (g_b == 1) goto B_b;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = d;
  g_c[0]:int = g_c[0]:int + 12;
}

function runtime_memequal(a:int, b:int, c:int, d:int):int { // func73
  var e:int;
  e = {
        loop L_b {
          c;
          if (c == e) goto B_a;
          var f:ubyte_ptr = b + e;
          let t0 = a + e;
          e = e + 1;
          if (t0[0]:ubyte == f[0]) continue L_b;
        }
        e - 1;
        label B_a:
      }
  return e >= c;
}

function runtime_hash32(a:int_ptr@1, b:int, c:int, d:int):int { // func74
  var e:{ a:ubyte, b:ubyte, c:ubyte }
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b | ((eqz(a) & b != 0) | b < 0))) {
          e = (b & 2147483644) + a;
          d = (b * -962287725 ^ c) ^ -1130422988;
          c = b;
          loop L_d {
            if (c >= 4) {
              d = (a[0] + d) * -962287725;
              var f:int = d >> 16;
              d = d ^ f;
              c = c - 4;
              a = a + 4;
              continue L_d;
            }
          }
          br_table[B_g, B_h, B_i, ..B_f]((b & 3) - 1)
          label B_i:
          d = d + (e.c << 16);
          label B_h:
          d = d + (e.b << 8);
          label B_g:
          a = (d + e.a) * -962287725;
          b = a >> 24;
          d = a ^ b;
          label B_f:
          return d;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_unsafeSlicePanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function runtime_runtimePanicAt(a:int, b:{ a:int, b:int }) { // func75
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_printstring(67162, 22);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 1) {
          runtime_printstring(a, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 2) {
          runtime_printnl();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function runtime_printstring(a:ubyte_ptr, b:int) { // func76
  var d:{ a:int, b:int, c:int }
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    c = c.c;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) { b = select_if(b, 0, c = b > 0) }
        loop L_e {
          if (eqz(g_b)) {
            if (eqz(b)) goto B_f;
            c = a[0];
          }
          if (eqz(g_b) | eqz(d)) {
            runtime_putchar(c);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = b - 1;
            a = a + 1;
            continue L_e;
          }
          label B_f:
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  g_c[0]:int = g_c[0]:int + 12;
}

function runtime_printnl() { // func77
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_putchar(10);
                  0;
                  if (g_b == 1) goto B_a;
                }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_putchar(a:int) { // func78
  var b:int;
  var d:int;
  var c:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = 89184[0]:int;
          b = d > 119;
        }
        if (eqz(g_b)) {
          if (b) goto B_d;
          89184[0]:int = (b = d + 1);
          (d + 89188)[0]:byte = a;
          a = (a & 255) == 10;
        }
        if (eqz(g_b)) {
          if (eqz(a) & d != 119) goto B_f;
          87016[0]:int = b;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_fd_write(1, 87012, 1, 89328);
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { 89184[0]:int = 0 }
        label B_f:
        if (eqz(g_b)) { return  }
        label B_d:
        if (eqz(g_b) | c == 1) {
          runtime_lookupPanic();
          1;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

export function malloc(a:int):int { // func79
  var c:{ a:int, b:int, c:int, d:int }
  var b:{ a:int, b:int, c:int }
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    b = g_c[0]:int;
    a = b.a;
    c = b.b;
    b = b.c;
  }
  var d:{ a:int, b:int, c:int } = {
                                    if (g_b == 2) {
                                      g_c[0]:int = g_c[0]:int - 4;
                                      e = (g_c[0]:int)[0]:int;
                                    }
                                    if (eqz(g_b)) {
                                      c = stack_pointer - 16;
                                      stack_pointer = c;
                                    }
                                    if (eqz(g_b)) {
                                      if (eqz(a)) {
                                        b = 0;
                                        goto B_e;
                                      }
                                      b = a < 0;
                                    }
                                    if (select_if(g_b, 1, b)) {
                                      if (eqz(g_b) | eqz(e)) {
                                        runtime_alloc(a);
                                        let t0 = 0;
                                        if (g_b == 1) goto B_b;
                                        b = t0;
                                      }
                                      if (eqz(g_b)) {
                                        c.c = a;
                                        c.b = a;
                                        c.a = b;
                                        c.d = b;
                                        a = c + 12;
                                      }
                                      if (eqz(g_b) | e == 1) {
                                        runtime_hashmapBinarySet(a, c);
                                        1;
                                        if (g_b == 1) goto B_b;
                                      }
                                      if (eqz(g_b)) goto B_e;
                                    }
                                    if (eqz(g_b) | e == 2) {
                                      runtime_slicePanic();
                                      2;
                                      if (g_b == 1) goto B_b;
                                    }
                                    if (eqz(g_b)) { unreachable }
                                    label B_e:
                                    if (eqz(g_b)) {
                                      stack_pointer = c + 16;
                                      return b;
                                    }
                                    unreachable;
                                    label B_b:
                                  }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = c;
  d.c = b;
  g_c[0]:int = g_c[0]:int + 12;
  return 0;
}

function runtime_hashmapBinarySet(a:int, b:int) { // func80
  var f:int;
  var d:int;
  var e:int;
  var c:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c.a;
    d = c.c;
    e = c.d;
    b = c.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = data_2[1]:int;
          d = data_2[3]:int;
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_hash32(a, d, e, a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b) | f == 1) {
          runtime_hashmapSet(87072, a, b, d);
          1;
          if (g_b == 1) goto B_b;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = d;
  c.d = e;
  g_c[0]:int = g_c[0]:int + 16;
}

export function free(a:int) { // func81
  var d:int_ptr;
  var b:int;
  var e:int;
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    d = c.c;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 16;
          stack_pointer = d;
          b = eqz(a);
        }
        if (eqz(g_b)) {
          if (b) goto B_f;
          d[3] = a;
          b = d + 12;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_hashmapBinaryGet(b, d);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) {
          if (eqz(b & 1)) goto B_e;
          d[0] = a;
        }
        if (eqz(g_b) | e == 1) {
          runtime_hashmapBinaryDelete(d);
          1;
          if (g_b == 1) goto B_b;
        }
        label B_f:
        if (eqz(g_b)) {
          stack_pointer = d + 16;
          return ;
        }
        label B_e:
        if (eqz(g_b) | e == 2) {
          runtime_panic(86192, 67056);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = d;
  g_c[0]:int = g_c[0]:int + 12;
}

function runtime_hashmapBinaryGet(a:int, b:int):int { // func82
  var f:int;
  var d:int;
  var e:int;
  var c:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c.a;
    d = c.c;
    e = c.d;
    b = c.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = data_2[1]:int;
          d = data_2[3]:int;
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_hash32(a, d, e, a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b) | f == 1) {
          runtime_hashmapGet(87072, a, b, d);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          a = t1;
        }
        if (eqz(g_b)) { return a }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = d;
  c.d = e;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function runtime_hashmapBinaryDelete(a:int) { // func83
  var h:int;
  var d:int_ptr;
  var f:int;
  var c:int;
  var i:int;
  var e:int;
  var j:int;
  var g:int;
  var l:int;
  var k:int;
  var b:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    b = g_c[0]:int;
    a = b.a;
    d = b.b;
    e = b.d;
    f = b.e;
    g = b.f;
    i = b.g;
    j = b.h;
    k = b.i;
    l = b.j;
    c = b.c;
  }
  b = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        h = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = data_2[1]:int;
        d = data_2[3]:int;
      }
      if (eqz(g_b) | eqz(h)) {
        runtime_hash32(a, d, f, c);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        c = t0;
      }
      if (eqz(g_b)) {
        i = select_if(1, c >> 24, f = c < 16777216);
        d = runtime_hashmapBucketAddrForHash(87072, c);
      }
      loop L_h {
        if (eqz(g_b)) {
          if (eqz(d)) goto B_g;
          j = d + 12;
          c = 0;
        }
        loop L_k {
          if (eqz(g_b)) {
            f = c == 8;
            if (f) goto B_l;
            e = i != (f = c + d)[0]:ubyte;
          }
          if (eqz(g_b)) {
            if (e) goto B_n;
            e = data_2[7]:int;
            if (eqz(e)) goto B_j;
            k = data_2[6]:int;
            g = j + (l = data_2[3]:int) * c;
          }
          if (eqz(g_b) | h == 1) {
            call_indirect(a, g, l, k, e);
            let t1 = 1;
            if (g_b == 1) goto B_b;
            e = t1;
          }
          if (eqz(g_b)) {
            e = eqz(e & 1);
            if (e) goto B_n;
            f[0]:byte = 0;
            memory_fill(g, 0, data_2[3]:int);
            memory_fill(d + (data_2[3]:int << 3) + (d = data_2[4]:int) * c + 12,
                        0,
                        d);
            data_2[2]:int = data_2[2]:int - 1;
            goto B_g;
          }
          label B_n:
          if (eqz(g_b)) {
            c = c + 1;
            continue L_k;
          }
          label B_l:
        }
        if (eqz(g_b)) {
          d = d[2];
          continue L_h;
        }
        label B_j:
      }
      if (eqz(g_b) | h == 2) {
        runtime_nilPanic();
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = d;
  b.c = c;
  b.d = e;
  b.e = f;
  b.f = g;
  b.g = i;
  b.h = j;
  b.i = k;
  b.j = l;
  g_c[0]:int = g_c[0]:int + 40;
}

export function calloc(a:int, b:{ a:int, b:int }):int { // func84
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = {
                             a = select_if(a, a * b, g_b);
                             if (eqz(g_b) |
                                 eqz(if (g_b == 2) {
                                       g_c[0]:int = g_c[0]:int - 4;
                                       (g_c[0]:int)[0]:int;
                                     } else {
                                       0
                                     })) {
                               malloc(a);
                               let t0 = 0;
                               if (g_b == 1) goto B_b;
                               a = t0;
                             }
                             if (eqz(g_b)) { return a }
                             unreachable;
                             label B_b:
                           }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

export function realloc(a:int, b:int):int { // func85
  var c:{ a:int, b:int, c:int, d:int }
  var g:int;
  var f:int;
  var e:int;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    e = d.d;
    f = d.e;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 16;
          stack_pointer = c;
        }
        if (select_if(g_b, 1, b)) {
          if (eqz(g_b) | eqz(g)) {
            free(a);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            f = 0;
            goto B_g;
          }
        }
        if (eqz(g_b)) {
          f = b < 0;
          if (f) goto B_f;
        }
        if (eqz(g_b) | g == 1) {
          runtime_alloc(b);
          let t0 = 1;
          if (g_b == 1) goto B_b;
          f = t0;
        }
        e = select_if(e, eqz(a), g_b);
        if (eqz(g_b)) {
          if (e) goto B_m;
          c.d = a;
          e = c + 12;
        }
        if (eqz(g_b) | g == 2) {
          runtime_hashmapBinaryGet(e, c);
          let t1 = 2;
          if (g_b == 1) goto B_b;
          e = t1;
        }
        if (eqz(g_b)) {
          if (eqz(e & 1)) goto B_e;
          memory_copy(f, c.a, select_if(e = c.b, b, b > e));
          c.a = a;
        }
        if (eqz(g_b) | g == 3) {
          runtime_hashmapBinaryDelete(c);
          3;
          if (g_b == 1) goto B_b;
        }
        label B_m:
        if (eqz(g_b)) {
          c.c = b;
          c.b = b;
          c.a = f;
          c.d = f;
          a = c + 12;
        }
        if (eqz(g_b) | g == 4) {
          runtime_hashmapBinarySet(a, c);
          4;
          if (g_b == 1) goto B_b;
        }
        label B_g:
        if (eqz(g_b)) {
          stack_pointer = c + 16;
          return f;
        }
        label B_f:
        if (eqz(g_b) | g == 5) {
          runtime_slicePanic();
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b) | g == 6) {
          runtime_panic(86192, 67088);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  d.d = e;
  d.e = f;
  g_c[0]:int = g_c[0]:int + 20;
  return 0;
}

export function start() { // func86
  var d:int;
  var a:int;
  var e:long;
  var c:int;
  var h:long;
  var f:int;
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    b = g_c[0]:int;
    a = b[0]:int;
    f = b[4]:int;
    e = b[2]:long@4;
    c = b[1]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) { 89180[0]:int = (a = memory_size() << 16) }
        if (eqz(g_b) | eqz(d)) {
          runtime_printstring(67304, 20);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | d == 1) {
          runtime_printnl();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { 89308[0]:int = 89808 }
        if (eqz(g_b) | d == 2) {
          arc4random();
          let t0 = 2;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b) | d == 3) {
          arc4random();
          let t1 = 3;
          if (g_b == 1) goto B_b;
          c = t1;
        }
        if (eqz(g_b)) { data[0]:int = (a = a | 1) }
        if (eqz(g_b) | d == 4) {
          internal_task_start(1, 0);
          4;
          if (g_b == 1) goto B_b;
        }
        e = select_if(e, 0L, g_b);
        loop L_l {
          if (eqz(g_b)) { a = 89380[0]:ubyte }
          if (eqz(g_b)) {
            if (a) goto B_p;
            a = eqz(89392[0]:int);
          }
          if (eqz(select_if(g_b, 1, a))) goto B_r;
          if (eqz(g_b) | d == 5) {
            runtime_ticks();
            let t2 = 5;
            if (g_b == 1) goto B_b;
            e = t2;
          }
          if (eqz(g_b)) {
            a = 89392[0]:int;
            c = eqz(a);
            if (c) goto B_r;
            var g:long = a[1]:long;
            c = g > e - (h = 89400[0]:long);
            if (c) goto B_r;
            89400[0]:long = g + h;
            89392[0]:int = (c = a[0]:int);
            a[0]:int = 0;
          }
          if (eqz(g_b) | d == 6) {
            Push(a);
            6;
            if (g_b == 1) goto B_b;
          }
          label B_r:
          if (eqz(g_b)) {
            a = 89384[0]:int;
            c = eqz(a);
          }
          if (eqz(g_b)) {
            if (eqz(c)) {
              89384[0]:int = a[0]:int;
              if (a == 89388[0]:int) { 89388[0]:int = 0 }
              a[0]:int = 0;
              f = 89176[0]:int;
              89176[0]:int = a;
              c = a + 16;
              if (eqz(a[36]:ubyte)) goto B_w;
              tinygo_rewind(c);
              goto B_n;
            }
            a = 89392[0]:int;
            c = eqz(a);
            if (c) goto B_o;
            h = a[1]:long + 89400[0]:long - e;
            a = h <= 0L;
            if (a) continue L_l;
            87048[0]:long = h;
          }
          if (eqz(g_b) | d == 7) {
            runtime_poll_oneoff(87024, 89344, 1, 89376);
            let t3 = 7;
            if (g_b == 1) goto B_b;
            a = t3;
          }
          if (eqz(g_b)) continue L_l;
          label B_w:
          if (eqz(g_b)) {
            tinygo_launch(c);
            a[36]:byte = 1;
            goto B_n;
          }
          label B_p:
          if (eqz(g_b)) { dummy() }
          if (eqz(g_b) | d == 8) {
            runtime_proc_exit(0);
            8;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { return  }
          label B_o:
          if (eqz(g_b) | d == 9) {
            runtime_waitForEvents();
            9;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { unreachable }
          label B_n:
          if (eqz(g_b)) {
            89176[0]:int = f;
            c = a[6]:int;
            a = c <= a[7]:int;
            if (a) continue L_l;
          }
        }
        if (eqz(g_b) | d == 10) {
          runtime_runtimePanic(67016, 14);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b[0]:int = a;
  b[1]:int = c;
  b[2]:long@4 = e;
  b[4]:int = f;
  g_c[0]:int = g_c[0]:int + 20;
}

function runtime_run_1_gowrapper(a:int) { // func87
  var b:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_run_1();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b) | b == 1) {
          runtime_deadlock();
          1;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_ticks():long { // func88
  var b:long_ptr;
  var c:{ a:int, b:int }
  var a:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    a = g_c[0]:int;
    b = a.a;
    a = a.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          b = stack_pointer - 16;
          stack_pointer = b;
          b[1] = 0L;
          a = b + 8;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_clock_time_get(0, 1000L, a);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          let t0 = b[1];
          stack_pointer = b + 16;
          return t0;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = b;
  c.b = a;
  g_c[0]:int = g_c[0]:int + 8;
  return 0L;
}

function runtime_waitForEvents() { // func89
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanic(67324, 27);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_run_1() { // func90
  var h:int_ptr;
  var d:int;
  var a:int;
  var i:int;
  var c:int;
  var f:long_ptr;
  var e:{ a:int, b:long }
  var b:int;
  var g:long;
  var j:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    b = g_c[0]:int;
    a = b[0]:int;
    e = b[2]:int;
    f = b[3]:int;
    h = b[4]:int;
    g = b[5]:long@4;
    i = b[7]:int;
    j = b[8]:long@4;
    c = b[1]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          h = stack_pointer - 16;
          stack_pointer = h;
          89180[0]:int = (c = memory_size() << 16);
          wasm_call_ctors();
          e = 0;
        }
        if (eqz(g_b) | eqz(d)) {
          runtime_alloc(32);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          89764[0]:int = a;
          (a + 8)[0]:long@1 = rodata_2[158]:long@4;
          a[0]:long@1 = (g = rodata_2[156]:long@4);
          i = 89332[0]:int;
          c = eqz(i);
        }
        if (eqz(g_b)) {
          if (eqz(c)) {
            c = 89340[0]:int;
            e = 89336[0]:int;
            goto B_g;
          }
          h[2] = 0;
          h[3] = 0;
          c = h + 12;
          a = h + 8;
        }
        if (eqz(g_b) | d == 1) {
          runtime_args_sizes_get(c, a);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          c = t1;
        }
        if (eqz(g_b)) {
          c = h[3];
          if (eqz(c)) {
            i = 0;
            c = 0;
            goto B_g;
          }
          a = c > 1073741823;
        }
        if (eqz(g_b)) {
          if (a) goto B_n;
          a = c << 2;
        }
        if (eqz(g_b) | d == 2) {
          runtime_alloc(a);
          let t2 = 2;
          if (g_b == 1) goto B_b;
          e = t2;
        }
        if (eqz(g_b)) {
          a = h[2];
          f = a < 0;
          if (f) goto B_n;
        }
        if (eqz(g_b) | d == 3) {
          runtime_alloc(a);
          let t3 = 3;
          if (g_b == 1) goto B_b;
          f = t3;
        }
        if (eqz(g_b)) {
          a = eqz(a);
          if (a) goto B_m;
        }
        if (eqz(g_b) | d == 4) {
          runtime_args_get(e, f);
          let t4 = 4;
          if (g_b == 1) goto B_b;
          a = t4;
        }
        if (eqz(g_b)) {
          a = c > 536870911;
          if (a) goto B_n;
          a = c << 3;
        }
        if (eqz(g_b) | d == 5) {
          runtime_alloc(a);
          let t5 = 5;
          if (g_b == 1) goto B_b;
          i = t5;
        }
        if (eqz(g_b)) {
          89336[0]:int = c;
          89332[0]:int = i;
          89340[0]:int = c;
          f = c;
          a = i;
          loop L_x {
            if (f) {
              (a + 4)[0]:int = strlen(b = e.a);
              a[0]:int = b;
              f = f - 1;
              e = e + 4;
              a = a + 8;
              continue L_x;
            } else {
              e = c;
              goto B_g;
            }
            unreachable;
          }
          unreachable;
        }
        label B_n:
        if (eqz(g_b) | d == 6) {
          runtime_slicePanic();
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_m:
        if (eqz(g_b) | d == 7) {
          runtime_lookupPanic();
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_g:
        if (eqz(g_b)) {
          89776[0]:int = i;
          89780[0]:int = e;
          89784[0]:int = c;
        }
        if (eqz(g_b) | d == 8) {
          runtime_ticks();
          let t6 = 8;
          if (g_b == 1) goto B_b;
          g = t6;
        }
        if (eqz(g_b) | d == 9) {
          internal_task_start(2, 86232);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | d == 10) {
          internal_task_start(2, 86248);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | d == 11) {
          internal_task_start(2, 86264);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | d == 12) {
          internal_task_start(2, 86280);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | d == 13) {
          internal_task_start(2, 86296);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | d == 14) {
          internal_task_start(2, 86312);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e = 89176[0]:int;
          c = eqz(e);
        }
        f = {
              if (eqz(g_b)) {
                if (c) goto B_oa;
                e.b = 50000000L;
              }
              if (eqz(g_b) | d == 15) {
                runtime_ticks();
                let t7 = 15;
                if (g_b == 1) goto B_b;
                g = t7;
              }
              if (eqz(g_b)) {
                if (eqz(89392[0]:int)) { 89400[0]:long = g }
                a = 89392;
                loop L_ta {
                  0;
                  if (eqz(f = a[0]:int)) goto B_ma;
                  g = e.b;
                  if (g < (j = f[1])) goto B_na;
                  e.b = (g = g - j);
                  a = a[0]:int;
                  if (a) continue L_ta;
                }
              }
              label B_oa:
              if (eqz(g_b) | d == 16) {
                runtime_nilPanic();
                16;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_na:
              if (g_b) {
                f
              } else {
                f[1] = j - g;
                a[0]:int;
              }
              label B_ma:
            }
        if (eqz(g_b)) {
          e.a = f;
          a[0]:int = e;
        }
        if (eqz(g_b) | d == 17) {
          internal_task_Pause();
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          89380[0]:byte = 1;
          stack_pointer = h + 16;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b[0]:int = a;
  b[1]:int = c;
  b[2]:int = e;
  b[3]:int = f;
  b[4]:int = h;
  b[5]:long@4 = g;
  b[7]:int = i;
  b[8]:long@4 = j;
  g_c[0]:int = g_c[0]:int + 40;
}

function runtime_deadlock() { // func91
  var a:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          a = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(a)) {
          internal_task_Pause();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b) | a == 1) {
          runtime_panic(86192, 67296);
          1;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_printuint32(a:int) { // func92
  var b:int;
  var c:long;
  b = {
        c = select_if(if (g_b == 2) {
                        g_c[0]:int = g_c[0]:int - 12;
                        b = g_c[0]:int;
                        a = b[0]:int;
                        b[1]:long@4;
                      } else {
                        0L
                      },
                      i64_extend_i32_u(a),
                      g_b);
        if (eqz(g_b) |
            eqz(if (g_b == 2) {
                  g_c[0]:int = g_c[0]:int - 4;
                  (g_c[0]:int)[0]:int;
                } else {
                  0
                })) {
          runtime_printuint64(c);
          0;
          if (g_b == 1) goto B_a;
        }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b[0]:int = a;
  b[1]:long@4 = c;
  g_c[0]:int = g_c[0]:int + 12;
}

function runtime_printuint64(a:long) { // func93
  var b:int;
  var e:int;
  var d:int;
  var c:ubyte_ptr;
  var f:int;
  var g:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    b = g_c[0]:int;
    a = b[0]:long@4;
    c = b[2]:int;
    d = b[3]:int;
    e = b[4]:int;
    b = b[5]:int;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        b = stack_pointer - 32;
        stack_pointer = b;
        (b + 24)[0]:int = 0;
        (b + 16)[0]:long = 0L;
        b[1]:long = 0L;
        d = 19;
        c = 19;
      }
      loop L_e {
        e = select_if(e, d >= 0, g_b);
        if (eqz(g_b)) {
          if (e) goto B_f;
          d = select_if(20, c, c <= 20) - c;
          e = b + 8;
          c = e + c;
        }
        loop L_h {
          if (eqz(g_b)) {
            if (eqz(d)) goto B_i;
            e = c[0];
          }
          if (eqz(g_b) | eqz(f)) {
            runtime_putchar(e);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d = d - 1;
            c = c + 1;
            continue L_h;
          }
          label B_i:
        }
        if (eqz(g_b)) {
          stack_pointer = b + 32;
          return ;
        }
        label B_f:
        if (eqz(g_b)) {
          (b + 8 + d)[0]:byte = i32_wrap_i64(a = a - (g = a / 10L) * 10L) | 48;
          c = select_if(c, d, e = eqz(a));
          d = d - 1;
          a = g;
          continue L_e;
        }
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f[0]:long@4 = a;
  f[2]:int = c;
  f[3]:int = d;
  f[4]:int = e;
  f[5]:int = b;
  g_c[0]:int = g_c[0]:int + 24;
}

function main_boring_gowrapper(a:{ a:int, b:int }) { // func94
  var b:{ a:int, b:int }
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    c = g_c[0]:int;
    a = c.a;
    c = c.b;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = a.a;
          a = a.b;
        }
        if (eqz(g_b) | eqz(b)) {
          main_boring(c, a);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | b == 1) {
          runtime_deadlock();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = c;
  g_c[0]:int = g_c[0]:int + 8;
}

function runtime_panicOrGoexit(a:int, b:{ a:int, b:int }) { // func95
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_printstring(67155, 7);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 1) {
          runtime_printitf(a, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 2) {
          runtime_printnl();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function runtime_printitf(a:int, b:int) { // func96
  var e:int;
  var c:int;
  var d:int;
  var f:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    e = g_c[0]:int;
    a = e[0]:int;
    b = e[1]:int;
    c = e[2]:int;
    f = e[3]:long@4;
    e = e[5]:int;
  }
  d = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        d = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 16;
        stack_pointer = e;
        c = a != 85552;
      }
      if (eqz(g_b)) {
        if (c) goto B_f;
        a = eqz(b & 1);
      }
      if (select_if(g_b, 1, a)) {
        if (eqz(g_b) | eqz(d)) {
          runtime_printstring(85832, 4);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      if (eqz(g_b) | d == 1) {
        runtime_printstring(85836, 5);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_f:
      c = select_if(c, a == 86208, g_b);
      if (eqz(g_b)) {
        if (c) goto B_k;
        c = a != 67364;
      }
      if (eqz(g_b)) {
        if (c) goto B_m;
        a = i32_extend8_s(b);
      }
      if (eqz(g_b) | d == 2) {
        runtime_printint32(a);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_m:
      c = select_if(c, a != 67380, g_b);
      if (eqz(g_b)) {
        if (c) goto B_p;
        a = i32_extend16_s(b);
      }
      if (eqz(g_b) | d == 3) {
        runtime_printint32(a);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_p:
      if (eqz(g_b)) {
        if (a == 86176) goto B_k;
        c = a != 68532;
      }
      if (eqz(g_b)) {
        if (c) goto B_t;
        f = b[0]:long;
        a = f >= 0L;
      }
      if (select_if(g_b, 1, a)) {
        if (eqz(g_b) | d == 4) {
          runtime_putchar(45);
          4;
          if (g_b == 1) goto B_b;
        }
        f = select_if(f, 0L - f, g_b);
      }
      if (eqz(g_b) | d == 5) {
        runtime_printuint64(f);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_t:
      c = select_if(c, a == 67396, g_b);
      if (eqz(g_b)) {
        if (c) goto B_y;
        c = a != 85100;
      }
      if (eqz(g_b)) {
        if (c) goto B_aa;
        a = b & 255;
      }
      if (eqz(g_b) | d == 6) {
        runtime_printuint32(a);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_aa:
      c = select_if(c, a != 67412, g_b);
      if (eqz(g_b)) {
        if (c) goto B_da;
        a = b & 65535;
      }
      if (eqz(g_b) | d == 7) {
        runtime_printuint32(a);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_da:
      if (eqz(g_b)) {
        if (a == 68516) goto B_y;
        c = a != 68600;
      }
      if (eqz(g_b)) {
        if (c) goto B_ha;
        f = b[0]:long;
      }
      if (eqz(g_b) | d == 8) {
        runtime_printuint64(f);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ha:
      if (eqz(g_b)) {
        if (a == 68364) goto B_y;
        c = a != 86192;
      }
      if (eqz(g_b)) {
        if (c) goto B_la;
        a = b[0]:int;
        b = b[1]:int;
      }
      if (eqz(g_b) | d == 9) {
        runtime_printstring(a, b);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_la:
      if (eqz(g_b)) { c = eqz(interface_Error_func_string_typeassert(a) & 1) }
      if (select_if(g_b, 1, c)) {
        if (eqz(g_b) | d == 10) {
          interface_Error_func_string_Error_invoke(e, b, a);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = e[1]:int;
          a = e[0]:int;
        }
        if (eqz(g_b) | d == 11) {
          runtime_printstring(a, b);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      if (eqz(g_b)) { c = eqz(interface_String_func_string_typeassert(a) & 1) }
      if (eqz(g_b)) {
        if (c) goto B_ua;
        c = e + 8;
      }
      if (eqz(g_b) | d == 12) {
        interface_String_func_string_String_invoke(c, b, a);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        b = e[3]:int;
        a = e[2]:int;
      }
      if (eqz(g_b) | d == 13) {
        runtime_printstring(a, b);
        13;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ua:
      if (eqz(g_b) | d == 14) {
        runtime_putchar(40);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | d == 15) {
        runtime_printuint32(a);
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | d == 16) {
        runtime_putchar(58);
        16;
        if (g_b == 1) goto B_b;
      }
      if (select_if(g_b, 1, b)) {
        if (eqz(g_b) | d == 17) {
          runtime_printstring(85904, 3);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_cb;
      }
      if (eqz(g_b) | d == 18) {
        runtime_putchar(48);
        18;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | d == 19) {
        runtime_putchar(120);
        19;
        if (g_b == 1) goto B_b;
      }
      a = select_if(a, 8, g_b);
      loop L_hb {
        if (eqz(g_b)) {
          if (eqz(a)) goto B_cb;
          c = b >> 28;
          c = select_if(c | 48, c + 87, b < -1610612736);
        }
        if (eqz(g_b) | d == 20) {
          runtime_putchar(c);
          20;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = a - 1;
          b = b << 4;
          continue L_hb;
        }
      }
      label B_cb:
      if (eqz(g_b) | d == 21) {
        runtime_putchar(41);
        21;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_y:
      if (eqz(g_b) | d == 22) {
        runtime_printuint32(b);
        22;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_k:
      if (eqz(g_b) | d == 23) {
        runtime_printint32(b);
        23;
        if (g_b == 1) goto B_b;
      }
      label B_e:
      if (eqz(g_b)) { stack_pointer = e + 16 }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d[0]:int = a;
  d[1]:int = b;
  d[2]:int = c;
  d[3]:long@4 = f;
  d[5]:int = e;
  g_c[0]:int = g_c[0]:int + 24;
}

function runtime_printint32(a:int) { // func97
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(eqz(g_b) & select_if(0, a >= 0, g_b))) {
          if (eqz(g_b) | eqz(b)) {
            runtime_putchar(45);
            0;
            if (g_b == 1) goto B_b;
          }
          a = select_if(a, 0 - a, g_b);
        }
        if (eqz(g_b) | b == 1) {
          runtime_printuint32(a);
          1;
          if (g_b == 1) goto B_b;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function interface_Error_func_string_typeassert(a:int):int { // func98
  return 
    (((((a == 86884 | a == 86868) | a == 86804) | a == 86780) | a == 86764) |
     a == 86716) |
    a == 86656
}

function interface_String_func_string_typeassert(a:int):int { // func99
  return 
    ((((((((((((((a == 86952 | a == 86908) | a == 86900) | a == 86892) | a == 86876) |
              a == 86860) |
             a == 86852) |
            a == 86796) |
           a == 86772) |
          a == 86756) |
         a == 86748) |
        a == 86688) |
       a == 86592) |
      a == 86468) |
     a == 86392) |
    a == 86320
}

function interface_String_func_string_String_invoke(a:{ a:int, b:int }, b:int, c:int) { // func100
  var e:int_ptr;
  var d:int;
  var f:int;
  var h:long;
  var i:long;
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    g = g_c[0]:int;
    a = g[0]:int;
    c = g[2]:int;
    d = g[3]:int;
    e = g[4]:int;
    h = g[5]:long@4;
    i = g[7]:long@4;
    b = g[1]:int;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 128;
        stack_pointer = e;
        d = c != 86952;
      }
      b = {
            if (eqz(g_b)) {
              if (d) goto B_g;
              c = e + 8;
              d = b[0]:int;
              b = b[1]:int;
            }
            if (eqz(g_b) | eqz(f)) {
              String_2(c, d, b);
              0;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[3];
              e[2];
              goto B_f;
            }
            label B_g:
            d = select_if(d, c != 86908, g_b);
            if (eqz(g_b)) {
              if (d) goto B_k;
              if (eqz(b)) goto B_e;
              c = e + 16;
              d = b[0]:int;
              b = b[1]:int;
            }
            if (eqz(g_b) | f == 1) {
              String_2(c, d, b);
              1;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[5];
              e[4];
              goto B_f;
            }
            label B_k:
            d = select_if(d, c != 86900, g_b);
            if (eqz(g_b)) {
              if (d) goto B_o;
              if (eqz(b)) goto B_e;
              c = e + 24;
            }
            if (eqz(g_b) | f == 2) {
              String(c, b);
              2;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[7];
              e[6];
              goto B_f;
            }
            label B_o:
            d = select_if(d, c != 86892, g_b);
            if (eqz(g_b)) {
              if (d) goto B_s;
              if (eqz(b)) goto B_e;
              c = e + 32;
              h = b[0]:long;
              i = b[1]:long;
              b = b[4]:int;
            }
            if (eqz(g_b) | f == 3) {
              String_3(c, h, i, b);
              3;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[9];
              e[8];
              goto B_f;
            }
            label B_s:
            if (select_if(g_b, 1, d = select_if(d, c != 86876, g_b))) {
              if (eqz(g_b) | f == 4) {
                get(b);
                let t0 = 4;
                if (g_b == 1) goto B_b;
                b = t0;
              }
              if (eqz(g_b)) {
                if (eqz(b)) goto B_e;
                c = b[1]:int;
                b[0]:int;
                goto B_f;
              }
            }
            d = select_if(d, c != 86860, g_b);
            if (eqz(g_b)) {
              if (d) goto B_z;
              c = e + 40;
            }
            if (eqz(g_b) | f == 5) {
              String_4(c, b);
              5;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[11];
              e[10];
              goto B_f;
            }
            label B_z:
            d = select_if(d, c != 86852, g_b);
            if (eqz(g_b)) {
              if (d) goto B_da;
              if (eqz(b)) goto B_e;
              c = e + 48;
              d = b[0]:int;
              b = b[1]:int;
            }
            if (eqz(g_b) | f == 6) {
              String_2(c, d, b);
              6;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[13];
              e[12];
              goto B_f;
            }
            label B_da:
            d = select_if(d, c != 86796, g_b);
            if (eqz(g_b)) {
              if (d) goto B_ha;
              if (eqz(b)) goto B_e;
              c = e + 56;
              b = b[0]:int;
            }
            if (eqz(g_b) | f == 7) {
              String_5(c, b);
              7;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[15];
              e[14];
              goto B_f;
            }
            label B_ha:
            d = select_if(d, c != 86772, g_b);
            if (eqz(g_b)) {
              if (d) goto B_la;
              if (eqz(b)) goto B_e;
              c = e - -64;
              d = b[0]:int;
              b = b[1]:int;
            }
            if (eqz(g_b) | f == 8) {
              String_2(c, d, b);
              8;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[17];
              e[16];
              goto B_f;
            }
            label B_la:
            d = select_if(d, c != 86756, g_b);
            if (eqz(g_b)) {
              if (d) goto B_pa;
              c = e + 72;
            }
            if (eqz(g_b) | f == 9) {
              String(c, b);
              9;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[19];
              e[18];
              goto B_f;
            }
            label B_pa:
            d = select_if(d, c != 86748, g_b);
            if (eqz(g_b)) {
              if (d) goto B_ta;
              if (eqz(b)) goto B_e;
              c = e + 80;
              b = b[0]:ubyte;
            }
            if (eqz(g_b) | f == 10) {
              String_1(c, b);
              10;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[21];
              e[20];
              goto B_f;
            }
            label B_ta:
            d = select_if(d, c != 86688, g_b);
            if (eqz(g_b)) {
              if (d) goto B_xa;
              c = e + 88;
              h = b[0]:long;
              i = b[1]:long;
              b = b[4]:int;
            }
            if (eqz(g_b) | f == 11) {
              String_3(c, h, i, b);
              11;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[23];
              e[22];
              goto B_f;
            }
            label B_xa:
            d = select_if(d, c != 86592, g_b);
            if (eqz(g_b)) {
              if (d) goto B_bb;
              c = e + 96;
              d = b[0]:int;
              b = b[1]:int;
            }
            if (eqz(g_b) | f == 12) {
              String_2(c, d, b);
              12;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[25];
              e[24];
              goto B_f;
            }
            label B_bb:
            d = select_if(d, c != 86468, g_b);
            if (eqz(g_b)) {
              if (d) goto B_fb;
              c = e + 104;
            }
            if (eqz(g_b) | f == 13) {
              String_5(c, b);
              13;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[27];
              e[26];
              goto B_f;
            }
            label B_fb:
            d = select_if(d, c != 86392, g_b);
            if (eqz(g_b)) {
              if (d) goto B_jb;
              c = e + 112;
              d = b[0]:int;
              b = b[1]:int;
            }
            if (eqz(g_b) | f == 14) {
              String_2(c, d, b);
              14;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c = e[29];
              e[28];
              goto B_f;
            }
            label B_jb:
            if (eqz(g_b)) {
              if (c != 86320) goto B_e;
              c = e + 120;
            }
            if (eqz(g_b) | f == 15) {
              String_1(c, b);
              15;
              if (g_b == 1) goto B_b;
            }
            if (g_b) {
              b
            } else {
              c = e[31];
              e[30];
            }
            label B_f:
          }
      if (eqz(g_b)) {
        a.b = c;
        a.a = b;
        stack_pointer = e + 128;
        return ;
      }
      label B_e:
      if (eqz(g_b) | f == 16) {
        runtime_nilPanic();
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g[0]:int = a;
  g[1]:int = b;
  g[2]:int = c;
  g[3]:int = d;
  g[4]:int = e;
  g[5]:long@4 = h;
  g[7]:long@4 = i;
  g_c[0]:int = g_c[0]:int + 36;
}

function String_3(a:{ a:int, b:int }, b:long, c:long, d:int) { // func101
  var f:ubyte_ptr;
  var e:int;
  var n:int;
  var g:{ a:int, b:int, c:int }
  var w:long;
  var r:long;
  var t:int;
  var j:int;
  var ka:int;
  var o:int;
  var h:int;
  var s:int;
  var q:int;
  var k:int;
  var la:int;
  var m:int;
  var i:int;
  var l:int;
  var p:int;
  var y:int;
  var v:int;
  var u:int;
  var z:int;
  var ca:{ a:int, b:int }
  var aa:int;
  var ea:int;
  var fa:int;
  var ia:int;
  var ha:int;
  var ja:int;
  var x:int;
  var ba:int;
  var da:int;
  var ga:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 160;
    k = g_c[0]:int;
    a = k[0]:int;
    c = k[3]:long@4;
    d = k[5]:int;
    e = k[6]:int;
    f = k[7]:int;
    g = k[8]:int;
    h = k[9]:int;
    i = k[10]:int;
    j = k[11]:int;
    l = k[12]:int;
    m = k[13]:int;
    o = k[14]:int;
    p = k[15]:int;
    q = k[16]:int;
    r = k[17]:long@4;
    s = k[19]:int;
    t = k[20]:int;
    u = k[21]:int;
    w = k[22]:long@4;
    x = k[24]:int;
    v = k[25]:int;
    y = k[26]:int;
    z = k[27]:int;
    aa = k[28]:int;
    ba = k[29]:int;
    ca = k[30]:int;
    da = k[31]:int;
    ea = k[32]:int;
    fa = k[33]:int;
    ga = k[34]:int;
    ha = k[35]:int;
    ia = k[36]:int;
    ja = k[37]:int;
    ka = k[38]:int;
    la = k[39]:int;
    b = k[1]:long@4;
  }
  k = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        n = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = stack_pointer;
        e = f - 832;
        stack_pointer = e;
        l = 64;
      }
      if (eqz(g_b) | eqz(n)) {
        runtime_alloc(64);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        m = t0;
      }
      f = select_if(f, eqz(d), g_b);
      if (eqz(f | g_b)) {
        f = d != 89688;
        if (f) goto B_f;
      }
      if (eqz(g_b) | n == 1) {
        get(d);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        d = t1;
      }
      label B_f:
      if (eqz(g_b)) {
        r = select_if((b >> 30L & 8589934591L) + 59453308800L, c, b < 0L) -
            62135596800L;
        f = d != 87112;
      }
      if (eqz(g_b)) {
        if (eqz(f)) {
          da = 68116;
          ba = 3;
          t = 0;
          goto B_j;
        }
        f = eqz(d);
      }
      if (eqz(g_b)) {
        if (f) goto B_n;
        g = d[14]:int;
        if (eqz(g)) goto B_p;
        w = d[5]:long;
        if (w > r) goto B_p;
        w = d[6]:long;
        f = w <= r;
        if (f) goto B_p;
        ba = g.b;
        da = g.a;
        t = g.c;
        goto B_m;
        label B_p:
        f = e + 808;
      }
      if (eqz(g_b) | n == 2) {
        lookup(f, d, r);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        ba = e[203]:int;
        da = e[202]:int;
        t = e[204]:int;
        goto B_m;
      }
      label B_n:
      if (eqz(g_b) | n == 3) {
        runtime_nilPanic();
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_m:
      if (eqz(g_b)) {
        w = i64_extend_i32_s(t);
        r = w + r;
      }
      label B_j:
      if (eqz(g_b)) {
        i = 0;
        ja = 0 - t;
        ga = i32_wrap_i64(b) & 1073741823;
        ha = 0 - (x = t / 60);
        w = r + 9223372028741760000L;
        r = w / 86400L;
        d = i32_wrap_i64((r + 3L) % 7L) << 3;
        ca = d + 68140;
        o = 68057;
        ia = t > -60;
        y = -1;
        z = 0;
        aa = 0;
        v = -1;
        u = -1;
        ea = 0;
        fa = 0;
        g = 39;
      }
      loop L_w {
        d = select_if(d, eqz(g), g_b);
        if (eqz(g_b)) {
          if (d) goto B_aa;
          p = 0;
          ka = select_if(g, 0, d = g > 0);
          q = 1;
          j = 0;
        }
        f = 
          {
            if (eqz(g_b)) {
              loop L_ja {
                d = j != ka;
                if (eqz(d)) {
                  j = g;
                  f = 0;
                  g = 0;
                  goto B_fa;
                }
                d = j + o;
                h = d[0]:ubyte;
                br_table[B_sa, B_qa, B_pa, B_ab, B_za, B_ya, B_wa, B_va, B_ua, ..B_bb](
                  h - 45);
                label B_bb:
                br_table[B_db, B_pa, B_pa, B_cb, B_pa, B_pa, B_ta, ..B_eb](h - 74)
                label B_eb:
                if (h == 90) goto B_ra;
                if (h == 95) goto B_xa;
                if (h != 112) goto B_pa;
                if (g < (d = j + 2)) goto B_ma;
                h = g <= (f = j + 1);
                if (h) goto B_la;
                if ((f + o)[0]:ubyte != 109) goto B_ma;
                g = g - d;
                f = d + o;
                p = 1046;
                goto B_fa;
                label B_db:
                if (g < (h = j + 3)) goto B_ma;
                f = g < h;
                if (f) goto B_ca;
                if (eqz(runtime_stringEqual(d, 3, 67647, 3) & 1)) goto B_ma;
                s = g < (f = j + 7);
                if (s) goto B_fb;
                s = f > g;
                if (s) goto B_ca;
                d = eqz(runtime_stringEqual(d, 7, 67650, 7) & 1);
                if (d) goto B_fb;
                g = g - f;
                f = f + o;
                p = 257;
                goto B_fa;
                label B_fb:
                f = h + o;
                d = g != h;
                if (eqz(d)) {
                  h = g;
                  goto B_gb;
                }
                d = (f[0] - 97 & 255) < 26;
                if (d) goto B_ma;
                label B_gb:
                g = g - h;
                p = 258;
                goto B_fa;
                label B_cb:
                if (g < (h = j + 3)) goto B_ma;
                f = g < h;
                if (f) goto B_ca;
                if (eqz(runtime_stringEqual(d, 3, 67657, 3) & 1)) goto B_ib;
                if (g < (f = j + 6)) goto B_jb;
                s = f > g;
                if (s) goto B_ca;
                s = eqz(runtime_stringEqual(d, 6, 67660, 6) & 1);
                if (s) goto B_jb;
                g = g - f;
                f = f + o;
                p = 261;
                goto B_fa;
                label B_jb:
                f = h + o;
                s = g != h;
                if (eqz(s)) {
                  h = g;
                  goto B_kb;
                }
                s = (f[0] - 97 & 255) < 26;
                if (s) goto B_ib;
                label B_kb:
                g = g - h;
                p = 262;
                goto B_fa;
                label B_ib:
                d = eqz(runtime_stringEqual(d, 3, 67666, 3) & 1);
                if (d) goto B_ma;
                g = g - h;
                f = h + o;
                p = 23;
                goto B_fa;
                label B_ab:
                if (g < (d = j + 2)) goto B_mb;
                h = g <= (f = j + 1);
                if (h) goto B_la;
                h = (f + o)[0]:ubyte - 49 & 255;
                if (h > 5) goto B_mb;
                g = g - d;
                f = d + o;
                d = (h << 2) + 67512;
                p = d[0]:int;
                goto B_fa;
                label B_mb:
                h = g < (f = j + 3);
                if (h) goto B_ma;
                s = g <= (h = j + 1);
                if (s) goto B_la;
                h = (h + o)[0]:ubyte != 48;
                if (h) goto B_ma;
                h = d >= g;
                if (h) goto B_la;
                d = (d + o)[0]:ubyte != 50;
                if (d) goto B_ma;
                g = g - f;
                f = f + o;
                p = 523;
                goto B_fa;
                label B_za:
                d = j + 1;
                h = g < (f = j + 2);
                if (h) goto B_oa;
                h = d >= g;
                if (h) goto B_la;
                h = (d + o)[0]:ubyte != 53;
                if (h) goto B_oa;
                g = g - f;
                f = f + o;
                p = 1036;
                goto B_fa;
                label B_ya:
                h = g < (f = j + 4);
                if (h) goto B_nb;
                h = f > g;
                if (h) goto B_ca;
                d = eqz(runtime_stringEqual(d, 4, 67669, 4) & 1);
                if (d) goto B_nb;
                g = g - f;
                f = f + o;
                p = 275;
                goto B_fa;
                label B_nb:
                g = g - (d = j + 1);
                f = d + o;
                p = 263;
                goto B_fa;
                label B_xa:
                if (g < (d = j + 2)) goto B_ob;
                f = g <= (h = j + 1);
                if (f) goto B_la;
                f = h + o;
                s = f[0] != 50;
                if (s) goto B_ob;
                q = j + 5;
                s = q > g;
                if (s) goto B_pb;
                s = g < q;
                if (s) goto B_ca;
                if (eqz(runtime_stringEqual(f, 4, 67669, 4) & 1)) goto B_pb;
                g = g - q;
                f = o + q;
                p = 275;
                j = h;
                goto B_ea;
                label B_pb:
                g = g - d;
                f = d + o;
                p = 264;
                goto B_fa;
                label B_ob:
                h = g < (f = j + 3);
                if (h) goto B_ma;
                s = g <= (h = j + 1);
                if (s) goto B_la;
                h = (h + o)[0]:ubyte != 95;
                if (h) goto B_ma;
                h = d >= g;
                if (h) goto B_la;
                d = (d + o)[0]:ubyte != 50;
                if (d) goto B_ma;
                g = g - f;
                f = f + o;
                p = 522;
                goto B_fa;
                label B_wa:
                g = g - (d = j + 1);
                f = d + o;
                p = 1037;
                goto B_fa;
                label B_va:
                g = g - (d = j + 1);
                f = d + o;
                p = 1039;
                goto B_fa;
                label B_ua:
                g = g - (d = j + 1);
                f = d + o;
                p = 1041;
                goto B_fa;
                label B_ta:
                if (g < (d = j + 2)) goto B_ma;
                h = g <= (f = j + 1);
                if (h) goto B_la;
                if ((f + o)[0]:ubyte != 77) goto B_ma;
                g = g - d;
                f = d + o;
                p = 1045;
                goto B_fa;
                label B_sa:
                if (g < (f = j + 7)) goto B_qb;
                h = f > g;
                if (h) goto B_ca;
                h = eqz(runtime_stringEqual(d, 7, 67673, 7) & 1);
                if (h) goto B_qb;
                g = g - f;
                f = f + o;
                p = 30;
                goto B_fa;
                label B_qb:
                if (g < (f = j + 9)) goto B_rb;
                h = f > g;
                if (h) goto B_ca;
                h = eqz(runtime_stringEqual(d, 9, 67680, 9) & 1);
                if (h) goto B_rb;
                g = g - f;
                f = f + o;
                p = 33;
                goto B_fa;
                label B_rb:
                if (g < (f = j + 5)) goto B_sb;
                h = f > g;
                if (h) goto B_ca;
                h = eqz(runtime_stringEqual(d, 5, 67689, 5) & 1);
                if (h) goto B_sb;
                g = g - f;
                f = f + o;
                p = 29;
                goto B_fa;
                label B_sb:
                if (g < (f = j + 6)) goto B_tb;
                h = f > g;
                if (h) goto B_ca;
                h = eqz(runtime_stringEqual(d, 6, 67694, 6) & 1);
                if (h) goto B_tb;
                g = g - f;
                f = f + o;
                p = 32;
                goto B_fa;
                label B_tb:
                h = g < (f = j + 3);
                if (h) goto B_ma;
                h = f > g;
                if (h) goto B_ca;
                d = eqz(runtime_stringEqual(d, 3, 67700, 3) & 1);
                if (d) goto B_ma;
                g = g - f;
                f = f + o;
                p = 31;
                goto B_fa;
                label B_ra:
                if (g < (f = j + 7)) goto B_ub;
                h = f > g;
                if (h) goto B_ca;
                h = eqz(runtime_stringEqual(d, 7, 67703, 7) & 1);
                if (h) goto B_ub;
                g = g - f;
                f = f + o;
                p = 25;
                goto B_fa;
                label B_ub:
                if (g < (f = j + 9)) goto B_vb;
                h = f > g;
                if (h) goto B_ca;
                h = eqz(runtime_stringEqual(d, 9, 67710, 9) & 1);
                if (h) goto B_vb;
                g = g - f;
                f = f + o;
                p = 28;
                goto B_fa;
                label B_vb:
                if (g < (f = j + 5)) goto B_wb;
                h = f > g;
                if (h) goto B_ca;
                h = eqz(runtime_stringEqual(d, 5, 67719, 5) & 1);
                if (h) goto B_wb;
                g = g - f;
                f = f + o;
                p = 24;
                goto B_fa;
                label B_wb:
                if (g < (f = j + 6)) goto B_xb;
                h = f > g;
                if (h) goto B_ca;
                h = eqz(runtime_stringEqual(d, 6, 67724, 6) & 1);
                if (h) goto B_xb;
                g = g - f;
                f = f + o;
                p = 27;
                goto B_fa;
                label B_xb:
                h = g < (f = j + 3);
                if (h) goto B_ma;
                h = f > g;
                if (h) goto B_ca;
                d = eqz(runtime_stringEqual(d, 3, 67730, 3) & 1);
                if (d) goto B_ma;
                g = g - f;
                f = f + o;
                p = 26;
                goto B_fa;
                label B_qa:
                if (g <= (d = j + 1)) goto B_ma;
                goto B_na;
                label B_pa:
                if (g <= (d = j + 1)) goto B_ma;
                if (h == 44) goto B_na;
                goto B_ma;
                label B_oa:
                g = g - d;
                f = d + o;
                p = 259;
                goto B_fa;
                label B_na:
                f = d >= g;
                if (f) goto B_la;
                k = (d + o)[0]:ubyte;
                la = k == 57;
                if (eqz(la) & k != 48) goto B_ma;
                d = q;
                loop L_yb {
                  f = d >= g;
                  if (f) goto B_ha;
                  f = d >= g;
                  if (f) goto B_la;
                  f = d + o;
                  s = d + 1;
                  d = s;
                  if (k == (f = f[0])) continue L_yb;
                }
                if ((f - 48 & 255) < 10) goto B_ma;
                d = d - 1;
                s - 2;
                goto B_ga;
                label B_ma:
                q = q + 1;
                j = j + 1;
                continue L_ja;
                label B_la:
              }
            }
            if (eqz(g_b) | n == 4) {
              runtime_lookupPanic();
              4;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) { unreachable }
            label B_ha:
            if (g_b) {
              f
            } else {
              d = select_if(g, q, g > q);
              d - 1;
            }
            label B_ga:
          }
        if (eqz(g_b)) {
          q = d > g;
          if (q) goto B_ca;
          f = (f - j << 16 & 268369920) | select_if(35, 34, la);
          q = f | 268435456;
          p = select_if(f, q, h = h == 46);
          g = g - d;
          f = d + o;
        }
        label B_fa:
        if (eqz(g_b)) {
          d = eqz(j);
          if (d) goto B_da;
        }
        label B_ea:
        d = select_if(d, e + 792, g_b);
        if (eqz(g_b) | n == 5) {
          runtime_sliceAppend(d, m, o, i, l, j, 1);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[200]:int;
          m = e[198]:int;
          i = e[199]:int;
        }
        label B_da:
        if (eqz(g_b)) {
          o = f;
          d = eqz(p);
          if (d) goto B_aa;
          if (eqz(eqz(p & 256) | y >= 0)) {
            date(e + 776, r);
            aa = e[196]:int;
            z = e[195]:int;
            y = e[194]:int;
          }
          if (eqz(eqz(p & 512) | v >= 0)) {
            yearYday(e + 768, r);
            v = e[193]:int;
          }
          if (u >= 0) goto B_jc;
          u = -1;
          if (eqz(p & 1024)) goto B_jc;
          clock(e + 752, w);
          fa = e[190]:int;
          ea = e[189]:int;
          u = e[188]:int;
          label B_jc:
          d = p & 65535;
          f = d - 257;
        }
        if (eqz(g_b)) {
          br_table[B_ed, B_fd, B_dd, B_cd, B_ad, B_bd, B_zc, B_yc, B_xc, B_kc, B_kc, B_kc, B_kc, B_kc, B_kc, B_kc, B_kc, B_kc, B_gd, B_id, ..B_jd](
            f)
          label B_jd:
          f = d - 24 < 10;
          if (f) goto B_lc;
          f = d - 1036;
          br_table[B_uc, B_tc, B_sc, B_rc, B_qc, B_pc, B_oc, B_kc, B_kc, B_nc, B_mc, ..B_kd](
            f);
          label B_kd:
          f = d - 522;
          br_table[B_wc, B_vc, ..B_kc](f);
          label B_id:
          f = e + 192;
          h = y ^ (d = y >> 31);
          d = (h - d) % 100;
        }
        if (eqz(g_b) | n == 6) {
          time_appendInt(f, m, i, l, d, 2);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[50]:int;
          i = e[49]:int;
          m = e[48]:int;
          continue L_w;
        }
        label B_gd:
        d = select_if(d, e + 208, g_b);
        if (eqz(g_b) | n == 7) {
          time_appendInt(d, m, i, l, y, 4);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[54]:int;
          i = e[53]:int;
          m = e[52]:int;
          continue L_w;
        }
        label B_fd:
        d = select_if(d, e + 240, g_b);
        if (eqz(g_b) | n == 8) {
          String_6(d, z);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = e[61]:int < 3;
          if (d) goto B_ca;
          f = e[60]:int;
          d = e + 224;
        }
        if (eqz(g_b) | n == 9) {
          runtime_sliceAppend(d, m, f, i, l, 3, 1);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[58]:int;
          i = e[57]:int;
          m = e[56]:int;
          continue L_w;
        }
        label B_ed:
        d = select_if(d, e + 264, g_b);
        if (eqz(g_b) | n == 10) {
          String_6(d, z);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = e[66]:int;
          h = e[67]:int;
          d = e + 248;
        }
        if (eqz(g_b) | n == 11) {
          runtime_sliceAppend(d, m, f, i, l, h, 1);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[64]:int;
          i = e[63]:int;
          m = e[62]:int;
          continue L_w;
        }
        label B_dd:
        d = select_if(d, e + 272, g_b);
        if (eqz(g_b) | n == 12) {
          time_appendInt(d, m, i, l, z, 0);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[70]:int;
          i = e[69]:int;
          m = e[68]:int;
          continue L_w;
        }
        label B_cd:
        d = select_if(d, e + 288, g_b);
        if (eqz(g_b) | n == 13) {
          time_appendInt(d, m, i, l, z, 2);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[74]:int;
          i = e[73]:int;
          m = e[72]:int;
          continue L_w;
        }
        label B_bd:
        if (eqz(g_b)) {
          d = ca.b < 3;
          if (d) goto B_ca;
          f = ca.a;
          d = e + 304;
        }
        if (eqz(g_b) | n == 14) {
          runtime_sliceAppend(d, m, f, i, l, 3, 1);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[78]:int;
          i = e[77]:int;
          m = e[76]:int;
          continue L_w;
        }
        label B_ad:
        if (eqz(g_b)) {
          f = ca.a;
          h = ca.b;
          d = e + 320;
        }
        if (eqz(g_b) | n == 15) {
          runtime_sliceAppend(d, m, f, i, l, h, 1);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[82]:int;
          i = e[81]:int;
          m = e[80]:int;
          continue L_w;
        }
        label B_zc:
        d = select_if(d, e + 336, g_b);
        if (eqz(g_b) | n == 16) {
          time_appendInt(d, m, i, l, aa, 0);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[86]:int;
          i = e[85]:int;
          m = e[84]:int;
          continue L_w;
        }
        label B_yc:
        d = select_if(d, aa > 9, g_b);
        if (eqz(g_b)) {
          if (d) goto B_je;
          e[830]:byte = 32;
          f = e + 830;
          d = e + 368;
        }
        if (eqz(g_b) | n == 17) {
          runtime_sliceAppend(d, m, f, i, l, 1, 1);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[94]:int;
          m = e[92]:int;
          i = e[93]:int;
        }
        label B_je:
        d = select_if(d, e + 352, g_b);
        if (eqz(g_b) | n == 18) {
          time_appendInt(d, m, i, l, aa, 0);
          18;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[90]:int;
          i = e[89]:int;
          m = e[88]:int;
          continue L_w;
        }
        label B_xc:
        d = select_if(d, e + 384, g_b);
        if (eqz(g_b) | n == 19) {
          time_appendInt(d, m, i, l, aa, 2);
          19;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[98]:int;
          i = e[97]:int;
          m = e[96]:int;
          continue L_w;
        }
        label B_wc:
        d = select_if(d, v > 99, g_b);
        if (eqz(g_b)) {
          if (d) goto B_re;
          e[829]:byte = 32;
          f = e + 829;
          d = e + 432;
        }
        if (eqz(g_b) | n == 20) {
          runtime_sliceAppend(d, m, f, i, l, 1, 1);
          20;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[110]:int;
          i = e[109]:int;
          m = e[108]:int;
          d = v > 9;
          if (d) goto B_re;
          e[828]:byte = 32;
          f = e + 828;
          d = e + 416;
        }
        if (eqz(g_b) | n == 21) {
          runtime_sliceAppend(d, m, f, i, l, 1, 1);
          21;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[106]:int;
          m = e[104]:int;
          i = e[105]:int;
        }
        label B_re:
        d = select_if(d, e + 400, g_b);
        if (eqz(g_b) | n == 22) {
          time_appendInt(d, m, i, l, v, 0);
          22;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[102]:int;
          i = e[101]:int;
          m = e[100]:int;
          continue L_w;
        }
        label B_vc:
        d = select_if(d, e + 448, g_b);
        if (eqz(g_b) | n == 23) {
          time_appendInt(d, m, i, l, v, 3);
          23;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[114]:int;
          i = e[113]:int;
          m = e[112]:int;
          continue L_w;
        }
        label B_uc:
        d = select_if(d, e + 464, g_b);
        if (eqz(g_b) | n == 24) {
          time_appendInt(d, m, i, l, u, 2);
          24;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[118]:int;
          i = e[117]:int;
          m = e[116]:int;
          continue L_w;
        }
        label B_tc:
        if (eqz(g_b)) {
          f = e + 480;
          d = u % 12;
          d = select_if(d, 12, d);
        }
        if (eqz(g_b) | n == 25) {
          time_appendInt(f, m, i, l, d, 0);
          25;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[122]:int;
          i = e[121]:int;
          m = e[120]:int;
          continue L_w;
        }
        label B_sc:
        if (eqz(g_b)) {
          f = e + 496;
          d = u % 12;
          d = select_if(d, 12, d);
        }
        if (eqz(g_b) | n == 26) {
          time_appendInt(f, m, i, l, d, 2);
          26;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[126]:int;
          i = e[125]:int;
          m = e[124]:int;
          continue L_w;
        }
        label B_rc:
        d = select_if(d, e + 512, g_b);
        if (eqz(g_b) | n == 27) {
          time_appendInt(d, m, i, l, ea, 0);
          27;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[130]:int;
          i = e[129]:int;
          m = e[128]:int;
          continue L_w;
        }
        label B_qc:
        d = select_if(d, e + 528, g_b);
        if (eqz(g_b) | n == 28) {
          time_appendInt(d, m, i, l, ea, 2);
          28;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[134]:int;
          i = e[133]:int;
          m = e[132]:int;
          continue L_w;
        }
        label B_pc:
        d = select_if(d, e + 544, g_b);
        if (eqz(g_b) | n == 29) {
          time_appendInt(d, m, i, l, fa, 0);
          29;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[138]:int;
          i = e[137]:int;
          m = e[136]:int;
          continue L_w;
        }
        label B_oc:
        d = select_if(d, e + 560, g_b);
        if (eqz(g_b) | n == 30) {
          time_appendInt(d, m, i, l, fa, 2);
          30;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[142]:int;
          i = e[141]:int;
          m = e[140]:int;
          continue L_w;
        }
        label B_nc:
        d = select_if(d, u < 12, g_b);
        if (eqz(g_b)) {
          if (d) goto B_rf;
          d = e + 576;
        }
        if (eqz(g_b) | n == 31) {
          runtime_sliceAppend(d, m, 68099, i, l, 2, 1);
          31;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[146]:int;
          i = e[145]:int;
          m = e[144]:int;
          continue L_w;
        }
        label B_rf:
        d = select_if(d, e + 592, g_b);
        if (eqz(g_b) | n == 32) {
          runtime_sliceAppend(d, m, 68101, i, l, 2, 1);
          32;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[150]:int;
          i = e[149]:int;
          m = e[148]:int;
          continue L_w;
        }
        label B_mc:
        d = select_if(d, u < 12, g_b);
        if (eqz(g_b)) {
          if (d) goto B_xf;
          d = e + 608;
        }
        if (eqz(g_b) | n == 33) {
          runtime_sliceAppend(d, m, 68103, i, l, 2, 1);
          33;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[154]:int;
          i = e[153]:int;
          m = e[152]:int;
          continue L_w;
        }
        label B_xf:
        d = select_if(d, e + 624, g_b);
        if (eqz(g_b) | n == 34) {
          runtime_sliceAppend(d, m, 68105, i, l, 2, 1);
          34;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[158]:int;
          i = e[157]:int;
          m = e[156]:int;
          continue L_w;
        }
        label B_lc:
        if (eqz(g_b)) {
          if (t) goto B_dg;
          d = p - 24 > 4;
          if (d) goto B_dg;
          e[827]:byte = 90;
          f = e + 827;
          d = e + 640;
        }
        if (eqz(g_b) | n == 35) {
          runtime_sliceAppend(d, m, f, i, l, 1, 1);
          35;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[162]:int;
          i = e[161]:int;
          m = e[160]:int;
          continue L_w;
        }
        label B_dg:
        if (eqz(g_b)) {
          if (eqz(ia)) {
            e[826]:byte = 45;
            j = e + 826;
            d = ha;
            f = ja;
            goto B_x;
          }
          e[823]:byte = 43;
          j = e + 823;
          d = x;
          f = t;
          goto B_x;
        }
        label B_kc:
        f = select_if(f, d - 34 < 2, g_b);
        if (eqz(g_b)) {
          if (f) goto B_jg;
          d = d != 23;
          if (d) continue L_w;
          d = eqz(ba);
        }
        if (eqz(g_b)) {
          if (d) goto B_lg;
          d = e + 144;
        }
        if (eqz(g_b) | n == 36) {
          runtime_sliceAppend(d, m, da, i, l, ba, 1);
          36;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[38]:int;
          i = e[37]:int;
          m = e[36]:int;
          continue L_w;
        }
        label B_lg:
        if (eqz(g_b)) {
          if (eqz(ia)) {
            e[822]:byte = 45;
            j = e + 822;
            d = ha;
            goto B_y;
          }
          e[821]:byte = 43;
          j = e + 821;
          d = x;
          goto B_y;
        }
        label B_jg:
        if (eqz(g_b)) {
          j = p >> 16 & 4095;
          f = d != 35;
          if (eqz(f)) {
            h = eqz(ga);
            d = h | eqz(j);
            if (d) continue L_w;
          }
          e[831]:byte = (q = select_if(46, 44, p < 268435456));
          h = e + 831;
          d = e + 176;
        }
        if (eqz(g_b) | n == 37) {
          runtime_sliceAppend(d, m, h, i, l, 1, 1);
          37;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = e[44]:int;
          h = e[45]:int;
          s = e[46]:int;
          d = e + 160;
        }
        if (eqz(g_b) | n == 38) {
          time_appendInt(d, i, h, s, ga, 9);
          38;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[42]:int;
          d = e[41]:int;
          m = e[40]:int;
          i = j > 8;
          if (eqz(i)) {
            i = l < (d = d + j - 9);
            if (i) goto B_ca;
          }
          if (f) goto B_z;
          loop L_yg {
            f = d <= 0;
            if (f) goto B_z;
            j = (m + (i = d - 1))[0]:ubyte;
            f = j != 48;
            if (eqz(f)) {
              d = i > l;
              if (d) goto B_ca;
              d = i;
              continue L_yg;
            }
          }
          f = j != q;
          if (f) goto B_z;
          d = i <= l;
          if (d) continue L_w;
        }
        label B_ca:
        if (eqz(g_b) | n == 39) {
          runtime_slicePanic();
          39;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_aa:
        d = select_if(d, e + 88, g_b);
        if (eqz(g_b) | n == 40) {
          runtime_stringFromBytes(d, m, i);
          40;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = e[22]:int;
          f = b >= 0L;
          d = e[23]:int;
        }
        if (eqz(g_b)) {
          if (f) goto B_eh;
          o = 24;
          f = 0;
        }
        if (eqz(g_b) | n == 41) {
          runtime_alloc(24);
          let t2 = 41;
          if (g_b == 1) goto B_b;
          j = t2;
        }
        if (eqz(g_b)) {
          (j + 2)[0]:byte = (h = rodata_1[2256]:ubyte);
          j[0]:short@1 = rodata_1[2254]:ushort@1;
          j[3]:byte = select_if(45, 43, c < 0L);
          r = c >> 63L;
          r = (r ^ c) - r;
          b = r / 1000000000L;
          c = b * 1000000000L;
          w = r - c;
          i = r >= 1000000000000000000L;
          b = b % 1000000000L;
        }
        if (eqz(g_b)) {
          if (eqz(i)) {
            q = 4;
            goto B_ih;
          }
          c = r / 1000000000000000000L;
          i = i32_wrap_i64(c);
          f = e + 72;
        }
        if (eqz(g_b) | n == 42) {
          time_appendInt(f, j, 4, 24, i, 0);
          42;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          o = e[20]:int;
          q = e[19]:int;
          j = e[18]:int;
          f = 9;
        }
        label B_ih:
        if (eqz(g_b)) {
          i = e + 56;
          h = i32_wrap_i64(b);
        }
        if (eqz(g_b) | n == 43) {
          time_appendInt(i, j, q, o, h, f);
          43;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[820]:byte = 46;
          i = e[14]:int;
          h = e + 820;
          j = e[15]:int;
          x = e[16]:int;
          f = e + 40;
        }
        if (eqz(g_b) | n == 44) {
          runtime_sliceAppend(f, i, h, j, x, 1, 1);
          44;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = e[10]:int;
          h = e[11]:int;
          j = e[12]:int;
          x = i32_wrap_i64(w);
          f = e + 24;
        }
        if (eqz(g_b) | n == 45) {
          time_appendInt(f, i, h, j, x, 9);
          45;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = e[6]:int;
          h = e[7]:int;
          f = e + 16;
        }
        if (eqz(g_b) | n == 46) {
          runtime_stringFromBytes(f, i, h);
          46;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = e[4]:int;
          h = e[5]:int;
          f = e + 8;
        }
        if (eqz(g_b) | n == 47) {
          runtime_stringConcat(f, g, d, i, h);
          47;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = e[2]:int;
          d = e[3]:int;
        }
        label B_eh:
        if (eqz(g_b)) {
          a.a = g;
          a.b = d;
          stack_pointer = e + 832;
          return ;
        }
        label B_z:
        if (eqz(g_b)) {
          i = d;
          continue L_w;
        }
        label B_y:
        f = select_if(f, e + 128, g_b);
        if (eqz(g_b) | n == 48) {
          runtime_sliceAppend(f, m, j, i, l, 1, 1);
          48;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = e[32]:int;
          h = e[33]:int;
          q = e[34]:int;
          j = d / 60;
          f = e + 112;
        }
        if (eqz(g_b) | n == 49) {
          time_appendInt(f, i, h, q, j, 2);
          49;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = e + 96;
          i = e[28]:int;
          h = e[29]:int;
          q = e[30]:int;
          d = d - (j = j * 60);
        }
        if (eqz(g_b) | n == 50) {
          time_appendInt(f, i, h, q, d, 2);
          50;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[26]:int;
          i = e[25]:int;
          m = e[24]:int;
          continue L_w;
        }
        label B_x:
        h = select_if(h, e + 736, g_b);
        if (eqz(g_b) | n == 51) {
          runtime_sliceAppend(h, m, j, i, l, 1, 1);
          51;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = e + 720;
          j = e[185]:int;
          s = e[186]:int;
          q = d / 60;
          h = e[184]:int;
        }
        if (eqz(g_b) | n == 52) {
          time_appendInt(i, h, j, s, q, 2);
          52;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[182]:int;
          i = e[181]:int;
          m = e[180]:int;
          j = p - 27;
          h = j > 6;
        }
        if (eqz(g_b)) {
          if (h) goto B_ki;
          h = eqz(1 << j & 99);
          if (h) goto B_ki;
          e[825]:byte = 58;
          j = e + 825;
          h = e + 704;
        }
        if (eqz(g_b) | n == 53) {
          runtime_sliceAppend(h, m, j, i, l, 1, 1);
          53;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[178]:int;
          m = e[176]:int;
          i = e[177]:int;
        }
        label B_ki:
        h = select_if(h, p == 26, g_b);
        if (eqz(g_b)) {
          if (h) goto B_oi;
          h = p == 31;
          if (h) goto B_oi;
          h = e + 688;
          d = d - (j = q * 60);
        }
        if (eqz(g_b) | n == 54) {
          time_appendInt(h, m, i, l, d, 2);
          54;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[174]:int;
          m = e[172]:int;
          i = e[173]:int;
        }
        label B_oi:
        d = select_if(d, p - 25, g_b);
        if (eqz(g_b)) {
          br_table[B_si, L_w, L_w, B_ui, L_w, B_si, L_w, L_w, B_ui, ..L_w](d)
          label B_ui:
          e[824]:byte = 58;
          h = e + 824;
          d = e + 672;
        }
        if (eqz(g_b) | n == 55) {
          runtime_sliceAppend(d, m, h, i, l, 1, 1);
          55;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[170]:int;
          m = e[168]:int;
          i = e[169]:int;
        }
        label B_si:
        if (eqz(g_b)) {
          f = f % 60;
          d = e + 656;
        }
        if (eqz(g_b) | n == 56) {
          time_appendInt(d, m, i, l, f, 2);
          56;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = e[166]:int;
          i = e[165]:int;
          m = e[164]:int;
          continue L_w;
        }
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = k;
  g_c[0]:int = g_c[0]:int + 4;
  k = g_c[0]:int;
  k[0]:int = a;
  k[1]:long@4 = b;
  k[3]:long@4 = c;
  k[5]:int = d;
  k[6]:int = e;
  k[7]:int = f;
  k[8]:int = g;
  k[9]:int = h;
  k[10]:int = i;
  k[11]:int = j;
  k[12]:int = l;
  k[13]:int = m;
  k[14]:int = o;
  k[15]:int = p;
  k[16]:int = q;
  k[17]:long@4 = r;
  k[19]:int = s;
  k[20]:int = t;
  k[21]:int = u;
  k[22]:long@4 = w;
  k[24]:int = x;
  k[25]:int = v;
  k[26]:int = y;
  k[27]:int = z;
  k[28]:int = aa;
  k[29]:int = ba;
  k[30]:int = ca;
  k[31]:int = da;
  k[32]:int = ea;
  k[33]:int = fa;
  k[34]:int = ga;
  k[35]:int = ha;
  k[36]:int = ia;
  k[37]:int = ja;
  k[38]:int = ka;
  k[39]:int = la;
  g_c[0]:int = g_c[0]:int + 160;
}

function get(a:{ a:int, b:int, c:int }):int { // func102
  var d:int;
  var b:int;
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    b = g_c[0]:int;
    a = b[0]:int;
    d = b[1]:int;
    b = b[2]:int;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer;
          b = d - 16;
          stack_pointer = b;
        }
        if (eqz(g_b)) {
          if (eqz(a)) {
            a = 87112;
            goto B_e;
          }
          d = a != 89688;
          if (d) goto B_e;
          a = eqz(89756[0]:ubyte);
        }
        if (eqz(g_b)) {
          if (a) goto B_j;
          d = 89760[0]:int;
          89760[0]:int = (a = 89176[0]:int);
          if (eqz(a)) goto B_h;
          a.a = d;
        }
        if (eqz(g_b) | eqz(c)) {
          internal_task_Pause();
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_i;
        label B_j:
        if (eqz(g_b)) { 89756[0]:byte = 1 }
        label B_i:
        if (eqz(g_b)) {
          b[2]:int = 89756;
          b[0]:long = 0L;
          a = eqz(89752[0]:ubyte);
        }
        if (eqz(g_b)) {
          if (a) goto B_p;
          a = b;
        }
        loop L_r {
          if (eqz(g_b)) {
            if (eqz(a)) goto B_o;
            d = a.b;
            a = a.c;
          }
          if (eqz(g_b) | c == 1) {
            Unlock(a);
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            a = d;
            continue L_r;
          }
        }
        label B_p:
        if (eqz(g_b)) {
          89692[0]:int = 5;
          89688[0]:int = 68134;
          89752[0]:byte = 1;
          a = b;
        }
        loop L_w {
          if (eqz(g_b)) {
            if (eqz(a)) goto B_o;
            d = a.b;
            a = a.c;
          }
          if (eqz(g_b) | c == 2) {
            Unlock(a);
            2;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            a = d;
            continue L_w;
          }
        }
        label B_o:
        if (eqz(g_b)) {
          a = 89688;
          goto B_e;
        }
        label B_h:
        if (eqz(g_b) | c == 3) {
          runtime_nilPanic();
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          stack_pointer = b + 16;
          return a;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = d;
  c.c = b;
  g_c[0]:int = g_c[0]:int + 12;
  return 0;
}

function String_4(a:{ a:int, b:int }, b:int) { // func103
  var c:{ a:int, b:int, c:int, d:int }
  var e:int;
  var d:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    e = c.c;
    c = c.d;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 16;
          stack_pointer = c;
          e = eqz(b);
        }
        if (eqz(g_b)) {
          if (e) goto B_e;
          e = c + 8;
        }
        if (eqz(g_b) | eqz(d)) {
          String(e, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = c.d;
          a.a = c.c;
          a.b = b;
          stack_pointer = c + 16;
          return ;
        }
        label B_e:
        if (eqz(g_b) | d == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = e;
  d.d = c;
  g_c[0]:int = g_c[0]:int + 16;
}

function String_5(a:{ a:int, b:int }, b:int) { // func104
  var c:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var d:byte_ptr;
  var f:int;
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    f = g_c[0]:int;
    a = f[0]:int;
    b = f[1]:int;
    c = f[2]:int;
    d = f[3]:int;
    e = f[4]:int;
    f = f[5]:int;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer - 96;
        stack_pointer = c;
        (c + 88)[0]:long = 0L;
        (c + 80)[0]:long = 0L;
        (c + 72)[0]:long = 0L;
        c[8]:long = 0L;
        c[12]:int = 0;
        e = 0;
      }
      loop L_f {
        if (eqz(g_b)) {
          f = c + 48;
          d = c + 32;
        }
        if (eqz(g_b) | eqz(g)) {
          runtime_stringNext(d, 68292, 13, f);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = eqz(c[32]:ubyte);
          if (d) goto B_g;
          f = -2147483648 >> (d = c[9]:int);
          d = eqz(select_if(f, 0, d <= 31) & b);
          if (d) continue L_f;
          if (e == 32) goto B_e;
          d = e + c - -64;
          d[0] = (f = c[10]:int);
          e = e + 1;
          continue L_f;
        }
        label B_g:
      }
      if (eqz(g_b)) {
        if (eqz(e)) {
          c[64]:byte = 45;
          e = 1;
        }
        c[14]:int = 0;
      }
      loop L_m {
        if (eqz(g_b)) {
          f = c + 56;
          d = c + 16;
        }
        if (eqz(g_b) | g == 1) {
          runtime_stringNext(d, 68305, 9, f);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { d = eqz(c[16]:ubyte) }
        if (eqz(g_b)) {
          if (eqz(d)) {
            d = eqz(select_if(1 << (d = 8 - c[5]:int), 0, d <= 31) & b);
            if (d) goto B_s;
            if (e > 31) goto B_e;
            d = c[6]:int;
            goto B_q;
          }
          b = e > 32;
          if (b) goto B_r;
          d = c - -64;
          b = c + 8;
        }
        if (eqz(g_b) | g == 2) {
          runtime_stringFromBytes(b, d, e);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e = c[3]:int;
          a.a = c[2]:int;
          a.b = e;
          stack_pointer = c + 96;
          return ;
        }
        label B_s:
        if (eqz(g_b)) {
          d = 45;
          if (e <= 31) goto B_q;
          goto B_e;
        }
        label B_r:
        if (eqz(g_b) | g == 3) {
          runtime_slicePanic();
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_q:
        if (eqz(g_b)) {
          f = c - -64 + e;
          f[0]:byte = d;
          e = e + 1;
          continue L_m;
        }
      }
      label B_e:
      if (eqz(g_b) | g == 4) {
        runtime_lookupPanic();
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = f;
  g_c[0]:int = g_c[0]:int + 24;
}

function runtime_hashmapGet(a:int_ptr, b:int, c:int, d:int):int { // func105
  var f:int_ptr;
  var g:int;
  var j:int;
  var h:int;
  var k:int;
  var n:int;
  var i:int;
  var m:int;
  var l:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 48;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    h = e.g;
    i = e.h;
    j = e.i;
    k = e.j;
    l = e.k;
    m = e.l;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          n = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          j = select_if(1, d >> 24, g = d < 16777216);
          f = runtime_hashmapBucketAddrForHash(a, d);
        }
        loop L_g {
          if (eqz(g_b)) {
            if (eqz(f)) goto B_h;
            k = f + 12;
            d = 0;
          }
          loop L_j {
            if (eqz(g_b)) {
              g = d == 8;
              if (g) goto B_k;
              g = j != (d + f)[0]:ubyte;
            }
            if (eqz(g_b)) {
              if (g) goto B_m;
              h = a[7];
              if (eqz(h)) goto B_e;
              l = a[4];
              m = a[6];
              i = k + (g = a[3]) * d;
            }
            if (eqz(g_b) | eqz(n)) {
              call_indirect(b, i, g, m, h);
              let t0 = 0;
              if (g_b == 1) goto B_b;
              h = t0;
            }
            if (eqz(g_b)) {
              h = eqz(h & 1);
              if (h) goto B_m;
              memory_copy(c, f + (g << 3) + d * l + 12, a[4]);
              goto B_f;
            }
            label B_m:
            if (eqz(g_b)) {
              d = d + 1;
              continue L_j;
            }
            label B_k:
          }
          if (eqz(g_b)) {
            f = f[2];
            continue L_g;
          }
          label B_h:
        }
        if (eqz(g_b)) { memory_fill(c, 0, a[4]) }
        label B_f:
        if (eqz(g_b)) { return f != 0 }
        label B_e:
        if (eqz(g_b) | n == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  e.f = g;
  e.g = h;
  e.h = i;
  e.i = j;
  e.j = k;
  e.k = l;
  e.l = m;
  g_c[0]:int = g_c[0]:int + 48;
  return 0;
}

function runtime_hashmapBucketAddrForHash(a:int, b:int):int { // func106
  return a[0]:int +
         ((a[4]:int + a[3]:int << 3) + 12) *
         (select_if(-1, -1 << (a = a[20]:ubyte) ^ -1, a > 31) & b)
}

function runtime_hashmapSet(a:int, b:int, c:int, d:int) { // func107
  var l:long_ptr;
  var f:int_ptr;
  var h:int;
  var g:int_ptr;
  var i:int;
  var j:int;
  var k:byte_ptr;
  var m:int;
  var q:int;
  var s:ubyte_ptr;
  var t:int;
  var n:int;
  var r:int;
  var p:int;
  var o:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 72;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    h = e.g;
    j = e.h;
    k = e.i;
    l = e.j;
    m = e.k;
    o = e.l;
    n = e.m;
    p = e.n;
    q = e.o;
    r = e.p;
    s = e.q;
    t = e.r;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          i = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          l = stack_pointer - 32;
          stack_pointer = l;
          f = eqz(a);
        }
        if (eqz(g_b)) {
          if (f) goto B_f;
          h = a[20]:ubyte;
          f = h > 29;
        }
        if (eqz(g_b)) {
          if (f) goto B_h;
          g = a[2]:int;
          f = g <= 6 << h;
          if (f) goto B_h;
        }
        if (eqz(g_b) | eqz(i)) {
          runtime_alloc(40);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b)) {
          memory_copy(d, a, 40);
          d[2]:int = 0;
          g = runtime_fastrand();
          d[20]:byte = (h = h + 1);
          d[1]:int = g;
          f = (a[4]:int + a[3]:int << 3) + 12 << (g = h & 255);
        }
        if (eqz(g_b) | i == 1) {
          runtime_alloc(f);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          f = t1;
        }
        if (eqz(g_b)) {
          d[0]:int = f;
          (l + 16)[0]:long = 0L;
          (l + 24)[0]:long = 0L;
          l[1] = 0L;
          f = a[3]:int;
        }
        if (eqz(g_b) | i == 2) {
          runtime_alloc(f);
          let t2 = 2;
          if (g_b == 1) goto B_b;
          h = t2;
        }
        if (eqz(g_b)) { f = a[4]:int }
        if (eqz(g_b) | i == 3) {
          runtime_alloc(f);
          let t3 = 3;
          if (g_b == 1) goto B_b;
          g = t3;
        }
        loop L_q {
          f = select_if(f, l + 8, g_b);
          if (eqz(g_b) | i == 4) {
            runtime_hashmapNext(a, f, h, g);
            let t4 = 4;
            if (g_b == 1) goto B_b;
            f = t4;
          }
          if (eqz(g_b)) {
            f = eqz(f & 1);
            if (f) goto B_r;
            j = d[9]:int;
            if (eqz(j)) goto B_f;
            k = d[1]:int;
            m = d[8]:int;
            f = d[3]:int;
          }
          if (eqz(g_b) | i == 5) {
            call_indirect(h, f, k, m, j);
            let t5 = 5;
            if (g_b == 1) goto B_b;
            f = t5;
          }
          if (eqz(g_b) | i == 6) {
            runtime_hashmapSet(d, h, g, f);
            6;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) continue L_q;
          label B_r:
        }
        if (eqz(g_b)) {
          memory_copy(a, d, 40);
          d = a[9]:int;
          if (eqz(d)) goto B_f;
          g = a[1]:int;
          h = a[8]:int;
          f = a[3]:int;
        }
        if (eqz(g_b) | i == 7) {
          call_indirect(b, f, g, h, d);
          let t6 = 7;
          if (g_b == 1) goto B_b;
          d = t6;
        }
        label B_h:
        if (eqz(g_b)) {
          m = select_if(1, f = d >> 24, d < 16777216);
          g = 0;
          h = 0;
          o = 0;
          k = 0;
          d = runtime_hashmapBucketAddrForHash(a, d);
        }
        loop L_z {
          if (eqz(g_b)) {
            f = d;
            j = eqz(d);
            if (j) goto B_aa;
            q = d + 12;
            d = 0;
          }
          loop L_ca {
            if (eqz(g_b)) {
              g = d == 8;
              if (g) goto B_da;
              j = q + (g = a[3]:int) * d;
              p = q + (g << 3) + a[4]:int * d;
              s = d + f;
              t = s[0];
              n = t != m;
            }
            if (eqz(g_b)) {
              if (n) goto B_fa;
              n = a[7]:int;
              if (eqz(n)) goto B_f;
              r = a[6]:int;
            }
            if (eqz(g_b) | i == 8) {
              call_indirect(b, j, g, r, n);
              let t7 = 8;
              if (g_b == 1) goto B_b;
              g = t7;
            }
            if (eqz(g_b)) {
              g = eqz(g & 1);
              if (g) goto B_fa;
              memory_copy(p, c, a[4]:int);
              goto B_e;
            }
            label B_fa:
            if (eqz(g_b)) {
              k = select_if(k, s, g = h | t);
              h = select_if(h, j, g);
              o = select_if(o, p, g);
              d = d + 1;
              continue L_ca;
            }
            label B_da:
          }
          if (eqz(g_b)) {
            d = f[2];
            g = f;
            continue L_z;
          }
          label B_aa:
        }
        if (eqz(g_b)) {
          if (h) goto B_la;
          d = (a[4]:int + a[3]:int << 3) + 12;
        }
        if (eqz(g_b) | i == 9) {
          runtime_alloc(d);
          let t8 = 9;
          if (g_b == 1) goto B_b;
          d = t8;
        }
        if (eqz(g_b)) {
          a[2]:int = a[2]:int + 1;
          h = d + 12;
          memory_copy(h, b, j = a[3]:int);
          memory_copy(h + (j << 3), c, a[4]:int);
          d[0]:byte = m;
          if (eqz(g)) goto B_f;
          g[2] = d;
          goto B_e;
        }
        label B_la:
        if (eqz(g_b)) {
          a[2]:int = a[2]:int + 1;
          memory_copy(h, b, a[3]:int);
          memory_copy(o, c, a[4]:int);
          if (eqz(k)) goto B_f;
          k[0] = m;
          goto B_e;
        }
        label B_f:
        if (eqz(g_b) | i == 10) {
          runtime_nilPanic();
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) { stack_pointer = l + 32 }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  e.f = g;
  e.g = h;
  e.h = j;
  e.i = k;
  e.j = l;
  e.k = m;
  e.l = o;
  e.m = n;
  e.n = p;
  e.o = q;
  e.p = r;
  e.q = s;
  e.r = t;
  g_c[0]:int = g_c[0]:int + 72;
}

function runtime_fastrand():int { // func108
  var a:int;
  data[0]:int =
    (a = (a = (a = (a = data[0]:int) << 7 ^ a) >> 1 ^ a) << 9 ^ a);
  return a;
}

function runtime_hashmapNext(a:int, b:int, c:int, d:int):int { // func109
  var e:int_ptr;
  var h:int;
  var i:int;
  var g:int;
  var j:int;
  var k:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    f = g_c[0]:int;
    a = f.a;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    h = f.g;
    i = f.h;
    k = f.i;
    b = f.b;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      e = select_if(e, eqz(a), g_b);
      if (eqz(g_b)) {
        if (e) goto B_e;
        e = eqz(b);
      }
      if (eqz(g_b)) {
        if (e) goto B_g;
        e = b[0]:int;
        if (eqz(e)) {
          b[0]:int = a[0]:int;
          b[1]:int = select_if(1 << (e = a[20]:ubyte), 0, e <= 31);
          b[3]:int = runtime_fastrand() & b[1]:int - 1;
          b[21]:byte = (e = runtime_fastrand() & 7);
          b[2]:int = (g = b[3]:int);
          h = a[4]:int;
          i = a[3]:int;
          b[20]:byte = e;
          b[4]:int = (e = (g = (h = (h + i << 3) + 12) * g) + b[0]:int);
        }
      }
      loop L_j {
        if (eqz(g_b)) {
          if (eqz(b[22]:ubyte)) {
            g = b[20]:ubyte;
            goto B_l;
          }
          g = b[20]:ubyte;
          if (b[2]:int != b[3]:int) goto B_l;
          if (b[21]:ubyte == (g & 255)) goto B_e;
          label B_l:
          e = b[4]:int;
          if ((g & 255) >= 8) {
            b[20]:byte = 0;
            g = eqz(e);
            if (g) goto B_g;
            b[4]:int = (e = e[2]);
            g = 0;
          }
          if (eqz(e)) {
            b[2]:int = (e = b[2]:int + 1);
            b[4]:int =
              (e = if (e >= b[1]:int) {
                     b[22]:byte = 1;
                     b[2]:int = 0;
                     0;
                   } else {
                     e
                   } *
                   (h = ((i = a[3]:int) + a[4]:int << 3) + 12) +
                   (g = b[0]:int));
            continue L_j;
          }
          h = g & 255;
          i = (h + e)[0]:ubyte;
          if (eqz(i)) {
            b[20]:byte = (e = g + 1);
            continue L_j;
          }
          memory_copy(c, h * (g = a[3]:int) + e + 12, g);
          if (b[0]:int == a[0]:int) {
            memory_copy(
              d,
              b[4]:int + (a[3]:int << 3) + (e = a[4]:int) * b[20]:ubyte + 12,
              e);
            b[20]:byte = b[20]:ubyte + 1;
            return 1;
          }
          b[20]:byte = b[20]:ubyte + 1;
          e = a[9]:int;
          g = eqz(e);
          if (g) goto B_g;
          h = a[3]:int;
          i = a[1]:int;
          k = a[8]:int;
          g = 1;
        }
        if (eqz(g_b) | eqz(j)) {
          call_indirect(c, h, i, k, e);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          e = t0;
        }
        if (eqz(g_b) | j == 1) {
          runtime_hashmapGet(a, c, d, e);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          e = t1;
        }
        if (eqz(g_b)) {
          e = e & 1;
          if (e) goto B_d;
          continue L_j;
        }
      }
      label B_g:
      if (eqz(g_b) | j == 2) {
        runtime_nilPanic();
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      g = select_if(g, 0, g_b);
      label B_d:
      if (eqz(g_b)) { return g }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = d;
  f.e = e;
  f.f = g;
  f.g = h;
  f.h = i;
  f.i = k;
  g_c[0]:int = g_c[0]:int + 36;
  return 0;
}

function runtime_reflectValueEqual(a:ubyte_ptr, b:int, c:int, d:int, e:int, f:int):int { // func110
  var h:int;
  var i:int;
  var l:int;
  var j:int;
  var o:long;
  var p:long;
  var n:double;
  var r:double;
  var k:int;
  var m:int;
  var t:int;
  var s:int;
  var u:int;
  var v:int;
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 92;
    g = g_c[0]:int;
    a = g[0]:int;
    c = g[2]:int;
    d = g[3]:int;
    e = g[4]:int;
    f = g[5]:int;
    h = g[6]:int;
    i = g[7]:int;
    k = g[8]:int;
    l = g[9]:int;
    m = g[10]:int;
    n = g[11]:double@4;
    o = g[13]:long@4;
    p = g[15]:long@4;
    r = g[17]:double@4;
    s = g[19]:int;
    t = g[20]:int;
    u = g[21]:int;
    v = g[22]:int;
    b = g[1]:int;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        h = stack_pointer - 144;
        stack_pointer = h;
      }
      loop L_f {
        if (eqz(g_b)) {
          i = eqz(a) | eqz(d);
          if (eqz(i)) {
            l = a == d;
            if (l) goto B_h;
          }
          i = i & a == d;
          goto B_e;
          label B_h:
          i = a & 3;
        }
        if (eqz(g_b)) {
          if (i) goto B_n;
          i = (a[0] & 31) - 1;
        }
        if (eqz(g_b)) {
          br_table[B_v, B_t, B_t, B_t, B_t, B_t, B_s, B_s, B_s, B_s, B_s, B_s, B_r, B_r, B_q, B_q, B_p, B_n, B_n, B_k, B_n, B_j, B_m, B_j, B_j, B_l, ..B_j](
            i)
          label B_v:
        }
        if (eqz(g_b) | eqz(j)) {
          Bool(a, b, c);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b) | j == 1) {
          Bool(d, e, f);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          b = t1;
        }
        if (eqz(g_b)) {
          i = (a ^ b) ^ 1;
          goto B_e;
        }
        label B_t:
        if (eqz(g_b) | j == 2) {
          Int(a, b, c);
          let t2 = 2;
          if (g_b == 1) goto B_b;
          o = t2;
        }
        if (eqz(g_b) | j == 3) {
          Int(d, e, f);
          let t3 = 3;
          if (g_b == 1) goto B_b;
          p = t3;
        }
        if (eqz(g_b)) {
          i = o == p;
          goto B_e;
        }
        label B_s:
        if (eqz(g_b) | j == 4) {
          Uint(a, b, c);
          let t4 = 4;
          if (g_b == 1) goto B_b;
          o = t4;
        }
        if (eqz(g_b) | j == 5) {
          Uint(d, e, f);
          let t5 = 5;
          if (g_b == 1) goto B_b;
          p = t5;
        }
        if (eqz(g_b)) {
          i = o == p;
          goto B_e;
        }
        label B_r:
        if (eqz(g_b) | j == 6) {
          Float(a, b, c);
          let t6 = 6;
          if (g_b == 1) goto B_b;
          n = t6;
        }
        if (eqz(g_b) | j == 7) {
          Float(d, e, f);
          let t7 = 7;
          if (g_b == 1) goto B_b;
          r = t7;
        }
        if (eqz(g_b)) {
          i = n == r;
          goto B_e;
        }
        label B_q:
        c = select_if(c, h + 16, g_b);
        if (eqz(g_b) | j == 8) {
          Complex(c, a, b);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          r = h[3]:double;
          n = h[2]:double;
        }
        if (eqz(g_b) | j == 9) {
          Complex(h, d, e);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = h[0]:double == n & r == h[1]:double;
          goto B_e;
        }
        label B_p:
        c = select_if(c, h + 40, g_b);
        if (eqz(g_b) | j == 10) {
          String_2(c, a, b);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = h[10]:int;
          c = h + 32;
          a = h[11]:int;
        }
        if (eqz(g_b) | j == 11) {
          String_2(c, d, e);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          i = runtime_stringEqual(b, a, h[8]:int, h[9]:int);
          goto B_e;
        }
        label B_n:
        if (eqz(g_b) | j == 12) {
          UnsafePointer(a, b, c);
          let t8 = 12;
          if (g_b == 1) goto B_b;
          a = t8;
        }
        if (eqz(g_b) | j == 13) {
          UnsafePointer(d, e, f);
          let t9 = 13;
          if (g_b == 1) goto B_b;
          b = t9;
        }
        if (eqz(g_b)) {
          i = a == b;
          goto B_e;
        }
        label B_m:
        l = select_if(l, 0, g_b);
        loop L_ta {
          if (eqz(g_b) | j == 14) {
            Len_1(a, b, c);
            let t10 = 14;
            if (g_b == 1) goto B_b;
            i = t10;
          }
          if (eqz(g_b)) {
            i = i <= l;
            if (i) goto B_e;
            k = h - -64;
          }
          if (eqz(g_b) | j == 15) {
            Index(k, a, b, c, l);
            15;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            s = h[17]:int;
            t = h[16]:int;
            m = h + 48;
            k = h[72]:ubyte;
          }
          if (eqz(g_b) | j == 16) {
            Index(m, d, e, f, l);
            16;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            m = h[12]:int;
            u = h[13]:int;
            v = h[56]:ubyte;
            l = l + 1;
          }
          if (eqz(g_b) | j == 17) {
            runtime_reflectValueEqual(t, s, k, m, u, v);
            let t11 = 17;
            if (g_b == 1) goto B_b;
            k = t11;
          }
          if (eqz(g_b)) {
            k = eqz(k & 1);
            if (k) goto B_e;
            continue L_ta;
          }
        }
        label B_l:
        l = select_if(l, 0, g_b);
        loop L_cb {
          if (eqz(g_b) | j == 18) {
            NumField(a);
            let t12 = 18;
            if (g_b == 1) goto B_b;
            i = t12;
          }
          if (eqz(g_b)) {
            i = i <= l;
            if (i) goto B_e;
            k = h + 96;
          }
          if (eqz(g_b) | j == 19) {
            Field(k, a, b, c, l);
            19;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            s = h[25]:int;
            t = h[24]:int;
            m = h + 80;
            k = h[104]:ubyte;
          }
          if (eqz(g_b) | j == 20) {
            Field(m, d, e, f, l);
            20;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            m = h[20]:int;
            u = h[21]:int;
            v = h[88]:ubyte;
            l = l + 1;
          }
          if (eqz(g_b) | j == 21) {
            runtime_reflectValueEqual(t, s, k, m, u, v);
            let t13 = 21;
            if (g_b == 1) goto B_b;
            k = t13;
          }
          if (eqz(g_b)) {
            k = eqz(k & 1);
            if (k) goto B_e;
            continue L_cb;
          }
        }
        label B_k:
        i = select_if(i, h + 128, g_b);
        if (eqz(g_b) | j == 22) {
          Elem(i, a, b, c);
          22;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[136]:ubyte;
          b = h[33]:int;
          i = h + 112;
          a = h[32]:int;
        }
        if (eqz(g_b) | j == 23) {
          Elem(i, d, e, f);
          23;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = h[120]:ubyte;
          e = h[29]:int;
          d = h[28]:int;
          continue L_f;
        }
        label B_j:
      }
      if (eqz(g_b) | j == 24) {
        runtime_runtimePanic(67109, 28);
        24;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b)) {
        stack_pointer = h + 144;
        return i;
      }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g[0]:int = a;
  g[1]:int = b;
  g[2]:int = c;
  g[3]:int = d;
  g[4]:int = e;
  g[5]:int = f;
  g[6]:int = h;
  g[7]:int = i;
  g[8]:int = k;
  g[9]:int = l;
  g[10]:int = m;
  g[11]:double@4 = n;
  g[13]:long@4 = o;
  g[15]:long@4 = p;
  g[17]:double@4 = r;
  g[19]:int = s;
  g[20]:int = t;
  g[21]:int = u;
  g[22]:int = v;
  g_c[0]:int = g_c[0]:int + 92;
  return 0;
}

function runtime_stringEqual(a:ubyte_ptr, b:int, c:ubyte_ptr, d:int):int { // func111
  var e:int;
  if (b != d) goto B_a;
  b = select_if(b, 0, b > 0);
  loop L_b {
    e = eqz(b);
    if (eqz(b)) goto B_a;
    b = b - 1;
    let t0, t1 = c[0], a[0];
    c = c + 1;
    a = a + 1;
    if (t0 == t1) continue L_b;
  }
  label B_a:
  return e;
}

function runtime_stringLess(a:ubyte_ptr, b:int, c:ubyte_ptr, d:int):int { // func112
  var f:int;
  var g:int;
  var e:int = select_if(d, b, b > d);
  e = select_if(e, 0, e > 0);
  loop L_b {
    if (eqz(e)) goto B_a;
    e = e - 1;
    f = c[0];
    g = a[0];
    c = c + 1;
    a = a + 1;
    if (f == g) continue L_b;
  }
  return f > g;
  label B_a:
  return b < d;
}

function runtime_stringFromUnicode(a:{ a:int, b:int }, b:int) { // func113
  var c:int;
  var e:int;
  var g:int;
  var d:{ a:int, b:int, c:int }
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c[0]:int;
    b = c[1]:int;
    c = c[2]:int;
  }
  d = {
        if (eqz(g_b) |
            eqz(if (g_b == 2) {
                  g_c[0]:int = g_c[0]:int - 4;
                  (g_c[0]:int)[0]:int;
                } else {
                  0
                })) {
          runtime_alloc(4);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          c = t0;
        }
        if (eqz(g_b)) {
          if (b <= 127) {
            f = 1;
            goto B_g;
          }
          if (b <= 2047) {
            e = (b & 63) | -128;
            b = b >> 6 | -64;
            f = 2;
            goto B_g;
          }
          f = 3;
          d = 0;
          if ((b & 2147481600) == 55296) {
            g = 189;
            e = 191;
            b = 239;
            goto B_f;
          }
          if (b <= 65535) {
            g = (b & 63) | -128;
            e = (b >> 6 & 63) | -128;
            b = b >> 12 | -32;
            goto B_f;
          }
          d = (b & 63) | -128;
          g = (b >> 6 & 63) | -128;
          e = (b >> 12 & 63) | -128;
          f = 4;
          b = b >> 18 | -16;
          goto B_f;
          label B_g:
          d = 0;
          label B_f:
          c[0]:byte = b;
          c[1]:byte = e;
          c[2]:byte = g;
          c[3]:byte = d;
          a.b = f;
          a.a = c;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  g_c[0]:int = g_c[0]:int + 12;
}

function Elem_1(a:{ a:int, b:int, c:byte }, b:int, c:int, d:int) { // func114
  var e:int;
  var f:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e[0]:int;
    b = e[1]:int;
    c = e[2]:int;
    d = e[3]:int;
    e = e[4]:int;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 16;
          stack_pointer = e;
        }
        if (eqz(g_b) | eqz(f)) {
          Elem(e, b, c, d);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = e[1]:int;
          c = e[8]:ubyte;
          a.a = e[0]:int;
          a.c = c;
          a.b = d;
          stack_pointer = e + 16;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = d;
  f.e = e;
  g_c[0]:int = g_c[0]:int + 20;
}

function Field_1(a:{ a:int, b:int, c:byte }, b:int, c:int, d:int, e:int) { // func115
  var f:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    f = g_c[0]:int;
    a = f[0]:int;
    b = f[1]:int;
    c = f[2]:int;
    d = f[3]:int;
    e = f[4]:int;
    f = f[5]:int;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 16;
          stack_pointer = f;
        }
        if (eqz(g_b) | eqz(g)) {
          Field(f, b, c, d, e);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e = f[1]:int;
          d = f[8]:ubyte;
          a.a = f[0]:int;
          a.c = d;
          a.b = e;
          stack_pointer = f + 16;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = f;
  g_c[0]:int = g_c[0]:int + 24;
}

function Index_1(a:{ a:int, b:int, c:byte }, b:int, c:int, d:int, e:int) { // func116
  var f:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    f = g_c[0]:int;
    a = f[0]:int;
    b = f[1]:int;
    c = f[2]:int;
    d = f[3]:int;
    e = f[4]:int;
    f = f[5]:int;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 16;
          stack_pointer = f;
        }
        if (eqz(g_b) | eqz(g)) {
          Index(f, b, c, d, e);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e = f[1]:int;
          d = f[8]:ubyte;
          a.a = f[0]:int;
          a.c = d;
          a.b = e;
          stack_pointer = f + 16;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = f;
  g_c[0]:int = g_c[0]:int + 24;
}

function internal_fmtsort_Sort_1(a:int, b:int, c:int, d:{ a:int, b:int, c:int, d:int, e:int, f:int }, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int):int { // func117
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    g = d.d;
    h = d.e;
    i = d.f;
    b = d.b;
  }
  d = {
        if (eqz(g_b) |
            eqz(if (g_b == 2) {
                  g_c[0]:int = g_c[0]:int - 4;
                  (g_c[0]:int)[0]:int;
                } else {
                  0
                })) {
          internal_fmtsort_compare(a, b, c, g, h, i);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) { return a }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  d.d = g;
  d.e = h;
  d.f = i;
  g_c[0]:int = g_c[0]:int + 24;
  return 0;
}

function internal_fmtsort_compare(a:ubyte_ptr, b:int, c:int, d:int, e:int, f:int):int { // func118
  var i:int;
  var j:int;
  var g:int;
  var n:long;
  var q:long;
  var m:double;
  var l:double;
  var s:double;
  var k:int;
  var p:int;
  var u:int;
  var t:int;
  var v:int;
  var w:int;
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 96;
    h = g_c[0]:int;
    a = h[0]:int;
    c = h[2]:int;
    d = h[3]:int;
    e = h[4]:int;
    f = h[5]:int;
    g = h[6]:int;
    i = h[7]:int;
    k = h[8]:int;
    l = h[9]:double@4;
    m = h[11]:double@4;
    n = h[13]:long@4;
    p = h[15]:int;
    q = h[16]:long@4;
    s = h[18]:double@4;
    t = h[20]:int;
    u = h[21]:int;
    v = h[22]:int;
    w = h[23]:int;
    b = h[1]:int;
  }
  h = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        i = stack_pointer - 208;
        stack_pointer = i;
      }
      loop L_i {
        if (eqz(g_b) | eqz(j)) {
          runtime_reflectValueEqual(86860, a, 2, 86860, d, 2);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          g = t0;
        }
        if (eqz(g_b)) {
          g = eqz(g & 1);
          if (g) goto B_f;
          g = eqz(a);
        }
        if (eqz(g_b)) {
          if (g) goto B_l;
          g = a & 3;
        }
        if (eqz(g_b)) {
          if (g) goto B_r;
          g = (a[0] & 31) - 1;
        }
        if (eqz(g_b)) {
          br_table[B_t, B_z, B_z, B_z, B_z, B_z, B_x, B_x, B_x, B_x, B_x, B_x, B_v, B_v, B_u, B_u, B_w, B_r, B_q, B_n, B_r, B_l, B_o, B_l, B_l, B_p, ..B_l](
            g)
          label B_z:
        }
        if (eqz(g_b) | j == 1) {
          Int(a, b, c);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          n = t1;
        }
        if (eqz(g_b) | j == 2) {
          Int(d, e, f);
          let t2 = 2;
          if (g_b == 1) goto B_b;
          q = t2;
        }
        if (eqz(g_b)) {
          g = select_if(-1, n > q, n < q);
          goto B_e;
        }
        label B_x:
        if (eqz(g_b) | j == 3) {
          Uint(a, b, c);
          let t3 = 3;
          if (g_b == 1) goto B_b;
          n = t3;
        }
        if (eqz(g_b) | j == 4) {
          Uint(d, e, f);
          let t4 = 4;
          if (g_b == 1) goto B_b;
          q = t4;
        }
        if (eqz(g_b)) {
          g = select_if(-1, n > q, n < q);
          goto B_e;
        }
        label B_w:
        c = select_if(c, i + 24, g_b);
        if (eqz(g_b) | j == 5) {
          String_2(c, a, b);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = i[6]:int;
          c = i + 16;
          a = i[7]:int;
        }
        if (eqz(g_b) | j == 6) {
          String_2(c, d, e);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = 1;
          let t5 = cmp_isNaN_string(b, a);
          c = cmp_isNaN_string(e = i[4]:int, f = i[5]:int);
          if (t5 & 1) {
            g = (c & 1) - 1;
            goto B_e;
          }
          if (c & 1) goto B_e;
          g = -1;
          if (runtime_stringLess(b, a, e, f) & 1) goto B_e;
          g = runtime_stringLess(e, f, b, a) & 1;
          goto B_e;
        }
        label B_v:
        if (eqz(g_b) | j == 7) {
          Float(a, b, c);
          let t6 = 7;
          if (g_b == 1) goto B_b;
          m = t6;
        }
        if (eqz(g_b) | j == 8) {
          Float(d, e, f);
          let t7 = 8;
          if (g_b == 1) goto B_b;
          l = t7;
        }
        if (eqz(g_b)) {
          if (m != m) {
            g = select_if(-1, 0, l == l);
            goto B_e;
          }
          if (l != l) goto B_g;
          g = -1;
          if (l > m) goto B_e;
          g = l < m;
          goto B_e;
        }
        label B_u:
        c = select_if(c, i + 48, g_b);
        if (eqz(g_b) | j == 9) {
          Complex(c, a, b);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          s = i[7]:double;
          m = i[6]:double;
          a = i + 32;
        }
        if (eqz(g_b) | j == 10) {
          Complex(a, d, e);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          var o:double = i[5]:double;
          l = i[4]:double;
          g = if (m != m) {
                select_if(-1, 0, l == l)
              } else {
                if (l != l) goto B_g;
                if (l > m) goto B_f;
                l < m;
              }
          if (g) goto B_e;
          if (s != s) {
            g = select_if(-1, 0, o == o);
            goto B_e;
          }
          if (o != o) goto B_g;
          g = -1;
          if (o > s) goto B_e;
          g = o < s;
          goto B_e;
        }
        label B_t:
        if (eqz(g_b) | j == 11) {
          Bool(a, b, c);
          let t8 = 11;
          if (g_b == 1) goto B_b;
          a = t8;
        }
        b = select_if(b, select_if(1, -1, a & 1), g_b);
        if (eqz(g_b) | j == 12) {
          Bool(d, e, f);
          let t9 = 12;
          if (g_b == 1) goto B_b;
          c = t9;
        }
        if (eqz(g_b)) {
          g = select_if(b, 0, (a ^ c) & 1);
          goto B_e;
        }
        label B_r:
        if (eqz(g_b) | j == 13) {
          UnsafePointer(a, b, c);
          let t10 = 13;
          if (g_b == 1) goto B_b;
          a = t10;
        }
        if (eqz(g_b) | j == 14) {
          UnsafePointer(d, e, f);
          let t11 = 14;
          if (g_b == 1) goto B_b;
          d = t11;
        }
        if (eqz(g_b)) {
          g = select_if(-1, a > d, a < d);
          goto B_e;
        }
        label B_q:
        g = select_if(g, i - -64, g_b);
        if (eqz(g_b) | j == 15) {
          internal_fmtsort_nilCompare(g, a, b, c, d, e, f);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = eqz(i[68]:ubyte);
          if (eqz(g)) {
            g = i[16]:int;
            goto B_e;
          }
        }
        if (eqz(g_b) | j == 16) {
          UnsafePointer(a, b, c);
          let t12 = 16;
          if (g_b == 1) goto B_b;
          a = t12;
        }
        if (eqz(g_b) | j == 17) {
          UnsafePointer(d, e, f);
          let t13 = 17;
          if (g_b == 1) goto B_b;
          d = t13;
        }
        if (eqz(g_b)) {
          g = select_if(-1, a > d, a < d);
          goto B_e;
        }
        label B_p:
        k = select_if(k, 0, g_b);
        loop L_hb {
          if (eqz(g_b) | j == 18) {
            NumField(a);
            let t14 = 18;
            if (g_b == 1) goto B_b;
            g = t14;
          }
          if (eqz(g_b)) {
            g = g <= k;
            if (g) goto B_h;
            g = i + 88;
          }
          if (eqz(g_b) | j == 19) {
            Field_1(g, a, b, c, k);
            19;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            t = i[23]:int;
            u = i[22]:int;
            p = i + 72;
            g = i[96]:ubyte;
          }
          if (eqz(g_b) | j == 20) {
            Field_1(p, d, e, f, k);
            20;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            p = i[18]:int;
            v = i[19]:int;
            w = i[80]:ubyte;
            k = k + 1;
          }
          if (eqz(g_b) | j == 21) {
            internal_fmtsort_compare(u, t, g, p, v, w);
            let t15 = 21;
            if (g_b == 1) goto B_b;
            g = t15;
          }
          if (eqz(g_b)) {
            if (g) goto B_e;
            continue L_hb;
          }
        }
        label B_o:
        k = select_if(k, 0, g_b);
        loop L_qb {
          if (eqz(g_b) | j == 22) {
            Len_1(a, b, c);
            let t16 = 22;
            if (g_b == 1) goto B_b;
            g = t16;
          }
          if (eqz(g_b)) {
            g = g <= k;
            if (g) goto B_h;
            g = i + 120;
          }
          if (eqz(g_b) | j == 23) {
            Index_1(g, a, b, c, k);
            23;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            t = i[31]:int;
            u = i[30]:int;
            p = i + 104;
            g = i[128]:ubyte;
          }
          if (eqz(g_b) | j == 24) {
            Index_1(p, d, e, f, k);
            24;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            p = i[26]:int;
            v = i[27]:int;
            w = i[112]:ubyte;
            k = k + 1;
          }
          if (eqz(g_b) | j == 25) {
            internal_fmtsort_compare(u, t, g, p, v, w);
            let t17 = 25;
            if (g_b == 1) goto B_b;
            g = t17;
          }
          if (eqz(g_b)) {
            if (g) goto B_e;
            continue L_qb;
          }
        }
        label B_n:
        g = select_if(g, i + 200, g_b);
        if (eqz(g_b) | j == 26) {
          internal_fmtsort_nilCompare(g, a, b, c, d, e, f);
          26;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          if (i[204]:ubyte) {
            g = i[50]:int;
            goto B_e;
          }
          g = i + 184;
        }
        if (eqz(g_b) | j == 27) {
          Elem_1(g, a, b, c);
          27;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = i + 168;
          g = i[46]:int;
        }
        if (eqz(g_b) | j == 28) {
          Elem_1(k, d, e, f);
          28;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { k = i[42]:int }
        if (eqz(g_b) | j == 29) {
          internal_fmtsort_compare(86860, g, 2, 86860, k, 2);
          let t18 = 29;
          if (g_b == 1) goto B_b;
          g = t18;
        }
        if (eqz(g_b)) {
          if (g) goto B_e;
          g = i + 152;
        }
        if (eqz(g_b) | j == 30) {
          Elem_1(g, a, b, c);
          30;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = i[160]:ubyte;
          b = i[39]:int;
          g = i + 136;
          a = i[38]:int;
        }
        if (eqz(g_b) | j == 31) {
          Elem_1(g, d, e, f);
          31;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = i[144]:ubyte;
          e = i[35]:int;
          d = i[34]:int;
          continue L_i;
        }
        label B_l:
      }
      b = select_if(b, i + 8, g_b);
      if (eqz(g_b) | j == 32) {
        String_4(b, a);
        32;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        b = i[3]:int;
        a = i[2]:int;
      }
      if (eqz(g_b) | j == 33) {
        runtime_stringConcat(i, 67428, 21, a, b);
        33;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { n = i[0]:long }
      if (eqz(g_b) | j == 34) {
        runtime_alloc(8);
        let t19 = 34;
        if (g_b == 1) goto B_b;
        i = t19;
      }
      if (eqz(g_b)) { i[0]:long@4 = n }
      if (eqz(g_b) | j == 35) {
        runtime_panic(86192, i);
        35;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_h:
      if (eqz(g_b)) {
        g = 0;
        goto B_e;
      }
      label B_g:
      if (eqz(g_b)) {
        g = 1;
        goto B_e;
      }
      label B_f:
      g = select_if(g, -1, g_b);
      label B_e:
      if (eqz(g_b)) {
        stack_pointer = i + 208;
        return g;
      }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = h;
  g_c[0]:int = g_c[0]:int + 4;
  h = g_c[0]:int;
  h[0]:int = a;
  h[1]:int = b;
  h[2]:int = c;
  h[3]:int = d;
  h[4]:int = e;
  h[5]:int = f;
  h[6]:int = g;
  h[7]:int = i;
  h[8]:int = k;
  h[9]:double@4 = l;
  h[11]:double@4 = m;
  h[13]:long@4 = n;
  h[15]:int = p;
  h[16]:long@4 = q;
  h[18]:double@4 = s;
  h[20]:int = t;
  h[21]:int = u;
  h[22]:int = v;
  h[23]:int = w;
  g_c[0]:int = g_c[0]:int + 96;
  return 0;
}

function slices_insertionSortCmpFunc_internal_fmtsort_KeyValue(a:int, b:int, c:int, d:int) { // func119
  var g:int;
  var o:int;
  var k:int;
  var f:int;
  var i:ubyte_ptr;
  var j:int;
  var l:ubyte_ptr;
  var m:int;
  var y:int;
  var aa:int;
  var h:int;
  var n:int;
  var p:int;
  var q:int;
  var r:int;
  var s:int;
  var t:int;
  var u:int;
  var v:int;
  var w:int;
  var x:int;
  var z:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int, w:int, x:int, y:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 100;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    h = e.g;
    i = e.h;
    j = e.i;
    k = e.j;
    l = e.k;
    m = e.l;
    n = e.m;
    o = e.n;
    p = e.o;
    q = e.p;
    r = e.q;
    s = e.r;
    t = e.s;
    u = e.t;
    v = e.u;
    w = e.v;
    x = e.w;
    y = e.x;
    z = e.y;
    b = e.b;
  }
  e = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        aa = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        k = c * 24 + a;
        g = c;
      }
      loop L_e {
        if (eqz(g_b)) {
          o = g + 1;
          a = o >= d;
        }
        if (eqz(g_b)) {
          if (a) goto B_i;
          a = k;
        }
        loop L_k {
          if (eqz(g_b)) {
            f = g + 1;
            i = f <= c;
            if (i) goto B_g;
            f = b <= f;
            if (f) goto B_h;
            f = b <= g;
            if (f) goto B_h;
            n = (a + 28)[0]:int;
            i = a + 32;
            p = i[0];
            j = a + 36;
            q = j[0]:int;
            r = (a + 40)[0]:int;
            l = a + 44;
            s = l[0];
            t = a[0]:int;
            u = a[1]:int;
            v = a[8]:ubyte;
            m = a + 12;
            w = m[0]:int;
            x = (a + 16)[0]:int;
            y = a + 20;
            z = y[0]:ubyte;
            f = a + 24;
            h = f[0]:int;
          }
          if (eqz(g_b) | eqz(aa)) {
            internal_fmtsort_Sort_1(h, n, p, q, r, s, t, u, v, w, x, z);
            let t0 = 0;
            if (g_b == 1) goto B_b;
            h = t0;
          }
          if (eqz(g_b)) {
            h = h >= 0;
            if (h) goto B_g;
            i = i[0];
            var ba:long = f[0]:long@4;
            f[0]:long@4 = a[0]:long@4;
            (f + 8)[0]:int = (n = (f = a + 8)[0]:int);
            l = l[0];
            var ca:long = j[0]:long@4;
            j[0]:long@4 = m[0]:long@4;
            j = j + 8;
            j[0]:int = (h = (m + 8)[0]:int);
            a[0]:long@4 = ba;
            f[0]:byte = i;
            m[0]:long@4 = ca;
            y[0]:byte = l;
            a = a - 24;
            g = g - 1;
            continue L_k;
          }
        }
        label B_i:
        if (eqz(g_b)) { return  }
        label B_h:
        if (eqz(g_b) | aa == 1) {
          runtime_lookupPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_g:
        if (eqz(g_b)) {
          k = k + 24;
          g = o;
          continue L_e;
        }
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  e.f = g;
  e.g = h;
  e.h = i;
  e.i = j;
  e.j = k;
  e.k = l;
  e.l = m;
  e.m = n;
  e.n = o;
  e.o = p;
  e.p = q;
  e.q = r;
  e.r = s;
  e.s = t;
  e.t = u;
  e.u = v;
  e.v = w;
  e.w = x;
  e.x = y;
  e.y = z;
  g_c[0]:int = g_c[0]:int + 100;
}

function slices_symMergeCmpFunc_internal_fmtsort_KeyValue(a:int, b:int, c:int, d:int, e:int) { // func120
  var h:int;
  var f:int;
  var i:{ a:int, b:int, c:ubyte, d:int, e:int, f:ubyte }
  var k:int;
  var j:long_ptr@4;
  var n:int;
  var o:int;
  var p:int;
  var q:int;
  var r:int;
  var s:int;
  var t:int;
  var u:int;
  var v:int;
  var l:int;
  var m:int;
  var w:long;
  var x:int;
  var y:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 88;
    g = g_c[0]:int;
    a = g.a;
    c = g.c;
    d = g.d;
    e = g.e;
    f = g.f;
    h = g.g;
    i = g.h;
    j = g.i;
    k = g.j;
    l = g.k;
    m = g.l;
    o = g.m;
    p = g.n;
    q = g.o;
    r = g.p;
    s = g.q;
    t = g.r;
    u = g.s;
    v = g.t;
    x = g.u;
    y = g.v;
    b = g.b;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        n = (g_c[0]:int)[0]:int;
      }
      loop L_e {
        h = select_if(h, d - c != 1, g_b);
        if (eqz(g_b)) {
          if (h) goto B_g;
          h = c * 24;
          f = h + a;
        }
        loop L_i {
          if (eqz(g_b)) {
            if (d >= e) {
              f = d - 1;
              d = f < c;
              i = select_if(c, f, d) - c;
              e = select_if(c, b, b < c);
              f = c * 24 + a;
              loop L_l {
                if (eqz(i)) goto B_f;
                if (c == e | (j = c + 1) >= b) goto B_d;
                h = f + 24;
                w = h[0]:long@4;
                (f + 28)[0]:int = f[1]:int;
                h[0]:int = f[0]:int;
                f[0]:long@4 = w;
                a = f + 32;
                k = a[0]:int;
                a[0]:byte = (d = f + 8)[0]:ubyte;
                d[0]:int = k;
                a = f + 12;
                w = a[0]:long@4;
                a[0]:long@4 = (k = f + 36)[0]:long@4;
                a = f + 20;
                d = a[0]:ubyte;
                a[0]:int = (f = f + 44)[0]:int;
                f[0]:byte = d;
                k[0]:long@4 = w;
                i = i - 1;
                f = h;
                c = j;
                continue L_l;
              }
              unreachable;
            }
            if (b <= c | (h = d + e >> 1) >= b) goto B_d;
            i = h * 24 + a;
            o = i.a;
            p = i.b;
            q = i.c;
            r = i.d;
            s = i.e;
            t = i.f;
            u = f[0]:int;
            v = f[1]:int;
            l = f[8]:ubyte;
            k = f[3]:int;
            m = f[4]:int;
            j = f[20]:ubyte;
          }
          if (eqz(g_b) | eqz(n)) {
            internal_fmtsort_Sort_1(o, p, q, r, s, t, u, v, l, k, m, j);
            let t0 = 0;
            if (g_b == 1) goto B_b;
            j = t0;
          }
          if (eqz(g_b)) {
            e = select_if(e, h, i = j < 0);
            h = h + 1;
            d = select_if(h, d, i);
            continue L_i;
          }
        }
        label B_g:
        h = select_if(h, e - d != 1, g_b);
        if (eqz(g_b)) {
          if (h) goto B_o;
          h = d;
          e = h * 24;
          f = e + a;
        }
        loop L_q {
          if (eqz(g_b)) {
            if (c >= h) {
              f = d * 24 + a - 24;
              loop L_t {
                if (c >= d) goto B_f;
                i = d - 1;
                if (i >= b) goto B_d;
                i = i + 1;
                if (i >= b) goto B_d;
                w = f[0]:long@4;
                f[0]:long@4 = (h = f + 24)[0]:long@4;
                h[0]:long@4 = w;
                h = f + 8;
                j = h[0]:int;
                h[0]:byte = (a = f + 32)[0]:ubyte;
                a[0]:int = j;
                h = f + 36;
                w = h[0]:long@4;
                h[0]:long@4 = (j = f + 12)[0];
                h = f + 44;
                a = h[0]:ubyte;
                h[0]:int = (k = f + 20)[0]:int;
                k[0]:byte = a;
                j[0] = w;
                d = i - 1;
                f = f - 24;
                continue L_t;
              }
              unreachable;
            }
            if (b <= d) goto B_d;
            j = c + h >> 1;
            if (j >= b) goto B_d;
            o = f[0]:int;
            p = f[1]:int;
            q = f[8]:ubyte;
            r = f[3]:int;
            s = f[4]:int;
            t = f[20]:ubyte;
            i = j * 24 + a;
            u = i.a;
            v = i.b;
            l = i.c;
            k = i.d;
            m = i.e;
            e = i.f;
          }
          if (eqz(g_b) | n == 1) {
            internal_fmtsort_Sort_1(o, p, q, r, s, t, u, v, l, k, m, e);
            let t1 = 1;
            if (g_b == 1) goto B_b;
            e = t1;
          }
          if (eqz(g_b)) {
            h = select_if(j, h, i = e < 0);
            c = select_if(c, e = j + 1, i);
            continue L_q;
          }
        }
        label B_o:
        if (eqz(g_b)) {
          m = c + e >> 1;
          f = m < d;
          j = select_if(m, d, f);
          k = d + m;
          h = select_if(k - e, c, f);
        }
        loop L_x {
          if (eqz(g_b)) {
            f = h >= j;
            if (f) goto B_y;
            f = k + ((i = h + j >> 1) ^ -1);
            if (f >= b | b <= i) goto B_d;
            f = f * 24 + a;
            x = f[0]:int;
            y = f[1]:int;
            o = f[8]:ubyte;
            p = f[3]:int;
            q = f[4]:int;
            r = f[20]:ubyte;
            f = i * 24 + a;
            s = f[0]:int;
            t = f[1]:int;
            u = f[8]:ubyte;
            v = f[3]:int;
            l = f[4]:int;
            f = f[20]:ubyte;
          }
          if (eqz(g_b) | n == 2) {
            internal_fmtsort_Sort_1(x, y, o, p, q, r, s, t, u, v, l, f);
            let t2 = 2;
            if (g_b == 1) goto B_b;
            f = t2;
          }
          if (eqz(g_b)) {
            j = select_if(i, j, f = f < 0);
            h = select_if(h, l = i + 1, f);
            continue L_x;
          }
          label B_y:
        }
        if (eqz(g_b)) {
          k = k - h;
          j = d <= h;
        }
        if (eqz(g_b)) {
          if (j) goto B_da;
          j = d >= k;
          if (j) goto B_da;
          i = d - h;
          f = k - d;
        }
        loop L_fa {
          j = select_if(j, d - i, g_b);
          loop L_ga {
            if (eqz(g_b)) {
              l = f == i;
              if (l) goto B_ha;
              l = f >= i;
            }
            if (select_if(g_b, 1, l)) {
              if (eqz(g_b) | n == 3) {
                slices_swapRangeCmpFunc_internal_fmtsort_KeyValue(a, b, j, d, f);
                3;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                i = i - f;
                continue L_fa;
              }
            }
            l = select_if(l, f + j, g_b);
            if (eqz(g_b) | n == 4) {
              slices_swapRangeCmpFunc_internal_fmtsort_KeyValue(a, b, j, l, i);
              4;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              f = f - i;
              continue L_ga;
            }
            label B_ha:
          }
        }
        if (eqz(g_b) | n == 5) {
          slices_swapRangeCmpFunc_internal_fmtsort_KeyValue(a, b, j, d, i);
          5;
          if (g_b == 1) goto B_b;
        }
        label B_da:
        if (eqz(eqz(select_if(g_b, 1, (d = select_if(d, c >= h, g_b)) | h >= m))) &
            (eqz(g_b) | n == 6)) {
          slices_symMergeCmpFunc_internal_fmtsort_KeyValue(a, b, c, h, m);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          if (k <= m) goto B_f;
          c = m;
          h = e > (d = k);
          if (h) continue L_e;
        }
        label B_f:
      }
      if (eqz(g_b)) { return  }
      label B_d:
      if (eqz(g_b) | n == 7) {
        runtime_lookupPanic();
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = f;
  g.g = h;
  g.h = i;
  g.i = j;
  g.j = k;
  g.k = l;
  g.l = m;
  g.m = o;
  g.n = p;
  g.o = q;
  g.p = r;
  g.q = s;
  g.r = t;
  g.s = u;
  g.t = v;
  g.u = x;
  g.v = y;
  g_c[0]:int = g_c[0]:int + 88;
}

function slices_swapRangeCmpFunc_internal_fmtsort_KeyValue(a:int, b:int, c:long_ptr@4, d:int, e:int) { // func121
  var o:int;
  var i:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          i = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          var f:int = b - c;
          var g:int = f > b;
          g = select_if(0, f, g);
          f = b - d;
          b = f > b;
          f = select_if(0, f, b);
          e = select_if(e, 0, e > 0);
          var j:int = c * 24;
          var k:int = d * 24;
          loop L_e {
            if (e) {
              if (eqz(f) | eqz(g)) goto B_d;
              b = a + j;
              d = b + 20;
              var l:int = d[0]:ubyte;
              c = a + k;
              var m:long = c[0];
              var n:long_ptr@4 = c + 12;
              var h:long = n[0];
              d[0]:byte = (o = c + 20)[0]:ubyte;
              d = b + 12;
              var p:long = d[0]:long@4;
              var q:int = c + 8;
              var r:int = q[0]:int;
              d[0]:long@4 = h;
              h = b[0]:long@4;
              b[0]:long@4 = m;
              b = b + 8;
              d = b[0]:ubyte;
              b[0]:int = r;
              c[0] = h;
              q[0]:byte = d;
              o[0]:byte = l;
              n[0] = p;
              e = e - 1;
              f = f - 1;
              g = g - 1;
              a = a + 24;
              continue L_e;
            }
          }
          return ;
          label B_d:
        }
        if (eqz(g_b) | eqz(i)) {
          runtime_lookupPanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function cmp_isNaN_string(a:int, b:int):int { // func122
  return runtime_stringEqual(a, b, a, b) ^ 1
}

function internal_fmtsort_nilCompare(a:{ a:int, b:byte }, b:int, c:int, d:int, e:int, f:int, g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }) { // func123
  var i:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    g = g_c[0]:int;
    a = g.a;
    b = g.b;
    c = g.c;
    d = g.d;
    e = g.e;
    f = g.f;
    g = g.g;
  }
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int } = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b) | eqz(i)) {
        IsNil(b, c, d);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        d = t0;
      }
      if (eqz(g_b) | i == 1) {
        IsNil(e, f, g);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        g = t1;
      }
      if (eqz(g_b)) {
        a.b = (d | g) & 1;
        a.a = select_if(0 - ((g ^ -1) & 1), g & 1, d & 1);
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = h;
  g_c[0]:int = g_c[0]:int + 4;
  h = g_c[0]:int;
  h.a = a;
  h.b = b;
  h.c = c;
  h.d = d;
  h.e = e;
  h.f = f;
  h.g = g;
  g_c[0]:int = g_c[0]:int + 28;
}

function time_appendInt(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int, f:int) { // func124
  var h:int;
  var g:int;
  var k:int;
  var j:int;
  var l:int;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    i = g_c[0]:int;
    a = i.a;
    c = i.c;
    d = i.d;
    e = i.e;
    f = i.f;
    g = i.g;
    h = i.h;
    j = i.i;
    l = i.j;
    b = i.b;
  }
  i = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          k = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          h = stack_pointer - 96;
          stack_pointer = h;
          g = e >= 0;
        }
        if (eqz(g_b)) {
          if (g) goto B_e;
          h[95]:byte = 45;
          j = h + 95;
          g = h + 72;
        }
        if (eqz(g_b) | eqz(k)) {
          runtime_sliceAppend(g, b, j, c, d, 1, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e = 0 - e;
          d = h[20]:int;
          c = h[19]:int;
          b = h[18]:int;
        }
        label B_e:
        g = select_if(g, f != 2, g_b);
        if (eqz(g_b)) {
          if (g) goto B_k;
          g = e >= 100;
          if (g) goto B_k;
          h[93]:byte = (g = (e & 255) / 10) | 48;
          h[94]:byte = e - g * 10 | 48;
          f = h + 93;
          e = h + 8;
        }
        if (eqz(g_b) | k == 1) {
          runtime_sliceAppend(e, b, f, c, d, 2, 1);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = h[4]:int;
          f = h[3]:int;
          b = h[2]:int;
          goto B_j;
        }
        label B_k:
        g = select_if(g, f != 4, g_b);
        if (eqz(g_b)) {
          if (g) goto B_o;
          g = e > 9999;
          if (g) goto B_o;
          h[89]:byte = (g = e & 65535) / 1000 + 48;
          h[91]:byte = (j = g / 10) % 10 | 48;
          h[92]:byte = e - j * 10 | 48;
          h[90]:byte = (g / 100 & 255) % 10 | 48;
          f = h + 89;
          e = h + 24;
        }
        if (eqz(g_b) | k == 2) {
          runtime_sliceAppend(e, b, f, c, d, 4, 1);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = h[8]:int;
          f = h[7]:int;
          b = h[6]:int;
          goto B_j;
        }
        label B_o:
        if (eqz(g_b)) {
          j = eqz(e);
          g = e;
          loop L_t {
            l = eqz(g);
            if (eqz(l)) {
              g = g / 10;
              j = j + 1;
              continue L_t;
            }
          }
          g = f - j;
        }
        loop L_v {
          if (eqz(g_b)) {
            f = g <= 0;
            if (f) goto B_w;
            h[88]:byte = 48;
            l = h + 88;
            f = h + 40;
          }
          if (eqz(g_b) | k == 3) {
            runtime_sliceAppend(f, b, l, c, d, 1, 1);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = g - 1;
            d = h[12]:int;
            c = h[11]:int;
            b = h[10]:int;
            continue L_v;
          }
          label B_w:
        }
        if (eqz(g_b)) {
          f = c + j;
          g = f > d;
        }
        if (eqz(g_b)) {
          if (eqz(g)) {
            if (d < f) goto B_ca;
            goto B_ba;
          }
          f = j < 0;
          if (f) goto B_ca;
          f = h + 56;
        }
        if (eqz(g_b) | k == 4) {
          runtime_alloc(j);
          let t0 = 4;
          if (g_b == 1) goto B_b;
          g = t0;
        }
        if (eqz(g_b) | k == 5) {
          runtime_sliceAppend(f, b, g, c, d, j, 1);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = h[14]:int;
          d = h[16]:int;
          f = h[15]:int;
          goto B_ba;
        }
        label B_ca:
        if (eqz(g_b) | k == 6) {
          runtime_slicePanic();
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_ba:
        if (eqz(g_b)) {
          g = f - 1;
          loop L_la {
            if (eqz(e < 10 | g <= 0)) {
              if (f <= g) goto B_i;
              (b + g)[0]:byte = (c = e / 10) * 246 + e + 48;
              g = g - 1;
              e = c;
              continue L_la;
            }
          }
          if (f <= g) goto B_i;
          (b + g)[0]:byte = e + 48;
        }
        label B_j:
        if (eqz(g_b)) {
          a.c = d;
          a.b = f;
          a.a = b;
          stack_pointer = h + 96;
          return ;
        }
        label B_i:
        if (eqz(g_b) | k == 7) {
          runtime_lookupPanic();
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = i;
  g_c[0]:int = g_c[0]:int + 4;
  i = g_c[0]:int;
  i.a = a;
  i.b = b;
  i.c = c;
  i.d = d;
  i.e = e;
  i.f = f;
  i.g = g;
  i.h = h;
  i.i = j;
  i.j = l;
  g_c[0]:int = g_c[0]:int + 40;
}

function lookup(a:{ a:int, b:int, c:int }, b:int, c:long) { // func125
  var g:ubyte_ptr;
  var e:int;
  var n:int;
  var f:int;
  var m:int;
  var h:int;
  var i:ubyte_ptr;
  var j:int;
  var k:{ a:int, b:int, c:int }
  var p:int;
  var d:int;
  var y:int;
  var x:int;
  var w:int;
  var v:int;
  var u:int;
  var o:int;
  var l:int;
  var s:int;
  var r:int;
  var q:long;
  var t:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 88;
    d = g_c[0]:int;
    a = d[0]:int;
    c = d[2]:long@4;
    e = d[4]:int;
    f = d[5]:int;
    g = d[6]:int;
    h = d[7]:int;
    i = d[8]:int;
    j = d[9]:int;
    k = d[10]:int;
    l = d[11]:int;
    m = d[12]:int;
    o = d[13]:int;
    p = d[14]:int;
    r = d[15]:int;
    s = d[16]:int;
    u = d[17]:int;
    v = d[18]:int;
    w = d[19]:int;
    x = d[20]:int;
    y = d[21]:int;
    b = d[1]:int;
  }
  d = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        n = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = stack_pointer;
        e = g - 160;
        stack_pointer = e;
      }
      if (eqz(g_b) | eqz(n)) {
        get(b);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        f = t0;
      }
      b = select_if(b, eqz(f), g_b);
      if (eqz(g_b)) {
        if (b) goto B_h;
        m = f[3]:int;
        if (eqz(m)) {
          i = 0;
          j = 3;
          k = 68116;
          goto B_f;
        }
        b = f[14]:int;
        if (eqz(b)) goto B_k;
        if (f[5]:long > c) goto B_k;
        if (f[6]:long <= c) goto B_k;
        i = b[2]:int;
        j = b[1]:int;
        k = b[0]:int;
        goto B_f;
        label B_k:
        h = f[5]:int;
        g = f[6]:int;
        b = eqz(g);
      }
      if (eqz(g_b)) {
        if (b) goto B_l;
        if (eqz(h)) goto B_h;
        if (h[0]:long > c) goto B_l;
        b = 0;
        q = 9223372036854775807L;
        i = g;
        loop L_n {
          if (i - b >= 2) {
            j = b + i >> 1;
            if (j >= g) goto B_g;
            t = ((j << 4) + h)[0]:long;
            k = t > c;
            q = select_if(t, q, k);
            i = select_if(j, i, k);
            b = select_if(b, j, k);
            continue L_n;
          }
        }
        if (b >= g) goto B_g;
        if (m <= (i = ((o = b << 4) + h)[8]:ubyte)) goto B_g;
        j = f[2]:int;
        if (eqz(j)) goto B_h;
        k = j + (i << 4);
        i = k.c;
        j = k.b;
        k = k.a;
        if (g - 1 != b) goto B_f;
        b = f[9]:int;
        if (eqz(b)) goto B_f;
        h = e + 136;
        g = f[8]:int;
      }
      if (eqz(g_b) | n == 1) {
        time_tzsetName(h, g, b);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { b = eqz(e[152]:ubyte) }
      b = 
        {
          g = 
            {
              if (eqz(g_b)) {
                if (b) goto B_t;
                l = e[35]:int;
                m = e[34]:int;
                f = e + 120;
                g = e[36]:int;
                b = e[37]:int;
              }
              if (eqz(g_b) | n == 2) {
                time_tzsetOffset(f, g, b);
                2;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                b = eqz(e[132]:ubyte);
                if (b) goto B_t;
                o = 0 - (g = e[30]:int);
                b = e[32]:int;
                f = eqz(b);
              }
              if (eqz(g_b)) {
                if (f) goto B_y;
                h = e[31]:int;
                f = h[0]:ubyte == 44;
                if (f) goto B_y;
                f = e + 96;
              }
              if (eqz(g_b) | n == 3) {
                time_tzsetName(f, h, b);
                3;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                b = eqz(e[112]:ubyte);
                if (b) goto B_t;
                h = e[26]:int;
                r = e[25]:int;
                s = e[24]:int;
                b = e[27]:int;
                f = eqz(b);
              }
              p = {
                    if (eqz(g_b)) {
                      if (f) goto B_da;
                      f = h[0]:ubyte == 44;
                      if (f) goto B_da;
                      g = e + 80;
                    }
                    if (eqz(g_b) | n == 4) {
                      time_tzsetOffset(g, h, b);
                      4;
                      if (g_b == 1) goto B_b;
                    }
                    if (eqz(g_b)) {
                      b = eqz(e[92]:ubyte);
                      if (b) goto B_t;
                      b = e[22]:int;
                      h = e[21]:int;
                      0 - (g = e[20]:int);
                      goto B_ca;
                    }
                    label B_da:
                    select_if(p, 3600 - g, g_b);
                    label B_ca:
                  }
              if (eqz(g_b)) {
                g = select_if(h, 68119, b);
                h = g[0];
                if (h != 59) {
                  f = h != 44;
                  if (f) goto B_t;
                }
                h = e + 48;
                f = g + 1;
                g = b - 1;
                b = select_if(g, 14, b);
              }
              if (eqz(g_b) | n == 5) {
                time_tzsetRule(h, f, b);
                5;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                g = 0;
                g;
                if (b = eqz(e[76]:ubyte)) goto B_s;
                h = 0;
                f = 0;
                0;
                if (eqz(d = e[18]:int)) goto B_r;
                b = e[17]:int;
                g = b[0]:ubyte != 44;
                if (g) goto B_t;
                u = e[16]:int;
                v = e[15]:int;
                w = e[14]:int;
                x = e[13]:int;
                y = e[12]:int;
                f = e + 16;
                g = b + 1;
                b = d - 1;
              }
              if (eqz(g_b) | n == 6) {
                time_tzsetRule(f, g, b);
                6;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                g = 0;
                g;
                if (b = eqz(e[44]:ubyte)) goto B_s;
                h = 0;
                f = 0;
                0;
                if (e[10]:int > 0) goto B_r;
                yearYday(e + 8, (c + 9223372028741760000L) / 86400L);
                b = e[2]:int;
                g = time_tzruleTime(b, y, x, w, v, u, o);
                q = i64_extend_i32_s(g);
                b = 
                  time_tzruleTime(b, e[4]:int, e[5]:int, e[6]:int, e[7]:int, e[8]:int, p);
                var z:long = i64_extend_i32_s(b);
                t = i64_extend_i32_s(e[3]:int * 86400 - 86400) + c % 86400L;
                if (b >= g) {
                  g = m;
                  h = l;
                  m = s;
                  l = r;
                  f = o;
                  o = p;
                  c = q;
                  q = z;
                  goto B_na;
                }
                g = s;
                h = r;
                f = p;
                c = z;
                label B_na:
                b = c > t;
                if (b) goto B_x;
                b = q <= t;
                if (b) goto B_x;
              }
              label B_y:
              if (eqz(g_b)) {
                g = m;
                h = l;
                f = o;
                1;
                goto B_r;
              }
              label B_x:
              1;
              if (eqz(g_b)) goto B_r;
              label B_t:
              select_if(g, 0, g_b);
              label B_s:
            }
          if (g_b) {
            b
          } else {
            h = 0;
            f = 0;
            0;
          }
          label B_r:
        }
      if (eqz(g_b)) {
        if (eqz(b & 1)) goto B_f;
        k = g;
        j = h;
        i = f;
        goto B_f;
      }
      label B_l:
      if (eqz(g_b)) {
        l = 0;
        k = select_if(g, 0, g > 0);
        i = h + 8;
        f = f[2]:int;
        b = 0;
        loop L_ua {
          if (b == k) goto B_ta;
          if (b == g) goto B_g;
          b = b + 1;
          j = i[0];
          i = i + 16;
          if (j) continue L_ua;
        }
        if (g <= b - 1) goto B_ta;
        if (m <= (l = h[8]:ubyte)) goto B_g;
        b = f + (l << 4);
        if (eqz(b[12]:ubyte)) goto B_va;
        b = b - 4;
        j = m <= l - 1;
        loop L_wa {
          if (l <= 0) goto B_va;
          if (j) goto B_g;
          l = l - 1;
          i = b[0]:ubyte;
          b = b - 16;
          if (i) continue L_wa;
        }
        goto B_ta;
        label B_va:
        l = 0;
        k = select_if(m, 0, m > 0);
        i = f + 12;
        b = 0;
        loop L_xa {
          if (b == k) goto B_ta;
          if (b == m) goto B_g;
          b = b + 1;
          j = i[0];
          i = i + 16;
          if (j) continue L_xa;
        }
        l = b - 1;
        label B_ta:
        if (l >= m) goto B_g;
        if (eqz(f)) goto B_h;
        b = f + (l << 4);
        i = b[2]:int;
        j = b[1]:int;
        k = b[0]:int;
        if (g <= 0 | h) goto B_f;
      }
      label B_h:
      if (eqz(g_b) | n == 7) {
        runtime_nilPanic();
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      if (eqz(g_b) | n == 8) {
        runtime_lookupPanic();
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      if (eqz(g_b)) {
        a.a = k;
        a.b = j;
        a.c = i;
        stack_pointer = e + 160;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d[0]:int = a;
  d[1]:int = b;
  d[2]:long@4 = c;
  d[4]:int = e;
  d[5]:int = f;
  d[6]:int = g;
  d[7]:int = h;
  d[8]:int = i;
  d[9]:int = j;
  d[10]:int = k;
  d[11]:int = l;
  d[12]:int = m;
  d[13]:int = o;
  d[14]:int = p;
  d[15]:int = r;
  d[16]:int = s;
  d[17]:int = u;
  d[18]:int = v;
  d[19]:int = w;
  d[20]:int = x;
  d[21]:int = y;
  g_c[0]:int = g_c[0]:int + 88;
}

function time_tzsetName(a:{ a:int, b:int, c:int, d:int, e:byte }, b:ubyte_ptr, c:int) { // func126
  var g:int;
  var e:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var d:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    e = f.d;
    d = f.e;
    g = f.f;
    f = f.g;
  }
  h = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 48;
          stack_pointer = g;
          e = b[0] == 60;
        }
        b = {
              if (eqz(g_b)) {
                if (e) goto B_i;
                g[10]:int = 0;
              }
              loop L_l {
                if (eqz(g_b)) {
                  e = g + 24;
                  d = g + 40;
                }
                if (eqz(g_b) | eqz(h)) {
                  runtime_stringNext(e, b, c, d);
                  0;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  e = eqz(g[24]:ubyte);
                  if (e) goto B_k;
                  e = g[8]:int - 43;
                  d = e > 14;
                  if (d) continue L_l;
                  e = eqz(1 << e & 32743);
                  if (e) continue L_l;
                }
              }
              if (eqz(g_b)) {
                e = g[7]:int;
                d = e < 3;
                if (d) goto B_g;
                d = c < e;
                if (d) goto B_h;
                c = c - e;
                d = b + e;
                f = 1;
                goto B_e;
              }
              label B_k:
              if (eqz(g_b)) {
                e = c < 3;
                if (e) goto B_g;
                f = 1;
                d = 0;
                e = c;
                c = 0;
                goto B_e;
              }
              label B_i:
              if (eqz(g_b)) {
                g[10]:int = 0;
                e = 0;
              }
              loop L_s {
                if (eqz(g_b)) {
                  f = g + 40;
                  d = g + 8;
                }
                if (eqz(g_b) | h == 1) {
                  runtime_stringNext(d, b, c, f);
                  1;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  0;
                  if (eqz(d = g[8]:ubyte)) goto B_f;
                  d = g[4]:int != 62;
                  if (d) continue L_s;
                }
              }
              if (eqz(g_b)) {
                d = g[3]:int;
                e = d - 1;
                f = e >= c;
                if (f) goto B_h;
                f = 1;
                d = d + 1;
                if (d > c) goto B_h;
                c = c - d;
                d = b + d;
                b = b + 1;
                goto B_e;
              }
              label B_h:
              if (eqz(g_b) | h == 2) {
                runtime_slicePanic();
                2;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_g:
              if (g_b) {
                b
              } else {
                e = 0;
                0;
              }
              label B_f:
            }
        if (eqz(g_b)) {
          d = 0;
          f = 0;
          c = 0;
        }
        label B_e:
        if (eqz(g_b)) {
          a.a = b;
          a.b = e;
          a.c = d;
          a.d = c;
          a.e = f & 1;
          stack_pointer = g + 48;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = h;
  g_c[0]:int = g_c[0]:int + 4;
  h = g_c[0]:int;
  h.a = a;
  h.b = b;
  h.c = c;
  h.d = e;
  h.e = d;
  h.f = g;
  h.g = f;
  g_c[0]:int = g_c[0]:int + 28;
}

function time_tzsetOffset(a:{ a:int, b:int, c:int, d:byte }, b:ubyte_ptr, c:ubyte_ptr) { // func127
  var d:{ a:int, b:int, c:int, d:ubyte, e:int, f:int, g:int, h:ubyte, i:int, j:int, k:int, l:ubyte }
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var h:int;
  var e:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var i:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    e = f.e;
    h = f.f;
    i = f.g;
    f = f.h;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 48;
          stack_pointer = d;
        }
        if (eqz(g_b)) {
          if (eqz(c)) {
            e = 0;
            goto B_f;
          }
          e = 0;
          i = 0;
          br_table[B_k, B_i, B_j, ..B_i](b[0] - 43)
          label B_k:
          c = c - 1;
          b = b + 1;
          goto B_i;
          label B_j:
          c = c - 1;
          i = 1;
          b = b + 1;
          label B_i:
          h = d + 32;
        }
        if (eqz(g_b) | eqz(g)) {
          time_tzsetNum(h, b, c, 0, 168);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = eqz(d.l);
          if (b) goto B_f;
          h = d.i * 3600;
          b = d.k;
          e = eqz(b);
          c = d.j;
        }
        if (eqz(g_b)) {
          if (e) goto B_n;
          e = c[0] != 58;
          if (e) goto B_n;
          e = 0;
          f = d + 16;
          c = c + 1;
          b = b - 1;
        }
        if (eqz(g_b) | g == 1) {
          time_tzsetNum(f, c, b, 0, 59);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = eqz(d.h);
          if (b) goto B_f;
          f = h + d.e * 60;
          b = d.g;
          e = eqz(b);
          c = d.f;
        }
        if (eqz(g_b)) {
          if (e) goto B_r;
          e = c[0] != 58;
          if (e) goto B_r;
          h = 1;
          e = 0;
          c = c + 1;
          b = b - 1;
        }
        if (eqz(g_b) | g == 2) {
          time_tzsetNum(d, c, b, 0, 59);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = eqz(d.d);
          if (b) goto B_f;
          b = d.c;
          c = d.b;
          e = select_if(0 - (e = f + d.a), e, i);
          goto B_e;
        }
        label B_r:
        if (eqz(g_b)) {
          e = select_if(0 - f, f, i);
          h = 1;
          goto B_e;
        }
        label B_n:
        if (eqz(g_b)) {
          e = select_if(0 - h, h, i);
          h = 1;
          goto B_e;
        }
        label B_f:
        if (eqz(g_b)) {
          c = 0;
          h = 0;
          b = 0;
        }
        label B_e:
        if (eqz(g_b)) {
          a.a = e;
          a.b = c;
          a.c = b;
          a.d = h & 1;
          stack_pointer = d + 48;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = h;
  g.g = i;
  g.h = f;
  g_c[0]:int = g_c[0]:int + 32;
}

function time_tzsetRule(a:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:byte }, b:ubyte_ptr, c:ubyte_ptr) { // func128
  var d:{ a:int, b:int, c:int, d:ubyte, e:int, f:int, g:int, h:ubyte, i:int, j:int, k:int, l:ubyte, m:int, n:int, o:int, p:ubyte, q:int, r:int, s:int, t:ubyte, u:int, v:int, w:int, x:ubyte }
  var f:int;
  var l:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  var m:int;
  var g:int;
  var h:int;
  var i:int;
  var j:int;
  var k:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    h = e.g;
    i = e.h;
    j = e.i;
    k = e.j;
    m = e.k;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          l = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 96;
          stack_pointer = d;
          f = eqz(c);
        }
        if (eqz(g_b)) {
          if (f) goto B_g;
          f = b[0] - 74;
        }
        f = {
              b = {
                    if (eqz(g_b)) {
                      br_table[B_n, B_k, B_k, B_l, ..B_k](f)
                      label B_n:
                      f = d + 32;
                      c = c - 1;
                      b = b + 1;
                    }
                    if (eqz(g_b) | eqz(l)) {
                      time_tzsetNum(f, b, c, 1, 365);
                      0;
                      if (g_b == 1) goto B_b;
                    }
                    if (eqz(g_b)) {
                      g = 0;
                      b = eqz(d.l);
                      if (b) goto B_f;
                      c = d.k;
                      h = d.i;
                      d.j;
                      goto B_j;
                    }
                    label B_l:
                    if (eqz(g_b)) {
                      f = d + 80;
                      c = c - 1;
                      b = b + 1;
                    }
                    if (eqz(g_b) | l == 1) {
                      time_tzsetNum(f, b, c, 1, 12);
                      1;
                      if (g_b == 1) goto B_b;
                    }
                    if (eqz(g_b)) {
                      g = 0;
                      b = eqz(d.x);
                      if (b) goto B_f;
                      h = 0;
                      i = 0;
                      f = 0;
                      j = 0;
                      b = 0;
                      c = 0;
                      k = 0;
                      e = d.w;
                      if (eqz(e)) goto B_e;
                      c = d.v;
                      b = c[0] != 46;
                      if (b) goto B_g;
                      m = d.u;
                      c = c + 1;
                      f = e - 1;
                      b = d - -64;
                    }
                    if (eqz(g_b) | l == 2) {
                      time_tzsetNum(b, c, f, 1, 5);
                      2;
                      if (g_b == 1) goto B_b;
                    }
                    if (eqz(g_b)) {
                      g = 0;
                      b = eqz(d.t);
                      if (b) goto B_f;
                      h = 0;
                      i = 0;
                      f = 0;
                      j = 0;
                      b = 0;
                      c = 0;
                      k = 0;
                      e = d.s;
                      if (eqz(e)) goto B_e;
                      c = d.r;
                      b = c[0] != 46;
                      if (b) goto B_g;
                      i = d.q;
                      c = c + 1;
                      f = e - 1;
                      b = d + 48;
                    }
                    if (eqz(g_b) | l == 3) {
                      time_tzsetNum(b, c, f, 0, 6);
                      3;
                      if (g_b == 1) goto B_b;
                    }
                    if (eqz(g_b)) {
                      b = eqz(d.p);
                      if (b) goto B_f;
                      g = 2;
                      c = d.o;
                      b = d.n;
                      h = d.m;
                      m;
                      goto B_i;
                    }
                    label B_k:
                    if (eqz(g_b)) {
                      g = 0;
                      f = d + 16;
                    }
                    if (eqz(g_b) | l == 4) {
                      time_tzsetNum(f, b, c, 0, 365);
                      4;
                      if (g_b == 1) goto B_b;
                    }
                    if (g_b) {
                      b
                    } else {
                      b = eqz(d.h);
                      if (b) goto B_f;
                      g = 1;
                      c = d.g;
                      h = d.e;
                      d.f;
                    }
                    label B_j:
                  }
              if (g_b) {
                f
              } else {
                i = 0;
                0;
              }
              label B_i:
            }
        m = select_if(m, eqz(c), g_b);
        if (eqz(g_b)) {
          if (m) goto B_ba;
          if (b[0] != 47) goto B_ba;
          k = 1;
          c = c - 1;
          b = b + 1;
        }
        if (eqz(g_b) | l == 5) {
          time_tzsetOffset(d, b, c);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = eqz(d.d);
          if (b) goto B_g;
          c = d.c;
          b = d.b;
          j = d.a;
          goto B_e;
        }
        label B_ba:
        if (eqz(g_b)) {
          k = 1;
          j = 7200;
          goto B_e;
        }
        label B_g:
        g = select_if(g, 0, g_b);
        label B_f:
        if (eqz(g_b)) {
          h = 0;
          i = 0;
          f = 0;
          j = 0;
          c = 0;
          k = 0;
          b = 0;
        }
        label B_e:
        if (eqz(g_b)) {
          a.a = g;
          a.b = h;
          a.c = i;
          a.d = f;
          a.e = j;
          a.f = b;
          a.g = c;
          a.h = k;
          stack_pointer = d + 96;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  e.f = g;
  e.g = h;
  e.h = i;
  e.i = j;
  e.j = k;
  e.k = m;
  g_c[0]:int = g_c[0]:int + 44;
}

function yearYday(a:{ a:int, b:int }, b:long) { // func129
  var d:int;
  var f:int;
  var e:int;
  var c:{ a:long, b:int, c:int } = stack_pointer - 16;
  stack_pointer = c;
  split(c, b);
  a.a =
    (f = (d = c.c) > 305) + (e = c.b) + i32_wrap_i64(b = c.a) * 100 -
    219246272;
  a.b =
    d + select_if(-365, 0, f) +
    select_if(0,
              select_if(d = d < 306, select_if(d, 0, eqz(b & 3L)), e),
              e & 3) +
    60;
  stack_pointer = c + 16;
}

function time_tzruleTime(a:int, b:int, c:int, d:int, e:int, f:int, g:int):int { // func130
  var h:int;
  var i:int;
  br_table[B_d, B_c, B_b, ..B_a](b)
  label B_d:
  b = c * 86400;
  h = b - 86400;
  if (select_if(3, 15, a % 25) & a) goto B_a;
  h = select_if(b, h, c > 59);
  goto B_a;
  label B_c:
  h = c * 86400;
  goto B_a;
  label B_b:
  h = 
    c -
    select_if(
      (h = 
         (i32_extend16_s(i32_extend16_s((e + 9) % 12 * 26 + 24) / 10 + 1) +
          (h = a - (e < 3)) / 400 + (b = h % 100) + (h / -100 << 1) +
          i32_extend8_s(i32_extend8_s(b) / 4)) %
         7) +
      7,
      h,
      h < 0);
  b = select_if(h + 7, h, h < 0);
  c = select_if(select_if(28, 29, i = select_if(3, 15, a % 25) & a),
                ((e >> 3) + e & 1) | 30,
                e == 2);
  h = select_if(1, d, d <= 1);
  loop L_e {
    a = b;
    h = h - 1;
    if (eqz(h)) goto B_f;
    b = a + 7;
    if (b < c) continue L_e;
    label B_f:
  }
  h = ((e * 214 - 211) / 7 + select_if(-2, 0, h = e > 2) +
       select_if(h, b = eqz(i), b > h) +
       a) *
      86400;
  label B_a:
  return f - g + h;
}

function time_tzsetNum(a:{ a:int, b:int, c:int, d:byte }, b:int, c:int, d:int, e:int) { // func131
  var j:int;
  var i:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  var h:int;
  var k:int;
  var l:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    e = f.e;
    h = f.f;
    i = f.g;
    j = f.h;
    k = f.i;
    l = f.j;
    f = f.k;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          j = stack_pointer - 32;
          stack_pointer = j;
          i = eqz(c);
        }
        e = {
              h = {
                    if (eqz(g_b)) {
                      if (i) goto B_g;
                      j[6]:int = 0;
                      i = 0;
                    }
                    loop L_j {
                      if (eqz(g_b)) {
                        k = j + 24;
                        h = j + 8;
                      }
                      if (eqz(g_b) | eqz(g)) {
                        runtime_stringNext(h, b, c, k);
                        0;
                        if (g_b == 1) goto B_b;
                      }
                      if (eqz(g_b)) {
                        h = eqz(j[8]:ubyte);
                        if (h) goto B_k;
                        h = j[4]:int;
                        k = h - 58 > -11;
                        if (eqz(k)) {
                          h = 0;
                          h;
                          if (e = eqz(k = j[3]:int)) goto B_f;
                          l = 0;
                          f = 0;
                          e = 0;
                          e;
                          if (d > i) goto B_e;
                          if (c < k) goto B_i;
                          l = c - k;
                          f = 1;
                          h = i;
                          b + k;
                          goto B_e;
                        }
                        i = h + i * 10 - 48;
                        h = i > e;
                        if (h) goto B_g;
                        continue L_j;
                      }
                      label B_k:
                    }
                    if (eqz(g_b)) {
                      if (d > i) goto B_g;
                      f = 1;
                      h = i;
                      l = 0;
                      0;
                      goto B_e;
                    }
                    label B_i:
                    if (eqz(g_b) | g == 1) {
                      runtime_slicePanic();
                      1;
                      if (g_b == 1) goto B_b;
                    }
                    if (eqz(g_b)) { unreachable }
                    label B_g:
                    select_if(h, 0, g_b);
                    label B_f:
                  }
              if (g_b) {
                e
              } else {
                l = 0;
                f = 0;
                0;
              }
              label B_e:
            }
        if (eqz(g_b)) {
          a.a = h;
          a.b = e;
          a.c = l;
          a.d = f;
          stack_pointer = j + 32;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = h;
  g.g = i;
  g.h = j;
  g.i = k;
  g.j = l;
  g.k = f;
  g_c[0]:int = g_c[0]:int + 44;
}

function split(a:{ a:long, b:int, c:int }, b:long) { // func132
  var c:long;
  a.a = (c = (b = b << 2L | 3L) / 146097L);
  a.b = (b = (b - c * 146097L | 3L) * 2939745L) >> 32L;
  a.c = i32_wrap_i64(b) / 11758980;
}

function date(a:{ a:int, b:int, c:int }, b:long) { // func133
  var d:int;
  var e:int;
  var c:int_ptr = stack_pointer - 16;
  stack_pointer = c;
  split(c, b);
  a.a = (e = (d = c[3]) > 305) + c[2] + c[0] * 100 - 219246272;
  a.b = ((d = d * 2141 + 197913) >> 16) + select_if(-12, 0, e);
  a.c = (d & 65535) / 2141 + 1;
  stack_pointer = c + 16;
}

function clock(a:{ a:int, b:int, c:int }, b:long) { // func134
  var c:int;
  var d:int;
  a.a = (d = (c = i32_wrap_i64(b % 86400L)) / 3600);
  a.b = (d = (c = d * -3600 + c) / 60);
  a.c = d * -60 + c;
}

function String_6(a:{ a:int, b:int }, b:int) { // func135
  var d:int;
  var c:int;
  var g:long;
  var f:{ a:int, b:int, c:int, d:int, e:int }
  var e:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    d = e.d;
    e = e.e;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 48;
          stack_pointer = d;
          c = b - 1 >= 12;
        }
        if (eqz(g_b)) {
          if (eqz(c)) {
            c = b << 3;
            b = (c + 68192)[0]:int;
            c = (c + 68188)[0]:int;
            goto B_e;
          }
          (d + 40)[0]:int = 0;
          (d + 32)[0]:long = 0L;
          d[3]:long = 0L;
          c = eqz(b);
        }
        b = {
              if (eqz(g_b)) {
                if (c) goto B_i;
                g = i64_extend_i32_s(b);
                b = 19;
              }
              if (eqz(g_b)) {
                loop L_m {
                  c = eqz(g);
                  if (c) goto B_k;
                  c = b > 19;
                  if (eqz(c)) {
                    (d + 24 + b)[0]:byte =
                      (e = i32_wrap_i64(g - (g = g / 10L) * 10L) | 48);
                    b = b - 1;
                    continue L_m;
                  }
                }
              }
              if (eqz(g_b) | eqz(f)) {
                runtime_lookupPanic();
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_k:
              b + 1;
              if (eqz(g_b)) goto B_h;
              label B_i:
              if (g_b) {
                b
              } else {
                d[43]:byte = 48;
                19;
              }
              label B_h:
            }
        if (eqz(g_b)) {
          c = d + 16;
          e = d + 24 + b;
          b = 20 - b;
        }
        if (eqz(g_b) | f == 1) {
          runtime_stringFromBytes(c, e, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[4]:int;
          e = d[5]:int;
          b = d + 8;
        }
        if (eqz(g_b) | f == 2) {
          runtime_stringConcat(b, 68107, 8, c, e);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[3]:int;
          b = d[2]:int;
        }
        if (eqz(g_b) | f == 3) {
          runtime_stringConcat(d, b, c, 68115, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[0]:int;
          b = d[1]:int;
        }
        label B_e:
        if (eqz(g_b)) {
          a.b = b;
          a.a = c;
          stack_pointer = d + 48;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = d;
  f.e = e;
  g_c[0]:int = g_c[0]:int + 20;
}

function Write(a:{ a:int, b:int, c:int }, b:int, c:int, d:int) { // func136
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var f:{ a:int, b:int, c:int, d:int, e:int } = 
    {
      e = select_if(if (g_b == 2) {
                      g_c[0]:int = g_c[0]:int - 20;
                      e = g_c[0]:int;
                      a = e.a;
                      b = e.b;
                      c = e.c;
                      d = e.d;
                      e.e;
                    } else {
                      0
                    },
                    0,
                    g_b);
      if (eqz(g_b) |
          eqz(if (g_b == 2) {
                g_c[0]:int = g_c[0]:int - 4;
                (g_c[0]:int)[0]:int;
              } else {
                0
              })) {
        write(b, c, d);
        let t0 = 0;
        if (g_b == 1) goto B_a;
        c = t0;
      }
      if (eqz(g_b)) {
        if (c >= 0) {
          d = 0;
          goto B_f;
        }
        e = 86716;
        d = 88620[0]:int;
        if (d == 20) {
          d = 88592;
          goto B_f;
        }
        if (d == 44) {
          d = 88600;
          goto B_f;
        }
        e = 86656;
        label B_f:
        a.b = e;
        a.a = c;
        a.c = d;
      }
      return ;
      label B_a:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = d;
  f.e = e;
  g_c[0]:int = g_c[0]:int + 20;
}

function Write_1(a:{ a:int, b:int, c:int }, b:int, c:int, d:int) { // func137
  var h:int_ptr;
  var e:int;
  var f:int;
  var i:int;
  var j:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    g = g_c[0]:int;
    a = g.a;
    c = g.c;
    d = g.d;
    e = g.e;
    f = g.f;
    h = g.g;
    i = g.h;
    b = g.b;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          j = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          h = stack_pointer - 48;
          stack_pointer = h;
          e = eqz(b);
        }
        if (eqz(g_b)) {
          if (e) goto B_e;
          e = b[0]:int;
          if (eqz(e)) goto B_e;
          f = e[0]:int;
        }
        c = {
              if (eqz(g_b)) {
                if (eqz(f)) {
                  f = 86716;
                  d = 0;
                  88608;
                  goto B_g;
                }
                i = f != 86836;
                e = e[1]:int;
              }
              if (eqz(g_b)) {
                if (i) goto B_j;
                f = eqz(e);
                if (f) goto B_e;
                e = e[0]:int;
              }
              if (eqz(g_b) | eqz(j)) {
                Write(h, e, c, d);
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                f = h[1];
                d = h[0];
                h[2];
                goto B_g;
              }
              label B_j:
              i = select_if(i, f != 86812, g_b);
              if (eqz(g_b)) {
                if (i) goto B_n;
                f = h + 16;
              }
              if (eqz(g_b) | j == 1) {
                Write_1(f, e, c, d);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                f = h[5];
                d = h[4];
                h[6];
                goto B_g;
              }
              label B_n:
              if (eqz(g_b)) {
                if (f != 86520) goto B_e;
                f = h + 32;
              }
              if (eqz(g_b) | j == 2) {
                Write(f, e, c, d);
                2;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                c
              } else {
                f = h[9];
                d = h[8];
                h[10];
              }
              label B_g:
            }
        if (eqz(g_b | f)) {
          e = c;
          goto B_u;
        }
        if (eqz(g_b) | j == 3) {
          runtime_alloc(24);
          let t0 = 3;
          if (g_b == 1) goto B_b;
          e = t0;
        }
        if (eqz(g_b)) {
          b = b[0]:int;
          if (eqz(b)) goto B_e;
          var k:long = b[2]:long@4;
          e[1]:int = 5;
          e[5]:int = c;
          e[4]:int = f;
          e[2]:long@4 = k;
          e[0]:int = 68960;
          f = 86804;
        }
        label B_u:
        if (eqz(g_b)) {
          a.b = f;
          a.a = d;
          a.c = e;
          stack_pointer = h + 48;
          return ;
        }
        label B_e:
        if (eqz(g_b) | j == 4) {
          runtime_nilPanic();
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = d;
  g.e = e;
  g.f = f;
  g.g = h;
  g.h = i;
  g_c[0]:int = g_c[0]:int + 32;
}

function strconv_appendQuotedWith(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int) { // func138
  var f:int;
  var g:int;
  var m:int;
  var k:int;
  var h:int;
  var i:int;
  var l:int;
  var o:int;
  var n:int;
  var j:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 52;
    j = g_c[0]:int;
    a = j.a;
    c = j.c;
    d = j.d;
    e = j.e;
    f = j.f;
    g = j.g;
    h = j.h;
    i = j.i;
    l = j.j;
    m = j.k;
    n = j.l;
    o = j.m;
    b = j.b;
  }
  j = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        k = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = stack_pointer - 384;
        stack_pointer = f;
        m = 68;
        g = d < 69;
      }
      if (eqz(g_b)) {
        if (g) goto B_f;
        m = d + 2;
        b = m < 0;
        if (b) goto B_e;
      }
      if (eqz(g_b) | eqz(k)) {
        runtime_alloc(m);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        b = t0;
      }
      label B_f:
      if (eqz(g_b)) {
        f[376]:byte = 34;
        h = f + 376;
        g = f + 360;
      }
      if (eqz(g_b) | k == 1) {
        runtime_sliceAppend(g, b, h, 0, m, 1, 1);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        h = f[91]:int;
        i = f[90]:int;
        o = e & 1;
        g = f[92]:int;
      }
      loop L_l {
        b = select_if(b, d <= 0, g_b);
        if (eqz(g_b)) {
          if (b) goto B_o;
          m = 1;
          b = c[0]:byte;
          e = b >= 0;
        }
        if (eqz(g_b)) {
          if (e) goto B_q;
          b = f + 336;
        }
        if (eqz(g_b) | k == 2) {
          unicode_utf8_DecodeRuneInString(b, c, d);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = f[84]:int;
          m = f[85]:int;
          e = m != 1;
          if (e) goto B_q;
          e = b != 65533;
          if (e) goto B_q;
          m = 1;
          b = f + 32;
        }
        if (eqz(g_b) | k == 3) {
          runtime_sliceAppend(b, i, 82134, h, g, 2, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[375]:byte = ((c[0]:ubyte >> 4) + 82140)[0]:ubyte;
          e = f[8]:int;
          g = f + 375;
          h = f[9]:int;
          i = f[10]:int;
          b = f + 16;
        }
        if (eqz(g_b) | k == 4) {
          runtime_sliceAppend(b, e, g, h, i, 1, 1);
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[374]:byte = ((c[0]:ubyte & 15) + 82140)[0]:ubyte;
          e = f + 374;
          g = f[5]:int;
          h = f[6]:int;
          b = f[4]:int;
        }
        if (eqz(g_b) | k == 5) {
          runtime_sliceAppend(f, b, e, g, h, 1, 1);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[2]:int;
          h = f[1]:int;
          i = f[0]:int;
          goto B_m;
        }
        label B_q:
        e = select_if(e, b == 92, g_b);
        if (eqz(g_b)) {
          if (eqz(e)) {
            e = b != 34;
            if (e) goto B_aa;
          }
          f[383]:byte = 92;
          l = f + 383;
          e = f + 320;
        }
        if (eqz(g_b) | k == 6) {
          runtime_sliceAppend(e, i, l, h, g, 1, 1);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[382]:byte = b;
          e = f[80]:int;
          g = f + 382;
          h = f[81]:int;
          i = f[82]:int;
          b = f + 304;
        }
        if (eqz(g_b) | k == 7) {
          runtime_sliceAppend(b, e, g, h, i, 1, 1);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[78]:int;
          h = f[77]:int;
          i = f[76]:int;
          goto B_m;
        }
        label B_aa:
        e = select_if(e, eqz(o), g_b);
        if (eqz(g_b)) {
          if (e) goto B_ha;
          e = b > 127;
          if (e) goto B_n;
        }
        if (eqz(g_b) | k == 8) {
          strconv_IsPrint(b);
          let t1 = 8;
          if (g_b == 1) goto B_b;
          e = t1;
        }
        if (eqz(g_b)) {
          e = eqz(e & 1);
          if (e) goto B_n;
          f[381]:byte = b;
          e = f + 381;
          b = f + 48;
        }
        if (eqz(g_b) | k == 9) {
          runtime_sliceAppend(b, i, e, h, g, 1, 1);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[14]:int;
          h = f[13]:int;
          i = f[12]:int;
          goto B_m;
        }
        label B_ha:
        if (eqz(g_b) | k == 10) {
          strconv_IsPrint(b);
          let t2 = 10;
          if (g_b == 1) goto B_b;
          e = t2;
        }
        if (eqz(g_b)) {
          e = eqz(e & 1);
          if (e) goto B_n;
          e = f + 288;
        }
        if (eqz(g_b) | k == 11) {
          unicode_utf8_AppendRune(e, i, h, g, b);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[74]:int;
          h = f[73]:int;
          i = f[72]:int;
          goto B_m;
        }
        label B_o:
        if (eqz(g_b)) {
          f[373]:byte = 34;
          c = f + 373;
          b = f + 344;
        }
        if (eqz(g_b) | k == 12) {
          runtime_sliceAppend(b, i, c, h, g, 1, 1);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = f[87]:int;
          d = f[88]:int;
          a.a = f[86]:int;
          a.c = d;
          a.b = m;
          stack_pointer = f + 384;
          return ;
        }
        label B_n:
        e = select_if(e, b - 7, g_b);
        if (eqz(g_b)) {
          br_table[B_cb, B_ab, B_wa, B_ya, B_va, B_za, B_xa, ..B_ua](e)
          label B_cb:
          b = f + 176;
        }
        if (eqz(g_b) | k == 13) {
          runtime_sliceAppend(b, i, 82120, h, g, 2, 1);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[46]:int;
          h = f[45]:int;
          i = f[44]:int;
          goto B_m;
        }
        label B_ab:
        b = select_if(b, f + 192, g_b);
        if (eqz(g_b) | k == 14) {
          runtime_sliceAppend(b, i, 82122, h, g, 2, 1);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[50]:int;
          h = f[49]:int;
          i = f[48]:int;
          goto B_m;
        }
        label B_za:
        b = select_if(b, f + 208, g_b);
        if (eqz(g_b) | k == 15) {
          runtime_sliceAppend(b, i, 82124, h, g, 2, 1);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[54]:int;
          h = f[53]:int;
          i = f[52]:int;
          goto B_m;
        }
        label B_ya:
        b = select_if(b, f + 224, g_b);
        if (eqz(g_b) | k == 16) {
          runtime_sliceAppend(b, i, 82126, h, g, 2, 1);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[58]:int;
          h = f[57]:int;
          i = f[56]:int;
          goto B_m;
        }
        label B_xa:
        b = select_if(b, f + 240, g_b);
        if (eqz(g_b) | k == 17) {
          runtime_sliceAppend(b, i, 82128, h, g, 2, 1);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[62]:int;
          h = f[61]:int;
          i = f[60]:int;
          goto B_m;
        }
        label B_wa:
        b = select_if(b, f + 256, g_b);
        if (eqz(g_b) | k == 18) {
          runtime_sliceAppend(b, i, 82130, h, g, 2, 1);
          18;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[66]:int;
          h = f[65]:int;
          i = f[64]:int;
          goto B_m;
        }
        label B_va:
        b = select_if(b, f + 272, g_b);
        if (eqz(g_b) | k == 19) {
          runtime_sliceAppend(b, i, 82132, h, g, 2, 1);
          19;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[70]:int;
          h = f[69]:int;
          i = f[68]:int;
          goto B_m;
        }
        label B_ua:
        e = select_if(e, b < 32, g_b);
        if (eqz(g_b)) {
          if (eqz(e)) {
            e = b != 127;
            if (e) goto B_rb;
          }
          e = f + 96;
        }
        if (eqz(g_b) | k == 20) {
          runtime_sliceAppend(e, i, 82134, h, g, 2, 1);
          20;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[380]:byte = ((b >> 4 & 15) + 82140)[0]:ubyte;
          g = f[24]:int;
          h = f + 380;
          i = f[25]:int;
          l = f[26]:int;
          e = f + 80;
        }
        if (eqz(g_b) | k == 21) {
          runtime_sliceAppend(e, g, h, i, l, 1, 1);
          21;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[379]:byte = ((b & 15) + 82140)[0]:ubyte;
          e = f[20]:int;
          g = f + 379;
          h = f[21]:int;
          i = f[22]:int;
          b = f - -64;
        }
        if (eqz(g_b) | k == 22) {
          runtime_sliceAppend(b, e, g, h, i, 1, 1);
          22;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[18]:int;
          h = f[17]:int;
          i = f[16]:int;
          goto B_m;
        }
        label B_rb:
        e = select_if(e, b < 55296, g_b);
        if (eqz(g_b)) {
          if (eqz(e)) {
            e = 65533;
            l = b - 57344 >= 1056768;
            if (l) goto B_ac;
          }
          if (b < 65536) {
            e = b;
            goto B_ac;
          }
          e = f + 160;
        }
        if (eqz(g_b) | k == 23) {
          runtime_sliceAppend(e, i, 82138, h, g, 2, 1);
          23;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[42]:int;
          h = f[41]:int;
          i = f[40]:int;
          e = 28;
        }
        loop L_gc {
          if (eqz(g_b)) {
            l = e < 0;
            if (l) goto B_m;
            f[377]:byte =
              ((b >> select_if(31, e, e >= 31) & 15) + 82140)[0]:ubyte;
            n = f + 377;
            l = f + 144;
          }
          if (eqz(g_b) | k == 24) {
            runtime_sliceAppend(l, i, n, h, g, 1, 1);
            24;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            e = e - 4;
            g = f[38]:int;
            h = f[37]:int;
            i = f[36]:int;
            continue L_gc;
          }
        }
        label B_ac:
        b = select_if(b, f + 128, g_b);
        if (eqz(g_b) | k == 25) {
          runtime_sliceAppend(b, i, 82136, h, g, 2, 1);
          25;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[34]:int;
          h = f[33]:int;
          i = f[32]:int;
          b = 12;
        }
        loop L_mc {
          if (eqz(g_b)) {
            l = b < 0;
            if (l) goto B_m;
            f[378]:byte =
              ((e >> select_if(31, b, b >= 31) & 15) + 82140)[0]:ubyte;
            n = f + 378;
            l = f + 112;
          }
          if (eqz(g_b) | k == 26) {
            runtime_sliceAppend(l, i, n, h, g, 1, 1);
            26;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = b - 4;
            g = f[30]:int;
            h = f[29]:int;
            i = f[28]:int;
            continue L_mc;
          }
        }
        label B_m:
        if (eqz(g_b)) {
          b = d < m;
          if (b) goto B_e;
          d = d - m;
          c = c + m;
          continue L_l;
        }
      }
      label B_e:
      if (eqz(g_b) | k == 27) {
        runtime_slicePanic();
        27;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = j;
  g_c[0]:int = g_c[0]:int + 4;
  j = g_c[0]:int;
  j.a = a;
  j.b = b;
  j.c = c;
  j.d = d;
  j.e = e;
  j.f = f;
  j.g = g;
  j.h = h;
  j.i = i;
  j.j = l;
  j.k = m;
  j.l = n;
  j.m = o;
  g_c[0]:int = g_c[0]:int + 52;
}

function strconv_IsPrint(a:int):int { // func139
  var c:int;
  var b:int;
  var d:int;
  var g:int;
  var f:int;
  var e:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c[0]:int;
    b = c[1]:int;
    d = c[2]:int;
    c = c[3]:int;
  }
  e = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer - 32;
        stack_pointer = c;
        b = a > 255;
      }
      if (eqz(g_b)) {
        if (eqz(b)) {
          if (a - 32 <= 94) goto B_f;
          d = a != 173 & a > 160;
          goto B_e;
        }
        b = a < 65536;
      }
      if (eqz(g_b)) {
        if (eqz(b)) {
          d = 508;
          b = 0;
          loop L_m {
            if (b >= d) goto B_j;
            e = (d - b >> 1) + b;
            if (e > 507) goto B_i;
            b = select_if(e + 1, b, g = ((e << 2) + 82888)[0]:int < a);
            d = select_if(d, e, g);
            continue L_m;
          }
          unreachable;
        }
        b = c + 16;
      }
      if (eqz(g_b) | eqz(f)) {
        strconv_bsearch_uint16_uint16(b, 87204, 424, a);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = 0;
        b = c[4]:int;
        if (b > 423) goto B_e;
        if (b > 423) goto B_i;
        e = a & 65535;
        if (e < (((b & 510) << 1) + 87204)[0]:ushort) goto B_e;
        if (e > ((b << 1 | 2) + 87204)[0]:ushort) goto B_e;
        b = c + 8;
      }
      if (eqz(g_b) | f == 1) {
        strconv_bsearch_uint16_uint16(b, 88052, 133, a);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = c[12]:ubyte ^ 1;
        goto B_e;
      }
      label B_j:
      if (eqz(g_b)) {
        d = 0;
        if (b >= 508) goto B_e;
        if ((((b & 510) << 2) + 82888)[0]:int > a) goto B_e;
        if (((b << 2 | 4) + 82888)[0]:int < a) goto B_e;
        if (a > 131071) goto B_f;
        b = c + 24;
      }
      if (eqz(g_b) | f == 2) {
        strconv_bsearch_uint16_uint16(b, 88318, 112, a);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = c[28]:ubyte ^ 1;
        goto B_e;
      }
      label B_i:
      if (eqz(g_b) | f == 3) {
        runtime_lookupPanic();
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      d = select_if(d, 1, g_b);
      label B_e:
      if (eqz(g_b)) {
        stack_pointer = c + 32;
        return d;
      }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = d;
  e.d = c;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function strconv_bsearch_uint16_uint16(a:{ a:int, b:byte }, b:int, c:int, d:int) { // func140
  var e:int;
  var j:int;
  var h:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          var i:int = d & 65535;
          var f:int = c;
          loop L_e {
            if (e < f) {
              var g:int = e + (f - e >> 1);
              if (g >= c) goto B_d;
              f = select_if(f, g, j = i > ((g << 1) + b)[0]:ushort);
              e = select_if(g + 1, e, j);
              continue L_e;
            }
          }
          f = 0;
          a.b =
            if (c > e) {
              if (c <= e) goto B_d;
              ((e << 1) + b)[0]:ushort == (d & 65535);
            } else {
              0
            }
          a.a = e;
          return ;
          label B_d:
        }
        if (eqz(g_b) | eqz(h)) {
          runtime_lookupPanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function strconv_leftShift(a:int, b:int) { // func141
  var d:int;
  var c:int;
  var f:ubyte_ptr;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var i:int;
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    g = g_c[0]:int;
    a = g.a;
    b = g.b;
    c = g.c;
    d = g.d;
    f = g.e;
    g = g.f;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = a[200]:int;
          d = e > 800;
        }
        if (eqz(g_b)) {
          if (d) goto B_e;
          c = b * 12;
          d = (c + 82164)[0]:int;
          f = d > 0;
          g = select_if(d, 0, f);
          var j:int = (c + 82160)[0]:int;
          var k:int = (c + 82156)[0]:int;
          c = 0;
          loop L_h {
            if (c == g) goto B_g;
            if (c == e) {
              i = -1;
              goto B_g;
            }
            let t0 = c + j;
            f = a + c;
            c = c + 1;
            d = t0[0]:ubyte;
            if (d == (f = f[0])) continue L_h;
          }
          i = select_if(-1, 0, d > f);
          label B_g:
          d = 0;
          f = e - 1;
          c = f + (g = i + k);
        }
        loop L_j {
          e = select_if(e, f + 1 > 0, g_b);
          if (eqz(g_b)) {
            if (e) goto B_l;
            loop L_n {
              if (d) {
                d = d + (f = d / 10) * -10;
                if (c <= 799) {
                  if (c > 799) goto B_k;
                  (a + c)[0]:byte = d + 48;
                  goto B_p;
                }
                if (eqz(d)) goto B_p;
                a[809]:byte = 1;
                label B_p:
                c = c - 1;
                d = f;
                continue L_n;
              }
            }
            a[201]:int = g + a[201]:int;
            c = g + a[200]:int;
            b = c < 800;
            a[200]:int = (b = select_if(c, 800, b));
          }
          if (eqz(g_b) | eqz(h)) {
            strconv_trim(a);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { return  }
          label B_l:
          if (eqz(g_b)) {
            d = ((a + f)[0]:ubyte - 48 << b) + d;
            e = d + (d = d / 10) * -10;
            if (c <= 799) {
              if (c > 799) goto B_k;
              (a + c)[0]:byte = (e = e + 48);
              goto B_u;
            }
            e = eqz(e);
            if (e) goto B_u;
            a[809]:byte = 1;
            label B_u:
            f = f - 1;
            c = c - 1;
            continue L_j;
          }
          label B_k:
        }
        if (eqz(g_b) | h == 1) {
          runtime_lookupPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b) | h == 2) {
          runtime_slicePanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  e.f = g;
  g_c[0]:int = g_c[0]:int + 24;
}

function strconv_trim(a:int_ptr) { // func142
  var c:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          var e:int = a - 1;
          var b:int = a[200];
          loop L_f {
            if (b > 0) {
              var d:int = b - 1;
              if (d > 799) goto B_d;
              if ((b + e)[0]:ubyte != 48) goto B_e;
              a[200] = d;
              b = d;
              continue L_f;
            }
          }
          if (b) goto B_e;
          a[201] = 0;
          label B_e:
          return ;
          label B_d:
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_lookupPanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function strconv_rightShift(a:int, b:int) { // func143
  var d:int;
  var c:int;
  var i:int;
  var h:byte_ptr;
  var e:int;
  var j:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    g = g_c[0]:int;
    a = g.a;
    b = g.b;
    c = g.c;
    d = g.d;
    e = g.e;
    h = g.f;
    i = g.g;
    g = g.h;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = 0;
          c = 0;
        }
        if (eqz(g_b)) {
          loop L_h {
            if (d >> b) goto B_i;
            if (a[200]:int <= c) {
              if (eqz(d)) goto B_e;
              loop L_k {
                if (d >> b) goto B_i;
                c = c + 1;
                d = d * 10;
                continue L_k;
              }
              unreachable;
            }
            if (c == 800) goto B_f;
            d = (a + c)[0]:ubyte + d * 10 - 48;
            c = c + 1;
            continue L_h;
            label B_i:
          }
          a[201]:int = a[201]:int - c + 1;
          i = 800 - c;
          h = i > 800;
          h = select_if(0, i, h);
          i = -1 << b ^ -1;
          g = a + c;
          e = 0;
        }
        loop L_l {
          if (eqz(g_b)) { j = a[200]:int > c + e }
          if (eqz(g_b)) {
            if (j) goto B_n;
            loop L_p {
              c = eqz(d);
              if (eqz(c)) {
                c = d >> b;
                h = e > 799;
                if (eqz(h)) {
                  if (e > 799) goto B_f;
                  h = a + e;
                  h[0] = c + 48;
                  e = e + 1;
                  goto B_r;
                }
                if (eqz(c)) goto B_r;
                a[809]:byte = 1;
                label B_r:
                d = (d & i) * 10;
                continue L_p;
              }
            }
            a[200]:int = e;
          }
          if (eqz(g_b) | eqz(f)) {
            strconv_trim(a);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { return  }
          label B_n:
          if (eqz(g_b)) {
            if (e == h) goto B_f;
            j = (e + g)[0]:ubyte;
            (a + e)[0]:byte = (d >> b) + 48;
            d = j + (d & i) * 10 - 48;
            e = e + 1;
            continue L_l;
          }
        }
        label B_f:
        if (eqz(g_b) | f == 1) {
          runtime_lookupPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) { a[200]:int = 0 }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = c;
  f.d = d;
  f.e = e;
  f.f = h;
  f.g = i;
  f.h = g;
  g_c[0]:int = g_c[0]:int + 32;
}

function strconv_formatDigits(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:ubyte_ptr, f:int, g:int, h:int, i:int, j:int) { // func144
  var k:int;
  var o:int;
  var n:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int }
  var m:int;
  var l:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int }
  var p:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 60;
    n = g_c[0]:int;
    a = n.a;
    b = n.b;
    c = n.c;
    d = n.d;
    e = n.e;
    f = n.f;
    g = n.g;
    h = n.h;
    i = n.i;
    j = n.j;
    k = n.k;
    m = n.l;
    o = n.m;
    p = n.n;
    n = n.o;
  }
  l = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        l = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        k = stack_pointer - 240;
        stack_pointer = k;
        p = 1;
        o = i - 1;
        n = o < -4;
        m = select_if(h, j, h < j);
      }
      if (eqz(g_b)) {
        if (eqz(n)) {
          c = o < select_if(6, select_if(j, m, n = h < i), c & 1);
          if (c) goto B_h;
        }
        if (d & 1) {
          (b + 1)[0]:byte = 45;
          p = 2;
        }
        k[239]:byte =
          (i = if (h) {
                 if (eqz(f)) goto B_f;
                 e[0];
               } else {
                 48
               });
        d = k + 239;
        c = k + 216;
      }
      if (eqz(g_b) | eqz(l)) {
        runtime_sliceAppend(c, b, d, p, 68, 1, 1);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        i = k[56]:int;
        d = k[54]:int;
        c = m - 1;
        f = c <= 0;
        b = k[55]:int;
      }
      if (eqz(g_b)) {
        if (f) goto B_o;
        k[238]:byte = 46;
        j = k + 238;
        f = k + 200;
      }
      if (eqz(g_b) | l == 1) {
        runtime_sliceAppend(f, d, j, b, i, 1, 1);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        i = k[52]:int;
        d = k[50]:int;
        f = m >= 2;
        b = k[51]:int;
      }
      if (eqz(g_b)) {
        if (eqz(f)) {
          m = 1;
          goto B_s;
        }
        if (g < m) goto B_g;
        f = k + 184;
        e = e + 1;
      }
      if (eqz(g_b) | l == 2) {
        runtime_sliceAppend(f, d, e, b, i, c, 1);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        i = k[48]:int;
        d = k[46]:int;
        b = k[47]:int;
      }
      label B_s:
      loop L_x {
        if (eqz(g_b)) {
          e = c < m;
          if (e) goto B_o;
          k[237]:byte = 48;
          f = k + 237;
          e = k + 168;
        }
        if (eqz(g_b) | l == 3) {
          runtime_sliceAppend(e, d, f, b, i, 1, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = m + 1;
          i = k[44]:int;
          b = k[43]:int;
          d = k[42]:int;
          continue L_x;
        }
      }
      label B_o:
      if (eqz(g_b)) {
        k[236]:byte = 101;
        e = k + 236;
        c = k + 152;
      }
      if (eqz(g_b) | l == 4) {
        runtime_sliceAppend(c, d, e, b, i, 1, 1);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        k[235]:byte = select_if(45, 43, (i = select_if(o, 0, h)) < 0);
        c = k[38]:int;
        d = k + 235;
        e = k[39]:int;
        f = k[40]:int;
        b = k + 136;
      }
      if (eqz(g_b) | l == 5) {
        runtime_sliceAppend(b, c, d, e, f, 1, 1);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        m = k[36]:int;
        d = k[34]:int;
        e = i ^ (c = i >> 31);
        i = e - c;
        c = i > 9;
        b = k[35]:int;
      }
      if (eqz(g_b)) {
        if (c) goto B_ga;
        k[232]:byte = 48;
        k[233]:byte = i + 48;
        e = k + 232;
        c = k + 88;
      }
      if (eqz(g_b) | l == 6) {
        runtime_sliceAppend(c, d, e, b, m, 2, 1);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        m = k[24]:int;
        b = k[23]:int;
        d = k[22]:int;
        goto B_e;
      }
      label B_ga:
      c = select_if(c, i > 99, g_b);
      if (eqz(g_b)) {
        if (c) goto B_ka;
        k[232]:byte = (c = (i & 255) / 10) | 48;
        k[233]:byte = i - c * 10 | 48;
        e = k + 232;
        c = k + 104;
      }
      if (eqz(g_b) | l == 7) {
        runtime_sliceAppend(c, d, e, b, m, 2, 1);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        m = k[28]:int;
        b = k[27]:int;
        d = k[26]:int;
        goto B_e;
      }
      label B_ka:
      if (eqz(g_b)) {
        k[232]:byte = i / 100 + 48;
        k[234]:byte = i - (c = i / 10) * 10 | 48;
        k[233]:byte = (c & 255) % 10 | 48;
        e = k + 232;
        c = k + 120;
      }
      if (eqz(g_b) | l == 8) {
        runtime_sliceAppend(c, d, e, b, m, 3, 1);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        m = k[32]:int;
        b = k[31]:int;
        d = k[30]:int;
        goto B_e;
      }
      label B_h:
      if (eqz(g_b)) {
        m = 1;
        if (d & 1) {
          (b + 1)[0]:byte = 45;
          m = 2;
        }
        c = i <= 0;
      }
      if (eqz(g_b)) {
        if (c) goto B_ua;
        if (g < (d = select_if(h, i, n))) goto B_g;
        c = k + 56;
      }
      if (eqz(g_b) | l == 9) {
        runtime_sliceAppend(c, b, e, m, 68, d, 1);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c = i - d;
        m = k[16]:int;
        d = k[14]:int;
        b = k[15]:int;
      }
      loop L_ya {
        if (eqz(g_b)) {
          g = eqz(c);
          if (g) goto B_ta;
          k[232]:byte = 48;
          o = k + 232;
          g = k + 40;
        }
        if (eqz(g_b) | l == 10) {
          runtime_sliceAppend(g, d, o, b, m, 1, 1);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = c - 1;
          m = k[12]:int;
          b = k[11]:int;
          d = k[10]:int;
          continue L_ya;
        }
      }
      label B_ua:
      if (eqz(g_b)) {
        k[232]:byte = 48;
        d = k + 232;
        c = k + 72;
      }
      if (eqz(g_b) | l == 11) {
        runtime_sliceAppend(c, b, d, m, 68, 1, 1);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        m = k[20]:int;
        d = k[18]:int;
        b = k[19]:int;
      }
      label B_ta:
      if (eqz(g_b)) {
        c = select_if(h, j, i < j) - i;
        if (c <= 0) goto B_e;
        k[239]:byte = 46;
        g = k + 24;
        j = k + 239;
        c = select_if(c, 0, c > 0);
      }
      if (eqz(g_b) | l == 12) {
        runtime_sliceAppend(g, d, j, b, m, 1, 1);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        m = k[8]:int;
        d = k[6]:int;
        b = k[7]:int;
      }
      loop L_ib {
        if (eqz(g_b)) {
          if (eqz(c)) goto B_e;
          j = 48;
          if (eqz(i < 0 | h <= i)) {
            if (f <= i) goto B_f;
            j = (e + i)[0]:ubyte;
          }
          k[238]:byte = j;
          j = k + 238;
          g = k + 8;
        }
        if (eqz(g_b) | l == 13) {
          runtime_sliceAppend(g, d, j, b, m, 1, 1);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = c - 1;
          i = i + 1;
          m = k[4]:int;
          b = k[3]:int;
          d = k[2]:int;
          continue L_ib;
        }
      }
      label B_g:
      if (eqz(g_b) | l == 14) {
        runtime_slicePanic();
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      if (eqz(g_b) | l == 15) {
        runtime_lookupPanic();
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b)) {
        a.c = m;
        a.b = b;
        a.a = d;
        stack_pointer = k + 240;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = l;
  g_c[0]:int = g_c[0]:int + 4;
  l = g_c[0]:int;
  l.a = a;
  l.b = b;
  l.c = c;
  l.d = d;
  l.e = e;
  l.f = f;
  l.g = g;
  l.h = h;
  l.i = i;
  l.j = j;
  l.k = k;
  l.l = m;
  l.m = o;
  l.n = p;
  l.o = n;
  g_c[0]:int = g_c[0]:int + 60;
}

function strconv_mult128bitPow10(a:{ a:long, b:int, c:byte }, b:long, c:int, d:int) { // func145
  var f:int;
  var g:long;
  var h:long;
  a = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        var e:{ a:long, b:long, c:long, d:long } = stack_pointer - 32;
        stack_pointer = e;
        b = {
              if (eqz(d)) {
                d = c - 8;
                c = 1;
                b << 8L;
                goto B_e;
              }
              if (d - 348 <= -697) goto B_d;
              math_bits_Mul64(
                e + 16,
                b,
                ((f = d << 4) + 75864)[0]:long + i64_extend_i32_u(d >> 31));
              math_bits_Mul64(e, b, (f + 75872)[0]:long);
              b = e.b;
              var i:long = (b | (g = e.c)) & ((h = b + g) ^ -1L);
              d = (d * 108853 >> 15) + c - 8;
              c = eqz(e.d | (h & 36028797018963967L));
              e.a + ((i | (b & g)) >> 63L) << 9L | h >> 55L;
              label B_e:
            }
        a.c = c;
        a.b = d;
        a.a = b;
        stack_pointer = e + 32;
        return ;
        label B_d:
      }
      if (eqz(g_b) | eqz(f)) {
        runtime_panic(86192, 82112);
        0;
        if (g_b == 1) goto B_a;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_a:
    }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function strconv_divisibleByPower5(a:long, b:int):int { // func146
  var d:long;
  var c:int;
  if (eqz(a)) {
    c = 1;
    goto B_a;
  }
  b = select_if(b, 0, b > 0);
  loop L_c {
    c = eqz(b);
    if (eqz(b) | a != (d = a / 5L) * 5L) goto B_a;
    b = b - 1;
    a = d;
    continue L_c;
  }
  unreachable;
  label B_a:
  return c;
}

function strconv_formatDecimal(a:int_ptr, b:long, c:int, d:int, e:byte_ptr) { // func147
  var k:int;
  var i:long;
  var h:long;
  var g:int;
  var j:int;
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
    f = g_c[0]:int;
    a = f[0]:int;
    c = f[3]:int;
    d = f[4]:int;
    e = f[5]:int;
    g = f[6]:int;
    h = f[7]:long@4;
    i = f[9]:long@4;
    b = f[1]:long@4;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        i = ((e << 3) + 81456)[0]:long;
        g = 0;
      }
      loop L_e {
        k = select_if(k, b < i, g_b);
        if (eqz(g_b)) {
          if (eqz(k)) {
            b = b - (h = b / 10L) * 10L;
            if (b >= 6L) {
              d = 1;
              goto B_f;
            }
            if (b != 5L) {
              d = 0;
              goto B_f;
            }
            d = i32_wrap_i64(h) | c;
            goto B_f;
          }
          c = eqz(a);
          h = i64_extend_i32_u(d) & 1L;
          b = h + b;
          b = if (b >= i) {
                g = g + 1;
                b / 10L;
              } else {
                b
              }
        }
        if (eqz(g_b)) {
          if (c) goto B_l;
          a[3] = e;
          c = e - 1;
          loop L_n {
            if (b >= 100L) {
              if (b <= 4294967295L) {
                d = i32_wrap_i64(b);
                e = d / 100;
                b = i64_extend_i32_u(e);
                h = i64_extend_i32_u(d - (e = e * 100));
                goto B_p;
              }
              h = b - (i = b / 100L) * 100L;
              b = i;
              goto B_p;
            }
            if (eqz(b)) goto B_s;
            d = a[1] <= c;
            if (d) goto B_o;
            (a[0] + c)[0]:byte = ((d = i32_wrap_i64(b) << 1) + 81809)[0]:ubyte;
            if (b < 10L) goto B_s;
            e = a[1] <= c - 1;
            if (e) goto B_o;
            (a[0] + c - 1)[0]:byte = (d + 81808)[0]:ubyte;
            label B_s:
            c = a[3] - 1;
            d = a[1];
            loop L_t {
              e = c >= d;
              if (e) goto B_o;
              if ((a[0] + c)[0]:ubyte == 48) {
                a[3] = c;
                c = c - 1;
                g = g + 1;
                continue L_t;
              }
            }
            a[4] = c + g + 1;
            return ;
            label B_p:
            d = a[1] <= c;
            if (d) goto B_o;
            (a[0] + c)[0]:byte = ((d = i32_wrap_i64(h) << 1) + 81809)[0]:ubyte;
            e = a[1] <= c - 1;
            if (e) goto B_o;
            e = a[0] + c - 1;
            e[0] = (d + 81808)[0]:ubyte;
            c = c - 2;
            continue L_n;
            label B_o:
          }
        }
        if (eqz(g_b) | eqz(j)) {
          runtime_lookupPanic();
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_l:
        if (eqz(g_b) | j == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        if (eqz(g_b)) {
          g = g + 1;
          k = b != 0L;
          c = k | c;
          b = h;
          continue L_e;
        }
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f[0]:int = a;
  f[1]:long@4 = b;
  f[3]:int = c;
  f[4]:int = d;
  f[5]:int = e;
  f[6]:int = g;
  f[7]:long@4 = h;
  f[9]:long@4 = i;
  g_c[0]:int = g_c[0]:int + 44;
}

function strconv_mult64bitPow10(a:{ a:int, b:int, c:byte }, b:int, c:int, d:int) { // func148
  var g:long;
  var f:int;
  a = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        var e:{ a:long, b:long } = stack_pointer - 16;
        stack_pointer = e;
        a.c =
          {
            if (eqz(d)) {
              d = c - 6;
              b = b << 6;
              1;
              goto B_e;
            }
            if (d - 348 <= -697) goto B_d;
            math_bits_Mul64(
              e,
              i64_extend_i32_u(b),
              ((d << 4) + 75872)[0]:long + i64_extend_i32_u(d >> 31));
            b = i32_wrap_i64(e.a << 7L | (g = e.b) >> 57L);
            d = (d * 108853 >> 15) + c - 6;
            eqz(g & 144115188075855871L);
            label B_e:
          }
        a.b = d;
        a.a = b;
        stack_pointer = e + 16;
        return ;
        label B_d:
      }
      if (eqz(g_b) | eqz(f)) {
        runtime_panic(86192, 82056);
        0;
        if (g_b == 1) goto B_a;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_a:
    }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function strconv_ryuDigits(a:{ a:int, b:int, c:int, d:int, e:int }, b:long, c:long, d:long, e:int, f:int) { // func149
  var k:int_ptr;
  var j:int;
  var n:int;
  var l:int;
  var m:int;
  var o:int;
  var p:int;
  var g:int;
  var i:ubyte_ptr;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
    h = g_c[0]:int;
    a = h.a;
    f = h.c;
    g = h.d;
    i = h.e;
    j = h.f;
    k = h.g;
    l = h.h;
    m = h.i;
    o = h.j;
    p = h.k;
    e = h.b;
  }
  h = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          n = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          k = stack_pointer - 32;
          stack_pointer = k;
          strconv_divmod1e9(k + 24, b);
          l = k[7];
          g = k[6];
          strconv_divmod1e9(k + 16, c);
          m = k[5];
          i = k[4];
          strconv_divmod1e9(k + 8, d);
          o = k[3];
          j = k[2];
        }
        if (select_if(g_b, 1, j)) {
          if (eqz(g_b) | eqz(n)) {
            strconv_ryuDigits32(a, l, m, o, e, f, 8);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            if (eqz(a)) goto B_h;
            goto B_g;
          }
        }
        p = select_if(p, g >= j, g_b);
        if (eqz(g_b)) {
          if (eqz(p)) {
            e = eqz(m) & e;
            l = (l != 0) + g;
            g = 1;
            if (m >= 500000001) goto B_l;
            g = m == 500000000 & f;
            goto B_l;
          }
          if (eqz(a)) goto B_h;
          g = 0;
          a.d = 0;
          loop L_o {
            if (i) {
              if (a.b <= g + 8) goto B_f;
              (g + a.a + 8)[0]:byte = i - (j = i / 10) * 10 | 48;
              g = g - 1;
              i = j;
              continue L_o;
            }
          }
          i = a.b;
          if (i < g + 9) goto B_e;
          j = a.c;
          if (j < i) goto B_e;
          a.d = 0 - g;
          a.c = (j = j - g - 9);
          a.b = i - g - 9;
          a.a = g + a.a + 9;
          i = 8 - g;
        }
        if (eqz(g_b) | n == 1) {
          strconv_ryuDigits32(a, l, m, o, e, f, i);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_g;
        label B_l:
        if (eqz(g_b) | n == 2) {
          strconv_ryuDigits32(a, l, i, j, e, g, 8);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          if (eqz(a)) goto B_h;
          a.e = a.e + 9;
          goto B_g;
        }
        label B_h:
        if (eqz(g_b) | n == 3) {
          runtime_nilPanic();
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_g:
        if (eqz(g_b)) {
          g = a.d - 1;
          loop L_x {
            if (g + 1 <= 0) goto B_w;
            m = a.b;
            if (m <= g) goto B_f;
            if ((g + (i = a.a))[0]:ubyte == 48) {
              a.d = g;
              g = g - 1;
              continue L_x;
            }
          }
          j = 0;
          loop L_z {
            e = g + j;
            if (e == -1) goto B_w;
            l = j + m;
            if (eqz(l)) goto B_f;
            if (i[0] != 48) goto B_w;
            a.d = e;
            a.e = a.e - 1;
            e = l - 1;
            if (e >= (l = a.c)) goto B_e;
            a.b = e;
            a.c = l - 1;
            a.a = (i = i + 1);
            j = j - 1;
            continue L_z;
          }
          unreachable;
          label B_w:
          stack_pointer = k + 32;
          return ;
        }
        label B_f:
        if (eqz(g_b) | n == 4) {
          runtime_lookupPanic();
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b) | n == 5) {
          runtime_slicePanic();
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = h;
  g_c[0]:int = g_c[0]:int + 4;
  h = g_c[0]:int;
  h.a = a;
  h.b = e;
  h.c = f;
  h.d = g;
  h.e = i;
  h.f = j;
  h.g = k;
  h.h = l;
  h.i = m;
  h.j = o;
  h.k = p;
  g_c[0]:int = g_c[0]:int + 44;
}

function strconv_divmod1e9(a:{ a:int, b:int }, b:long) { // func150
  var d:long;
  var c:long_ptr = stack_pointer - 16;
  stack_pointer = c;
  math_bits_Mul64(c, b >> 1L, -8543223759426509416L);
  a.a = (d = c[0] >> 28L);
  a.b = d * 3294967296L + b;
  stack_pointer = c + 16;
}

function strconv_ryuDigits32(a:int_ptr, b:{ a:int, b:int }, c:int, d:int, e:int, f:int, g:{ a:int, b:int }) { // func151
  var i:int;
  var h:int;
  var j:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    g = g_c[0]:int;
    a = g.a;
    g = g.b;
  }
  b = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      var k:int = eqz(select_if(1, d, g_b));
      if (eqz(g_b)) {
        if (eqz(k)) {
          loop L_j {
            if (eqz(d)) goto B_h;
            b = (b + 9) / 10;
            if (b > (k = d / 10)) goto B_h;
            let t0 = c - (d = c / 10) * 10;
            i = i + 1;
            e = e & eqz(h);
            f = (h = (c = d + 1) != b) & f;
            c = select_if(d, c, h);
            d = k;
            h = select_if(t0, 0, h);
            continue L_j;
          }
          unreachable;
        }
        if (eqz(a)) goto B_g;
        goto B_d;
        label B_h:
        if (i <= 0) goto B_k;
        f = 1;
        if (h > 5) goto B_k;
        if (eqz((e | h != 5) & 1)) goto B_k;
        f = 0;
        if (((e ^ 1) & 1) | h != 5) goto B_k;
        f = c & 1;
        label B_k:
        if (eqz(a)) goto B_g;
        b = g - i;
        d = (f & c < d) + c;
        loop L_l {
          if (b > (c = a[3])) {
            c = d / 100;
            if (a[1] <= b) goto B_e;
            (a[0] + b)[0]:byte = ((d = d - c * 100 << 1) + 81809)[0]:ubyte;
            if (a[1] <= b - 1) goto B_e;
            (a[0] + b - 1)[0]:byte = (d + 81808)[0]:ubyte;
            b = b - 2;
            d = c;
            continue L_l;
          }
        }
        if (b == c) {
          if (a[1] <= b) goto B_e;
          (a[0] + b)[0]:byte = d + 48;
        }
        a[3] = g - i + 1;
        goto B_d;
        label B_g:
      }
      if (eqz(g_b) | eqz(j)) {
        runtime_nilPanic();
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b) | j == 1) {
        runtime_lookupPanic();
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_d:
      if (eqz(g_b)) { a[4] = g + 1 }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = g;
  g_c[0]:int = g_c[0]:int + 8;
}

function write_1(a:int, b:int, c:int) { // func152
  var g:{ a:long, b:int }
  var f:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var h:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    f = d.d;
    g = d.e;
    h = d.f;
    d = d.g;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 16;
          stack_pointer = g;
          f = eqz(a);
        }
        if (eqz(g_b)) {
          if (f) goto B_e;
          h = a[1]:int;
          f = a[0]:int;
          d = a[2]:int;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_sliceAppend(g, f, b, h, d, c, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = g.b;
          a[0]:long@4 = g.a;
          a[2]:int = c;
          stack_pointer = g + 16;
          return ;
        }
        label B_e:
        if (eqz(g_b) | e == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = f;
  e.e = g;
  e.f = h;
  e.g = d;
  g_c[0]:int = g_c[0]:int + 28;
}

function writeByte(a:int, b:int) { // func153
  var e:int;
  var f:int;
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var g:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    e = d.c;
    f = d.d;
    g = d.e;
    d = d.f;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 16;
          stack_pointer = e;
          f = eqz(a);
        }
        if (eqz(g_b)) {
          if (f) goto B_e;
          e[15]:byte = b;
          f = e + 15;
          g = a[1]:int;
          d = a[2]:int;
          b = a[0]:int;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_sliceAppend(e, b, f, g, d, 1, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = e[2]:int;
          a[0]:long@4 = e[0]:long;
          a[2]:int = b;
          stack_pointer = e + 16;
          return ;
        }
        label B_e:
        if (eqz(g_b) | c == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = e;
  c.d = f;
  c.e = g;
  c.f = d;
  g_c[0]:int = g_c[0]:int + 24;
}

function writeString(a:int, b:int, c:int) { // func154
  var g:{ a:long, b:int }
  var f:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var h:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    f = d.d;
    g = d.e;
    h = d.f;
    d = d.g;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 16;
          stack_pointer = g;
          f = eqz(a);
        }
        if (eqz(g_b)) {
          if (f) goto B_e;
          h = a[1]:int;
          f = a[0]:int;
          d = a[2]:int;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_sliceAppend(g, f, b, h, d, c, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = g.b;
          a[0]:long@4 = g.a;
          a[2]:int = c;
          stack_pointer = g + 16;
          return ;
        }
        label B_e:
        if (eqz(g_b) | e == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = f;
  e.e = g;
  e.f = h;
  e.g = d;
  g_c[0]:int = g_c[0]:int + 28;
}

function fmtInteger(a:int, b:long, c:int, d:int, e:ubyte_ptr) { // func155
  var k:int;
  var g:int;
  var l:long;
  var m:int;
  var i:int;
  var j:int;
  var f:int;
  var h:int;
  var n:byte_ptr;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 48;
    h = g_c[0]:int;
    a = h[0]:int;
    c = h[3]:int;
    d = h[4]:int;
    e = h[5]:int;
    g = h[6]:int;
    i = h[7]:int;
    j = h[8]:int;
    l = h[9]:long@4;
    m = h[11]:int;
    b = h[1]:long@4;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          k = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b | eqz(select_if(1, a, g_b)))) {
          l = 0L - b;
          m = b < 0L & d;
          j = a + 24;
          d = a[4]:ubyte;
          if (d) goto B_h;
          d = a[5]:ubyte;
          if (d) goto B_h;
          goto B_g;
        }
        if (eqz(g_b) | eqz(k)) {
          runtime_nilPanic();
          0;
          if (g_b == 1) goto B_c;
        }
        if (eqz(g_b)) { unreachable }
        label B_h:
        if (eqz(g_b)) {
          g = a[4]:int + a[5]:int + 3;
          d = g >= 69;
          if (d) goto B_f;
        }
        label B_g:
        if (eqz(g_b)) {
          g = 68;
          goto B_e;
        }
        label B_f:
        if (eqz(g_b) | k == 1) {
          runtime_alloc(g);
          let t0 = 1;
          if (g_b == 1) goto B_c;
          j = t0;
        }
        label B_e:
        if (eqz(g_b)) {
          d = eqz(a[5]:ubyte);
          b = select_if(l, b, m);
        }
        if (eqz(g_b)) {
          if (d) goto B_q;
          i = a[5]:int;
          if (i) goto B_p;
          i = 0;
          d = b != 0L;
          if (d) goto B_p;
          d = a[10]:ubyte;
          a[10]:byte = 0;
          c = a[4]:int;
        }
        if (eqz(g_b) | k == 2) {
          writePadding(a, c);
          2;
          if (g_b == 1) goto B_c;
        }
        if (eqz(g_b)) { goto B_b }
        label B_q:
        if (eqz(g_b)) {
          i = 0;
          d = eqz(a[10]:ubyte);
          if (d) goto B_p;
          d = a[6]:ubyte;
          if (d) goto B_p;
          d = eqz(a[4]:ubyte);
          if (d) goto B_p;
          i = a[4]:int;
          if (m) goto B_v;
          d = a[7]:ubyte;
          if (d) goto B_v;
          d = eqz(a[9]:ubyte);
          if (d) goto B_p;
          label B_v:
          i = i - 1;
        }
        label B_p:
        d = select_if(d, c == 10, g_b);
        if (eqz(g_b)) {
          if (d) goto B_y;
          d = c != 16;
          if (eqz(d)) {
            h = j - 1;
            d = g;
            loop L_ba {
              if (b < 16L) goto B_x;
              if (g <= (f = d - 1)) goto B_w;
              (d + h)[0]:byte = ((i32_wrap_i64(b) & 15) + e)[0]:ubyte;
              b = b >> 4L;
              d = f;
              continue L_ba;
            }
            unreachable;
          }
        }
        if (eqz(g_b) | k == 3) {
          runtime_panic(86192, 85872);
          3;
          if (g_b == 1) goto B_c;
        }
        if (eqz(g_b)) { unreachable }
        label B_y:
        if (eqz(g_b)) {
          h = j - 1;
          d = g;
          loop L_fa {
            if (b < 10L) goto B_x;
            if (g <= (f = d - 1)) goto B_w;
            (d + h)[0]:byte = (l = b / 10L) * 246L + b + 48L;
            b = l;
            d = f;
            continue L_fa;
          }
          unreachable;
        }
        label B_x:
        if (eqz(g_b)) {
          if (g <= d - 1) goto B_w;
          f = 1 - d;
          d = d - 3;
          h = (i32_wrap_i64(b) + e)[0]:ubyte;
          loop L_ia {
            n = d + j;
            (n + 2)[0]:byte = h;
            if (d + 2 <= 0 | i <= f + g) goto B_ha;
            f = f + 1;
            n = d + 1;
            h = 48;
            d = d - 1;
            if (g > n) continue L_ia;
          }
          goto B_w;
          label B_ha:
          f = d + 2;
          if (eqz(eqz(a[8]:ubyte) | c != 16)) {
            if (g <= d + 1) goto B_w;
            (n + 1)[0]:byte = e[16];
            if (d >= g) goto B_w;
            n[0] = 48;
            f = d;
          }
          d = {
                if (m) {
                  if (g <= (f = f - 1)) goto B_w;
                  45;
                  goto B_la;
                }
                if (a[7]:ubyte) {
                  if (g <= (f = f - 1)) goto B_w;
                  43;
                  goto B_la;
                }
                if (eqz(a[9]:ubyte)) goto B_ka;
                if (g <= (f = f - 1)) goto B_w;
                32;
                label B_la:
              }
          (f + j)[0]:byte = d;
          label B_ka:
          d = a[10]:ubyte;
          a[10]:byte = 0;
          g = g - f;
          c = f + j;
        }
        if (eqz(g_b) | k == 4) {
          pad(a, c, g, g);
          4;
          if (g_b == 1) goto B_c;
        }
        if (eqz(g_b)) { goto B_b }
        label B_w:
        if (eqz(g_b) | k == 5) {
          runtime_lookupPanic();
          5;
          if (g_b == 1) goto B_c;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_c:
      }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f[0]:int = a;
  f[1]:long@4 = b;
  f[3]:int = c;
  f[4]:int = d;
  f[5]:int = e;
  f[6]:int = g;
  f[7]:int = i;
  f[8]:int = j;
  f[9]:long@4 = l;
  f[11]:int = m;
  g_c[0]:int = g_c[0]:int + 48;
  return ;
  label B_b:
  a[10]:byte = d & 1;
}

function writePadding(a:int, b:{ a:int, b:int, c:int }) { // func156
  var f:int;
  var e:int;
  var h:int;
  var g:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var c:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    f = d.c;
    e = d.d;
    g = d.e;
    d = d.f;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        c = select_if(0, b <= 0, g_b);
        if (eqz(g_b)) {
          if (c) goto B_f;
          c = a[0]:int;
          if (eqz(c)) goto B_d;
          f = c[2]:int;
          e = f < (g = (d = c[1]:int) + b);
        }
        if (eqz(g_b)) {
          if (eqz(e)) {
            e = c[0]:int;
            goto B_h;
          }
          f = (f << 1) + b;
          if (f < 0) goto B_e;
        }
        if (eqz(g_b) | eqz(h)) {
          runtime_alloc(f);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          e = t0;
        }
        if (eqz(g_b)) {
          c = a[0]:int;
          if (eqz(c)) goto B_d;
          memory_copy(e, c[0]:int, select_if(c = c[1]:int, f, c < f));
        }
        label B_h:
        if (eqz(g_b)) {
          var i:int = 32;
          if (a[10]:ubyte) { i = select_if(32, 48, a[6]:ubyte) }
          if (f < g | d > g) goto B_e;
          c = d + e;
          loop L_o {
            if (b) {
              c[0]:byte = i;
              c = c + 1;
              b = b - 1;
              continue L_o;
            }
          }
          b = a[0]:int;
          if (eqz(b)) goto B_d;
          b.c = f;
          b.b = g;
          b.a = e;
        }
        label B_f:
        if (eqz(g_b)) { return  }
        label B_e:
        if (eqz(g_b) | h == 1) {
          runtime_slicePanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b) | h == 2) {
          runtime_nilPanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c[0]:int = a;
  c[1]:int = b;
  c[2]:int = f;
  c[3]:int = e;
  c[4]:int = g;
  c[5]:int = d;
  g_c[0]:int = g_c[0]:int + 24;
}

function pad(a:int, b:int, c:int, d:int) { // func157
  var i:int_ptr;
  var f:int;
  var k:int;
  var j:byte_ptr;
  var g:int;
  var h:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    i = e.g;
    j = e.h;
    k = e.i;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          i = stack_pointer - 16;
          stack_pointer = i;
          f = eqz(a[4]:ubyte);
        }
        if (eqz(g_b)) {
          if (f) goto B_f;
          k = a[4]:int;
          if (eqz(k)) goto B_f;
          g = select_if(c, 0, c > 0);
          f = 0;
        }
        loop L_j {
          j = select_if(j, f == g, g_b);
          if (eqz(g_b)) {
            if (j) goto B_m;
            if (c == f) goto B_k;
            j = b + f;
            if (j[0] >= 0) goto B_l;
            if (c > d) goto B_i;
            g = c - f;
            d = i + 8;
          }
          if (eqz(g_b) | eqz(h)) {
            runtime_stringFromBytes(d, j, g);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = i[3];
            d = i[2];
          }
          if (eqz(g_b) | h == 1) {
            unicode_utf8_RuneCountInString(d, g);
            let t0 = 1;
            if (g_b == 1) goto B_b;
            d = t0;
          }
          g = select_if(g, d + f, g_b);
          label B_m:
          if (eqz(g_b)) {
            f = k - g;
            if (eqz(a[6]:ubyte)) goto B_h;
            d = a[0]:int;
          }
          if (eqz(g_b) | h == 2) {
            write_1(d, b, c);
            2;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | h == 3) {
            writePadding(a, f);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_e;
          label B_l:
          if (eqz(g_b)) {
            f = f + 1;
            continue L_j;
          }
          label B_k:
        }
        if (eqz(g_b) | h == 4) {
          runtime_lookupPanic();
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_i:
        if (eqz(g_b) | h == 5) {
          runtime_slicePanic();
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_h:
        if (eqz(g_b) | h == 6) {
          writePadding(a, f);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a = a[0]:int }
        if (eqz(g_b) | h == 7) {
          write_1(a, b, c);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_f:
        if (eqz(g_b)) { a = a[0]:int }
        if (eqz(g_b) | h == 8) {
          write_1(a, b, c);
          8;
          if (g_b == 1) goto B_b;
        }
        label B_e:
        if (eqz(g_b)) { stack_pointer = i + 16 }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  e.f = g;
  e.g = i;
  e.h = j;
  e.i = k;
  g_c[0]:int = g_c[0]:int + 36;
}

function fmtS(a:int, b:int, c:int) { // func158
  var f:int_ptr;
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var d:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    f = d.d;
    d = d.e;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 16;
          stack_pointer = f;
          d = f + 8;
        }
        if (eqz(g_b) | eqz(e)) {
          truncateString(d, a, b, c);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = f[3];
          b = f[2];
        }
        if (eqz(g_b) | e == 1) {
          padString(a, b, c);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { stack_pointer = f + 16 }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = f;
  e.e = d;
  g_c[0]:int = g_c[0]:int + 20;
}

function truncateString(a:{ a:int, b:int }, b:int, c:int, d:int) { // func159
  var h:int;
  var g:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    g = f.e;
    h = f.f;
    f = f.g;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          h = stack_pointer - 32;
          stack_pointer = h;
          g = eqz(b);
        }
        if (eqz(g_b)) {
          if (g) goto B_h;
          g = eqz(b[5]:ubyte);
          if (g) goto B_f;
          b = b[5]:int;
          h[6]:int = 0;
        }
        loop L_j {
          if (eqz(g_b)) {
            g = h + 8;
            f = h + 24;
          }
          if (eqz(g_b) | eqz(e)) {
            runtime_stringNext(g, c, d, f);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            if (eqz(h[8]:ubyte)) goto B_f;
            b = b - 1;
            g = b >= 0;
            if (g) continue L_j;
          }
        }
        if (eqz(g_b)) {
          d = d < (b = h[3]:int);
          if (d) goto B_g;
          goto B_e;
        }
        label B_h:
        if (eqz(g_b) | e == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_g:
        if (eqz(g_b) | e == 2) {
          runtime_slicePanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        b = select_if(b, d, g_b);
        label B_e:
        if (eqz(g_b)) {
          a.b = b;
          a.a = c;
          stack_pointer = h + 32;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = g;
  e.f = h;
  e.g = f;
  g_c[0]:int = g_c[0]:int + 28;
}

function padString(a:int, b:int, c:int) { // func160
  var e:int;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    e = d.d;
    d = d.e;
  }
  var g:{ a:int, b:int, c:int, d:int, e:int } = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      e = select_if(e, eqz(a), g_b);
      if (eqz(g_b)) {
        if (e) goto B_d;
        e = eqz(a[4]:ubyte);
      }
      if (eqz(g_b)) {
        if (e) goto B_f;
        e = a[4]:int;
        d = eqz(e);
        if (d) goto B_f;
      }
      if (eqz(g_b) | eqz(f)) {
        unicode_utf8_RuneCountInString(b, c);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        d = t0;
      }
      if (eqz(g_b)) {
        e = e - d;
        d = eqz(a[6]:ubyte);
      }
      if (eqz(g_b)) {
        if (d) goto B_j;
        d = a[0]:int;
      }
      if (eqz(g_b) | f == 1) {
        writeString(d, b, c);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | f == 2) {
        writePadding(a, e);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { return  }
      label B_j:
      if (eqz(g_b) | f == 3) {
        writePadding(a, e);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { a = a[0]:int }
      if (eqz(g_b) | f == 4) {
        writeString(a, b, c);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { return  }
      label B_f:
      if (eqz(g_b)) { a = a[0]:int }
      if (eqz(g_b) | f == 5) {
        writeString(a, b, c);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { return  }
      label B_d:
      if (eqz(g_b) | f == 6) {
        runtime_nilPanic();
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = b;
  g.c = c;
  g.d = e;
  g.e = d;
  g_c[0]:int = g_c[0]:int + 20;
}

function fmt0x64(a:int, b:long, c:int) { // func161
  var e:int;
  var d:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d[0]:int;
    b = d[1]:long@4;
    c = d[3]:int;
    d = d[4]:int;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = a[40]:ubyte;
          a[40]:byte = c & 1;
          c = a + 32;
        }
        if (eqz(g_b) | eqz(e)) {
          fmtInteger(c, b, 16, 0, 85885);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a[40]:byte = d & 1 }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e[0]:int = a;
  e[1]:long@4 = b;
  e[3]:int = c;
  e[4]:int = d;
  g_c[0]:int = g_c[0]:int + 20;
}

function fmtBool(a:int, b:int) { // func162
  var c:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          b = eqz(b & 1);
          a = a + 32;
        }
        if (select_if(g_b, 1, b)) {
          if (eqz(g_b) | eqz(c)) {
            padString(a, 85832, 4);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { return  }
        }
        if (eqz(g_b) | c == 1) {
          padString(a, 85836, 5);
          1;
          if (g_b == 1) goto B_b;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function fmtComplex(a:int, b:double, c:double, d:int) { // func163
  var e:int;
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    f = g_c[0]:int;
    a = f[0]:int;
    b = f[1]:double@4;
    c = f[3]:double@4;
    d = f[5]:int;
    f = f[6]:int;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) { f = a[39]:ubyte }
        if (eqz(g_b) | eqz(e)) {
          writeByte(a, 40);
          0;
          if (g_b == 1) goto B_b;
        }
        d = select_if(d, d >> 1, g_b);
        if (eqz(g_b) | e == 1) {
          fmtFloat(a, b, d);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a[39]:byte = 1 }
        if (eqz(g_b) | e == 2) {
          fmtFloat(a, c, d);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 3) {
          writeString(a, 85883, 2);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a[39]:byte = f & 1 }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e[0]:int = a;
  e[1]:double@4 = b;
  e[3]:double@4 = c;
  e[5]:int = d;
  e[6]:int = f;
  g_c[0]:int = g_c[0]:int + 28;
}

function fmtFloat(a:int, b:double, c:int) { // func164
  var f:int;
  var d:{ a:int, b:int, c:int }
  var k:int;
  var g:ubyte_ptr;
  var l:long;
  var h:int;
  var e:int;
  var m:long;
  var j:int;
  var t:int;
  var p:long;
  var v:ubyte_ptr;
  var n:int;
  var s:long;
  var o:int;
  var q:int_ptr;
  var r:int;
  var x:long;
  var u:long;
  var w:long;
  var y:int;
  var aa:int;
  var z:int;
  var i:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 124;
    i = g_c[0]:int;
    a = i[0]:int;
    d = i[2]:int;
    e = i[3]:int;
    f = i[4]:int;
    g = i[5]:int;
    h = i[6]:int;
    j = i[7]:int;
    l = i[8]:long@4;
    m = i[10]:long@4;
    n = i[12]:int;
    o = i[13]:int;
    p = i[14]:long@4;
    q = i[16]:int;
    s = i[17]:long@4;
    u = i[19]:long@4;
    r = i[21]:int;
    t = i[22]:int;
    v = i[23]:int;
    w = i[24]:long@4;
    x = i[26]:long@4;
    y = i[28]:int;
    z = i[29]:int;
    aa = i[30]:int;
    c = i[1]:int;
  }
  i = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        k = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = stack_pointer - 304;
        stack_pointer = f;
        n = -1;
        if (a[37]:ubyte) { n = a[13]:int }
        d = c == 64;
      }
      if (eqz(g_b)) {
        if (eqz(d)) {
          d = c != 32;
          if (d) goto B_h;
          l = i64_extend_i32_u(i32_reinterpret_f32(f32_demote_f64(b)));
          d = 81432;
          o = 1;
          goto B_f;
        }
        l = i64_reinterpret_f64(b);
        d = 81444;
        o = 0;
        goto B_f;
        label B_h:
      }
      if (eqz(g_b) | eqz(k)) {
        runtime_panic(86192, 81664);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      if (eqz(g_b)) {
        p = 
          select_if(-1L, -1L << (m = i64_extend_i32_u(g = d.a)) ^ -1L, j = g > 63) &
          l;
        h = g + (e = d.b);
        t = h < 64 & (s = l >> i64_extend_i32_u(h)) != 0L;
        v = a + 56;
        h = select_if(-1, -1 << e ^ -1, e > 31);
        e = h & (q = select_if(0, i32_wrap_i64(l = l >> m), j));
        h = e != h;
      }
      c = 
        {
          if (eqz(g_b)) {
            if (h) goto B_t;
            e = select_if(select_if(81675, 81679, t), 81672, d = eqz(p));
            d = select_if(4, 3, d);
            c = f + 80;
          }
          if (eqz(g_b) | k == 1) {
            runtime_sliceAppend(c, v, e, 1, 68, d, 1);
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = f[22]:int;
            d = f[21]:int;
            f[20]:int;
            goto B_s;
          }
          label B_t:
          d = 
            {
              if (eqz(g_b)) {
                (f + 272)[0]:int = 0;
                (f + 264)[0]:long = 0L;
                f[32]:long = 0L;
                l = p | select_if(0L, select_if(m = 1L << m, 0L, e), j);
                d = d.c;
                h = d + select_if(e, 1, j = e > 1);
                e = n >= 0;
              }
              if (select_if(g_b, 1, e)) {
                if (eqz(g_b) | k == 2) {
                  runtime_alloc(32);
                  let t0 = 2;
                  if (g_b == 1) goto B_b;
                  e = t0;
                }
                if (eqz(g_b)) {
                  f[65]:long@4 = 137438953504L;
                  f[64]:int = e;
                  c = l != 0L;
                  if (eqz(c)) {
                    f[67]:long@4 = 0L;
                    goto B_z;
                  }
                  e = h - g;
                  c = e > 0;
                }
                if (eqz(g_b)) {
                  if (c) goto B_fa;
                  c = 0 - e;
                  j = c > i32_wrap_i64(p = ctz(l));
                  if (j) goto B_fa;
                  l = select_if(0L, m = l >> i64_extend_i32_u(c), c = c > 63);
                  d = f + 256;
                }
                if (eqz(g_b) | k == 3) {
                  strconv_ryuDigits(d, l, l, l, 1, 0);
                  3;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) goto B_z;
                label B_fa:
                if (eqz(g_b)) {
                  m = l <<
                      (p = {
                             if (eqz(c = l == select_if(m, 0L, g <= 63))) {
                               d = -1;
                               1L;
                               goto B_ja;
                             }
                             d = select_if(-1, -2, c = e == d - g + 1);
                             select_if(1L, 2L, c);
                             label B_ja:
                           });
                  s = m - 1L;
                  p = m | p;
                  d = d + e;
                }
                if (eqz(g_b)) {
                  if (d) goto B_la;
                  c = f + 256;
                }
                if (eqz(g_b) | k == 4) {
                  strconv_ryuDigits(c, s, m, p, 1, 0);
                  4;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) goto B_z;
                label B_la:
                if (eqz(g_b)) {
                  j = eqz(o);
                  c = d * -78913 >> 18;
                  e = c + 1;
                }
                if (eqz(g_b)) {
                  if (j) goto B_pa;
                  j = f + 144;
                  g = i32_wrap_i64(s);
                }
                if (eqz(g_b) | k == 5) {
                  strconv_mult64bitPow10(j, g, d, e);
                  5;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  w = f[36]:uint;
                  h = i32_wrap_i64(m);
                  j = f[152]:ubyte;
                  g = f + 128;
                }
                if (eqz(g_b) | k == 6) {
                  strconv_mult64bitPow10(g, h, d, e);
                  6;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  h = f + 112;
                  u = f[32]:uint;
                  o = i32_wrap_i64(p);
                  g = f[136]:ubyte;
                }
                if (eqz(g_b) | k == 7) {
                  strconv_mult64bitPow10(h, o, d, e);
                  7;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  x = f[28]:uint;
                  h = f[120]:ubyte;
                  d = f[29]:int;
                  goto B_aa;
                }
                label B_pa:
                j = select_if(j, f + 192, g_b);
                if (eqz(g_b) | k == 8) {
                  strconv_mult128bitPow10(j, s, d, e);
                  8;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  w = f[24]:long;
                  j = f[204]:ubyte;
                  g = f + 176;
                }
                if (eqz(g_b) | k == 9) {
                  strconv_mult128bitPow10(g, m, d, e);
                  9;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  h = f + 160;
                  u = f[22]:long;
                  g = f[188]:ubyte;
                }
                if (eqz(g_b) | k == 10) {
                  strconv_mult128bitPow10(h, p, d, e);
                  10;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  h = f[172]:ubyte;
                  d = f[42]:int;
                  x = f[20]:long;
                  goto B_aa;
                }
              }
              if (eqz(g_b)) { j = select_if(n, 1, d = n > 1) }
              if (eqz(g_b) | k == 11) {
                runtime_alloc(24);
                let t1 = 11;
                if (g_b == 1) goto B_b;
                d = t1;
              }
              c = select_if(c, c != 32, g_b);
              if (eqz(g_b)) {
                if (eqz(c)) {
                  c = n < 10;
                  if (c) goto B_ib;
                }
                c = n > 18;
                if (c) goto B_fb;
                f[65]:long@4 = 103079215128L;
                f[64]:int = d;
                c = eqz(l);
                if (c) goto B_hb;
                e = h - g;
                if (l <= 18014398509481983L) {
                  e = e - i32_wrap_i64(m = clz(l)) + 9;
                  l = l << (m = m + 4294967287L & 4294967295L);
                }
                d = j + (e * -78913 - 4261303 >> 18);
                c = f + 224;
              }
              if (eqz(g_b) | k == 12) {
                strconv_mult128bitPow10(c, l, e, d);
                12;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = f[58]:int;
                c = e >= 0;
              }
              if (eqz(g_b | c)) {
                c = f[236]:ubyte;
                m = f[28]:long;
                if (d < -22) {
                  h = d < 56;
                  goto B_qb;
                }
                g = strconv_divisibleByPower5(l, 0 - d);
                h = g | d < 56;
                c = c | g;
                label B_qb:
                p = select_if(0L, m >> (l = i64_extend_i32_u(g = 0 - e)), g = g > 63);
                l = select_if(-1L, -1L << l ^ -1L, g) & m;
                g = 1;
                o = e ^ -1;
                m = i64_extend_i32_u(o);
                h = eqz(h & 1);
                if (eqz(h)) {
                  e = l > (m = select_if(1L << m, 0L, e >= -64));
                  if (e) goto B_ob;
                  e = l != m;
                  h = eqz((e | c) & 1);
                  if (h) goto B_ob;
                  g = 0;
                  if (e) goto B_ob;
                  e = (c ^ 1) & 1;
                  if (e) goto B_ob;
                  e = i32_wrap_i64(p);
                  g = e & 1;
                  goto B_ob;
                }
                e = e > -65;
                g = e & (m = l >> m) == 1L;
                goto B_ob;
              }
              if (eqz(g_b) | k == 13) {
                runtime_panic(86192, 81800);
                13;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_ob:
              if (eqz(g_b)) {
                e = f + 256;
                h = l != 0L;
                c = h | (c ^ 1);
              }
              if (eqz(g_b) | k == 14) {
                strconv_formatDecimal(e, p, c, g, j);
                14;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = f[68]:int;
                c - d;
                goto B_x;
              }
              label B_ib:
              if (eqz(g_b)) {
                f[65]:long@4 = 103079215128L;
                f[64]:int = d;
                d = i32_wrap_i64(l);
                if (d) goto B_gb;
              }
              label B_hb:
              if (eqz(g_b)) {
                f[67]:int = 0;
                0;
                goto B_x;
              }
              label B_gb:
              if (eqz(g_b)) {
                q = f + 208;
                e = clz(d) - 7;
                c = e > 25;
                o = d << (e = select_if(0, e, c));
                d = h - e + g;
                c = d;
                d = j + (d * -78913 - 1893913 >> 18);
              }
              if (eqz(g_b) | k == 15) {
                strconv_mult64bitPow10(q, o, c, d);
                15;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = f[53]:int;
                c = e >= 0;
              }
              if (eqz(g_b | c)) {
                c = f[216]:ubyte;
                g = f[52]:int;
                if (d < -10) {
                  r = d < 28;
                  goto B_fc;
                }
                m = i64_extend_i32_u(o);
                h = strconv_divisibleByPower5(m, 0 - d);
                r = h | d < 28;
                c = c | h;
                label B_fc:
                o = select_if(0, g >> (h = 0 - e), q = h > 31);
                g = g & select_if(-1, -1 << h ^ -1, q);
                q = e ^ -1;
                h = 1;
                r = eqz(r & 1);
                if (eqz(r)) {
                  q = g > (e = select_if(1 << q, 0, e >= -32));
                  if (q) goto B_dc;
                  e = e != g;
                  q = eqz((e | c) & 1);
                  if (q) goto B_dc;
                  h = 0;
                  if (e) goto B_dc;
                  e = (c ^ 1) & 1;
                  if (e) goto B_dc;
                  h = o & 1;
                  goto B_dc;
                }
                e = e > -33;
                h = e & g >> q == 1;
                goto B_dc;
              }
              if (eqz(g_b) | k == 16) {
                runtime_panic(86192, 81736);
                16;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_dc:
              if (eqz(g_b)) {
                e = f + 256;
                m = i64_extend_i32_u(o);
                g = g != 0;
                c = g | (c ^ 1);
              }
              if (eqz(g_b) | k == 17) {
                strconv_formatDecimal(e, m, c, h, j);
                17;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = f[68]:int;
                c - d;
                goto B_x;
              }
              label B_fb:
              if (eqz(g_b) | k == 18) {
                runtime_alloc(812);
                let t2 = 18;
                if (g_b == 1) goto B_b;
                c = t2;
              }
              if (eqz(g_b)) {
                (f + 296)[0]:long = 0L;
                (f + 288)[0]:long = 0L;
                f[35]:long = 0L;
                d = 0;
                loop L_pc {
                  if (l != 0L) {
                    e = d == 24;
                    if (e) goto B_r;
                    (d + f + 280)[0]:byte =
                      i32_wrap_i64((p = (m = l / 10L) * 246L) + l) + 48;
                    d = d + 1;
                    l = m;
                    continue L_pc;
                  }
                }
                e = d - 1;
                d = 0;
                loop L_rc {
                  c[200]:int = d;
                  o = e == -1;
                  if (o) goto B_sc;
                  if (d > 799) goto B_r;
                  (c + d)[0]:byte = (f + 280 + e)[0]:ubyte;
                  e = e - 1;
                  d = c[200]:int + 1;
                  continue L_rc;
                  label B_sc:
                }
                c[201]:int = d;
              }
              if (eqz(g_b) | k == 19) {
                strconv_trim(c);
                19;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { d = eqz(c[200]:int) }
              if (eqz(g_b)) {
                if (d) goto B_vc;
                d = h - g;
                e = d <= 0;
              }
              if (select_if(g_b, 1, e)) {
                loop L_yc {
                  if (eqz(g_b)) {
                    e = d < 29;
                    if (e) goto B_zc;
                  }
                  if (eqz(g_b) | k == 20) {
                    strconv_leftShift(c, 28);
                    20;
                    if (g_b == 1) goto B_b;
                  }
                  if (eqz(g_b)) {
                    d = d - 28;
                    continue L_yc;
                  }
                  label B_zc:
                }
                if (eqz(g_b) | k == 21) {
                  strconv_leftShift(c, d);
                  21;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) goto B_vc;
              }
              if (eqz(g_b)) {
                e = d >= 0;
                if (e) goto B_vc;
              }
              loop L_fd {
                if (eqz(g_b)) {
                  e = d > -29;
                  if (e) goto B_gd;
                }
                if (eqz(g_b) | k == 22) {
                  strconv_rightShift(c, 28);
                  22;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  d = d + 28;
                  continue L_fd;
                }
                label B_gd:
              }
              d = select_if(d, 0 - d, g_b);
              if (eqz(g_b) | k == 23) {
                strconv_rightShift(c, d);
                23;
                if (g_b == 1) goto B_b;
              }
              label B_vc:
              if (eqz(g_b)) { e = j >= (d = c[200]:int) }
              if (eqz(g_b)) {
                if (e) goto B_md;
                e = n > 799;
                if (e) goto B_r;
                g = c + j;
                e = g[0];
                h = e != 53;
              }
              if (eqz(g_b)) {
                if (h) goto B_rd;
                h = j + 1;
                if (h != d) goto B_rd;
                d = j;
                e = c[809]:ubyte;
                if (e) goto B_od;
                e = eqz((g - 1)[0]:ubyte & 1);
                if (e) goto B_qd;
                goto B_od;
                label B_rd:
                d = j;
                e = e > 52;
                if (e) goto B_od;
                label B_qd:
                c[200]:int = j;
              }
              if (eqz(g_b) | k == 24) {
                strconv_trim(c);
                24;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d = c[200]:int;
                goto B_md;
              }
              label B_od:
              if (eqz(g_b)) {
                loop L_wd {
                  if (eqz(d)) goto B_vd;
                  d = d - 1;
                  e = d + c;
                  g = e[0]:ubyte;
                  h = g > 56;
                  if (h) continue L_wd;
                }
                e[0]:byte = (g = g + 1);
                c[200]:int = (d = d + 1);
                goto B_md;
                label B_vd:
                c[200]:int = 1;
                c[0]:byte = 49;
                c[201]:int = (e = c[201]:int + 1);
                d = 1;
              }
              label B_md:
              if (eqz(g_b)) {
                g = c[201]:int;
                e = f + 240;
              }
              if (eqz(g_b) | k == 25) {
                strconv_formatDigits(e, v, 0, t, c, 800, 800, d, g, j);
                25;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                g = f[62]:int;
                d = f[61]:int;
                f[60]:int;
                goto B_s;
              }
              label B_aa:
              o = select_if(o, d >= 0, g_b);
              if (eqz(o | g_b)) {
                if (c + 25 > 23) {
                  h = h & (c = c < 55);
                  g = c & g;
                  o = c & j;
                  goto B_ce;
                }
                o = strconv_divisibleByPower5(s, c = c ^ -1) | j;
                g = strconv_divisibleByPower5(m, c) | g;
                h = strconv_divisibleByPower5(p, c) | h;
                label B_ce:
                let t3, t4 = 
                  select_if(0L, x >> (m = i64_extend_i32_u(c = 0 - d)), c = c > 63),
                  (h = h ^ 1) |
                  (r = (x & (p = select_if(-1L, -1L << m ^ -1L, c))) != 0L);
                s = select_if(0L, s = u >> m, c);
                x = select_if(0L, w >> m, c);
                m = p & u;
                p = p & w;
                w = t3 -
                    (i64_extend_i32_u(
                       (j = select_if(t4, eqz(l & 1L), (h = h & 1) | r)) ^ -1) &
                     1L);
                u = i64_extend_i32_u(d ^ -1);
                if (g & 1) {
                  c = 1;
                  u = select_if(1L << u, 0L, d >= -64);
                  d = u < m;
                  if (d) goto B_ae;
                  d = i32_wrap_i64(s);
                  c = d & m == u;
                  goto B_ae;
                }
                c = d > -65 & (d = m >> u == 1L);
                goto B_ae;
              }
              if (eqz(g_b) | k == 26) {
                runtime_panic(86192, 81800);
                26;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_ae:
              if (eqz(g_b)) {
                l = x + select_if(select_if(l & 1L, 1L, eqz(p)), 1L, o & 1);
                j = eqz(m) & g;
                d = f + 256;
              }
              if (eqz(g_b) | k == 27) {
                strconv_ryuDigits(d, l, s, w, j, c);
                27;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { f[68]:int = (c = f[68]:int - e) }
              label B_z:
              if (g_b) {
                d
              } else {
                j = f[67]:int;
                f[68]:int;
              }
              label B_x:
            }
          if (eqz(g_b)) {
            e = n >> 31;
            g = f[64]:int;
            h = f[65]:int;
            o = f[66]:int;
            q = f[67]:int;
            c = f + 96;
          }
          if (eqz(g_b) | k == 28) {
            strconv_formatDigits(c, v, e, t, g, h, o, q, d, j);
            28;
            if (g_b == 1) goto B_b;
          }
          if (g_b) {
            c
          } else {
            g = f[26]:int;
            d = f[25]:int;
            f[24]:int;
          }
          label B_s:
        }
      if (eqz(g_b)) {
        e = d < 2;
        if (e) goto B_r;
        br_table[B_re, B_qe, B_re, ..B_qe](c[1]:ubyte - 43)
        label B_re:
        e = g <= (d = d - 1);
        if (e) goto B_q;
        c = c + 1;
        g = g - 1;
        goto B_pe;
        label B_qe:
        c[0]:byte = 43;
        label B_pe:
        if (eqz(a[41]:ubyte)) goto B_se;
        e = eqz(d);
        if (e) goto B_r;
        if (c[0]:ubyte != 43) goto B_se;
        if (a[39]:ubyte) goto B_se;
        c[0]:byte = 32;
        label B_se:
        e = d < 2;
        if (e) goto B_r;
        q = a + 32;
        e = c[1]:ubyte;
        j = e == 78;
        if (eqz(eqz(j) & e != 73)) {
          n = a[42]:ubyte;
          a[42]:byte = 0;
          e = c + 1;
          if (e[0]:ubyte != 78) goto B_o;
          if (a[41]:ubyte) goto B_o;
          if (a[39]:ubyte) goto B_o;
          c = g <= (d = d - 1);
          if (c) goto B_q;
          g = g - 1;
          goto B_n;
        }
        e = eqz(a[40]:ubyte);
      }
      if (eqz(g_b)) {
        if (e) goto B_ue;
        r = 6;
        t = 0;
        j = select_if(6, n, e = n == -1);
      }
      if (eqz(g_b) | k == 29) {
        runtime_alloc(6);
        let t5 = 29;
        if (g_b == 1) goto B_b;
        o = t5;
      }
      if (eqz(g_b)) {
        h = -1;
        z = 0;
        aa = 0;
        e = 1;
      }
      loop L_ye {
        n = select_if(n, d <= e, g_b);
        if (eqz(g_b)) {
          if (n) goto B_af;
          n = d <= e;
          if (n) goto B_r;
          v = c + e;
          n = v[0];
          y = n == 112;
        }
        if (eqz(g_b)) {
          if (y) goto B_ff;
          y = n == 69;
          if (y) goto B_df;
          y = n == 80;
          if (y) goto B_ff;
          y = n == 101;
          if (y) goto B_df;
          v = n != 46;
          if (v) goto B_cf;
          z = 1;
          goto B_ze;
          label B_ff:
          n = d > g;
          if (n) goto B_q;
          d = d + h;
        }
        if (eqz(g_b) | k == 30) {
          runtime_sliceAppend(f, o, v, t, r, d, 1);
          30;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          r = f[2]:int;
          t = f[1]:int;
          o = f[0]:int;
          d = e;
          goto B_ze;
        }
        label B_df:
        if (eqz(g_b)) {
          n = d > g;
          if (n) goto B_q;
          n = f + 16;
          d = d + h;
        }
        if (eqz(g_b) | k == 31) {
          runtime_sliceAppend(n, o, v, t, r, d, 1);
          31;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          r = f[6]:int;
          t = f[5]:int;
          o = f[4]:int;
          d = e;
          goto B_ze;
        }
        label B_cf:
        if (eqz(g_b)) {
          j = j - (n = (aa = aa | n != 48) & 1);
          goto B_ze;
        }
        label B_af:
        e = select_if(e, z, g_b);
        if (eqz(g_b)) {
          if (e) goto B_mf;
          if (d == 2) { j = j - (c[1]:ubyte == 48) }
          f[256]:byte = 46;
          h = f + 256;
          e = f - -64;
        }
        if (eqz(g_b) | k == 32) {
          runtime_sliceAppend(e, c, h, d, g, 1, 1);
          32;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[18]:int;
          d = f[17]:int;
          c = f[16]:int;
        }
        label B_mf:
        loop L_rf {
          if (eqz(g_b)) {
            e = j <= 0;
            if (e) goto B_sf;
            f[280]:byte = 48;
            h = f + 280;
            e = f + 32;
          }
          if (eqz(g_b) | k == 33) {
            runtime_sliceAppend(e, c, h, d, g, 1, 1);
            33;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            j = j - 1;
            g = f[10]:int;
            d = f[9]:int;
            c = f[8]:int;
            continue L_rf;
          }
          label B_sf:
        }
        e = select_if(e, f + 48, g_b);
        if (eqz(g_b) | k == 34) {
          runtime_sliceAppend(e, c, o, d, g, t, 1);
          34;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = f[14]:int;
          d = f[13]:int;
          c = f[12]:int;
          goto B_ue;
        }
        label B_ze:
        if (eqz(g_b)) {
          h = h - 1;
          e = e + 1;
          continue L_ye;
        }
      }
      label B_ue:
      if (eqz(g_b)) { e = a[39]:ubyte }
      if (eqz(g_b)) {
        if (e) goto B_ag;
        e = eqz(d);
        if (e) goto B_r;
        e = c[0]:ubyte != 43;
        if (e) goto B_ag;
        a = g <= (d = d - 1);
        if (a) goto B_q;
        a = c + 1;
        c = g - 1;
      }
      if (eqz(g_b) | k == 35) {
        pad(q, a, d, c);
        35;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_m;
      label B_ag:
      if (eqz(g_b)) {
        e = eqz(a[42]:ubyte);
        if (e) goto B_p;
        e = a[38]:ubyte;
        if (e) goto B_p;
        e = eqz(a[36]:ubyte);
        if (e) goto B_p;
        e = d >= a[12]:int;
        if (e) goto B_p;
        e = eqz(d);
        if (e) goto B_r;
        j = c[0]:ubyte;
        e = a[8]:int;
      }
      if (eqz(g_b) | k == 36) {
        writeByte(e, j);
        36;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { a = a[12]:int - d }
      if (eqz(g_b) | k == 37) {
        writePadding(q, a);
        37;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a = g <= (d = d - 1);
        if (a) goto B_q;
        c = c + 1;
        a = q[0];
      }
      if (eqz(g_b) | k == 38) {
        write_1(a, c, d);
        38;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_m;
      label B_r:
      if (eqz(g_b) | k == 39) {
        runtime_lookupPanic();
        39;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_q:
      if (eqz(g_b) | k == 40) {
        runtime_slicePanic();
        40;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_p:
      if (eqz(g_b) | k == 41) {
        pad(q, c, d, g);
        41;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_m;
      label B_o:
      e = select_if(e, c, g_b);
      label B_n:
      if (eqz(g_b) | k == 42) {
        pad(q, e, d, g);
        42;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { a[42]:byte = n & 1 }
      label B_m:
      if (eqz(g_b)) { stack_pointer = f + 304 }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = i;
  g_c[0]:int = g_c[0]:int + 4;
  i = g_c[0]:int;
  i[0]:int = a;
  i[1]:int = c;
  i[2]:int = d;
  i[3]:int = e;
  i[4]:int = f;
  i[5]:int = g;
  i[6]:int = h;
  i[7]:int = j;
  i[8]:long@4 = l;
  i[10]:long@4 = m;
  i[12]:int = n;
  i[13]:int = o;
  i[14]:long@4 = p;
  i[16]:int = q;
  i[17]:long@4 = s;
  i[19]:long@4 = u;
  i[21]:int = r;
  i[22]:int = t;
  i[23]:int = v;
  i[24]:long@4 = w;
  i[26]:long@4 = x;
  i[28]:int = y;
  i[29]:int = z;
  i[30]:int = aa;
  g_c[0]:int = g_c[0]:int + 124;
}

function fmtInteger_1(a:ubyte_ptr, b:long, c:int) { // func165
  var e:int;
  var d:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c[0]:int;
    b = c[1]:long@4;
    c = c[3]:int;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) { e = eqz(a[44]) }
        if (eqz(eqz(g_b) & (e | (c & 1)))) {
          if (eqz(g_b) | eqz(d)) {
            fmt0x64(a, b, 1);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { return  }
        }
        a = select_if(a, a + 32, g_b);
        if (eqz(g_b) | d == 1) {
          fmtInteger(a, b, 10, c, 85885);
          1;
          if (g_b == 1) goto B_b;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d[0]:int = a;
  d[1]:long@4 = b;
  d[3]:int = c;
  g_c[0]:int = g_c[0]:int + 16;
}

function fmtString(a:ubyte_ptr, b:int, c:int) { // func166
  var d:int_ptr;
  var g:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var h:int;
  var i:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    g = f.e;
    h = f.f;
    i = f.g;
    f = f.h;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer + -64;
          stack_pointer = d;
          h = a + 32;
          g = eqz(a[44]);
        }
        if (eqz(g_b)) {
          if (g) goto B_f;
          g = d + 56;
        }
        if (eqz(g_b) | eqz(e)) {
          truncateString(g, h, b, c);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = d[15];
          i = d[14];
          b = eqz(a[40]);
        }
        if (eqz(g_b)) {
          if (b) goto B_m;
          f = i;
          c = g;
        }
        loop L_o {
          if (eqz(g_b)) {
            b = c <= 0;
            if (b) goto B_k;
            b = d + 48;
          }
          if (eqz(g_b) | e == 1) {
            unicode_utf8_DecodeRuneInString(b, f, c);
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            if (c < (b = d[13])) goto B_l;
            var j:int = d[12];
            c = c - b;
            f = b + f;
            if (b >= 2) {
              b = j != 65279;
              if (b) continue L_o;
              goto B_m;
            }
            b = j == 65533;
            if (b) goto B_m;
            b = j != 9 & j < 32;
            if (b) goto B_m;
            b = j == 96;
            if (b) goto B_m;
            b = j != 127;
            if (b) continue L_o;
          }
        }
        label B_m:
        if (eqz(g_b)) {
          c = a + 56;
          a = eqz(a[39]);
          if (a) goto B_j;
          a = d + 16;
        }
        if (eqz(g_b) | e == 2) {
          strconv_appendQuotedWith(a, c, i, g, 1);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = d[5];
          c = d[6];
          a = d[4];
        }
        if (eqz(g_b) | e == 3) {
          pad(h, a, b, c);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_l:
        if (eqz(g_b) | e == 4) {
          runtime_slicePanic();
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_k:
        a = select_if(a, d + 8, g_b);
        if (eqz(g_b) | e == 5) {
          runtime_stringConcat(a, 85880, 1, i, g);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = d[3];
          a = d[2];
        }
        if (eqz(g_b) | e == 6) {
          runtime_stringConcat(d, a, b, 85880, 1);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = d[1];
          a = d[0];
        }
        if (eqz(g_b) | e == 7) {
          padString(h, a, b);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_j:
        a = select_if(a, d + 32, g_b);
        if (eqz(g_b) | e == 8) {
          strconv_appendQuotedWith(a, c, i, g, 0);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = d[9];
          c = d[10];
          a = d[8];
        }
        if (eqz(g_b) | e == 9) {
          pad(h, a, b, c);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_f:
        if (eqz(g_b) | e == 10) {
          fmtS(h, b, c);
          10;
          if (g_b == 1) goto B_b;
        }
        label B_e:
        if (eqz(g_b)) { stack_pointer = d - -64 }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = g;
  e.f = h;
  e.g = i;
  e.h = f;
  g_c[0]:int = g_c[0]:int + 32;
}

function handleMethods(a:int):int { // func167
  var b:int;
  var c:int;
  var d:int;
  var g:int;
  var i:int;
  var m:long;
  var k:long;
  var f:int;
  var j:int;
  var e:int;
  var l:int;
  var q:int;
  var p:int;
  var o:int;
  var n:int;
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 68;
    h = g_c[0]:int;
    a = h[0]:int;
    d = h[3]:int;
    e = h[4]:int;
    g = h[5]:int;
    f = h[6]:int;
    j = h[7]:int;
    k = h[8]:long@4;
    l = h[10]:int;
    m = h[11]:long@4;
    n = h[13]:int;
    o = h[14]:int;
    p = h[15]:int;
    q = h[16]:int;
    c = h[2]:int;
    b = h[1]:int;
  }
  h = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        b = stack_pointer - 528;
        stack_pointer = b;
        g = 0;
        c = a[127]:ubyte;
      }
      if (eqz(g_b)) {
        if (c) goto B_f;
        d = eqz(a[44]:ubyte);
        c = a[3]:int;
      }
      if (eqz(g_b)) {
        if (d) goto B_i;
        if (c != 86892 & c != 86688) goto B_f;
        b[113]:int = 8;
        b[112]:int = 85907;
        b[111]:int = 118;
        b[53]:long = 0L;
        b[108]:int = a;
        b[110]:int = (g = a[4]:int);
        b[109]:int = c;
        d = c != 86892;
        if (eqz(d)) {
          if (g) goto B_k;
          goto B_e;
        }
        if (c != 86688) goto B_e;
        label B_k:
        k = g[1]:long;
        m = g[0]:long;
        g = g[4]:int;
        c = eqz(g);
      }
      if (eqz(g_b | c)) {
        c = g;
        d = c != 89688;
        if (d) goto B_m;
      }
      if (eqz(g_b) | eqz(i)) {
        get(g);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        c = t0;
      }
      label B_m:
      if (eqz(g_b)) {
        k = select_if((m >> 30L & 8589934591L) + 59453308800L, k, m < 0L) -
            62135596800L;
        d = c == 87112;
      }
      if (eqz(g_b)) {
        if (d) goto B_q;
        if (eqz(c)) goto B_e;
        d = c[14]:int;
        f = eqz(d);
        if (f) goto B_s;
        f = c[5]:long > k;
        if (f) goto B_s;
        f = c[6]:long <= k;
        if (f) goto B_s;
        k = d[2]:int + k;
        goto B_q;
        label B_s:
        d = b + 392;
      }
      if (eqz(g_b) | i == 1) {
        lookup(d, c, k);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { k = b[100]:int + k }
      label B_q:
      if (eqz(g_b)) {
        date(b + 376, (k = k + 9223372028741760000L) / 86400L);
        f = b[96]:int;
        c = b[95]:int;
        e = b[94]:int;
        d = b + 360;
        clock(d, k);
        o = b[91]:int;
        p = b[90]:int;
        n = b[92]:int;
      }
      if (eqz(g_b) | i == 2) {
        runtime_alloc(70);
        let t1 = 2;
        if (g_b == 1) goto B_b;
        d = t1;
      }
      if (eqz(g_b)) {
        (d + 8)[0]:short@1 = (l = rodata_1[2174]:ushort@1);
        d[0]:long@1 = rodata_1[2166]:long@1;
        j = b + 344;
      }
      if (eqz(g_b) | i == 3) {
        time_appendInt(j, d, 10, 70, e, 0);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e = b[87]:int;
        j = b[86]:int;
        l = c - 1 > 11;
        d = b[88]:int;
      }
      if (eqz(g_b)) {
        if (l) goto B_aa;
        l = b + 312;
      }
      if (eqz(g_b) | i == 4) {
        runtime_sliceAppend(l, j, 68018, e, d, 7, 1);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b + 296;
        e = b[78]:int;
        c = c << 3;
        j = (c + 68188)[0]:int;
        l = b[79]:int;
        q = b[80]:int;
        c = (c + 68192)[0]:int;
      }
      if (eqz(g_b) | i == 5) {
        runtime_sliceAppend(d, e, j, l, q, c, 1);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c = b[76]:int;
        d = b[75]:int;
        e = b[74]:int;
        goto B_h;
      }
      label B_aa:
      l = select_if(l, b + 328, g_b);
      if (eqz(g_b) | i == 6) {
        time_appendInt(l, j, e, d, c, 0);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c = b[84]:int;
        d = b[83]:int;
        e = b[82]:int;
        goto B_h;
      }
      label B_i:
      if (eqz(g_b)) {
        d = a[4]:int;
        f = eqz(interface_Error_func_string_typeassert(c) & 1);
      }
      if (eqz(g_b)) {
        if (f) goto B_ka;
        b[121]:int = 5;
        b[120]:int = 85915;
        b[119]:int = 118;
        b[118]:int = d;
        b[117]:int = c;
        b[116]:int = a;
        b[115]:int = 0;
        g = b + 408;
      }
      if (eqz(g_b) | i == 7) {
        interface_Error_func_string_Error_invoke(g, d, c);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = b[103]:int;
        c = b[102]:int;
      }
      if (eqz(g_b) | i == 8) {
        fmtString(a, c, g);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a = b + 456;
        loop L_qa {
          c = eqz(a);
          if (c) goto B_ja;
          a = a[1]:int;
          continue L_qa;
        }
        unreachable;
      }
      label B_ka:
      if (eqz(g_b)) {
        f = eqz(interface_String_func_string_typeassert(c) & 1);
        if (f) goto B_f;
        b[129]:int = 6;
        b[128]:int = 85920;
        b[127]:int = 118;
        b[126]:int = d;
        b[125]:int = c;
        b[124]:int = a;
        b[123]:int = 0;
        g = b + 416;
      }
      if (eqz(g_b) | i == 9) {
        interface_String_func_string_String_invoke(g, d, c);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g = b[105]:int;
        c = b[104]:int;
      }
      if (eqz(g_b) | i == 10) {
        fmtString(a, c, g);
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a = b + 488;
        loop L_wa {
          c = eqz(a);
          if (c) goto B_ja;
          a = a[1]:int;
          continue L_wa;
        }
        unreachable;
      }
      label B_ja:
      if (eqz(g_b)) {
        g = 1;
        goto B_f;
      }
      label B_h:
      if (eqz(g_b)) {
        j = b + 280;
        a = a + 32;
      }
      if (eqz(g_b) | i == 11) {
        runtime_sliceAppend(j, e, 85969, d, c, 2, 1);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[70]:int;
        e = b[71]:int;
        j = b[72]:int;
        c = b + 264;
      }
      if (eqz(g_b) | i == 12) {
        time_appendInt(c, d, e, j, f, 0);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[66]:int;
        f = b[67]:int;
        e = b[68]:int;
        c = b + 248;
      }
      if (eqz(g_b) | i == 13) {
        runtime_sliceAppend(c, d, 85969, f, e, 2, 1);
        13;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[62]:int;
        f = b[63]:int;
        e = b[64]:int;
        c = b + 232;
      }
      if (eqz(g_b) | i == 14) {
        time_appendInt(c, d, f, e, p, 0);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[58]:int;
        f = b[59]:int;
        e = b[60]:int;
        c = b + 216;
      }
      if (eqz(g_b) | i == 15) {
        runtime_sliceAppend(c, d, 85969, f, e, 2, 1);
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[54]:int;
        f = b[55]:int;
        e = b[56]:int;
        c = b + 200;
      }
      if (eqz(g_b) | i == 16) {
        time_appendInt(c, d, f, e, o, 0);
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[50]:int;
        f = b[51]:int;
        e = b[52]:int;
        c = b + 184;
      }
      if (eqz(g_b) | i == 17) {
        runtime_sliceAppend(c, d, 85969, f, e, 2, 1);
        17;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[46]:int;
        f = b[47]:int;
        e = b[48]:int;
        c = b + 168;
      }
      if (eqz(g_b) | i == 18) {
        time_appendInt(c, d, f, e, n, 0);
        18;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[42]:int;
        f = b[43]:int;
        e = b[44]:int;
        c = b + 152;
      }
      if (eqz(g_b) | i == 19) {
        runtime_sliceAppend(c, d, 85969, f, e, 2, 1);
        19;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[38]:int;
        f = b[39]:int;
        e = b[40]:int;
        j = i32_wrap_i64(m) & 1073741823;
        c = b + 136;
      }
      if (eqz(g_b) | i == 20) {
        time_appendInt(c, d, f, e, j, 0);
        20;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[34]:int;
        f = b[35]:int;
        e = b[36]:int;
        c = b + 120;
      }
      if (eqz(g_b) | i == 21) {
        runtime_sliceAppend(c, d, 85969, f, e, 2, 1);
        21;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[31]:int;
        f = b[30]:int;
        e = eqz(g);
        c = b[32]:int;
      }
      c = {
            if (eqz(g_b)) {
              if (eqz(e)) {
                e = g != 87112;
                if (e) goto B_wb;
              }
              g = b + 32;
            }
            if (eqz(g_b) | i == 22) {
              runtime_sliceAppend(g, f, 68025, d, c, 8, 1);
              22;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              d = b[9]:int;
              f = b[8]:int;
              b[10]:int;
              goto B_vb;
            }
            label B_wb:
            e = select_if(e, g != 89688, g_b);
            if (eqz(g_b)) {
              if (e) goto B_bc;
              g = b + 48;
            }
            if (eqz(g_b) | i == 23) {
              runtime_sliceAppend(g, f, 68033, d, c, 10, 1);
              23;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              d = b[13]:int;
              f = b[12]:int;
              b[14]:int;
              goto B_vb;
            }
            label B_bc:
            e = select_if(e, b + 104, g_b);
            if (eqz(g_b) | i == 24) {
              runtime_sliceAppend(e, f, 68043, d, c, 14, 1);
              24;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              d = b[27]:int;
              f = b[26]:int;
              e = b + 96;
              j = g[0]:int;
              g = g[1]:int;
              c = b[28]:int;
            }
            if (eqz(g_b) | i == 25) {
              time_quote(e, j, g);
              25;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              j = b[25]:int;
              g = b + 80;
              e = b[24]:int;
            }
            if (eqz(g_b) | i == 26) {
              runtime_sliceAppend(g, f, e, d, c, j, 1);
              26;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              b[526]:byte = 41;
              g = b[20]:int;
              d = b + 526;
              f = b[21]:int;
              e = b[22]:int;
              c = b - -64;
            }
            if (eqz(g_b) | i == 27) {
              runtime_sliceAppend(c, g, d, f, e, 1, 1);
              27;
              if (g_b == 1) goto B_b;
            }
            if (g_b) {
              c
            } else {
              d = b[17]:int;
              f = b[16]:int;
              b[18]:int;
            }
            label B_vb:
          }
      if (eqz(g_b)) {
        b[527]:byte = 41;
        j = b + 527;
        g = 1;
        e = b + 16;
      }
      if (eqz(g_b) | i == 28) {
        runtime_sliceAppend(e, f, j, d, c, 1, 1);
        28;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[4]:int;
        f = b[5]:int;
        c = b + 8;
      }
      if (eqz(g_b) | i == 29) {
        runtime_stringFromBytes(c, d, f);
        29;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = b[3]:int;
        c = b[2]:int;
      }
      if (eqz(g_b) | i == 30) {
        fmtS(a, c, d);
        30;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a = b + 424;
        loop L_uc {
          if (eqz(a)) goto B_f;
          a = a[1]:int;
          continue L_uc;
        }
        unreachable;
      }
      label B_f:
      if (eqz(g_b)) {
        stack_pointer = b + 528;
        return g;
      }
      label B_e:
      if (eqz(g_b) | i == 31) {
        runtime_nilPanic();
        31;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = h;
  g_c[0]:int = g_c[0]:int + 4;
  h = g_c[0]:int;
  h[0]:int = a;
  h[1]:int = b;
  h[2]:int = c;
  h[3]:int = d;
  h[4]:int = e;
  h[5]:int = g;
  h[6]:int = f;
  h[7]:int = j;
  h[8]:long@4 = k;
  h[10]:int = l;
  h[11]:long@4 = m;
  h[13]:int = n;
  h[14]:int = o;
  h[15]:int = p;
  h[16]:int = q;
  g_c[0]:int = g_c[0]:int + 68;
  return 0;
}

function printArg(a:int, b:int, c:int) { // func168
  var j:long_ptr;
  var d:int_ptr;
  var f:int;
  var e:long;
  var h:int;
  var i:int;
  var k:int;
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    g = g_c[0]:int;
    a = g[0]:int;
    c = g[2]:int;
    d = g[3]:int;
    e = g[4]:long@4;
    h = g[6]:int;
    i = g[7]:int;
    j = g[8]:int;
    k = g[9]:int;
    b = g[1]:int;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        j = stack_pointer - 16;
        stack_pointer = j;
        a[5]:long@4 = 0L;
        a[4]:int = c;
        a[3]:int = b;
        d = a + 28;
        d[0] = 0;
      }
      if (eqz(g_b)) {
        if (b) goto B_f;
        a = a + 32;
      }
      if (eqz(g_b) | eqz(f)) {
        padString(a, 85959, 5);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_f:
      if (select_if(g_b, 1, d = select_if(d, b != 85552, g_b))) {
        if (eqz(g_b) | f == 1) {
          fmtBool(a, c);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      d = select_if(d, b != 86208, g_b);
      if (eqz(g_b)) {
        if (d) goto B_k;
        e = i64_extend_i32_s(c);
      }
      if (eqz(g_b) | f == 2) {
        fmtInteger_1(a, e, 1);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_k:
      if (eqz(g_b)) {
        e = i64_extend_i32_u(c);
        d = b != 67364;
      }
      if (eqz(g_b)) {
        if (d) goto B_o;
        e = i64_extend8_s(e);
      }
      if (eqz(g_b) | f == 3) {
        fmtInteger_1(a, e, 1);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_o:
      d = select_if(d, b != 67380, g_b);
      if (eqz(g_b)) {
        if (d) goto B_r;
        e = i64_extend16_s(e);
      }
      if (eqz(g_b) | f == 4) {
        fmtInteger_1(a, e, 1);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_r:
      d = select_if(d, b != 86176, g_b);
      if (eqz(g_b)) {
        if (d) goto B_u;
        e = i64_extend_i32_s(c);
      }
      if (eqz(g_b) | f == 5) {
        fmtInteger_1(a, e, 1);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_u:
      d = select_if(d, b != 68532, g_b);
      if (eqz(g_b)) {
        if (d) goto B_x;
        e = c[0]:long;
      }
      if (eqz(g_b) | f == 6) {
        fmtInteger_1(a, e, 1);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_x:
      if (select_if(g_b, 1, d = select_if(d, b != 67396, g_b))) {
        if (eqz(g_b) | f == 7) {
          fmtInteger_1(a, e, 0);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      d = select_if(d, b != 85100, g_b);
      if (eqz(g_b)) {
        if (d) goto B_ca;
        e = e & 255L;
      }
      if (eqz(g_b) | f == 8) {
        fmtInteger_1(a, e, 0);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ca:
      d = select_if(d, b != 67412, g_b);
      if (eqz(g_b)) {
        if (d) goto B_fa;
        e = e & 65535L;
      }
      if (eqz(g_b) | f == 9) {
        fmtInteger_1(a, e, 0);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_fa:
      if (select_if(g_b, 1, d = select_if(d, b != 68516, g_b))) {
        if (eqz(g_b) | f == 10) {
          fmtInteger_1(a, e, 0);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      d = select_if(d, b != 68600, g_b);
      if (eqz(g_b)) {
        if (d) goto B_ka;
        e = c[0]:long;
      }
      if (eqz(g_b) | f == 11) {
        fmtInteger_1(a, e, 0);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ka:
      if (select_if(g_b, 1, d = select_if(d, b != 68364, g_b))) {
        if (eqz(g_b) | f == 12) {
          fmtInteger_1(a, e, 0);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      d = select_if(d, b != 86192, g_b);
      if (eqz(g_b)) {
        if (d) goto B_pa;
        b = c[0]:int;
        c = c[1]:int;
      }
      if (eqz(g_b) | f == 13) {
        fmtString(a, b, c);
        13;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_pa:
      d = select_if(d, b != 85080, g_b);
      if (eqz(g_b)) {
        if (d) goto B_sa;
        d = c[1]:int;
        c = c[0]:int;
        b = eqz(a[44]:ubyte);
      }
      if (select_if(g_b, 1, b)) {
        if (eqz(g_b) | f == 14) {
          writeString(a, 85926, 6);
          14;
          if (g_b == 1) goto B_b;
        }
        if (select_if(g_b, 1, c)) {
          if (eqz(g_b) | f == 15) {
            writeString(a, 85964, 5);
            15;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_e;
        }
        if (eqz(g_b) | f == 16) {
          writeByte(a, 123);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h = select_if(d, 0, d > 0);
          b = 0;
        }
        loop L_bb {
          if (eqz(g_b)) {
            i = b == h;
            if (i) goto B_cb;
            if (b == d) goto B_ua;
            i = b - 1 > 2147483646;
            e = (b + c)[0]:ubyte;
          }
          if (select_if(select_if(g_b, 1, i), 0, eqz(g_b) | f == 17)) {
            writeString(a, 85969, 2);
            17;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | f == 18) {
            fmt0x64(a, e, 1);
            18;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = b + 1;
            continue L_bb;
          }
          label B_cb:
        }
        if (eqz(g_b) | f == 19) {
          writeByte(a, 125);
          19;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      if (eqz(g_b) | f == 20) {
        writeByte(a, 91);
        20;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        h = select_if(d, 0, d > 0);
        i = a + 32;
        b = 0;
      }
      loop L_kb {
        if (eqz(g_b)) {
          if (b == h) goto B_lb;
          if (b == d) goto B_ua;
          k = b - 1 > 2147483646;
          e = (b + c)[0]:ubyte;
        }
        if (eqz(k & eqz(g_b)) & (eqz(g_b) | f == 21)) {
          writeByte(a, 32);
          21;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | f == 22) {
          fmtInteger(i, e, 10, 0, 85885);
          22;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = b + 1;
          continue L_kb;
        }
        label B_lb:
      }
      if (eqz(g_b) | f == 23) {
        writeByte(a, 93);
        23;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ua:
      if (eqz(g_b) | f == 24) {
        runtime_lookupPanic();
        24;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_sa:
      d = select_if(d, b != 86592, g_b);
      if (eqz(g_b)) {
        if (d) goto B_tb;
        b = c[8]:ubyte;
        d = c[1]:int;
        c = c[0]:int;
        h = eqz(c);
      }
      if (eqz(g_b)) {
        if (h | (b & 14) != 2) goto B_vb;
        h = j + 8;
      }
      if (eqz(g_b) | f == 25) {
        Interface(h, c, d, b);
        25;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { a[3]:long@4 = j[1] }
      if (eqz(g_b) | f == 26) {
        handleMethods(a);
        let t0 = 26;
        if (g_b == 1) goto B_b;
        h = t0;
      }
      if (eqz(g_b) & (h & 1)) goto B_e;
      label B_vb:
      if (eqz(g_b) | f == 27) {
        printValue(a, c, d, b, 0);
        27;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_tb:
      if (eqz(g_b) | f == 28) {
        handleMethods(a);
        let t1 = 28;
        if (g_b == 1) goto B_b;
        d = t1;
      }
      if (eqz(g_b) & (d & 1)) goto B_e;
      if (eqz(g_b) | f == 29) {
        printValue(a, b, c, 2, 0);
        29;
        if (g_b == 1) goto B_b;
      }
      label B_e:
      if (eqz(g_b)) { stack_pointer = j + 16 }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g[0]:int = a;
  g[1]:int = b;
  g[2]:int = c;
  g[3]:int = d;
  g[4]:long@4 = e;
  g[6]:int = h;
  g[7]:int = i;
  g[8]:int = j;
  g[9]:int = k;
  g_c[0]:int = g_c[0]:int + 40;
}

function printValue(a:int, b:int, c:int, d:int, e:ubyte_ptr) { // func169
  var f:{ a:ubyte, b:ushort, c:int }
  var h:int;
  var g:int;
  var l:{ a:int, b:int, c:ubyte }
  var p:long;
  var q:double;
  var t:double;
  var j:int;
  var k:int;
  var n:int;
  var m:long_ptr@4;
  var o:int;
  var s:int;
  var u:long_ptr@4;
  var r:int;
  var i:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 88;
    i = g_c[0]:int;
    a = i[0]:int;
    c = i[2]:int;
    d = i[3]:int;
    e = i[4]:int;
    f = i[5]:int;
    h = i[6]:int;
    j = i[7]:int;
    k = i[8]:int;
    l = i[9]:int;
    m = i[10]:int;
    n = i[11]:int;
    o = i[12]:int;
    p = i[13]:long@4;
    q = i[15]:double@4;
    r = i[17]:int;
    s = i[18]:int;
    t = i[19]:double@4;
    u = i[21]:int;
    b = i[1]:int;
  }
  i = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = stack_pointer;
        h = f - 352;
        stack_pointer = h;
      }
      loop L_h {
        f = select_if(f, eqz(b), g_b);
        if (eqz(g_b)) {
          if (f) goto B_i;
          f = e <= 0;
          if (f) goto B_i;
          f = (d & 14) != 2;
          if (f) goto B_i;
          f = h + 320;
        }
        if (eqz(g_b) | eqz(g)) {
          Interface(f, b, c, d);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a[3]:long@4 = (p = h[40]:long) }
        if (eqz(g_b) | g == 1) {
          handleMethods(a);
          let t0 = 1;
          if (g_b == 1) goto B_b;
          f = t0;
        }
        if (eqz(g_b)) {
          f = f & 1;
          if (f) goto B_f;
        }
        label B_i:
        if (eqz(g_b)) {
          a[5]:int = b;
          a[3]:long@4 = 0L;
          a[6]:int = c;
          a[28]:byte = d;
          f = eqz(b);
        }
        if (eqz(g_b)) {
          if (f) goto B_ja;
          l = b & 3;
          if (l) goto B_v;
          f = b[0]:ubyte & 31;
          br_table[B_ja, B_ha, B_ga, B_ga, B_ga, B_ga, B_ga, B_fa, B_fa, B_fa, B_fa, B_fa, B_fa, B_ea, B_da, B_ca, B_ba, B_aa, B_u, B_u, B_p, B_v, B_q, B_q, B_u, B_z, B_y, ..B_w](
            f);
          label B_ja:
          if (e) goto B_x;
        }
        if (eqz(g_b) | g == 2) {
          writeString(a, 85932, 23);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_ha:
        if (eqz(g_b) | g == 3) {
          Bool(b, c, d);
          let t1 = 3;
          if (g_b == 1) goto B_b;
          b = t1;
        }
        if (eqz(g_b) | g == 4) {
          fmtBool(a, b);
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_ga:
        if (eqz(g_b) | g == 5) {
          Int(b, c, d);
          let t2 = 5;
          if (g_b == 1) goto B_b;
          p = t2;
        }
        if (eqz(g_b) | g == 6) {
          fmtInteger_1(a, p, 1);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_fa:
        if (eqz(g_b) | g == 7) {
          Uint(b, c, d);
          let t3 = 7;
          if (g_b == 1) goto B_b;
          p = t3;
        }
        if (eqz(g_b) | g == 8) {
          fmtInteger_1(a, p, 0);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_ea:
        if (eqz(g_b) | g == 9) {
          Float(b, c, d);
          let t4 = 9;
          if (g_b == 1) goto B_b;
          q = t4;
        }
        if (eqz(g_b) | g == 10) {
          fmtFloat(a, q, 32);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_da:
        if (eqz(g_b) | g == 11) {
          Float(b, c, d);
          let t5 = 11;
          if (g_b == 1) goto B_b;
          q = t5;
        }
        if (eqz(g_b) | g == 12) {
          fmtFloat(a, q, 64);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_ca:
        d = select_if(d, h + 8, g_b);
        if (eqz(g_b) | g == 13) {
          Complex(d, b, c);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          t = h[2]:double;
          q = h[1]:double;
        }
        if (eqz(g_b) | g == 14) {
          fmtComplex(a, q, t, 64);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_ba:
        d = select_if(d, h + 24, g_b);
        if (eqz(g_b) | g == 15) {
          Complex(d, b, c);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          t = h[4]:double;
          q = h[3]:double;
        }
        if (eqz(g_b) | g == 16) {
          fmtComplex(a, q, t, 128);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_aa:
        d = select_if(d, h + 40, g_b);
        if (eqz(g_b) | g == 17) {
          String_2(d, b, c);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[11]:int;
          b = h[10]:int;
        }
        if (eqz(g_b) | g == 18) {
          fmtString(a, b, c);
          18;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_z:
        if (eqz(g_b)) { f = eqz(a[44]:ubyte) }
        if (eqz(g_b)) {
          if (f) goto B_fb;
          f = h + 112;
        }
        if (eqz(g_b) | g == 19) {
          String(f, b);
          19;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j = h[29]:int;
          f = h[28]:int;
        }
        if (eqz(g_b) | g == 20) {
          writeString(a, f, j);
          20;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | g == 21) {
          IsNil(b, c, d);
          let t6 = 21;
          if (g_b == 1) goto B_b;
          f = t6;
        }
        if (select_if(g_b, 1, f = select_if(f, eqz(f & 1), g_b))) {
          if (eqz(g_b) | g == 22) {
            writeString(a, 85964, 5);
            22;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_f;
        }
        if (eqz(g_b) | g == 23) {
          writeByte(a, 123);
          23;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_g;
        label B_fb:
        if (eqz(g_b) | g == 24) {
          writeString(a, 85955, 4);
          24;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_g;
        label B_y:
        if (eqz(g_b)) { f = eqz(a[44]:ubyte) }
        if (eqz(g_b)) {
          if (f) goto B_qb;
          f = h + 192;
        }
        if (eqz(g_b) | g == 25) {
          String(f, b);
          25;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j = h[49]:int;
          f = h[48]:int;
        }
        if (eqz(g_b) | g == 26) {
          writeString(a, f, j);
          26;
          if (g_b == 1) goto B_b;
        }
        label B_qb:
        if (eqz(g_b) | g == 27) {
          writeByte(a, 123);
          27;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          n = e + 1;
          f = 0;
        }
        loop L_xb {
          if (eqz(g_b) | g == 28) {
            NumField(b);
            let t7 = 28;
            if (g_b == 1) goto B_b;
            e = t7;
          }
          e = select_if(e, e <= f, g_b);
          if (eqz(g_b)) {
            if (e) goto B_bc;
            e = eqz(f);
          }
          if (eqz(g_b)) {
            if (e) goto B_dc;
            e = eqz(a[44]:ubyte);
          }
          if (select_if(g_b, 1, e)) {
            if (eqz(g_b) | g == 29) {
              writeString(a, 85969, 2);
              29;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) goto B_dc;
          }
          if (eqz(g_b) | g == 30) {
            writeByte(a, 32);
            30;
            if (g_b == 1) goto B_b;
          }
          label B_dc:
          if (eqz(g_b)) {
            e = a[43]:ubyte;
            if (e) goto B_ac;
            e = a[44]:ubyte;
            if (e) goto B_ac;
            goto B_zb;
          }
          label B_bc:
          if (eqz(g_b) | g == 31) {
            writeByte(a, 125);
            31;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_f;
          label B_ac:
          e = select_if(e, h + 152, g_b);
          if (eqz(g_b) | g == 32) {
            rawField(e, b, f);
            32;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            e = h[39]:int;
            j = eqz(e);
            if (j) goto B_zb;
            j = h[38]:int;
          }
          if (eqz(g_b) | g == 33) {
            writeString(a, j, e);
            33;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | g == 34) {
            writeByte(a, 58);
            34;
            if (g_b == 1) goto B_b;
          }
          label B_zb:
          e = select_if(e, h + 136, g_b);
          if (eqz(g_b) | g == 35) {
            Field_1(e, b, c, d, f);
            35;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            l = h[144]:ubyte;
            e = h[34]:int;
            k = eqz(e);
            j = h[35]:int;
          }
          if (eqz(g_b)) {
            if (k) goto B_qc;
            k = e & 3;
            if (k) goto B_qc;
            k = (e[0] & 31) != 20;
            if (k) goto B_qc;
          }
          if (eqz(g_b) | g == 36) {
            IsNil(e, j, l);
            let t8 = 36;
            if (g_b == 1) goto B_b;
            k = t8;
          }
          if (eqz(g_b)) {
            k = k & 1;
            if (k) goto B_qc;
            k = h + 120;
          }
          if (eqz(g_b) | g == 37) {
            Elem_1(k, e, j, l);
            37;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            l = h[128]:ubyte;
            j = h[31]:int;
            e = h[30]:int;
          }
          label B_qc:
          if (eqz(g_b) | g == 38) {
            printValue(a, e, j, l, n);
            38;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            f = f + 1;
            continue L_xb;
          }
        }
        label B_x:
        if (eqz(g_b) | g == 39) {
          writeString(a, 85959, 5);
          39;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_w:
        if (eqz(g_b) | g == 40) {
          writeByte(a, 63);
          40;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | g == 41) {
          String(h, b);
          41;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[1]:int;
          b = h[0]:int;
        }
        if (eqz(g_b) | g == 42) {
          writeString(a, b, c);
          42;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | g == 43) {
          writeByte(a, 63);
          43;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_v:
        if (eqz(select_if(g_b, 1, e))) goto B_ed;
        if (eqz(g_b) | g == 44) {
          UnsafePointer(b, c, d);
          let t9 = 44;
          if (g_b == 1) goto B_b;
          e = t9;
        }
        if (eqz(g_b)) {
          e = eqz(e);
          if (e) goto B_ed;
          e = h + 304;
        }
        if (eqz(g_b) | g == 45) {
          Elem_1(e, b, c, d);
          45;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = h[76]:int;
          e = eqz(f);
          if (e) goto B_ed;
          e = f & 3;
          if (e) goto B_ed;
          e = f.a & 31;
          j = e > 26;
          if (j) goto B_ed;
          e = eqz(1 << e & 113246208);
          if (e) goto B_ed;
          d = h[312]:ubyte;
          c = h[77]:int;
        }
        if (eqz(g_b) | g == 46) {
          writeByte(a, 38);
          46;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e = 1;
          b = f;
          continue L_h;
        }
        label B_ed:
        if (eqz(g_b)) {
          if (l) goto B_t;
          e = b[0]:ubyte;
          f = e & 31;
        }
        label B_u:
        if (eqz(g_b)) {
          e = f > 25;
          if (e) goto B_s;
          e = eqz(1 << f & 57409536);
          if (e) goto B_s;
        }
        label B_t:
        if (eqz(g_b) | g == 47) {
          UnsafePointer(b, c, d);
          let t10 = 47;
          if (g_b == 1) goto B_b;
          d = t10;
        }
        if (eqz(g_b)) { c = eqz(a[44]:ubyte) }
        if (select_if(g_b, 1, c)) {
          if (eqz(g_b) | g == 48) {
            writeByte(a, 40);
            48;
            if (g_b == 1) goto B_b;
          }
          c = select_if(c, h + 296, g_b);
          if (eqz(g_b) | g == 49) {
            String(c, b);
            49;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c = h[75]:int;
            b = h[74]:int;
          }
          if (eqz(g_b) | g == 50) {
            writeString(a, b, c);
            50;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | g == 51) {
            writeString(a, 85902, 2);
            51;
            if (g_b == 1) goto B_b;
          }
          if (select_if(g_b, 1, d)) {
            if (eqz(g_b) | g == 52) {
              writeString(a, 85904, 3);
              52;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) goto B_r;
          }
          p = select_if(p, i64_extend_i32_u(d), g_b);
          if (eqz(g_b) | g == 53) {
            fmt0x64(a, p, 1);
            53;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_r;
        }
        if (eqz(g_b)) {
          if (d) goto B_yd;
          a = a + 32;
        }
        if (eqz(g_b) | g == 54) {
          padString(a, 85959, 5);
          54;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_yd:
        if (eqz(g_b)) {
          p = i64_extend_i32_u(d);
          b = a[40]:ubyte ^ 1;
        }
        if (eqz(g_b) | g == 55) {
          fmt0x64(a, p, b);
          55;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_s:
        if (eqz(g_b)) { a[127]:byte = 1 }
        if (eqz(g_b) | g == 56) {
          writeString(a, 85881, 2);
          56;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = a[0]:int;
          d = a[1]:int;
          e = a[2]:int;
          b = h + 280;
        }
        if (eqz(g_b) | g == 57) {
          unicode_utf8_AppendRune(b, c, d, e, 118);
          57;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = h[72]:int;
          a[0]:long@4 = (p = h[35]:long);
          a[2]:int = b;
        }
        if (eqz(g_b) | g == 58) {
          writeByte(a, 40);
          58;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = a[3]:int;
          c = eqz(b);
        }
        if (eqz(g_b)) {
          if (c) goto B_le;
          c = h + 272;
        }
        if (eqz(g_b) | g == 59) {
          String(c, b);
          59;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[69]:int;
          b = h[68]:int;
        }
        if (eqz(g_b) | g == 60) {
          writeString(a, b, c);
          60;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | g == 61) {
          writeByte(a, 61);
          61;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = a[4]:int;
          b = a[3]:int;
        }
        if (eqz(g_b) | g == 62) {
          printArg(a, b, c);
          62;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_ke;
        label B_le:
        if (eqz(g_b)) {
          b = a[5]:int;
          c = eqz(b);
        }
        if (eqz(g_b)) {
          if (c) goto B_ue;
          c = h + 264;
        }
        if (eqz(g_b) | g == 63) {
          String(c, b);
          63;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[67]:int;
          b = h[66]:int;
        }
        if (eqz(g_b) | g == 64) {
          writeString(a, b, c);
          64;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | g == 65) {
          writeByte(a, 61);
          65;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = a[6]:int;
          d = a[28]:ubyte;
          b = a[5]:int;
        }
        if (eqz(g_b) | g == 66) {
          printValue(a, b, c, d, 0);
          66;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_ke;
        label B_ue:
        if (eqz(g_b) | g == 67) {
          writeString(a, 85959, 5);
          67;
          if (g_b == 1) goto B_b;
        }
        label B_ke:
        if (eqz(g_b) | g == 68) {
          writeByte(a, 41);
          68;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a[127]:byte = 0;
          goto B_f;
        }
        label B_r:
        if (eqz(g_b) | g == 69) {
          writeByte(a, 41);
          69;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_q:
        if (eqz(g_b)) { f = a[44]:ubyte }
        if (select_if(g_b, 1, f)) {
          if (eqz(g_b) | g == 70) {
            writeByte(a, 91);
            70;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            f = 0;
            e = e + 1;
          }
          loop L_kf {
            if (eqz(g_b) | g == 71) {
              Len_1(b, c, d);
              let t11 = 71;
              if (g_b == 1) goto B_b;
              j = t11;
            }
            if (eqz(g_b)) {
              j = f >= j;
              if (j) goto B_lf;
              j = eqz(f);
            }
            if (select_if(select_if(g_b, 1, j), 0, eqz(g_b) | g == 72)) {
              writeByte(a, 32);
              72;
              if (g_b == 1) goto B_b;
            }
            j = select_if(j, h + 248, g_b);
            if (eqz(g_b) | g == 73) {
              Index_1(j, b, c, d, f);
              73;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              k = h[63]:int;
              n = h[256]:ubyte;
              j = h[62]:int;
            }
            if (eqz(g_b) | g == 74) {
              printValue(a, j, k, n, e);
              74;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              f = f + 1;
              continue L_kf;
            }
            label B_lf:
          }
          if (eqz(g_b) | g == 75) {
            writeByte(a, 93);
            75;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_f;
        }
        f = select_if(f, h + 240, g_b);
        if (eqz(g_b) | g == 76) {
          String(f, b);
          76;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j = h[61]:int;
          f = h[60]:int;
        }
        if (eqz(g_b) | g == 77) {
          writeString(a, f, j);
          77;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { f = (b[0]:ubyte & 31) != 22 }
        if (eqz(select_if(g_b, 1, f))) goto B_yf;
        if (eqz(g_b) | g == 78) {
          IsNil(b, c, d);
          let t12 = 78;
          if (g_b == 1) goto B_b;
          f = t12;
        }
        if (eqz(g_b)) {
          f = eqz(f & 1);
          if (f) goto B_yf;
        }
        if (eqz(g_b) | g == 79) {
          writeString(a, 85964, 5);
          79;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_yf:
        if (eqz(g_b) | g == 80) {
          writeByte(a, 123);
          80;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = 0;
          e = e + 1;
        }
        loop L_eg {
          if (eqz(g_b) | g == 81) {
            Len_1(b, c, d);
            let t13 = 81;
            if (g_b == 1) goto B_b;
            j = t13;
          }
          if (eqz(g_b)) {
            j = f >= j;
            if (j) goto B_fg;
            j = eqz(f);
          }
          if (select_if(select_if(g_b, 1, j), 0, eqz(g_b) | g == 82)) {
            writeString(a, 85969, 2);
            82;
            if (g_b == 1) goto B_b;
          }
          j = select_if(j, h + 224, g_b);
          if (eqz(g_b) | g == 83) {
            Index_1(j, b, c, d, f);
            83;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            k = h[57]:int;
            n = h[232]:ubyte;
            j = h[56]:int;
          }
          if (eqz(g_b) | g == 84) {
            printValue(a, j, k, n, e);
            84;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            f = f + 1;
            continue L_eg;
          }
          label B_fg:
        }
        if (eqz(g_b) | g == 85) {
          writeByte(a, 125);
          85;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_p:
        f = select_if(f, h + 208, g_b);
        if (eqz(g_b) | g == 86) {
          Elem_1(f, b, c, d);
          86;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = h[52]:int;
          c = eqz(f);
          if (eqz(c)) {
            d = h[216]:ubyte;
            c = h[53]:int;
            e = e + 1;
            b = f;
            continue L_h;
          }
        }
      }
      if (eqz(g_b)) { c = eqz(a[44]:ubyte) }
      if (eqz(g_b)) {
        if (c) goto B_sg;
        c = h + 200;
      }
      if (eqz(g_b) | g == 87) {
        String(c, b);
        87;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c = h[51]:int;
        b = h[50]:int;
      }
      if (eqz(g_b) | g == 88) {
        writeString(a, b, c);
        88;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | g == 89) {
        writeString(a, 85964, 5);
        89;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_sg:
      if (eqz(g_b) | g == 90) {
        writeString(a, 85959, 5);
        90;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_g:
      if (eqz(g_b)) {
        r = 0;
        l = 0;
        j = (b[0]:ubyte & 31) != 25;
        f = 0;
      }
      if (eqz(select_if(g_b, 1, j))) goto B_ah;
      if (eqz(g_b) | g == 91) {
        Len_1(b, c, d);
        let t14 = 91;
        if (g_b == 1) goto B_b;
        n = t14;
      }
      f = select_if(f, n > 178956970, g_b);
      if (eqz(g_b)) {
        if (f) goto B_gh;
        f = n * 24;
      }
      if (eqz(g_b) | g == 92) {
        runtime_alloc(f);
        let t15 = 92;
        if (g_b == 1) goto B_b;
        l = t15;
      }
      if (eqz(g_b) | g == 93) {
        runtime_alloc(44);
        let t16 = 93;
        if (g_b == 1) goto B_b;
        j = t16;
      }
      if (eqz(g_b)) {
        f = (b[0]:ubyte & 31) != 25;
        if (f) goto B_fh;
      }
      if (eqz(g_b) | g == 94) {
        key(b);
        let t17 = 94;
        if (g_b == 1) goto B_b;
        k = t17;
      }
      if (eqz(g_b)) {
        f = eqz(k);
        if (f) goto B_eh;
        m = k & 3;
        f = k[0]:ubyte;
      }
      if (eqz(g_b)) {
        if (m) goto B_nh;
        m = f & 31;
        o = m != 20;
      }
      if (eqz(g_b)) {
        if (o) goto B_ph;
        f = k;
      }
      loop L_rh {
        if (eqz(g_b) | g == 95) {
          isNamed(f);
          let t18 = 95;
          if (g_b == 1) goto B_b;
          m = t18;
        }
        if (eqz(g_b)) {
          m = m & 1;
          if (m) goto B_sh;
          m = 0;
          o = eqz(f);
          if (o) goto B_ch;
          o = f & 3;
          if (o) goto B_sh;
          o = (f.a & 31) - 20;
          br_table[B_vh, B_sh, B_ch, B_ch, B_ch, B_ch, B_sh, ..B_ch](o);
          label B_vh:
          f = f.c;
          continue L_rh;
        }
        label B_sh:
      }
      if (eqz(g_b)) {
        f = eqz(f.b);
        if (f) goto B_dh;
        f = k[0]:ubyte;
        m = f & 31;
      }
      label B_ph:
      if (eqz(g_b)) {
        k = m == 17;
        if (k) goto B_dh;
      }
      label B_nh:
      if (eqz(g_b)) {
        f = i32_extend8_s(f);
        m = f >= 0;
        goto B_ch;
      }
      label B_gh:
      if (eqz(g_b) | g == 96) {
        runtime_slicePanic();
        96;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_fh:
      if (eqz(g_b) | g == 97) {
        runtime_alloc(12);
        let t19 = 97;
        if (g_b == 1) goto B_b;
        a = t19;
      }
      if (eqz(g_b)) {
        b = b[0]:ubyte;
        a[1]:int = 8;
        a[0]:int = 66785;
        a[8]:byte = (b = b & 31);
      }
      if (eqz(g_b) | g == 98) {
        runtime_panic(86780, a);
        98;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_eh:
      if (eqz(g_b) | g == 99) {
        runtime_nilPanic();
        99;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_dh:
      m = select_if(m, 0, g_b);
      label B_ch:
      f = select_if(f, 0, g_b);
      if (eqz(g_b) | g == 100) {
        runtime_alloc(24);
        let t20 = 100;
        if (g_b == 1) goto B_b;
        k = t20;
      }
      if (eqz(g_b)) {
        j[10]:int = 0;
        j[0]:int = b;
        j[1]:int = c;
        j[8]:byte = d;
        j[3]:int = k;
        j[41]:byte = m;
        b = h + 328;
        m = b + 8;
      }
      loop L_ji {
        if (eqz(g_b)) {
          c = h + 104;
          b = j[0]:int;
        }
        if (eqz(g_b) | g == 101) {
          key(b);
          let t21 = 101;
          if (g_b == 1) goto B_b;
          d = t21;
        }
        if (eqz(g_b) | g == 102) {
          internal_reflectlite_New(c, d);
          102;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = h[26]:int;
          c = h[27]:int;
          j[24]:byte = 2;
          j[5]:int = c;
          j[4]:int = d;
          k = h + 96;
        }
        if (eqz(g_b) | g == 103) {
          elem(b);
          let t22 = 103;
          if (g_b == 1) goto B_b;
          b = t22;
        }
        if (eqz(g_b) | g == 104) {
          internal_reflectlite_New(k, b);
          104;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          p = h[12]:long;
          j[36]:byte = 2;
          j[7]:long@4 = p;
          b = j[1]:int;
          o = j[3]:int;
          k = j[5]:int;
          s = j[8]:int;
          b = if (j[8]:ubyte & 1) { b[0]:int } else { b }
        }
        if (eqz(g_b) | g == 105) {
          runtime_hashmapNext(b, o, k, s);
          let t23 = 105;
          if (g_b == 1) goto B_b;
          b = t23;
        }
        if (eqz(g_b)) { j[40]:byte = (b = b & 1) }
        if (eqz(g_b)) {
          if (b) goto B_vi;
          b = 0;
        }
        loop L_xi {
          if (eqz(g_b)) {
            c = f < (d = b + 20);
            if (c) goto B_ui;
          }
          if (eqz(g_b) | g == 106) {
            slices_insertionSortCmpFunc_internal_fmtsort_KeyValue(l, f, b, d);
            106;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = d;
            continue L_xi;
          }
        }
        label B_vi:
        if (eqz(g_b)) { b = eqz(j[41]:ubyte) }
        b = {
              if (eqz(g_b)) {
                if (eqz(b)) {
                  d = k[0]:int;
                  c = 2;
                  k[1]:int;
                  goto B_cj;
                }
                b = h + 80;
              }
              if (eqz(g_b) | g == 107) {
                Elem(b, d, c, 2);
                107;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                b
              } else {
                if (eqz(j[40]:ubyte)) goto B_e;
                c = h[88]:ubyte;
                d = h[20]:int;
                h[21]:int;
              }
              label B_cj:
            }
        if (eqz(g_b)) {
          o = j[7]:int;
          s = j[8]:int;
          u = j[36]:ubyte;
          k = h - -64;
        }
        if (eqz(g_b) | g == 108) {
          Elem(k, o, s, u);
          108;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = h[16]:int;
          o = h[17]:int;
          s = h[72]:ubyte;
          u = m + 8;
          u[0] = 0L;
          m[0] = 0L;
          h[83]:int = b;
          h[82]:int = d;
          h[348]:byte = s;
          h[86]:int = o;
          h[85]:int = k;
          h[336]:byte = c;
          c = h + 328;
          b = h + 48;
        }
        if (eqz(g_b) | g == 109) {
          runtime_sliceAppend(b, l, c, f, n, 1, 24);
          109;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          n = h[14]:int;
          f = h[13]:int;
          l = h[12]:int;
          continue L_ji;
        }
        label B_ui:
      }
      if (eqz(g_b) | g == 110) {
        slices_insertionSortCmpFunc_internal_fmtsort_KeyValue(l, f, b, f);
        110;
        if (g_b == 1) goto B_b;
      }
      j = select_if(j, 20, g_b);
      loop L_nj {
        if (eqz(g_b)) {
          b = f <= j;
          if (b) goto B_ah;
          n = j << 1;
          b = 0;
        }
        loop L_pj {
          if (eqz(g_b)) {
            c = b + j;
            k = f < (d = b + n);
            if (k) goto B_qj;
          }
          if (eqz(g_b) | g == 111) {
            slices_symMergeCmpFunc_internal_fmtsort_KeyValue(l, f, b, c, d);
            111;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = d;
            continue L_pj;
          }
          label B_qj:
        }
        if (eqz(g_b)) {
          j = n;
          d = c >= f;
          if (d) continue L_nj;
        }
        if (eqz(g_b) | g == 112) {
          slices_symMergeCmpFunc_internal_fmtsort_KeyValue(l, f, b, c, f);
          112;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) continue L_nj;
      }
      label B_ah:
      if (eqz(g_b)) {
        m = select_if(f, 0, f > 0);
        b = e + 1;
      }
      loop L_yj {
        if (eqz(g_b)) {
          if (m == r) goto B_zj;
          if (f == r) goto B_xj;
          d = (l + 20)[0]:ubyte;
          e = (l + 12)[0]:int;
          j = l.c;
          n = l.b;
          k = l.a;
          o = r - 1 > 2147483646;
          c = (l + 16)[0]:int;
        }
        if (eqz(g_b)) {
          if (o) goto B_bk;
          o = eqz(a[44]:ubyte);
        }
        if (select_if(g_b, 1, o)) {
          if (eqz(g_b) | g == 113) {
            writeString(a, 85969, 2);
            113;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_bk;
        }
        if (eqz(g_b) | g == 114) {
          writeByte(a, 32);
          114;
          if (g_b == 1) goto B_b;
        }
        label B_bk:
        if (eqz(g_b) | g == 115) {
          printValue(a, k, n, j, b);
          115;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | g == 116) {
          writeByte(a, 58);
          116;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | g == 117) {
          printValue(a, e, c, d, b);
          117;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = l + 24;
          r = r + 1;
          continue L_yj;
        }
        label B_zj:
      }
      if (select_if(g_b, 1, if (g_b) { b } else { eqz(a[44]:ubyte) })) {
        if (eqz(g_b) | g == 118) {
          writeByte(a, 125);
          118;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
      }
      if (eqz(g_b) | g == 119) {
        writeByte(a, 93);
        119;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_xj:
      if (eqz(g_b) | g == 120) {
        runtime_lookupPanic();
        120;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      if (eqz(g_b)) {
        stack_pointer = h + 352;
        return ;
      }
      label B_e:
      if (eqz(g_b) | g == 121) {
        runtime_panic(86192, 66848);
        121;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = i;
  g_c[0]:int = g_c[0]:int + 4;
  i = g_c[0]:int;
  i[0]:int = a;
  i[1]:int = b;
  i[2]:int = c;
  i[3]:int = d;
  i[4]:int = e;
  i[5]:int = f;
  i[6]:int = h;
  i[7]:int = j;
  i[8]:int = k;
  i[9]:int = l;
  i[10]:int = m;
  i[11]:int = n;
  i[12]:int = o;
  i[13]:long@4 = p;
  i[15]:double@4 = q;
  i[17]:int = r;
  i[18]:int = s;
  i[19]:double@4 = t;
  i[21]:int = u;
  g_c[0]:int = g_c[0]:int + 88;
}

function main_boring(a:int, b:int) { // func170
  var c:int;
  var f:int_ptr;
  var i:int;
  var h:int;
  var d:{ a:int, b:int }
  var g:int;
  var k:int;
  var j:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    i = e.g;
    j = e.h;
    k = e.i;
    b = e.b;
  }
  e = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        h = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer;
        f = c + -64;
        stack_pointer = f;
        i = 0;
      }
      loop L_g {
        if (eqz(g_b)) {
          c = i == 2001;
          if (c) goto B_h;
        }
        if (eqz(g_b) | eqz(h)) {
          runtime_alloc(8);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b)) {
          d.b = b;
          d.a = a;
          f[13] = i;
          f[12] = 86208;
          f[11] = d;
          f[10] = 86192;
          d = 89792[0]:int;
          c = d <= 0;
        }
        if (eqz(g_b)) {
          if (c) goto B_m;
          d = d - 1;
          if (d > 89796[0]:int) goto B_f;
          g = 89788[0]:int + (d << 3);
          c = g[1]:int;
          g = g[0]:int;
          89792[0]:int = d;
          d = g != 86740;
          if (d) goto B_e;
          if (c) goto B_l;
        }
        if (eqz(g_b) | h == 1) {
          runtime_nilPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_m:
        if (eqz(g_b) | h == 2) {
          runtime_alloc(144);
          let t1 = 2;
          if (g_b == 1) goto B_b;
          c = t1;
        }
        label B_l:
        if (eqz(g_b)) {
          c[128]:byte = 0;
          c[126]:short@1 = 0;
          c[12]:long@4 = 0L;
          c[36]:long@1 = 0L;
          g = c + 44;
          g[0]:byte = 0;
          c[8]:int = c;
          d = 0;
        }
        loop L_s {
          if (eqz(g_b)) {
            g = d == 16;
            if (g) goto B_t;
            g = f + 40 + d;
            j = (g + 4)[0]:int;
            k = d != 8;
            g = g[0]:int;
          }
          if (select_if(select_if(g_b, 1, k), 0, eqz(g_b) | h == 3)) {
            writeByte(c, 32);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | h == 4) {
            printArg(c, g, j);
            4;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d = d + 8;
            continue L_s;
          }
          label B_t:
        }
        if (eqz(g_b) | h == 5) {
          writeByte(c, 10);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = c[0]:int;
          j = c[1]:int;
          d = f + 24;
        }
        if (eqz(g_b) | h == 6) {
          Write_1(d, 87176, g, j);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[2]:int =
            if ((d = c[2]:int) >= 65537) {
              c[0]:int = 0;
              0;
            } else {
              d
            }
          c[1]:int = 0;
          if (c[35]:int >= 9) {
            c[35]:int = 0;
            c[33]:int = 0;
          }
          c[3]:long@4 = 0L;
          c[34]:int = 0;
          (c + 20)[0]:long@4 = 0L;
          (c + 28)[0]:int = 0;
          f[15] = c;
          f[14] = 86740;
          d = 89788[0]:int;
          g = f + 56;
          j = 89792[0]:int;
          k = 89796[0]:int;
          c = f + 8;
        }
        if (eqz(g_b) | h == 7) {
          runtime_sliceAppend(c, d, g, j, k, 1, 8);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          89788[0]:int = f[2];
          89792[0]:int = f[3];
          89796[0]:int = (c = f[4]);
          i = i + 1;
          continue L_g;
        }
        label B_h:
      }
      if (eqz(g_b)) {
        stack_pointer = f - -64;
        return ;
      }
      label B_f:
      if (eqz(g_b) | h == 8) {
        runtime_slicePanic();
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b) | h == 9) {
        runtime_runtimePanic(67137, 18);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  e.f = g;
  e.g = i;
  e.h = j;
  e.i = k;
  g_c[0]:int = g_c[0]:int + 36;
}

export function asyncify_start_unwind(a:int) { // func171
  g_b = 1;
  g_c = a;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_stop_unwind() { // func172
  g_b = 0;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_start_rewind(a:int) { // func173
  g_b = 2;
  g_c = a;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_stop_rewind() { // func174
  g_b = 0;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_get_state():int { // func175
  return g_b
}

