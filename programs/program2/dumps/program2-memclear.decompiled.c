export memory memory(initial: 2, max: 0);

global stack_pointer:int = 65536;
global g_b:int = 0;
global g_c:int = 0;

table T_a:funcref(min: 4, max: 4);

data rodata(offset: 65536) =
  "expand 32-byte k\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0\f0"
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
data rodata_1(offset: 65840) =
  "KeyNumFieldChanDir\00\00meta\000123456789abcefz\00\00\00lU\01\00\80\01"
  "\01\00\09\02\01\00reflectlite.ValueError\00\00Z\00\00\00\a4\01\01\00\09"
  "\02\01\00\0c\00\00\00\02\00\00\00\90S\01\00$\03\01\00\a0S\01\00-\02\01"
  "\00\d5\00\00\00\80\01\01\00fmt\00reflect\00errors\00os\00\09\04fmtFlag"
  "s\00io/fs\00\04\10Err\00\04\10LayoutElem\00\04\18ValueElem\00syscall\00"
  "\04\08Path\00\04\08Value\00internal/reflectlite\00time\00\04 Message\00"
  "\04\08Kind\00invalidboolintint8int16int32int64uintuint8uint16uint32uin"
  "t64uintptrfloat32float64complex64complex128stringunsafe.Pointerchanint"
  "erfaceptrslicearrayfuncmapstructkind\00z\00\00\00\5cU\01\00\00\03\01\00"
  "\09\02\01\00reflectlite.TypeError\00\00\00Z\00\00\00\1c\03\01\00\09\02"
  "\01\00\08\00\00\00\01\00\00\00\90S\01\00$\03\01\00\d5\00\00\00\00\03\01"
  "\00\04\00Method\00unimplemented: size of type-\03\01\00\1b\00\00\00cha"
  "n<- <-chan chan (chan [][]struct {}; }interface {}struct {reflect: fie"
  "ld index out of range\00\00\8d\03\01\00!\00\00\00reflect: cannot make "
  "*****T type\b8\03\01\00 \00\00\00reflect: call of reflect.Type. on inv"
  "alid typeBoolBytesComplexElemFieldFloatreflect: slice index out of ran"
  "ge\00\00\00,\04\01\00!\00\00\00reflect: string index out of range\00\00"
  "\00\00\00\00X\04\01\00\22\00\00\00IndexInt(reflect.Value).Interface: u"
  "nexported\00\00\00\90\04\01\00%\00\00\00IsNilLen< Value>UintUnsafePoin"
  "terreflect: value is not addressable\00\00\00\00\00\00\e1\04\01\00!\00"
  "\00\00MapRangereflect.MapIter.Value called on invalid iterator\18\05\01"
  "\000\00\00\00 on zero Valuereflect: call of  on  Value\00\00\00z\00\00"
  "\00,U\01\00\a0\05\01\00\b8\01\01\00errors.errorString\00\00Z\00\00\00\bc"
  "\05\01\00\b8\01\01\00\08\00\00\00\01\00\00\00\90S\01\00\c4\05\01\00\d5"
  "\00\00\00\a0\05\01\00\00\00s\00sync: unlock of unlocked Mutex\00\00\c8"
  "\05\01\00\1e\00\00\00stack overflowfree: invalid pointer\00\00\00\00\00"
  "\fe\05\01\00\15\00\00\00realloc: invalid pointer \06\01\00\18\00\00\00"
  "heapStart:        heapEnd:          total size:       metadata size:  "
  "  metadataStart:    # of blocks:      # of block states:Growing the he"
  "ap!!!out of memoryfound memory:Start ---->running collection cycle...<"
  "---- Endmark fromtostack popped, remaining stack:found reference to fr"
  "ee memory:at:marking block:gc stack overflowedfound unmarked pointerat"
  " addressheap:-#\c2\b7comparing un-comparable typetype assert failedpan"
  "ic: panic: runtime error: nil pointer dereferenceassignment to entry i"
  "n nil mapindex out of rangeslice out of rangeunsafe.Slice/String: len "
  "out of range. s000000000000000000000000000000000000000000000*Unregiste"
  "red unreachable\00\00\00\00\00\00\00\b6\08\01\00\0b\00\00\00  pause:  "
  "run:Hello WorldSchedulerMaindeadlocked: no event source\0d\00RawType\00"
  "\00\c3\00\00\00$\09\01\00\d5\00\00\00\1c\09\01\00\c4\00\00\004\09\01\00"
  "\d5\00\00\00,\09\01\00\c7\00\00\00D\09\01\00\d5\00\00\00<\09\01\00\c9\00"
  "\00\00T\09\01\00\d5\00\00\00L\09\01\00bad type in compare: file alread"
  "y existsfile does not existfile already closederrno \04\01\00\00\09\01"
  "\00\00\0e\04\00\00\10\04\00\00\12\04\00\00\14\01\00\00SundayTuesdayWed"
  "nesdayThursdayFridaySaturdayFebruaryMarchAprilMayJuneJulyAugustSeptemb"
  "erOctoberNovemberDecemberJanJanuaryMonMondayMST2006-070000-07:00:00-07"
  "00-07:00-07Z070000Z07:00:00Z0700Z07:00Z07: cannot parse  as parsing ti"
  "me \ef\bf\bdz\00\00\00\d4U\01\00\d0\0a\01\00\1e\02\01\00time.ParseErro"
  "r\00Z\00\00\00\0c\0b\01\00\1e\02\01\00(\00\00\00\05\00\00\00\90S\01\00"
  "\14\0b\01\00\90S\01\00\01\02\01\00\90S\01\00\d9\01\01\00\90S\01\00\e6\01"
  "\01\00\90S\01\00#\02\01\00\d5\00\00\00\d0\0a\01\00\04\00Layout\00\00\00"
  "wall\00\00\08ext\00\00\10loc\00\00\08zone\00\00\00name\00\00\08offset\00"
  "\00\0cisDST\00\00\14tx\00\00\00when\00\00\08index\00\00\09isstd\00\00\0a"
  "isutc\00\00 extend\00\00(cacheStart\00\000cacheEnd\00\008cacheZone\00t"
  "ime.Date(, time.time.UTCtime.Localtime.Location(2006-01-02 15:04:05.99"
  "9999999 -0700 MST m=PMAMpmam%!Month()UTC,M3.2.0,M11.1.0Local\00\c8\09\01"
  "\00\06\00\00\00D\0a\01\00\06\00\00\00\ce\09\01\00\07\00\00\00\d5\09\01"
  "\00\09\00\00\00\de\09\01\00\08\00\00\00\e6\09\01\00\06\00\00\00\ec\09\01"
  "\00\08\00\00\00:\0a\01\00\07\00\00\00\f4\09\01\00\08\00\00\00\fc\09\01"
  "\00\05\00\00\00\01\0a\01\00\05\00\00\00\06\0a\01\00\03\00\00\00\09\0a\01"
  "\00\04\00\00\00\0d\0a\01\00\04\00\00\00\11\0a\01\00\06\00\00\00\17\0a\01"
  "\00\09\00\00\00 \0a\01\00\07\00\00\00'\0a\01\00\08\00\00\00/\0a\01\00\08"
  "\00\00\00dalTLDpSugct?rwxrwxrwx : \04\00Op\00\00\00\da\00\00\00\f0\0c\01"
  "\003\02\01";
data rodata_2(offset: 68848) =
  "\d5\00\00\00\dc\0c\01\00/dev/stdout\00\cc\00\00\00\0c\0d\01\00\d5\00\00"
  "\00\04\0d\01\00z\00\00\00\84U\01\004\0d\01\00\cd\01\01\00fs.PathError\00"
  "\00\00\00Z\00\00\00`\0d\01\00\cd\01\01\00\18\00\00\00\03\00\00\00\90S\01"
  "\00\d5\0c\01\00\90S\01\00\fa\01\01\00XQ\01\00\d3\01\01\00\d5\00\00\004"
  "\0d\01\00\09\00file\00\00\00handle\00\00\08name\00\00\10dirinfo\00\00\00"
  "_\00\00\14appendMode\00/\00\ca\00\00\00\a4\0d\01\00\d5\00\00\00\9c\0d\01"
  "\00\c6\00\00\00\b4\0d\01\00\d5\00\00\00\ac\0d\01\00\da\00\00\00\e8\0d\01"
  "\00\1e\02\01\00\18\00\00\00\03\00\00\00@S\01\00\1d\0b\01\00\ac\0d\01\00"
  "$\0b\01\00\ccU\01\00*\0b\01\00\d5\00\00\00\bc\0d\01\00:\00\00\00\ccU\01"
  "\00\10\0e\01\00\1e\02\01\00time.Location\00\00\00\1a\00\00\00\5c\0e\01"
  "\00\1e\02\01\00@\00\00\00\07\00\00\00\90S\01\007\0b\01\00d\0e\01\000\0b"
  "\01\00\d0\0e\01\00O\0b\01\00\90S\01\00s\0b\01\00\ac\0d\01\00|\0b\01\00"
  "\ac\0d\01\00\89\0b\01\00\94\0e\01\00\94\0b\01\00\d5\00\00\00\10\0e\01\00"
  "\16\00\00\00p\0e\01\00x\0e\01\00\d5\00\00\00d\0e\01\00z\00\00\00\94\0e"
  "\01\00\9c\0e\01\00\1e\02\01\00time.zone\00\00\00\d5\00\00\00x\0e\01\00"
  "Z\00\00\00\c8\0e\01\00\1e\02\01\00\10\00\00\00\03\00\00\00\90S\01\007\0b"
  "\01\00\bcP\01\00>\0b\01\00`P\01\00G\0b\01\00\d5\00\00\00\9c\0e\01\00\16"
  "\00\00\00\dc\0e\01\00\e4\0e\01\00\d5\00\00\00\d0\0e\01\00\fa\00\00\00\04"
  "\0f\01\00\0c\0f\01\00\1e\02\01\00time.zoneTrans\00\00\d5\00\00\00\e4\0e"
  "\01\00\da\00\00\00@\0f\01\00\1e\02\01\00\10\00\00\00\04\00\00\00\ac\0d"
  "\01\00T\0b\01\00\9cN\01\00[\0b\01\00`P\01\00c\0b\01\00`P\01\00k\0b\01\00"
  "\d5\00\00\00\0c\0f\01\00write52512562531251562578125390625195312597656"
  "2548828125244140625122070312561035156253051757812515258789062576293945"
  "3125381469726562519073486328125953674316406254768371582031252384185791"
  "0156251192092895507812559604644775390625298023223876953125149011611938"
  "4765625745058059692382812537252902984619140625186264514923095703125931"
  "3225746154785156254656612873077392578125232830643653869628906251164153"
  "2182693481445312558207660913467407226562529103830456733703613281251455"
  "1915228366851806640625727595761418342590332031253637978807091712951660"
  "1562518189894035458564758300781259094947017729282379150390625454747350"
  "8864641189575195312522737367544323205947875976562511368683772161602973"
  "9379882812556843418860808014869689941406252842170943040400743484497070"
  "3125142108547152020037174224853515625710542735760100185871124267578125"
  "3552713678800500929355621337890625177635683940025046467781066894531258"
  "8817841970012523233890533447265625444089209850062616169452667236328125"
  "2220446049250313080847263336181640625111022302462515654042363166809082"
  "0312555511151231257827021181583404541015625277555756156289135105907917"
  "0227050781251387778780781445675529539585113525390625693889390390722837"
  "7647697925567626953125346944695195361418882384896278381347656251734723"
  "4759768070944119244813919067382812586736173798840354720596224069595336"
  "9140625\00\00\00\00\00\00\00S\e4`\cdi\c82\17\88\02\1c\08\a0\d5\8f\fa\b4"
  "\8e\5c B\bd\7f\0e\95\81\11\05\84\e5\99\9ca\b2s\a8\92\ac\1fR\fa\e1U\06\e5"
  "^\c0\c3\f9\9e\90R\b7\97\a7\e6xZ\ebG\9ev\b0\f4\5cc\9a\93\d2\be(\90\8b\18"
  "\f3\ec\22J\ee\983\fc\808\87\ee2t\ae\de/\a8\ab\dc)\bf?;\a1\06)\aa?\11Z\d6"
  ";\92\d6S\f4\ee\07\c5$\a4Y\ca\c7J\f8ee\1bf\b4X\95I\f6-\0d\f0\bcy]v\bf>\a2"
  "\7f\e1\ae\ba\dcsy\10,,\d8\f4So\ce\8a\df\99Z\e9i\e8K\8a\9b\1b\07y\94\05"
  "\c1\b6+\a0\d8\91\84\e2\del\82\e2H\97\f9Fq\a46\c8N\b6%\9b\16\08#\1b\1b\fd"
  "\b7\98\8dMDz\e2\e3\f7 \0e\e5\f5\f00\fer\7fx\b0j\8cm\8e5\a9Q^3-\bd\bdO\9f"
  "\96\5c\85\ef\08\b2\82\13\e65\80x,\ad#G\bc\b3f+\8b\de1\cc\af!P\cb;Lv\ac"
  "U0 \fb\16\8b=\bf\1b*$\beJ\df\93\17k<\e8\b9\dc\ad\0d\af\a24\adm\1d\d7x\dd"
  "\85Kb\e8S\d9h\ad\e5@\8cdr\86k\aa3o=q\d4\87\c2\18\1fQ\af\fd\0eh\06\95\00"
  "\cb\8c\8d\c9\a9\f2\def%\1b\bd\12\02H\ba\c0\fd\ef\f0;\d4WK`\f70\b6K\01m"
  "t\98\fe\95v\a5\84-^85\bd\a3\9eA\88\91>~;\d4\ce\a5\b9u\86\82\acL\06R\ea"
  "5\ce]J\89B\cf\93\09\94\d1\eb\efCs\b2\e1\a0z\ce\95\89\81\f8\0b\f9\c5\e6"
  "\eb\14\10\1f\1aI\19B\fb\eb\a1\f6Nww\e0&\1a\d4\a6`\9b\9f\12\faf\ca\b4\22"
  "U\95\98\b0 \89\d08\82G\97\b8\00\fd\b05U]_n\b4U\82c\b1\8c^s \9e\1d\83\aa"
  "4\f7\89!\ebb\bc\dd/6\90\a8\c5\e4#\d5\01u\ec\e9\a5{+\d5\bbC\b4\12\f7n6%"
  "!\c93\b2G-;eU\aa\b0k\9a\0a\84ni\bb\c0\9e\99\f8\89\be\ea\d4\9c\06\c1\0d"
  "%\caC\eap\06\c0v,n%\0aDH\f1(W^j\92\06\048\ca\dbdW\86*\cd\96\f2\ec\f5\04"
  "7\08\05\c6\bc\12>\ed'u\80\bc.h3\c6DJ\86\f7k\97\8d\e8q\92\a0\eb\1d!\e0\fb"
  "j\ee\b3z\a3~X1\87[D\93d)\d8\ba\05\ea`YL\9e\ae\fdhr\15\b8\bd3\8e)\87$\b9"
  "o\dfE\1a=\03\cf\1a\e6V\e0\f8y\d4\b6\d3\a5\abk0\06b\c1\d0\8fl\18w\98\89"
  "\a4H\8f\96\86\bc\87\ba\f1\c4\b3\87\de\94\fe\ab\cd\1a3<\a8\ab)).\b6\e0\14"
  "\0b\1d\7f\8b\c0\f0\9f%I\0b\ba\d9\dcq\8c\d9M\e4^\ae\f0\ec\07o\1b\8e(\10"
  "T\8e\afPa\9d\f6\d9,\e8\c9J\a2\b12\14\e9q\db\d2\5c\22:\08\1c1\ben\05\af"
  "\9f\ac1'\89\06\f4\aaH\0ac\bdm\ca\c6\9a\c7\17\fep\ab\08\b1\d5\da\cc\bb,"
  "\09}x\81\b9\9d=M\d6\a5\8e\c5\08`\f5\bb%N\eb\f0\93\82F\f0\85N\f2\f6\0a\b8"
  "\f2*\af!&\ed8#Xl\a7\e1\ae\b4\0df\af\f5\1a\aao(\07,nG\d1M\ed\90\c8\9f\8d"
  "\d9P\caEy\84\db\a4\cc\82\a0(\b5\ba\07\f1\0f\e5<\97\97e\12\ce\7f\a3\c8r"
  "b\a9I\edS\1e\0c}\fd\fe\96\c1_\ccz\0f\bb\13\9c\e8\e8%O\dc\bc\be\fc\b1w\ff"
  "\ac\e9T\8ca\91\b1w\b1\096\f7=\cf\aa\9f\17$j\ef\b9\f5\9d\d5\1d\8c\03u\0d"
  "\83\95\c7\1d\adDk(s\05K%oD\d2\d0\e3z\f92\ec\0aC\f9g\e3Nw\c5j\83b\ce\ec"
  "\9b?\a7\cd\93\f7A\9c\22\d5vE$\fb\01\e8\c2\0f\11\c1xuRCk\8a\d4V\edy\02\a2"
  "\f3\a9\aaxk\89\13\0a\83\d6DV4\8cAE\98S\d5V\c6k\98\cc#\0c\d6kA\ef\91V\be"
  "\a8\8a\ec\b7\86\be\bf,\8f\cb\c6\11k6\ec\ed\a9\d6\f32\14\d7\f7{9?\1c\eb"
  "\02\a2\b3\94S\cc\b0?\d9\cc\f5\da\07O\e3\a5\83\8a\e0\b9h\ff\9c\8f\0f@\b3"
  "\d1\c9\22\5c\8f$\adX\e8\a1\1f\c2\b9\09\08\10#\be\95\99\d96l7\91\8a\a72"
  "(\0c\0a\d4\ab-\fb\ff\8fDG\85\b5lQ?2\8f\0c\c9\16\f9\f9\ff\b3\15\99\e6\e2"
  "\e3\92g\7f\d9\a7=\ae;\fc\7f\90\ad\1f\d0\8d\9cwA\df\cf\11\cd\99J\fb\9f\f4"
  "\98'D\b1\83\d5\11\d7CV@@\1d\fa\c71\7f1\95\ddr%kf\ea5(HR\fc\1c\7f\ef>}\8a"
  "\cf\ee\05\00eC2\daf;\e4^\ab\8e\1c\ad\82j\07@>\d4\be\90@J\9d6V\b2c\d8\91"
  "\a2\04\e8\a6DwZhN\22\e2uO>\876\cb\05\a2\d0\15\15q\02\e2\aaZS\e3\0d\a9\03"
  ">\87\caD[Z\0d\83\9aU1(\5cQ\d3\c2\86\94\fe\0ayX\e8\91\80\d5\1e\99\d9\12"
  "\84r\a89\beM\97nb\b6\e0\8af\ff\8f\17\a5\8f\12\c8-!=\0a\fb\e3\98-@\ffs]"
  "\ce\99\0b\9d\bc4f\e6|\8e\7f\1c\88\7fh\fa\80\80N\c4\eb\c1\ff\1f\1cr\9f#"
  "j\9f\029\a1 b\b5f\b2\ff'\a3N\87\acDGC\87\c9\a8\bab\00\9f\ff\f1K\22\a9\d7"
  "\15\19\14\e9\fb\a9\b4=`\c3?wo\b5\c9\a6\ad\8f\acq\9d\d3!M8\b4\0fU\cb\22"
  "|\10\99\b3\17\ce\c4Hj`F\a1S*~+\9bT\7f\a0\9d\01\f6mB\fc\cbDt\da.\fb\e0\94"
  "O\84\02\c1\99\08S\fb\feU\11\91\fa9\19zc%C1\c0\ca'\ba~\abU5y\88\9fX\bc\ee"
  "\93=\f0\deX4/\8bU\c1K\b5c\b75u|&\96\16o\01\fb\ed\aa\b1\9e\a2<%\83\92\1b"
  "\b0\bb\dc\ca\c1y\a9\15^F\cb\8b\ee#w\22\9c\ea\c9\1e\19\ec\89\cd\fa\0b_\17"
  "uv\8a\95\a1\92{f\1fg\ec\80\f9\ce6]\12\14\ed\faI\b7\1a@\e7\80'\e1\b7\82"
  "\84\f4\16Y\a8y\1c\e5\10\88\90\b0\b8\ec\b2\d1\d2X\ae7\09\cc1\8f\15\aa\b4"
  "\dc\e6\a7\1f\86\07\ef\99\85\0b?\fe\b2\9a\d4\e1\93\e0\91\a7g\c9j\00g\ce"
  "\ce\bd\df\e0$m\5c,\bb\c8\e0\bdB`\00A\a1\d6\8b\18n\88s\f7\e9\faXmSx@\91"
  "I\cc\ae\9e\89jPu\a49\afHh\96\90\f5[\7f\da\03\96BR\c9\06\84m-\01^zy\99\8f"
  "\88\83;\d3\a6{\08\e5\c8x\81\f5\d8\d7\7f\b3\aad\0a\88\90\9aJ\1e\fb\d6\e1"
  "2\cf\cd_`\d5\7f\06U\9a\a0\ee\f2\5c&\cd\7f\a1\e0;\5c\85\1eH\ea\c0H\aa/\f4"
  "o\c0\df\c9\d8J\b3\a6&\da$\f1\da\94;\f1\8b\b0W\fc\8e\1d`\d0X\08\b7\d6\08"
  "=\c5vW\ce\b6]y\12<\82n\cad\0cK\8cvT\ed\81$\b5\17\17\cb\a2\09\fd}\cf]/\94"
  "\a9h\a2m\a2\dd\dc}\cbL|]C5;\f9\d3\02\0b\09\0b\15T]\fe\afm\1aJ\01\c5{\c4"
  "\e1\a6\e5&\8dT\fa\9e\1b\09\a1\9cA\b6\9a5\9a\10\9fp\b0\e9\b8\c6bK\c9\03"
  "\d2c\01\c3\c0\d4\c6\8c\1c$g\f8\1d\cf]Bc\de\e0y\f8D\fc\d7\91v@\9b\e4B\f5"
  "\12\fc\15Y\986V\fbM6\94\10\c2\9d\93\b2\17{[o>\c4+z\e1C\b9\94\f2B\9c\cf"
  "\ee,\99\05\a7Z[\ecl\ca\f3\9c\97S\83\83*x\ff\c6P1r'\08\bd0\84\bd(d$5V\bf"
  "\f8\a4\bdN1J\ec<\e5\ec\99\be6\e1\95w\1b\876\d1^\ae\13F\0f\94?n\84Y{U\e2"
  "(\84\85\f6\99\98\17\13\b9\cf\89\e5/\da\ea\1a3\e5&t\c0~\ddW\e7!v\ef]\c8"
  "\d2\f0?O\98H8o\ea\96\90\a9Skuz\07\ed\0fc\beZ\06\0b\a5\bc\b4\94(\c6\12Y"
  "I\e8\d3\fbm\f1\c7M\ce\eb\e1\5c\d9\bb\ab\d7-qd\bd\e4\f6\9c\f0`3\8d\b3\cf"
  "\aa\96My\8d\bd\ec\9d4\c4,9\80\b0\a0\83U\fc\a0\d7\f0\ecg\c5A\f5wG\a0\dc"
  "Dr\b5\9d\c4\86\16\f4`\1bI\f9\aa,\e4\89\d5\ce\22\c5u(\1c19b\9b\b7\d57]\ac"
  "\8b\82k6\932c}\c7:\82%\cb\85t\d7\971\03\02\9c\ff]\ae\bcdq\f7\9e\d3\a8\86"
  "\fc\fd\83\02\83\7f\f5\d9\eb\bdM\b5\86\08S\a8{\fd$\c3c\dfr\d0f-\a1b\a8\ca"
  "g\d2m\1e\f7Y\9e\cbGB`\bc\a4=\a9\de\80\83\08\e6t\f0\85\be\d9Rx\eb\0d\8d"
  "S\16a\a4\8b\1f\92l'.\90gVfQp\e8[y\cd\b6S\db\a3\d8\1c\ba\00\f6\df2Fq\d9"
  "k\80\a4(\d2\cc\0e\a4\e8\80\f3\97\bf\97\cd\cf\86\a0\cd\b2\06\80\12\cd\22"
  "a\f0}\af\fd\c0\83\a8\c8\81_\08 W\80kyl]\1b=\b1\a4\d2\fa\b0;\05t60\e3\cb"
  "c\1a1\c6\ee\a6\c3\9c\9c\8a\06\11D\fc\db\be\fc`\bdw\aa\90\f4\c3D-H\15U\fb"
  "\92\ee;\b9\ac\15\d5\b4\f1\f4J\1cM-\15\dd\1bu\c5\f3\8b-\05\11\17\99]c\a0"
  "xZ\d4b\d2\b6\f0\eexF\d5\5c\bf4|\c8\16q\89\fb\86\e4\ac*\17\98\0a4\ef\a0"
  "M=\ae\e65]\d4\0e\acz\0e\9f\86\80\95\09\a1\ccY`\83t\89\12W\19\d2F\a8\e0"
  "\baK\c9?p8\a4\d1+\d7\ac\9f\86X\d2\98\e9\cf\dd'F\a3\06c{\06\cc#Tw\83\ff"
  "\91B\d5\b1\17L\c8;\1a\08\bf,)Ud\7f\b6\93J\9e\1d_\ba\ca \ca\eewsj=\1f\e4"
  "\9c\ee\82r{\b4~T>\f5*\88b\86\93\8eC\aa#O\9aa\9e\e9\8d\b25*\fbg8\b2\d4\94"
  "\ec\e2\00\fa\05d1\1f\c3\f4\f9\81\c6\de\04\dd\d3\8d@\bc\83\de~\f3\f98<\11"
  "<\8bE\d4H\b1P\ab$\96^p8G\8b\15\0b\aeW\09\9b\dd$\d6\ad;v\8c\06\19\ee\da"
  "\8d\d9\d6\e5\80\0a\d7\a5L\e5\c9\17\a4\cf\d4\a8\f8\87L\1f!\cdL\cf\9f^\bc"
  "\1d\8d\03\0a\d3\f6\a9\1fgi\00 \c3Gv+ep\84\cc\87t\d4s\e0A\00\f4\d9\ec);"
  "?\c6\d2\df\d4\c8\84\90XR\00q\10h\f4\09\cfw\c7\17\0a\fb\a5\b4\eef@\8d\14"
  "\82q\cc\c2U\b9\9d\ccy\cf0U@H\d8L\f1\c6\bf\99\d5\93\e2\1f\ac\81|jPZ\0e\a0"
  "\ad\b8/\00\cb8\db'\17\a2\1c\85\e4\f0\11\08\d9\a6;\c0\fd\06\d2\f1\9c\ca"
  "c\a6\1dm\16J\8f\90J0\bd\88F.D\fd\fe\872\04N\8eY\9a.>v\15\ec\9cJ\9e\fd)"
  "?\85\e1\f1\ef@\ba\cd\d3\1a'D\dd\c5|\f4\8e\e6Y\ee+\d1(\c1\88\e10\95T\f7"
  "\ceX\190\f8t\bb\82\b9x\f5\8c>\dd\94\9a\01\af\1f<6Rj\e3\e7\d620\8e\14:\c1"
  "\c1\9a'\cb\c3\e6D\dc\a1\8c?\bc\b1\99\88\f1\b9\c0\f8^:\10\ab)\e5\b7\a7\15"
  "\0f`\f5\96\e7\f0\b6\f6H\d4\15t\de\a5\11\db\12\b8\b2\bc!\add4[I\1b\11V\0f"
  "\d6\91\17f\df\eb4\ec\be\00\d9\0d\b1\ca\95\c9%\bb\ce\9fk\93B\a7\ee@OQ]="
  "\fb;\efi\c2\87F\b8\12Q*\11\a3\a5\b4\0c\fa\0ak\04\b3)X\e6\abr\ba\ea\85\e7"
  "\f0G\dc\e6\c2\e2\0f\1a\f7\8fV\0fieg!\edY\93\a0s\db\93\e0\f4\b3,S\c3>\c1"
  "ih0\b8\88P\d2\b8\18\f2\e0\fb\13:\c7\18BA\1esUr\83sO\97\8c\fa\98\08\f9\9e"
  "\92\d1\e5\cf\eaNdP#\bd\af9\bfJ\b7F\f7E\df\83\a5b}$l\ac\db\83\b7\8e2\8c"
  "\ba\8bkr\a7]\ce\96\c3K\89de2?/\a9n\06O\11\f5\81|\b4\9e\ab\bd\fe\fe\0e{"
  "S\0a\c8\a2Ur\a2\9ba\86\d66__\e9,t\06\bd\85u\87E\01\fd\13\86\047\b7#8\11"
  "H,\e7R\e9\96A\fc\98\a7\c5\04\a5,\86\15Z\f7\a0\a7\a3\fcQ;\7f\d1\fb\22\e7"
  "\dbsM\98\9a\c4H\e6=\13\85\ef\82\ba\eb\e0\d2\d0`>\c1\f5\da_\0dXf\ab\a3\a8"
  "&\99\07\05\f9\8d1\b3\d1\b7\10\ee?\96\ccRp\7fIFw\f1\fd\1f\c6\e5\94\e9\cf"
  "\bb\ff3\a6\ef\ed\8b\ea\b6\fe\d3\9b\0f\fd\f1a\d5\9f\c0\8fk\e9.\a5d\fe\c8"
  "\82S|n\ba\ca\c7\b0s\c6\a3z\ce\fd={ch\1b\0ai\bd\f9N\08\5c\a6\0c\a1\be\06"
  "->!Q\a6a\16\9cb\0a\f3\cfOInH\b8\8di\e5\0f\fa\1b\c3\fa\cc\ef\c3\a3\db\89"
  "Z&\f1\c3\de\93\f8\e2\f3\1c\e0uZF)\96\f8\b7v:k\5c\dbm\98#X\13\f1\97\b3\bb"
  "\f6e\14\09\863R\89\be,.X\ed}\a0jt\7fY\8bg\c0\a6+\ee\dc\1cW\b4N\a4\c2\a8"
  "\ef\17\b7@8H\db\94\13\e4labM\f3\92\eb\dd\e4PF\1a\12\ba\17\1d\c8\f9\ba "
  "\b0wf\15\1e\e5\d7\a0\96\e8.\12\1d\dct\14\ce\0a`\cd2\ef\86$^\91\baV$\13"
  "\92\99\81\0d\b8\80\ff\aa\a8\ad\b5\b5il\ed\97\f6\ff\e1\10\e6`\bf\d5\12\19"
  "#\e3\c1c\f4\1e\fa?\8d\ca\8f\9c\97\c5\ab\ef\f5\8d\b2|\b1\a6\f8\8f0\bd\b3"
  "\83\fd\b6\96ks\b1\de\db]\d0\f6\b3|\ac\a0\e4\bcd|F\d0\ddk\a9:Bz\f0\cdk\e4"
  "\0e\f6\be\0d,\a2\8a\c6S\c9\d2\98l\c1\86\9d\92\b3.\11\b7J\ad\b7\a8{\07\bf"
  "\c7q\e8Dw`z\d5d\9d\d8rI\add\d7\1cG\11\8bJ|l\05_b\87\cf\9b\d8=\0d\e4\98"
  "\d5-]\9b\c7\c6\f6:\a9\c3\c2N\8d\10\1d\ffJy4\82yx\b4\89\d3\ba9QX*r\df\ce"
  "\cb`\f1K\cb\106\84(\88e\ee\b4N\97\c2\fe\b8\ed\1e\fe\94C\a52\ea\fe)b\22"
  "=s>'\a9\a6=z\94\ce_R?Z}5\06\08\87\b8)\88f\cc\1c\81\f7&\cf\b0\dc\c2\07\ca"
  "\a8&4*\80\ffc\a1\b5\f0\02\dd\93\b3\89\fcR0\c14`\ff\bc\c9\e2\acC\d4x \ac"
  "\bbg|\f1A8?,\fc\0dL\aa\84K\94K\d5\c0\ed6)\83\a7\9b\9d\11\df\d4e^y\9e\0a"
  "1\a9\84\f3c\91\02\c5\d5\16J\ff\b5\17FM}\d3e\f0\bc5C\f6EN\8e\bf\d1\ceKP"
  ".\a4?\16\96\01\ea\99\d6\e1q/\86\c2^\e49\8d\cf\9b\fb\81d\c0LZN\bb'sv]\88"
  "p\c3\82z\a2}\f0o\f8\10\d5\f8\07j:U&\ba\91\8c\85N\96\8b6U\0a\f7\89\04\89"
  "\ea\af(\b6\ef&\e2\bb.\84\ea\cct\acE+\e5\db\b2\a3\ab\b0\da\ea\9d\92\12\00"
  "\c9\8b\0b;o\c9OFk\ae\c8\92D7\17@\bbn\ce\09\cb\bb\e3\17\06\daz\b7\15\05"
  "\1d\10j\0aB\cc\bd\aa\dc\9d\87\90Y\e5-#\12J\82F\a9\9f\b6\ea\a9\c2T\faW\8f"
  "\f9\ab\96\dc\22\98\93GdeT\f3\e9\f8-\b3\f7V\bc\93+~xY\bd~)p$w\f9\dfZ\b6"
  "U<\dbN\ebW6\ef\19\c6v\ea\fb\8b\f1#k\0b\92\22\e6\ed\03k\a0w\14\e5\fa\ae"
  "\ed\ecE\8e6\ab_\e9\c4\85\88\95Y\9e\b9\da\14\b4\eb\18\02\cb\db\11\9bSu\fd"
  "\f7\02\b4\88\19\a1&\9f\c2\bdR\d6\81\a8\d2\fc\b5\03\e1\aa_I\f0F3m\e7K\a2"
  "R\07|\a3D\99\d5\db-V\0c@\a4po\a5\93\84-\e6\ca\7f\85R\b9k\0fP\cdL\cb\8e"
  "\b8\e5\b8\9f\bd\df\a6\a7\a7F\13\a4\00 ~\b2&\1f\a7\07\ad\97\d0\c8(\0c\8c"
  "f\00\d4\8e/xs\c8$\cc^\82\fa2\0f/\80\00\89r;V\90\fa-\7f\f6\a2\b9\ff\d2:"
  "\a0@+O\cak4y\f9\1e\b4\cb\a8\bf\87I\c8\10\f6\e2\bc\86\81\d7\b7&\a1\fe\c9"
  "\d7\f4-}\ca\d9\0d6\f4\b0\e62\b8$\9f\bb\0dry\1c=P\91C1]\a0?\e6\ed\c6*\91"
  "\ce\97cL\a4u\94}t\88\cf_\a9\f8\ba\1a\e1>\be\af\86\c9|\ceH\b5\e1\dbi\9b"
  "ha\99\ce\ad[\e8\fb\1b\02\9b\22\daRD\c2\c3\b9?B\99r\e2\fa\a2\c2A\ab\90g"
  "\d5\f2\1a\d4g\c9\9f\87\cd\dc\a5\19\09k\ba`\c5\97 \c9\c1\bb\87\e9\00T\0f"
  "`\cb\05\e9\b8\b6\bdh;\b2\aa\e9#\01)\138>G#g$\ed!e\af\0ar\b6\a0\f9\0b\e3"
  "\86\0cv\c06\94i>[\8d\0e\e4\08\f8\ce\9b\a8\8f\93pD\b9\04\0e\b20\12\1d\0b"
  "\b6\c2\c2\92s\b8\8c\95\e7\c2Ho^+\f2\c6\b1\b9\b9;H\f3w\bd\90\f3\1a\0b6\b6"
  "\ae8\1e(\a8J\1a\f0\d5\ec\b4\b0\e1\8d\c3c\da\c6%2R\dd l\0b(\e2\0e\ad8Z~"
  "H\9cW_S\8a\94#\07Y\8dQ\d8\c6\f0\9dZ\83-7\e8\acy\ecH\af\b0e\8e\f8lE1\e4"
  "\f8D\22\18\98'\1b\db\dc\ffX\1bd\cb\9e\8e\1bk\15\0f\bf\f8\f0\08\8a?/\22"
  "=~Fr\e2\c5\da\d2\ee6-\8b\ac\0f\bbj\cc\1d\d8\0e[w\91\87\aa\84\f8\ad\d7\e9"
  "\b4\c2\9f\12G\e9\98\ea\ba\94\eaR\bb\cc\86$b\b3G\d7\98#?\a5\e99\a5'\ea\7f"
  "\a8\ad:\a0\19\0d\7f\ec\8e\0ed\88\8e\b1\e4\9f\d2\ac$\040h\cfS\19\89>\15"
  "\f9\ee\ee\a3\83\d7-\05<B\c3\a8_+\8eZ\b7\aa\ea\8c\a4My\06\cb\12\f4\927\b6"
  "11eU%\b0\cd\d0\0b\e4\be\8b\d8\bb\e2\11\bf>_U\17\8e\80\c4\0e\9d\ae\ae\ce"
  "j[\d6n\0e\b7*\9d\b1\a0uRDZZ\82E\f2\8b\0a\d2du\04\de\c8\12g\d5\f0\f0\e2"
  "\d6\ee.\8d\06\be\92\85\15\fbk`\85\96\d6MFU=\18\c4\b6{s\ed\9c\86\b8&<L\e1"
  "\97\aaL\1eu\a4Z\d0(\c4\a8f0K\9f\d9=\d5\dfe\92Mq\043\f5)@\fe\8e\03\a8F\e5"
  "\ab\7f{\d0\c6\e2?\993\d0\bdr\04R\98\de\96_\9a\84x\db\8f\bf@Dm\8f\85f>\96"
  "|\f7\c0\a5V\d2s\ef\a8J\a4y\13\00\e7\dd\ad\9a\98'vc\a8\95R]\0dX\18\c0`U"
  "Y\c1~\b1S|\12\bb\a6\b4\10n\1e\f0\b8\aa\afq\de\9dh\1b\d7\e9\e8p\ca\04\13"
  "\96\b3\ca\0d\07\abb!q&\92\22\0d\fd\c5\97{`=\d1\c8U\bbi\0d\b0\b6jP|\b7}"
  "\9a\b8\8c\05;+*\c4\10\5c\e4B\b2\ad\92\8e`\f3w\e3\04[\9az\8a\b9\8e\d3\1e"
  "Y7\b28\f0U\1c\c6\f1@\19\edg\b2\88f/\c5\deFlk\a37.\91_\e8\01\df\15\a0=;"
  "K\ac##\c6\e2\bc\ba;1a\8b\1a\08\0d\0a^\97\ec\abw\1bl\a9\8a}9\ae!J\90\8c"
  "5\bd\e7\96U\22\c7S\ed\dc\c7\d9T.\dawA\d6P~uu\5cT\14\ea\1c\88\e9\b9\d0\d5"
  "\d1\0b\e5\dd\d2\92si\99$$\aad\e8DK\c6N^\95\87w\d0\c3\bf-\ad\d4>\11\0b\ef"
  ";\f1Z\bd\b4Jb\da\97<\ec\84\8e\d5\cd\ea\8a\ad\b1\eca\dd\fa\d0\bdK'\a6\f2"
  "J\81\a5\ed\18\deg\ba\949E\ad\1e\b1\cf\d7\cep\87\94\cf\ea\80\f4\fcCK,\b3"
  "\ce\81\8d\02M\a9y\83%\a11\fc\14^\f7_B\a20C\a0\13X\e4n\09>;\9a5\f5\f7\d2"
  "\ca\fcS\88\18n\9d\ca\8b\0d\ca\00\83\f2\b5\87\fd}4U\cfd\a2^wH~\e0\91\b7"
  "\d1t\9e\9d\81*\03\feJ6\95\da\9dXv%\06\12\c6\04\22\f5\83\bd\dd\83:Q\c5\ee"
  "\d3\ae\87\96\f7B5yr\96j\92\c4R;uD\cd\14\be\9a\93\82\17\0f<\05\b7u'\8a\92"
  "\95\00\9am\c18c\dd\12\8b\c6$S\b1,\f7\ba\80\00\c9\f1\03^\ca\eb\16\fc\f6"
  "\d3\ee{\datP\a0\1d\97\84\f5\bc\a6\1c\bb\f4\88\ea\1a\11\92d\08\e5\bc\e5"
  "2l\d0\e3\e91+\a5a\95\b6}J\1e\ec\cf\9fCb.2\ff:\07]\1d\92\8e\ee\92\93\c2"
  "\87\d4\fa\b9\fe\be\09I\b4\a462\aaw\b8\b3\a9\89yh\be.L[\e1M\c4\be\94\95"
  "\e6\10\0a\f6K\017\9d\0f\d9\ac\b0:\f7|\1d\90\94\8c\f3\9e\c1\84\84S\0f\d8"
  "\5c\095\dc$\b4\b9o\b0\06\f2\a5e(\13\0e\b4KB\13.\e1\d3E.D\b7\87?\f9\cb\88"
  "Po\09\cc\bc\8cH\d79\15\a5i\8f\f7\fe\aa$\cb\0b\ff\eb\af\1bM\88Z\0eDs\b5"
  "\be\d5\ed\bd\ce\fe\e6\db00\95\f8\88\0ah1\97\a5\b46A_p\89=|\ba6+\0d\c2\fd"
  "\fc\cea\84\11w\cc\abL\1bi\04v\902=\bcBz\e5\d5\94\bf\d6\0f\b1\c1\c2I\9a"
  "?\a6\b5il\af\05\bd7\86S\1dr3\dc\80\cf\0f#\84G\1bG\ac\c5\a7\a8\a4N@\13a"
  "\c3\d3+e\19\e2X\17\b7\d1\e9&1\08\ac\1cZd;\dfO\8d\97n\12\83\a3p=\0a\d7\a3"
  "p=\0a\d7\a3p=\0a\d7\a3\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc\cc"
  "";
data rodata_3(offset: 76351) = "\80";
data rodata_4(offset: 76367) = "\a0";
data rodata_5(offset: 76383) = "\c8";
data rodata_6(offset: 76399) = "\fa";
data rodata_7(offset: 76414) = "@\9c";
data rodata_8(offset: 76430) = "P\c3";
data rodata_9(offset: 76446) = "$\f4";
data rodata_10(offset: 76461) = "\80\96\98";
data rodata_11(offset: 76477) = " \bc\be";
data rodata_12(offset: 76493) = "(k\ee";
data rodata_13(offset: 76509) = "\f9\02\95";
data rodata_14(offset: 76524) = "@\b7C\ba";
data rodata_15(offset: 76540) = "\10\a5\d4\e8";
data rodata_16(offset: 76556) = "*\e7\84\91";
data rodata_17(offset: 76571) = "\80\f4 \e6\b5";
data rodata_18(offset: 76587) = "\a01\a9_\e3";
data rodata_19(offset: 76603) = "\04\bf\c9\1b\8e";
data rodata_20(offset: 76619) = "\c5.\bc\a2\b1";
data rodata_21(offset: 76634) = "@v:k\0b\de";
data rodata_22(offset: 76650) = "\e8\89\04#\c7\8a";
data rodata_23(offset: 76666) = "b\ac\c5\ebx\ad";
data rodata_24(offset: 76681) = "\80z\17\b7&\d7\d8";
data rodata_25(offset: 76697) = "\90\acn2x\86\87";
data rodata_26(offset: 76713) = "\b4W\0a?\16h\a9";
data rodata_27(offset: 76729) =
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
  "!\1d]e\a7\fb\a9\d1\d2\f2\95qKguDid\b4>\d1\01\00\00\00\00\00\00\00\0a\00"
  "\00\00\00\00\00\00d\00\00\00\00\00\00\00\e8\03\00\00\00\00\00\00\10'\00"
  "\00\00\00\00\00\a0\86\01\00\00\00\00\00@B\0f\00\00\00\00\00\80\96\98\00"
  "\00\00\00\00\00\e1\f5\05\00\00\00\00\00\ca\9a;\00\00\00\00\00\e4\0bT\02"
  "\00\00\00\00\e8vH\17\00\00\00\00\10\a5\d4\e8\00\00\00\00\a0rN\18\09\00"
  "\00\00@z\10\f3Z\00\00\00\80\c6\a4~\8d\03\00\00\00\c1o\f2\86#\00\00\00\8a"
  "]xEc\01\00\00d\a7\b3\b6\e0\0d\00\00\e8\89\04#\c7\8astrconv: illegal Ap"
  "pendFloat/FormatFloat bitSize\90@\01\000\00\00\00NaN-Inf+Inf0123456789"
  "ABCDEFryuFtoaFixed32 called with negative prec\00\00\00\00\00\e3@\01\00"
  "(\00\00\00ryuFtoaFixed32 called with prec > 9\00\00\00\00\00\18A\01\00"
  "#\00\00\00not enough significant bits after mult64bitPow10HA\01\000\00"
  "\00\00not enough significant bits after mult128bitPow10\00\00\00\00\00"
  "\00\00\80A\01\001\00\00\00mult64bitPow10: power of 10 is out of range\00"
  "\00\00\00\00\c0A\01\00+\00\00\00mult128bitPow10: power of 10 is out of"
  " range\00\00\00\00\f8A\01\00,\00\00\0000010203040506070809101112131415"
  "1617181920212223242526272829303132333435363738394041424344454647484950"
  "5152535455565758596061626364656667686970717273747576777879808182838485"
  "8687888990919293949596979899\5ca\5cb\5cf\5cn\5cr\5ct\5cv\5cx\5cu\5cU01"
  "23456789abcdef";
data rodata_28(offset: 82728) =
  "\01\00\00\00M\0f\01\00\01\00\00\00\01\00\00\00N\0f\01\00\02\00\00\00\01"
  "\00\00\00P\0f\01\00\03\00\00\00\02\00\00\00S\0f\01\00\03\00\00\00\02\00"
  "\00\00V\0f\01\00\04\00\00\00\02\00\00\00Z\0f\01\00\05\00\00\00\03\00\00"
  "\00_\0f\01\00\05\00\00\00\03\00\00\00d\0f\01\00\06\00\00\00\03\00\00\00"
  "j\0f\01\00\07\00\00\00\04\00\00\00q\0f\01\00\07\00\00\00\04\00\00\00x\0f"
  "\01\00\08\00\00\00\04\00\00\00\80\0f\01\00\09\00\00\00\04\00\00\00\89\0f"
  "\01\00\0a\00\00\00\05\00\00\00\93\0f\01\00\0a\00\00\00\05\00\00\00\9d\0f"
  "\01\00\0b\00\00\00\05\00\00\00\a8\0f\01\00\0c\00\00\00\06\00\00\00\b4\0f"
  "\01\00\0c\00\00\00\06\00\00\00\c0\0f\01\00\0d\00\00\00\06\00\00\00\cd\0f"
  "\01\00\0e\00\00\00\07\00\00\00\db\0f\01\00\0e\00\00\00\07\00\00\00\e9\0f"
  "\01\00\0f\00\00\00\07\00\00\00\f8\0f\01\00\10\00\00\00\07\00\00\00\08\10"
  "\01\00\11\00\00\00\08\00\00\00\19\10\01\00\11\00\00\00\08\00\00\00*\10"
  "\01\00\12\00\00\00\08\00\00\00<\10\01\00\13\00\00\00\09\00\00\00O\10\01"
  "\00\13\00\00\00\09\00\00\00b\10\01\00\14\00\00\00\09\00\00\00v\10\01\00"
  "\15\00\00\00\0a\00\00\00\8b\10\01\00\15\00\00\00\0a\00\00\00\a0\10\01\00"
  "\16\00\00\00\0a\00\00\00\b6\10\01\00\17\00\00\00\0a\00\00\00\cd\10\01\00"
  "\18\00\00\00\0b\00\00\00\e5\10\01\00\18\00\00\00\0b\00\00\00\fd\10\01\00"
  "\19\00\00\00\0b\00\00\00\16\11\01\00\1a\00\00\00\0c\00\00\000\11\01\00"
  "\1a\00\00\00\0c\00\00\00J\11\01\00\1b\00\00\00\0c\00\00\00e\11\01\00\1c"
  "\00\00\00\0d\00\00\00\81\11\01\00\1c\00\00\00\0d\00\00\00\9d\11\01\00\1d"
  "\00\00\00\0d\00\00\00\ba\11\01\00\1e\00\00\00\0d\00\00\00\d8\11\01\00\1f"
  "\00\00\00\0e\00\00\00\f7\11\01\00\1f\00\00\00\0e\00\00\00\16\12\01\00 "
  "\00\00\00\0e\00\00\006\12\01\00!\00\00\00\0f\00\00\00W\12\01\00!\00\00"
  "\00\0f\00\00\00x\12\01\00\22\00\00\00\0f\00\00\00\9a\12\01\00#\00\00\00"
  "\10\00\00\00\bd\12\01\00#\00\00\00\10\00\00\00\e0\12\01\00$\00\00\00\10"
  "\00\00\00\04\13\01\00%\00\00\00\10\00\00\00)\13\01\00&\00\00\00\11\00\00"
  "\00O\13\01\00&\00\00\00\11\00\00\00u\13\01\00'\00\00\00\11\00\00\00\9c"
  "\13\01\00(\00\00\00\12\00\00\00\c4\13\01\00(\00\00\00\12\00\00\00\ec\13"
  "\01\00)\00\00\00\12\00\00\00\15\14\01\00*\00\00\00\13\00\00\00?\14\01\00"
  "*\00\00\00\00\00\01\00M\00\01\00P\00\01\00]\00\01\00\80\00\01\00\fa\00"
  "\01\00\00\01\01\00\02\01\01\00\07\01\01\003\01\01\007\01\01\00\9c\01\01"
  "\00\a0\01\01\00\a0\01\01\00\d0\01\01\00\fd\01\01\00\80\02\01\00\9c\02\01"
  "\00\a0\02\01\00\d0\02\01\00\e0\02\01\00\fb\02\01\00\00\03\01\00#\03\01"
  "\00-\03\01\00J\03\01\00P\03\01\00z\03\01\00\80\03\01\00\c3\03\01\00\c8"
  "\03\01\00\d5\03\01\00\00\04\01\00\9d\04\01\00\a0\04\01\00\a9\04\01\00\b0"
  "\04\01\00\d3\04\01\00\d8\04\01\00\fb\04\01\00\00\05\01\00'\05\01\000\05"
  "\01\00c\05\01\00o\05\01\00\bc\05\01\00\00\06\01\006\07\01\00@\07\01\00"
  "U\07\01\00`\07\01\00g\07\01\00\80\07\01\00\ba\07\01\00\00\08\01\00\05\08"
  "\01\00\08\08\01\008\08\01\00<\08\01\00<\08\01\00?\08\01\00\9e\08\01\00"
  "\a7\08\01\00\af\08\01\00\e0\08\01\00\f5\08\01\00\fb\08\01\00\1b\09\01\00"
  "\1f\09\01\009\09\01\00?\09\01\00?\09\01\00\80\09\01\00\b7\09\01\00\bc\09"
  "\01\00\cf\09\01\00\d2\09\01\00\06\0a\01\00\0c\0a\01\005\0a\01\008\0a\01"
  "\00:\0a\01\00?\0a\01\00H\0a\01\00P\0a\01\00X\0a\01\00`\0a\01\00\9f\0a\01"
  "\00\c0\0a\01\00\e6\0a\01\00\eb\0a\01\00\f6\0a\01\00\00\0b\01\005\0b\01"
  "\009\0b\01\00U\0b\01\00X\0b\01\00r\0b\01\00x\0b\01\00\91\0b\01\00\99\0b"
  "\01\00\9c\0b\01\00\a9\0b\01\00\af\0b\01\00\00\0c\01\00H\0c\01\00\80\0c"
  "\01\00\b2\0c\01\00\c0\0c\01\00\f2\0c\01\00\fa\0c\01\00'\0d\01\000\0d\01"
  "\009\0d\01\00`\0e\01\00\ad\0e\01\00\b0\0e\01\00\b1\0e\01\00\fd\0e\01\00"
  "'\0f\01\000\0f\01\00Y\0f\01\00p\0f\01\00\89\0f\01\00\b0\0f\01\00\cb\0f"
  "\01\00\e0\0f\01\00\f6\0f\01\00\00\10\01\00M\10\01\00R\10\01\00u\10\01\00"
  "\7f\10\01\00\c2\10\01\00\d0\10\01\00\e8\10\01\00\f0\10\01\00\f9\10\01\00"
  "\00\11\01\00G\11\01\00P\11\01\00v\11\01\00\80\11\01\00\f4\11\01\00\00\12"
  "\01\00A\12\01\00\80\12\01\00\a9\12\01\00\b0\12\01\00\ea\12\01\00\f0\12"
  "\01\00\f9\12\01\00\00\13\01\00\0c\13\01\00\0f\13\01\00\10\13\01\00\13\13"
  "\01\00D\13\01\00G\13\01\00H\13\01\00K\13\01\00M\13\01\00P\13\01\00P\13"
  "\01\00W\13\01\00W\13\01\00]\13\01\00c\13\01\00f\13\01\00l\13\01\00p\13"
  "\01\00t\13\01\00\00\14\01\00a\14\01\00\80\14\01\00\c7\14\01\00\d0\14\01"
  "\00\d9\14\01\00\80\15\01\00\b5\15\01\00\b8\15\01\00\dd\15\01\00\00\16\01"
  "\00D\16\01\00P\16\01\00Y\16\01\00`\16\01\00l\16\01\00\80\16\01\00\b9\16"
  "\01\00\c0\16\01\00\c9\16\01\00\00\17\01\00\1a\17\01\00\1d\17\01\00+\17"
  "\01\000\17\01\00F\17\01\00\00\18\01\00;\18\01\00\a0\18\01\00\f2\18\01\00"
  "\ff\18\01\00\06\19\01\00\09\19\01\00\09\19\01\00\0c\19\01\008\19\01\00"
  ";\19\01\00F\19\01\00P\19\01\00Y\19\01\00\a0\19\01\00\a7\19\01\00\aa\19"
  "\01\00\d7\19\01\00\da\19\01\00\e4\19\01\00\00\1a\01\00G\1a\01\00P\1a\01"
  "\00\a2\1a\01\00\b0\1a\01\00\f8\1a\01\00\00\1b\01\00\09\1b\01\00\00\1c\01"
  "\00E\1c\01\00P\1c\01\00l\1c\01\00p\1c\01\00\8f\1c\01\00\92\1c\01\00\b6"
  "\1c\01\00\00\1d\01\006\1d\01\00:\1d\01\00G\1d\01\00P\1d\01\00Y\1d\01\00"
  "`\1d\01\00\98\1d\01\00\a0\1d\01\00\a9\1d\01\00\e0\1e\01\00\f8\1e\01\00"
  "\00\1f\01\00:\1f\01\00>\1f\01\00Y\1f\01\00\b0\1f\01\00\b0\1f\01\00\c0\1f"
  "\01\00\f1\1f\01\00\ff\1f\01\00\99#\01\00\00$\01\00t$\01\00\80$\01\00C%"
  "\01\00\90/\01\00\f2/\01\00\000\01\00/4\01\00@4\01\00U4\01\00\00D\01\00"
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
  "\ef\01\0e\00:\00\00\00DU\01\00\00N\01\00\ac\01\01\00fmt.pp\00\00\1a\00"
  "\00\00dN\01\00\ac\01\01\00\90\00\00\00\0a\00\00\00lN\01\00\bcO\01\00\b4"
  "N\01\00\acN\01\00\b0T\01\00\c4N\01\00`O\01\00XO\01\00`P\01\00\f8P\01\00"
  "`P\01\00\04Q\01\00`P\01\00\11Q\01\00`P\01\00\1dQ\01\00`P\01\00(Q\01\00"
  "DQ\01\004Q\01\00\d5\00\00\00\00N\01\006\00\00\004U\01\00\88N\01\00\ac\01"
  "\01\00fmt.buffer\00\00\16\00\00\00\94N\01\00\9cN\01\00\d5\00\00\00\88N"
  "\01\00\c8\00\00\00\a4N\01\00\d5\00\00\00\9cN\01\00\00\0carg\00\00\00T\00"
  "\00\00\bcN\01\00\d5\00\00\00\b4N\01\00\00\14value\00\0d\00Value\00Z\00"
  "\00\00\00O\01\00\09\02\01\00\0c\00\00\00\03\00\00\00TU\01\00\08O\01\00"
  "@O\01\008O\01\00\0cT\01\00PO\01\00\d5\00\00\00\d4N\01\00\00\00typecode"
  "\00\00\da\00\00\000O\01\00\09\02\01\00\01\00\00\00\01\00\00\00\9cN\01\00"
  "B\01\01\00\d5\00\00\00\14O\01\00\00\04value\00R\00\00\00HO\01\00\d5\00"
  "\00\00@O\01\00\00\08flags\00\00 fmt\00\00\00\fa\00\00\00<U\01\00xO\01\00"
  "\ac\01\01\00fmt.fmt\00\da\00\00\00\b4O\01\00\ac\01\01\00\5c\00\00\00\05"
  "\00\00\004U\01\00\bcO\01\00\c4O\01\00\c2\01\01\00\bcP\01\00\b5P\01\00\bc"
  "P\01\00\ccP\01\00\dcP\01\00\d3P\01\00\d5\00\00\00xO\01\00\00\00buf\00\00"
  "\00\fa\00\00\00\e4O\01\00\ecO\01\00\ac\01\01\00fmt.fmtFlags\00\00\00\00"
  "\d5\00\00\00\c4O\01\00\da\00\00\00HP\01\00\ac\01\01\00\09\00\00\00\09\00"
  "\00\00`P\01\00PP\01\00`P\01\00pP\01\00`P\01\00~P\01\00`P\01\00\86P\01\00"
  "`P\01\00\8dP\01\00`P\01\00\95P\01\00`P\01\00\9dP\01\00`P\01\00\a4P\01\00"
  "`P\01\00\acP\01\00\d5\00\00\00\ecO\01\00\00\00widPresent\00\00\00\00\c1"
  "\00\00\00hP\01\00\d5\00\00\00`P\01\00\00\01precPresent\00\00\02minus\00"
  "\00\03plus\00\00\04sharp\00\00\05space\00\00\06zero\00\00\07plusV\00\00"
  "\08sharpV\00\00\10wid\00\00\c2\00\00\00\c4P\01\00\d5\00\00\00\bcP\01\00"
  "\00\14prec\00\00\18intbuf\00\d7\00\00\00\f0P\01\00\9cN\01\00D\00\00\00"
  "\88N\01\00\d5\00\00\00\dcP\01\00\00|reordered\00\00}goodArgNum\00\00~p"
  "anicking\00\00\7ferroring\00\00\80\01wrapErrs\00\00\84\01wrappedErrs\00"
  "\00\16\00\00\00PQ\01\00\bcP\01\00\d5\00\00\00DQ\01\00t\00\01\00pQ\01\00"
  "xQ\01\003\02\01\00.error\00\00\d5\00\00\00XQ\01\00T\00\00\00\80Q\01\00"
  "\d5\00\00\00xQ\01\00truefalsefmt: unknown base; can't happen\91Q\01\00"
  "\1f\00\00\00`(BADINDEX)%!(BADWIDTH)%!(BADPREC)%!(NOVERB)%!(EXTRA i))(n"
  "il0123456789abcdefx0123456789ABCDEFXGoStringErrorString%!(MISSING)[]by"
  "te<invalid reflect.Value>map[<nil>(nil), \00\00\00z\00\00\00\9cU\01\00"
  "|R\01\00\bf\01\01\00os.file\00Z\00\00\00\b0R\01\00\bf\01\01\00\18\00\00"
  "\00\04\00\00\00\b8R\01\00o\0d\01\00\90S\01\00x\0d\01\00\94U\01\00\7f\0d"
  "\01\00`P\01\00\8d\0d\01\00\d5\00\00\00|R\01\00t\00\07\00\d8R\01\00\e0R"
  "\01\00\bf\01\01\00os.FileHandle\00\00\00\d5\00\00\00\b8R\01\00T\00\00\00"
  "\e8R\01\00\d5\00\00\00\e0R\01\00\fa\00\00\00\94U\01\00\0cS\01\00\bf\01"
  "\01\00os.dirInfo\00\00\da\00\00\00(S\01\00\bf\01\01\00\04\00\00\00\01\00"
  "\00\000S\01\00\89\0d\01\00\d5\00\00\00\0cS\01\00\c5\00\00\008S\01\00\d5"
  "\00\00\000S\01\00\cb\00\00\00HS\01\00\d5\00\00\00@S\01\00Alloc = %v Mi"
  "B\0aTotalAlloc = %v MiB\0aSys = %v MiB\0aBegin\00\00\00\80S\01\00\05\00"
  "\00\00Q\00\00\00\98S\01\00\d5\00\00\00\90S\01\00\e8\00\01\00LU\01\00\9c"
  "N\01\00\09\02\01\00reflectlite.Kind\00\00\00\00\fa\00\04\00TU\01\00\14"
  "O\01\00\09\02\01\00reflectlite.RawType\00z\00F\00dU\01\00\d4N\01\00\09"
  "\02\01\00reflectlite.Value\00\00\00\e8\00\00\00tU\01\00\9cN\01\00\09\02"
  "\01\00reflectlite.valueFlags\00\00\ea\00\05\00|U\01\00\9c\0d\01\00\cd\01"
  "\01\00fs.FileMode\00\fa\00\00\00\8cU\01\004V\01\00\bf\01\01\00os.File\00"
  "\ec\00\08\00\a4U\01\00\04\0d\01\00\bf\01\01\00os.unixFileHandle\00\00\00"
  "\fa\00\03\00\acU\01\00\dc\0c\01\00\bf\01\01\00os.unixFilesystem\00\00\00"
  "z\00J\00\b4U\01\00\18V\01\00\b0\01\01\00reflect.Value\00\00\00\fa\00\04"
  "\00\bcU\01\00\fcU\01\00\b0\01\01\00reflect.rawType\00\ec\00\04\00\c4U\01"
  "\00\04\0d\01\00\f2\01\01\00syscall.Errno\00\00\00\fa\00+\00\dcU\01\00\bc"
  "\0d\01\00\1e\02\01\00time.Time\00\00\00\d5\00\01\00|\05\01\00\d5\00\00"
  "\00lN\01\00\d5\00\00\00`O\01\00\d5\00\05\00\e8M\01\00\d5\00\01\00\a0S\01"
  "\00\d5\00\19\00\c4S\01\00\d5\00\01\00\d8\02\01\00\d5\00F\00\e8S\01\00\d5"
  "\00\01\00X\01\01\00\d5\00\00\00\0cT\01\00\d5\00\05\004T\01\00\d5\00\03"
  "\00\14\0d\01\00\d5\00\15\00PT\01\00\d5\00\00\00\f0R\01\00\d5\00\00\00d"
  "R\01\00\d5\00\08\00hT\01\00\d5\00\03\00\8cT\01\00\d5\00J\00\b0T\01\00\d5"
  "\00#\00\d0T\01\00\d5\00\04\00\f0T\01\00\d5\00\01\00\f0\0d\01\00\d5\00\01"
  "\00\b0\0a\01\00\d5\00/\00\10U\01\00\d5\00\19\00\fcU\01\00\d5\00F\00\18"
  "V\01\00\d5\00\00\004V\01\00\da\00\04\00\e4U\01\00\b0\01\01\00\01\00\00"
  "\00\01\00\00\00\c4S\01\00\11\09\01\00Z\00F\00\ecU\01\00\b0\01\01\00\0c"
  "\00\00\00\01\00\00\00\e8S\01\00\ccN\01\00\da\00\00\00\f4U\01\00\bf\01\01"
  "\00\04\00\00\00\01\00\00\00\9cU\01\00h\0d\01";
data data(offset: 87632) =
  "D\f8\5c\ff\f8^\01\00\00\00\00\00\dc_\01\00\c1\82\01\00\00\00\00\00\04\00"
  "\00\00\0c\00\00\00\01\00\00\00\00\00\00\00\02\00\00\00\00\00\00\00\03\00"
  "\00\00\f4`\01\00aQ\86A\00\00\00\00\04\00\00\00\08\00\00\00\01\00\00\00"
  "\00\00\00\00\02\00\00\00\00\00\00\00\03\00\00\00\00\00\00\00\0c\0c\01\00"
  "\03";
data data_1(offset: 87792) =
  "\9a\0d\01\00\01\00\00\00\8cT\01\00\00\00\00\00\04W\01\00hT\01\00\01\00"
  "\00\00\f8\0c\01\00\0b";
data data_2(offset: 87836) =
  "\17\00\00\00\08\00\00\00\81\ff\ff\ff4\00\00\00\0b\00\00\00\01\fc\ff\ff"
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
  "\be\fa\93\fb\00\00\1e\04\01\00\04\00\00\000\01\01\00\03\00\00\00\22\04"
  "\01\00\05\00\00\00\c5\04\01\00\03\00\00\003\01\01\00\08\00\00\00;\01\01"
  "\00\07\00\00\00q\09\01\00\13\00\00\00\84\09\01\00\13\00\00\00\97\09\01"
  "\00\13";

import function runtime_fd_write(a:int, b:int, c:int, d:int):int; // func0

import function runtime_proc_exit(a:int); // func1

import function schedular_log(a:int, b:int); // func2

import function runtime_clock_time_get(a:int, b:long, c:int):int; // func3

import function runtime_args_sizes_get(a:int, b:int):int; // func4

import function runtime_args_get(a:int, b:int):int; // func5

import function imported_wasi_snapshot_preview1_random_get(a:int, b:int):int; // func6

function wasm_call_ctors() { // func7
}

function tinygo_getCurrentStackPointer():int { // func8
  return stack_pointer
}

function tinygo_unwind(a:int_ptr) { // func9
  if (89272[0]:ubyte) {
    asyncify_stop_rewind();
    89272[0]:byte = 0;
  } else {
    a[1] = stack_pointer;
    asyncify_start_unwind(a);
  }
}

function tinygo_launch(a:int_ptr) { // func10
  let t0 = stack_pointer;
  stack_pointer = a[3];
  call_indirect(a[1], a[0]);
  asyncify_stop_unwind();
  stack_pointer = t0;
}

function tinygo_rewind(a:int_ptr) { // func11
  let t0 = stack_pointer;
  stack_pointer = a[3];
  let t1, t2 = a[1], a[0];
  89272[0]:byte = 1;
  asyncify_start_rewind(a + 8);
  call_indirect(t1, t2);
  asyncify_stop_unwind();
  stack_pointer = t0;
}

function write(a:int, b:int, c:int):int { // func12
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
                       89276[0]:int = select_if(8, c, c == 76);
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

function wasi_fd_write(a:int, b:int, c:int, d:{ a:int, b:int, c:int, d:int }):int { // func13
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

function wasi_random_get(a:int, b:{ a:int, b:int }):int { // func14
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

function dummy() { // func15
}

function strlen(a:int):int { // func16
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

function getentropy(a:int, b:int):int { // func17
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
                                      89276[0]:int = c;
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

function memcpy(a:{ a:byte, b:byte, c:byte, d:byte }, b:int, c:int):int { // func18
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

function memset(a:{ a:byte, b:byte, c:byte, d:byte }, b:int, c:{ a:long, b:long, c:long, d:long }):int { // func19
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

function arc4random_buf(a:int, b:{ a:int, b:int }) { // func20
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
        if (select_if(g_b, 1, if (g_b) { 0 } else { 89280[0]:int })) {
          if (eqz(g_b) | eqz(c)) {
            getentropy(89288, 32);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { 89280[0]:long@4 = 2199023255553L }
        }
        if (eqz(g_b)) {
          if (eqz(b)) goto B_i;
          c = 89284[0]:int;
          loop L_j {
            if (c == 512) {
              if (b >= 512) {
                loop L_m {
                  chacha20_rng(a + e, 89288);
                  e = e + 512;
                  b = b - 512;
                  if (b > 511) continue L_m;
                }
              }
              if (eqz(b)) goto B_i;
              chacha20_rng(89320, 89288);
              89284[0]:int = 0;
              c = 0;
            }
            var f:int = c + 89320;
            d = 512 - c;
            c = d > b;
            memcpy(a + e, f, d = select_if(b, d, c));
            memset(89284[0]:int + 89320, 0, d);
            89284[0]:int = (c = 89284[0]:int + d);
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

function chacha20_rng(a:long_ptr@1, b:long_ptr@1) { // func21
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

function chacha20_update(a:int_ptr@1, b:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int }) { // func22
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

function arc4random():int { // func23
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

function internal_itoa_Itoa(a:{ a:int, b:int }, b:int) { // func24
  var c:int;
  var g:int;
  var d:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    g = f.e;
    f = f.f;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 48;
          stack_pointer = c;
          c[9]:long@4 = 2L;
          g = 90044[0]:int;
          90044[0]:int = c + 32;
          c[8]:int = g;
          d = b >= 0;
        }
        b = {
              if (eqz(g_b)) {
                if (d) goto B_f;
                d = c + 16;
                b = 0 - b;
              }
              if (eqz(g_b) | eqz(e)) {
                internal_itoa_Uitoa(d, b);
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c[11]:int = (b = c[4]:int);
                f = c[5]:int;
                d = c + 8;
              }
              if (eqz(g_b) | e == 1) {
                runtime_stringConcat(d, 67499, 1, b, f);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d = c[2]:int;
                c[3]:int;
                goto B_e;
              }
              label B_f:
              d = select_if(d, c + 24, g_b);
              if (eqz(g_b) | e == 2) {
                internal_itoa_Uitoa(d, b);
                2;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                b
              } else {
                d = c[6]:int;
                c[7]:int;
              }
              label B_e:
            }
        if (eqz(g_b)) {
          90044[0]:int = g;
          a.b = b;
          a.a = d;
          stack_pointer = c + 48;
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
  e.f = f;
  g_c[0]:int = g_c[0]:int + 24;
}

function internal_itoa_Uitoa(a:{ a:int, b:int }, b:int) { // func25
  var c:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var f:byte_ptr;
  var d:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    d = e.d;
    f = e.e;
    e = e.f;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 48;
          stack_pointer = c;
          c[9]:long@4 = 1L;
          e = 90044[0]:int;
          90044[0]:int = (f = c + 32);
          c[8]:int = e;
          d = 0;
        }
        if (eqz(g_b)) {
          if (eqz(b)) {
            b = 1;
            d = 67751;
            goto B_e;
          }
          (c + 24)[0]:int = 0;
          (c + 16)[0]:long = 0L;
          c[1]:long = 0L;
          f = c + 8;
          g = f + 19;
        }
        if (eqz(g_b)) {
          loop L_j {
            f = d + 19;
            if (b < 10) goto B_k;
            if (f > 19) goto B_h;
            (d + g)[0]:byte = (f = b / 10) * 246 + b + 48;
            d = d - 1;
            b = f;
            continue L_j;
            label B_k:
          }
          if (f > 19) goto B_h;
          f = c + d + 27;
          f[0] = b | 48;
          b = 1 - d;
        }
        if (eqz(g_b) | eqz(h)) {
          runtime_stringFromBytes(c, f, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = c[1]:int;
          d = c[0]:int;
          goto B_e;
        }
        label B_h:
        if (eqz(g_b) | h == 1) {
          runtime_lookupPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = e;
          a.b = b;
          a.a = d;
          stack_pointer = c + 48;
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
  g.e = f;
  g.f = e;
  g_c[0]:int = g_c[0]:int + 24;
}

function runtime_stringConcat(a:{ a:int, b:int }, b:int, c:int, d:int, e:int) { // func26
  var i:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  var j:int;
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    g = g_c[0]:int;
    a = g.a;
    b = g.b;
    c = g.c;
    d = g.d;
    e = g.e;
    h = g.f;
    i = g.g;
    j = g.h;
    g = g.i;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          i = stack_pointer - 32;
          stack_pointer = i;
          i[5]:long@4 = 0L;
          i[3]:long@4 = 3L;
          g = 90044[0]:int;
          90044[0]:int = (h = i + 8);
          i[2]:int = g;
        }
        if (eqz(g_b)) {
          if (eqz(c)) {
            h = d;
            j = e;
            goto B_e;
          }
          if (eqz(e)) {
            h = b;
            j = c;
            goto B_e;
          }
          j = c + e;
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_alloc(j);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          h = t0;
        }
        if (eqz(g_b)) {
          memory_copy(h, b, c);
          memory_copy(c + h, d, e);
        }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = g;
          a.b = j;
          a.a = h;
          stack_pointer = i + 32;
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
  f.f = h;
  f.g = i;
  f.h = j;
  f.i = g;
  g_c[0]:int = g_c[0]:int + 36;
}

function runtime_stringFromBytes(a:{ a:int, b:int }, b:int, c:int) { // func27
  var f:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    f = e.d;
    g = e.e;
    e = e.f;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 32;
          stack_pointer = f;
          f[5]:long@4 = 0L;
          f[3]:long@4 = 3L;
          e = 90044[0]:int;
          90044[0]:int = (g = f + 8);
          f[2]:int = e;
        }
        if (eqz(g_b) | eqz(d)) {
          runtime_alloc(c);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          g = t0;
        }
        if (eqz(g_b)) {
          memory_copy(g, b, c);
          90044[0]:int = e;
          a.b = c;
          a.a = g;
          stack_pointer = f + 32;
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
  d.d = f;
  d.e = g;
  d.f = e;
  g_c[0]:int = g_c[0]:int + 24;
}

function runtime_lookupPanic() { // func28
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67631, 18);
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

function math_bits_Mul64(a:{ a:long, b:long }, b:long, c:long) { // func29
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

function unicode_utf8_DecodeRuneInString(a:{ a:int, b:int }, b:{ a:ubyte, b:ubyte, c:byte, d:byte }, c:int) { // func30
  var e:int;
  var i:int;
  a = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        var f:int = 65533;
        if (c <= 0) goto B_e;
        var g:int = b.a;
        var d:int = (g + 65552)[0]:ubyte;
        var j:int = g - 245;
        if (j <= -52) {
          e = 1;
          f = (g & (c = d & 1) - 1) | (0 - c & 65533);
          goto B_e;
        }
        e = 1;
        if ((d & 7) > c) goto B_e;
        if (c == 1) goto B_d;
        var h:int = b.b;
        if (h < ((d = d >> 3 & 30) + 65808)[0]:ubyte) goto B_e;
        if (h > (d + 65809)[0]:ubyte) goto B_e;
        if (j <= -22) {
          f = (h & 63) | (g & 31) << 6;
          e = 2;
          goto B_e;
        }
        if (c < 3) goto B_d;
        d = b.c;
        if (d > -65) goto B_e;
        if (j <= -6) {
          f = (d & 63) | ((h & 63) << 6 | (g & 15) << 12);
          e = 3;
          goto B_e;
        }
        if (c == 3) goto B_d;
        c = b.d;
        if (c > -65) goto B_e;
        f = (c & 63) | (((h & 63) << 12 | (g & 7) << 18) | (d & 63) << 6);
        e = 4;
        label B_e:
        a.a = f;
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

function unicode_utf8_EncodeRune(a:int, b:int, c:int):int { // func31
  var d:int;
  var e:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          if (c <= 127) {
            if (eqz(b)) goto B_d;
            a[0]:byte = c;
            return 1;
          }
          ({
             if (c <= 2047) {
               d = 2;
               if (b < 2) goto B_d;
               a[0]:byte = c >> 6 | 192;
               c = (c & 63) | -128;
               1;
               goto B_f;
             }
             c = {
                   if (eqz((c & -8192) != 57344 & c >= 55296)) {
                     d = 3;
                     if (b < 3) goto B_d;
                     a[0]:byte = c >> 12 | 224;
                     a[1]:byte = (c >> 6 & 63) | 128;
                     (c & 63) | -128;
                     goto B_h;
                   }
                   if (c - 65536 <= 1048575) {
                     d = 4;
                     if (b < 4) goto B_d;
                     a[0]:byte = c >> 18 | 240;
                     a[2]:byte = (c >> 6 & 63) | 128;
                     a[1]:byte = (c >> 12 & 63) | 128;
                     c = (c & 63) | -128;
                     3;
                     goto B_f;
                   }
                   d = 3;
                   if (b < 3) goto B_d;
                   a[0]:short@1 = 49135;
                   189;
                   label B_h:
                 }
             2;
             label B_f:
           } +
           a)[0]:byte =
            c;
          return d;
          label B_d:
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_lookupPanic();
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

function unicode_utf8_AppendRune(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int) { // func32
  var f:int;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var g:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    i = g_c[0]:int;
    a = i.a;
    b = i.b;
    c = i.c;
    d = i.d;
    e = i.e;
    f = i.f;
    g = i.g;
    i = i.h;
  }
  h = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 112;
          stack_pointer = f;
          f[27]:int = 0;
          f[25]:long@4 = 2L;
          i = 90044[0]:int;
          90044[0]:int = f + 96;
          f[24]:int = i;
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
          90044[0]:int = i;
          a.c = e;
          a.b = d;
          a.a = c;
          stack_pointer = f + 112;
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
  h.h = i;
  g_c[0]:int = g_c[0]:int + 32;
}

function runtime_sliceAppend(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int, f:int, g:int) { // func33
  var k:int;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  var l:int;
  var j:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
    i = g_c[0]:int;
    a = i.a;
    b = i.b;
    c = i.c;
    d = i.d;
    e = i.e;
    f = i.f;
    g = i.g;
    j = i.h;
    k = i.i;
    l = i.j;
    i = i.k;
  }
  h = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          k = stack_pointer - 32;
          stack_pointer = k;
          (k + 28)[0]:int = 0;
          k[5]:long@4 = 0L;
          k[3]:int = 4;
          i = 90044[0]:int;
          90044[0]:int = (j = k + 8);
          k[2]:int = i;
          l = d + f;
        }
        if (eqz(g_b)) {
          if (eqz(f)) {
            j = b;
            goto B_e;
          }
          j = e < l;
        }
        if (eqz(g_b)) {
          if (eqz(j)) {
            j = b;
            goto B_h;
          }
          k[4]:int = select_if(3, 0, g < 4);
          j = g * (e = select_if(1 << 32 - (e = clz(l)), 0, e));
        }
        if (eqz(g_b) | eqz(h)) {
          runtime_alloc(j);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          j = t0;
        }
        if (eqz(g_b)) {
          if (eqz(d)) goto B_h;
          memory_copy(j, b, d * g);
        }
        label B_h:
        if (eqz(g_b)) { memory_copy(j + d * g, c, f * g) }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = i;
          a.c = e;
          a.b = l;
          a.a = j;
          stack_pointer = k + 32;
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
  h.h = j;
  h.i = k;
  h.j = l;
  h.k = i;
  g_c[0]:int = g_c[0]:int + 44;
}

function unicode_utf8_RuneCountInString(a:int, b:int):int { // func34
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

function runtime_stringNext(a:{ a:byte, b:int, c:int }, b:{ a:int, b:int, c:int, d:int, e:int }, c:int, d:int_ptr) { // func35
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

function Size(a:int):int { // func36
  var d:int;
  var f:int;
  var b:int;
  var e:int;
  var c:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c.a;
    d = c.c;
    f = c.d;
    b = c.b;
  }
  c = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        e = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = stack_pointer - 32;
        stack_pointer = d;
        (d + 24)[0]:long = 0L;
        d[2]:long = 0L;
        d[3]:int = 4;
        f = 90044[0]:int;
        90044[0]:int = d + 8;
        d[2]:int = f;
        b = eqz(a);
      }
      if (eqz(g_b)) {
        if (b) goto B_e;
        b = a & 3;
      }
      if (eqz(g_b)) {
        if (b) goto B_m;
        b = 1;
        br_table[B_g, B_m, B_g, B_o, B_m, B_k, B_m, B_g, B_o, B_m, B_k, B_m, B_m, B_k, B_k, B_n, B_k, B_m, B_m, B_k, B_m, B_l, B_j, B_k, B_m, B_h, ..B_e](
          (a[0]:ubyte & 31) - 1)
        label B_o:
        b = 2;
        goto B_g;
        label B_n:
        b = 16;
        goto B_g;
        label B_m:
        b = 4;
        goto B_g;
        label B_l:
        b = 12;
        goto B_g;
        label B_k:
        b = 8;
        goto B_g;
        label B_j:
      }
      if (eqz(g_b) | eqz(e)) {
        elem(a);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        b = t0;
      }
      if (eqz(g_b)) { d[4]:int = b }
      if (eqz(g_b) | e == 1) {
        Size(b);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        b = t1;
      }
      if (eqz(g_b) | e == 2) {
        Len(a);
        let t2 = 2;
        if (g_b == 1) goto B_b;
        a = t2;
      }
      if (eqz(g_b)) {
        b = a * b;
        goto B_g;
      }
      label B_h:
      if (eqz(g_b) | e == 3) {
        underlying(a);
        let t3 = 3;
        if (g_b == 1) goto B_b;
        a = t3;
      }
      if (eqz(g_b)) {
        d[6]:int = a;
        d[7]:int = a;
        d[5]:int = a;
        b = a[3]:int;
      }
      label B_g:
      if (eqz(g_b)) {
        90044[0]:int = f;
        stack_pointer = d + 32;
        return b;
      }
      label B_e:
      if (eqz(g_b) | e == 4) {
        runtime_panic(86928, 66376);
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
  c.c = d;
  c.d = f;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function elem(a:{ a:ubyte, b:int, c:int }):int { // func37
  var b:int;
  var d:{ a:int, b:int, c:int }
  var e:int;
  var c:{ a:int, b:int, c:int }
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
        if (eqz(if (g_b) {
                  0
                } else {
                  b = stack_pointer - 32;
                  stack_pointer = b;
                  b[1]:long@4 = 6L;
                  d = 90044[0]:int;
                  90044[0]:int = b;
                  b[0]:int = d;
                  eqz(a & 3);
                } |
                g_b)) {
          a = a - 1;
          goto B_d;
        }
        if (eqz(g_b) | eqz(e)) {
          underlying(a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          b[6]:int = a;
          b[7]:int = a;
          b[5]:int = a;
          b[4]:int = a;
          b[3]:int = a;
          if (eqz(a)) goto B_i;
          if (eqz(a & 3)) {
            c = a.a & 31;
            if (c > 25) goto B_i;
            if (1 << c & 46661632) goto B_j;
            if (c != 21) goto B_i;
          }
          a = a.b;
          goto B_d;
          label B_j:
          a = a.c;
          goto B_d;
          label B_i:
        }
        if (eqz(g_b) | e == 1) {
          runtime_panic(87388, 89200);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b)) {
          90044[0]:int = d;
          stack_pointer = b + 32;
          return a;
        }
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
  return 0;
}

function Len(a:int):int { // func38
  var b:int;
  var c:{ a:int, b:int, c:int }
  var d:{ a:int, b:int, c:int }
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    c = c.c;
  }
  d = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        e = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        b = stack_pointer - 32;
        stack_pointer = b;
        b[5]:long@4 = 0L;
        b[3]:long@4 = 3L;
        c = 90044[0]:int;
        90044[0]:int = b + 8;
        b[2]:int = c;
        d = eqz(a);
      }
      if (eqz(g_b | (d | (a & 3)))) { if ((a[0]:ubyte & 31) == 23) goto B_e }
      if (eqz(g_b) | eqz(e)) {
        runtime_panic(87388, 89224);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b) | e == 1) {
        underlying(a);
        let t0 = 1;
        if (g_b == 1) goto B_b;
        a = t0;
      }
      if (eqz(g_b)) {
        90044[0]:int = c;
        b[5]:int = a;
        b[6]:int = a;
        let t1 = a[3]:int;
        stack_pointer = b + 32;
        return t1;
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

function underlying(a:int_ptr):int { // func39
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

function runtime_panic(a:int, b:{ a:int, b:int }) { // func40
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

function isNamed(a:ubyte_ptr):int { // func41
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

function runtime_nilPanic() { // func42
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67578, 23);
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

function Elem(a:int):int { // func43
  var d:int;
  var b:{ a:int, b:int, c:int }
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    d = c.b;
    c = c.c;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 16;
          stack_pointer = d;
          c = 90044[0]:int;
          90044[0]:int = d;
        }
        if (eqz(g_b) | eqz(b)) {
          elem(a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          90044[0]:int = c;
          stack_pointer = d + 16;
          return a;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = d;
  b.c = c;
  g_c[0]:int = g_c[0]:int + 12;
  return 0;
}

function NumField(a:int):int { // func44
  var c:int;
  var b:{ a:int, b:int, c:int }
  var d:{ a:int, b:int, c:int }
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    b = g_c[0]:int;
    a = b.a;
    c = b.b;
    b = b.c;
  }
  d = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        e = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer - 32;
        stack_pointer = c;
        c[5]:long@4 = 0L;
        c[3]:long@4 = 3L;
        b = 90044[0]:int;
        90044[0]:int = c + 8;
        c[2]:int = b;
        d = eqz(a);
      }
      if (eqz(g_b | (d | (a & 3)))) { if ((a[0]:ubyte & 31) == 26) goto B_e }
      if (eqz(g_b) | eqz(e)) {
        runtime_panic(87388, 89232);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b) | e == 1) {
        underlying(a);
        let t0 = 1;
        if (g_b == 1) goto B_b;
        a = t0;
      }
      if (eqz(g_b)) {
        90044[0]:int = b;
        c[6]:int = a;
        let t1 = a[8]:ushort;
        stack_pointer = c + 32;
        return t1;
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

function String(a:{ a:int, b:int }, b:{ a:ubyte, b:ushort }) { // func45
  var c:int;
  var g:int;
  var d:int;
  var e:ubyte_ptr;
  var l:int;
  var j:ubyte_ptr;
  var n:int;
  var f:int;
  var s:int;
  var o:int;
  var q:int;
  var i:int;
  var p:int;
  var k:int;
  var m:int;
  var r:int;
  var u:int;
  var t:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 76;
    h = g_c[0]:int;
    a = h.a;
    c = h.c;
    d = h.d;
    e = h.e;
    f = h.f;
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
    u = h.s;
    b = h.b;
  }
  h = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer - 960;
        stack_pointer = c;
        c[167]:int = 72;
        memory_fill(c + 672, 0, 288);
        c[166]:int = (t = 90044[0]:int);
        90044[0]:int = (d = c + 664);
        j = 0;
      }
      if (eqz(g_b) | eqz(g)) {
        isNamed(b);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        d = t0;
      }
      d = select_if(d, eqz(d & 1), g_b);
      if (eqz(g_b)) {
        if (eqz(d)) {
          internal_reflectlite_readStringZ(c, b + 16);
          c[169]:int = (e = c[0]:int);
          c[168]:int = e;
          l = c[1]:int;
          b = eqz(l);
          if (b) goto B_h;
          if (e[0] != 46) goto B_f;
          l = l - 1;
          e = e + 1;
          goto B_f;
        }
        if (eqz(b)) goto B_g;
        d = b & 3;
      }
      if (eqz(g_b)) {
        if (d) goto B_q;
        l = 12;
        e = 66425;
        j = b.a & 31;
        d = j - 19;
        br_table[B_s, B_f, B_q, B_p, B_o, B_g, B_n, B_m, ..B_g](d);
        label B_s:
      }
      if (eqz(g_b) | g == 1) {
        elem(b);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        e = t1;
      }
      if (eqz(g_b)) {
        c[170]:int = e;
        d = c + 56;
      }
      if (eqz(g_b) | g == 2) {
        String(d, e);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[171]:int = (j = c[14]:int);
        d = (b.a & 31) != 19;
        if (d) goto B_l;
        n = c[15]:int;
        l = 4;
        e = 66220;
        b = b.b - 1;
      }
      if (eqz(g_b)) {
        br_table[B_z, B_k, B_x, ..B_f](b)
        label B_z:
        b = c + 24;
      }
      if (eqz(g_b) | g == 3) {
        runtime_stringConcat(b, 66391, 7, j, n);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[7]:int;
        e = c[6]:int;
        goto B_f;
      }
      label B_x:
      if (eqz(g_b)) {
        b = eqz(n);
        if (b) goto B_h;
        b = j[0] != 60;
      }
      if (eqz(g_b)) {
        if (b) goto B_da;
        b = c + 40;
      }
      if (eqz(g_b) | g == 4) {
        runtime_stringConcat(b, 66398, 6, j, n);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[174]:int = (e = c[10]:int);
        d = c[11]:int;
        b = c + 32;
      }
      if (eqz(g_b) | g == 5) {
        runtime_stringConcat(b, e, d, 68619, 1);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[9]:int;
        e = c[8]:int;
        goto B_f;
      }
      label B_da:
      b = select_if(b, c + 48, g_b);
      if (eqz(g_b) | g == 6) {
        runtime_stringConcat(b, 66404, 5, j, n);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[13]:int;
        e = c[12]:int;
        goto B_f;
      }
      label B_q:
      if (eqz(g_b) | g == 7) {
        elem(b);
        let t2 = 7;
        if (g_b == 1) goto B_b;
        e = t2;
      }
      if (eqz(g_b)) {
        c[178]:int = e;
        b = c + 72;
      }
      if (eqz(g_b) | g == 8) {
        String(b, e);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[179]:int = (e = c[18]:int);
        d = c[19]:int;
        b = c - -64;
      }
      if (eqz(g_b) | g == 9) {
        runtime_stringConcat(b, 67752, 1, e, d);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[17]:int;
        e = c[16]:int;
        goto B_f;
      }
      label B_p:
      if (eqz(g_b) | g == 10) {
        elem(b);
        let t3 = 10;
        if (g_b == 1) goto B_b;
        e = t3;
      }
      if (eqz(g_b)) {
        c[181]:int = e;
        b = c + 88;
      }
      if (eqz(g_b) | g == 11) {
        String(b, e);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[182]:int = (e = c[22]:int);
        d = c[23]:int;
        b = c + 80;
      }
      if (eqz(g_b) | g == 12) {
        runtime_stringConcat(b, 66409, 2, e, d);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[21]:int;
        e = c[20]:int;
        goto B_f;
      }
      label B_o:
      d = select_if(d, c + 128, g_b);
      if (eqz(g_b) | g == 13) {
        Len(b);
        let t4 = 13;
        if (g_b == 1) goto B_b;
        f = t4;
      }
      if (eqz(g_b) | g == 14) {
        internal_itoa_Itoa(d, f);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[184]:int = (e = c[32]:int);
        f = c[33]:int;
        d = c + 120;
      }
      if (eqz(g_b) | g == 15) {
        runtime_stringConcat(d, 66411, 1, e, f);
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[185]:int = (e = c[30]:int);
        f = c[31]:int;
        d = c + 112;
      }
      if (eqz(g_b) | g == 16) {
        runtime_stringConcat(d, e, f, 66412, 1);
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[186]:int = (e = c[28]:int);
        l = c[29]:int;
      }
      if (eqz(g_b) | g == 17) {
        elem(b);
        let t5 = 17;
        if (g_b == 1) goto B_b;
        j = t5;
      }
      if (eqz(g_b)) {
        c[187]:int = j;
        b = c + 104;
      }
      if (eqz(g_b) | g == 18) {
        String(b, j);
        18;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[188]:int = (j = c[26]:int);
        d = c[27]:int;
        b = c + 96;
      }
      if (eqz(g_b) | g == 19) {
        runtime_stringConcat(b, e, l, j, d);
        19;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[25]:int;
        e = c[24]:int;
        goto B_f;
      }
      label B_n:
      if (eqz(g_b) | g == 20) {
        key(b);
        let t6 = 20;
        if (g_b == 1) goto B_b;
        e = t6;
      }
      if (eqz(g_b)) {
        c[190]:int = e;
        d = c + 168;
      }
      if (eqz(g_b) | g == 21) {
        String(d, e);
        21;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[191]:int = (e = c[42]:int);
        f = c[43]:int;
        d = c + 160;
      }
      if (eqz(g_b) | g == 22) {
        runtime_stringConcat(d, 86609, 4, e, f);
        22;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[192]:int = (e = c[40]:int);
        f = c[41]:int;
        d = c + 152;
      }
      if (eqz(g_b) | g == 23) {
        runtime_stringConcat(d, e, f, 66412, 1);
        23;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[193]:int = (e = c[38]:int);
        l = c[39]:int;
      }
      if (eqz(g_b) | g == 24) {
        elem(b);
        let t7 = 24;
        if (g_b == 1) goto B_b;
        j = t7;
      }
      if (eqz(g_b)) {
        c[194]:int = j;
        b = c + 144;
      }
      if (eqz(g_b) | g == 25) {
        String(b, j);
        25;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[195]:int = (j = c[36]:int);
        d = c[37]:int;
        b = c + 136;
      }
      if (eqz(g_b) | g == 26) {
        runtime_stringConcat(b, e, l, j, d);
        26;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[35]:int;
        e = c[34]:int;
        goto B_f;
      }
      label B_m:
      if (eqz(g_b) | g == 27) {
        NumField(b);
        let t8 = 27;
        if (g_b == 1) goto B_b;
        s = t8;
      }
      if (eqz(g_b)) {
        if (eqz(s)) {
          l = 9;
          e = 66413;
          goto B_f;
        }
        u = s - 1;
        p = 8;
        q = 0;
        o = 66437;
      }
      loop L_bc {
        if (eqz(g_b)) {
          c[197]:int = o;
          d = q == s;
        }
        if (eqz(g_b)) {
          if (d) goto B_ec;
          d = c + 616;
        }
        if (eqz(g_b) | g == 28) {
          rawField(d, b, q);
          28;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[202]:int = (e = c[154]:int);
          c[201]:int = (l = c[159]:int);
          c[200]:int = (j = c[158]:int);
          c[199]:int = c[156]:int;
          c[198]:int = e;
          n = c[160]:int;
          f = c[155]:int;
          d = c + 608;
        }
        if (eqz(g_b) | g == 29) {
          runtime_stringConcat(d, 68818, 1, e, f);
          29;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[203]:int = (e = c[152]:int);
          f = c[153]:int;
          d = c + 600;
        }
        if (eqz(g_b) | g == 30) {
          runtime_stringConcat(d, e, f, 68818, 1);
          30;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[205]:int = j;
          c[204]:int = (e = c[150]:int);
          f = c + 592;
          d = c[151]:int;
        }
        if (eqz(g_b) | g == 31) {
          String(f, j);
          31;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[206]:int = (j = c[148]:int);
          i = c[149]:int;
          f = c + 584;
        }
        if (eqz(g_b) | g == 32) {
          runtime_stringConcat(f, e, d, j, i);
          32;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[207]:int = (e = c[146]:int);
          f = c[147]:int;
          d = c + 576;
        }
        if (eqz(g_b) | g == 33) {
          runtime_stringConcat(d, o, p, e, f);
          33;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[210]:int = l;
          c[209]:int = l;
          c[208]:int = (o = c[144]:int);
          p = c[145]:int;
          d = eqz(n);
          if (d) goto B_dc;
          e = n * 3;
          d = e < -1;
        }
        if (eqz(g_b)) {
          if (d) goto B_sc;
          j = e / 2;
        }
        if (eqz(g_b) | g == 34) {
          runtime_alloc(j);
          let t9 = 34;
          if (g_b == 1) goto B_b;
          e = t9;
        }
        if (eqz(g_b)) {
          c[653]:byte = 34;
          c[211]:int = e;
          f = c + 653;
          d = c + 560;
        }
        if (eqz(g_b) | g == 35) {
          runtime_sliceAppend(d, e, f, 0, j, 1, 1);
          35;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[212]:int = (e = c[140]:int);
          k = c[141]:int;
          i = c[142]:int;
        }
        loop L_yc {
          if (eqz(g_b)) {
            c[213]:int = e;
            c[214]:int = l;
            d = n <= 0;
          }
          if (eqz(g_b)) {
            if (d) goto B_ed;
            j = 1;
            d = l[0]:byte;
            f = d >= 0;
          }
          if (eqz(g_b)) {
            if (f) goto B_gd;
            d = c + 512;
          }
          if (eqz(g_b) | g == 36) {
            unicode_utf8_DecodeRuneInString(d, l, n);
            36;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d = c[128]:int;
            j = c[129]:int;
            f = j != 1;
            if (f) goto B_gd;
            f = d != 65533;
            if (f) goto B_gd;
            d = c + 224;
          }
          if (eqz(g_b) | g == 37) {
            runtime_sliceAppend(d, e, 82694, k, i, 2, 1);
            37;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[215]:int = (e = c[56]:int);
            j = l[0]:ubyte >> 4;
            if (j == 15) goto B_h;
            d = c[58]:int;
            i = c[57]:int;
            c[654]:byte = (j + 65865)[0]:ubyte;
            j = c + 654;
            f = c + 208;
          }
          if (eqz(g_b) | g == 38) {
            runtime_sliceAppend(f, e, j, i, d, 1, 1);
            38;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[216]:int = (e = c[52]:int);
            j = l[0]:ubyte & 15;
            if (j == 15) goto B_h;
            d = c[54]:int;
            i = c[53]:int;
            c[655]:byte = (j + 65865)[0]:ubyte;
            j = 1;
            k = c + 655;
            f = c + 192;
          }
          if (eqz(g_b) | g == 39) {
            runtime_sliceAppend(f, e, k, i, d, 1, 1);
            39;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[50]:int;
            k = c[49]:int;
            e = c[48]:int;
            goto B_ad;
          }
          label B_gd:
          if (eqz(g_b)) {
            c[164]:int = 0;
            f = d == 92;
          }
          if (eqz(g_b)) {
            if (eqz(f)) {
              f = d != 34;
              if (f) goto B_rd;
            }
            c[662]:byte = 92;
            m = c + 662;
            f = c + 496;
          }
          if (eqz(g_b) | g == 40) {
            runtime_sliceAppend(f, e, m, k, i, 1, 1);
            40;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[663]:byte = d;
            c[219]:int = (e = c[124]:int);
            f = c + 663;
            i = c[125]:int;
            k = c[126]:int;
            d = c + 480;
          }
          if (eqz(g_b) | g == 41) {
            runtime_sliceAppend(d, e, f, i, k, 1, 1);
            41;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[122]:int;
            k = c[121]:int;
            e = c[120]:int;
            goto B_bd;
          }
          label B_rd:
          f = select_if(f, d > 255, g_b);
          if (eqz(g_b)) {
            if (f) goto B_yd;
            if (d - 32 >= 95) {
              f = d < 161;
              if (f) goto B_yd;
              f = d == 173;
              if (f) goto B_yd;
            }
            m = c + 656;
            r = c + 656;
            f = c + 240;
          }
          if (eqz(g_b) | g == 42) {
            unicode_utf8_EncodeRune(r, 4, d);
            let t10 = 42;
            if (g_b == 1) goto B_b;
            d = t10;
          }
          if (eqz(g_b) | g == 43) {
            runtime_sliceAppend(f, e, m, k, i, d, 1);
            43;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[62]:int;
            k = c[61]:int;
            e = c[60]:int;
            goto B_bd;
          }
          label B_yd:
          f = select_if(f, d - 7, g_b);
          if (eqz(g_b)) {
            br_table[B_me, B_ke, B_ge, B_ie, B_fe, B_je, B_he, ..B_ee](f)
            label B_me:
            d = c + 368;
          }
          if (eqz(g_b) | g == 44) {
            runtime_sliceAppend(d, e, 82680, k, i, 2, 1);
            44;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[94]:int;
            k = c[93]:int;
            e = c[92]:int;
            goto B_cd;
          }
          label B_ke:
          d = select_if(d, c + 384, g_b);
          if (eqz(g_b) | g == 45) {
            runtime_sliceAppend(d, e, 82682, k, i, 2, 1);
            45;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[98]:int;
            k = c[97]:int;
            e = c[96]:int;
            goto B_cd;
          }
          label B_je:
          d = select_if(d, c + 400, g_b);
          if (eqz(g_b) | g == 46) {
            runtime_sliceAppend(d, e, 82684, k, i, 2, 1);
            46;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[102]:int;
            k = c[101]:int;
            e = c[100]:int;
            goto B_cd;
          }
          label B_ie:
          d = select_if(d, c + 416, g_b);
          if (eqz(g_b) | g == 47) {
            runtime_sliceAppend(d, e, 82686, k, i, 2, 1);
            47;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[106]:int;
            k = c[105]:int;
            e = c[104]:int;
            goto B_cd;
          }
          label B_he:
          d = select_if(d, c + 432, g_b);
          if (eqz(g_b) | g == 48) {
            runtime_sliceAppend(d, e, 82688, k, i, 2, 1);
            48;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[110]:int;
            k = c[109]:int;
            e = c[108]:int;
            goto B_cd;
          }
          label B_ge:
          d = select_if(d, c + 448, g_b);
          if (eqz(g_b) | g == 49) {
            runtime_sliceAppend(d, e, 82690, k, i, 2, 1);
            49;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[114]:int;
            k = c[113]:int;
            e = c[112]:int;
            goto B_cd;
          }
          label B_fe:
          d = select_if(d, c + 464, g_b);
          if (eqz(g_b) | g == 50) {
            runtime_sliceAppend(d, e, 82692, k, i, 2, 1);
            50;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[118]:int;
            k = c[117]:int;
            e = c[116]:int;
            goto B_cd;
          }
          label B_ee:
          f = select_if(f, d < 32, g_b);
          if (eqz(g_b)) {
            if (eqz(f)) {
              f = d != 127;
              if (f) goto B_bf;
            }
            f = c + 288;
          }
          if (eqz(g_b) | g == 51) {
            runtime_sliceAppend(f, e, 82694, k, i, 2, 1);
            51;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[221]:int = (e = c[72]:int);
            i = d >> 4 & 15;
            if (i == 15) goto B_h;
            k = c[74]:int;
            m = c[73]:int;
            c[662]:byte = (i + 65865)[0]:ubyte;
            i = c + 662;
            f = c + 272;
          }
          if (eqz(g_b) | g == 52) {
            runtime_sliceAppend(f, e, i, m, k, 1, 1);
            52;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[222]:int = (e = c[68]:int);
            d = d & 15;
            if (d == 15) goto B_h;
            i = c[70]:int;
            k = c[69]:int;
            c[663]:byte = (d + 65865)[0]:ubyte;
            f = c + 663;
            d = c + 256;
          }
          if (eqz(g_b) | g == 53) {
            runtime_sliceAppend(d, e, f, k, i, 1, 1);
            53;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            i = c[66]:int;
            k = c[65]:int;
            e = c[64]:int;
            goto B_cd;
          }
          label B_bf:
          if (eqz(g_b)) {
            if (d >= 55296) {
              f = 65533;
              m = d - 57344 >= 1056768;
              if (m) goto B_dd;
            }
            if (d < 65536) {
              f = d;
              goto B_dd;
            }
            f = c + 352;
          }
          if (eqz(g_b) | g == 54) {
            runtime_sliceAppend(f, e, 82698, k, i, 2, 1);
            54;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[226]:int = (e = c[88]:int);
            m = 28;
            k = c[89]:int;
            i = c[90]:int;
          }
          loop L_pf {
            if (eqz(g_b)) {
              c[227]:int = e;
              f = m < 0;
              if (f) goto B_bd;
              f = d >> select_if(31, m, m >= 31) & 15;
              if (f == 15) goto B_h;
              c[663]:byte = (f + 65865)[0]:ubyte;
              r = c + 663;
              f = c + 336;
            }
            if (eqz(g_b) | g == 55) {
              runtime_sliceAppend(f, e, r, k, i, 1, 1);
              55;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c[228]:int = (e = c[84]:int);
              m = m - 4;
              i = c[86]:int;
              k = c[85]:int;
              continue L_pf;
            }
          }
          label B_ed:
          if (eqz(g_b)) {
            c[656]:byte = 34;
            f = c + 656;
            d = c + 544;
          }
          if (eqz(g_b) | g == 56) {
            runtime_sliceAppend(d, e, f, k, i, 1, 1);
            56;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[230]:int = (e = c[136]:int);
            f = c[137]:int;
            d = c + 536;
          }
          if (eqz(g_b) | g == 57) {
            runtime_stringFromBytes(d, e, f);
            57;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[232]:int = (e = c[134]:int);
            c[231]:int = e;
            f = c[135]:int;
            d = c + 528;
          }
          if (eqz(g_b) | g == 58) {
            runtime_stringConcat(d, 68818, 1, e, f);
            58;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[233]:int = (e = c[132]:int);
            f = c[133]:int;
            d = c + 520;
          }
          if (eqz(g_b) | g == 59) {
            runtime_stringConcat(d, o, p, e, f);
            59;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[234]:int = (o = c[130]:int);
            p = c[131]:int;
            goto B_dc;
          }
          label B_dd:
          d = select_if(d, c + 320, g_b);
          if (eqz(g_b) | g == 60) {
            runtime_sliceAppend(d, e, 82696, k, i, 2, 1);
            60;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            c[223]:int = (e = c[80]:int);
            i = c[82]:int;
            k = c[81]:int;
            d = 12;
          }
          loop L_eg {
            if (eqz(g_b)) {
              c[224]:int = e;
              m = d < 0;
              if (m) goto B_bd;
              m = f >> select_if(31, d, d >= 31) & 15;
              if (m == 15) goto B_h;
              c[663]:byte = (m + 65865)[0]:ubyte;
              r = c + 663;
              m = c + 304;
            }
            if (eqz(g_b) | g == 61) {
              runtime_sliceAppend(m, e, r, k, i, 1, 1);
              61;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              c[225]:int = (e = c[76]:int);
              d = d - 4;
              i = c[78]:int;
              k = c[77]:int;
              continue L_eg;
            }
          }
          label B_cd:
          if (eqz(g_b)) { c[220]:int = e }
          label B_bd:
          if (eqz(g_b)) { c[229]:int = e }
          label B_ad:
          if (eqz(g_b)) {
            c[217]:int = e;
            c[218]:int = e;
            d = j > n;
            if (d) goto B_sc;
            n = n - j;
            l = j + l;
            continue L_yc;
          }
        }
        label B_sc:
        if (eqz(g_b) | g == 62) {
          runtime_slicePanic();
          62;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_ec:
        b = select_if(b, c + 176, g_b);
        if (eqz(g_b) | g == 63) {
          runtime_stringConcat(b, o, p, 66423, 2);
          63;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = c[45]:int;
          e = c[44]:int;
          goto B_f;
        }
        label B_dc:
        if (eqz(g_b)) {
          c[235]:int = o;
          d = q >= u;
        }
        if (eqz(g_b)) {
          if (d) goto B_qg;
          d = c + 184;
        }
        if (eqz(g_b) | g == 64) {
          runtime_stringConcat(d, o, p, 66422, 1);
          64;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[236]:int = (o = c[46]:int);
          p = c[47]:int;
        }
        label B_qg:
        if (eqz(g_b)) {
          c[237]:int = o;
          q = q + 1;
          continue L_bc;
        }
      }
      label B_l:
      if (eqz(g_b) | g == 65) {
        runtime_panic(87388, 89240);
        65;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_k:
      b = select_if(b, c + 16, g_b);
      if (eqz(g_b) | g == 66) {
        runtime_stringConcat(b, 66384, 7, j, n);
        66;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[5]:int;
        e = c[4]:int;
        goto B_f;
      }
      label B_h:
      if (eqz(g_b) | g == 67) {
        runtime_lookupPanic();
        67;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      b = select_if(b, c + 8, g_b);
      if (eqz(g_b) | g == 68) {
        String_1(b, j);
        68;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        l = c[3]:int;
        e = c[2]:int;
      }
      label B_f:
      if (eqz(g_b)) {
        90044[0]:int = t;
        a.b = l;
        a.a = e;
        stack_pointer = c + 960;
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
  h.s = u;
  g_c[0]:int = g_c[0]:int + 76;
}

function internal_reflectlite_readStringZ(a:{ a:int, b:int }, b:int) { // func46
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

function key(a:int):int { // func47
  var c:int_ptr;
  var e:int;
  var f:int;
  var d:int;
  var b:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    b = g_c[0]:int;
    a = b.a;
    d = b.c;
    e = b.d;
    c = b.b;
  }
  b = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer - 32;
        stack_pointer = c;
        c[7] = 0;
        c[3] = 4;
        e = 90044[0]:int;
        90044[0]:int = (d = c + 8);
        c[2] = e;
      }
      if (eqz(g_b) | eqz(f)) {
        underlying(a);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        a = t0;
      }
      if (eqz(g_b)) {
        c[5] = a;
        c[6] = a;
        c[4] = a;
        d = eqz(a);
      }
      if (eqz(g_b | (d | (a & 3)))) { if ((a[0]:ubyte & 31) == 25) goto B_g }
      if (eqz(g_b) | f == 1) {
        runtime_panic(87388, 89208);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      if (eqz(g_b)) {
        90044[0]:int = e;
        let t1 = a[3]:int;
        stack_pointer = c + 32;
        return t1;
      }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = c;
  b.c = d;
  b.d = e;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function rawField(a:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:byte }, b:ubyte_ptr, c:int) { // func48
  var e:int_ptr;
  var f:ubyte_ptr;
  var l:int;
  var j:int;
  var k:int;
  var g:int;
  var i:int;
  var h:int_ptr;
  var m:int;
  var o:int;
  var n:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 52;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    e = d.d;
    f = d.e;
    g = d.f;
    h = d.g;
    i = d.h;
    j = d.i;
    k = d.j;
    m = d.k;
    n = d.l;
    o = d.m;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          l = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 112;
          stack_pointer = e;
          e[7] = 20;
          memory_fill(e + 32, 0, 80);
          e[6] = (o = 90044[0]:int);
          90044[0]:int = e + 24;
          f = eqz(b);
        }
        if (eqz(g_b)) {
          if (f | (b & 3)) goto B_f;
          f = (b[0] & 31) != 26;
          if (f) goto B_f;
        }
        if (eqz(g_b) | eqz(l)) {
          underlying(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          j = t0;
        }
        if (eqz(g_b)) {
          e[10] = j;
          e[9] = j;
          e[8] = j;
          b = c >= j[8]:ushort;
        }
        if (eqz(g_b)) {
          if (b) goto B_j;
          e[11] = (f = ((b = j + (c << 3)) + 24)[0]:int);
          e[12] = f;
          k = f + 1;
          if (eqz(k)) goto B_e;
          h = b + 20;
          m = f[0];
          n = 0;
          i = 0;
          c = 0;
          b = 1;
        }
        loop L_l {
          g = select_if(g, b != 6, g_b);
          if (eqz(g_b)) {
            if (eqz(g)) {
              b = 0;
              goto B_o;
            }
            g = (b + f)[0]:byte;
            if (g < 0) goto B_m;
            n = i | select_if(f = g << c, 0, c <= 31);
            label B_o:
            internal_reflectlite_readStringZ(e + 16, k = b + k);
            e[24] = (c = e[4]);
            e[20] = c;
            e[13] = c;
            b = eqz(h);
            if (eqz(b)) {
              g = e[5];
              e[22] = (i = h[0]);
              e[26] = i;
              e[14] = i;
              f = 0;
              b = 0;
              h = 0;
              if (m & 2) {
                h = g + k;
                b = h + 2;
                h = (h + 1)[0]:ubyte;
              }
              e[23] = b;
              e[27] = b;
              e[15] = b;
              k = 0;
              if (eqz(m & 4)) {
                e[16] = (f = j[2]:int);
                e[17] = f;
                internal_reflectlite_readStringZ(e + 8, f);
                k = e[3];
                f = e[2];
              }
              90044[0]:int = o;
              a.i = m & 1;
              a.h = n;
              a.g = h;
              a.f = b;
              a.e = i;
              a.d = k;
              a.c = f;
              a.b = g;
              a.a = c;
              stack_pointer = e + 112;
              return ;
            }
          }
          if (eqz(g_b) | l == 1) {
            runtime_nilPanic();
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { unreachable }
          label B_m:
          if (eqz(g_b)) {
            i = i | (g = select_if((g & 127) << c, 0, c <= 31));
            b = b + 1;
            c = c + 7;
            continue L_l;
          }
        }
        label B_j:
        if (eqz(g_b) | l == 2) {
          runtime_panic(86928, 66480);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        if (eqz(g_b) | l == 3) {
          runtime_panic(87388, 89216);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b) | l == 4) {
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
  d.j = k;
  d.k = m;
  d.l = n;
  d.m = o;
  g_c[0]:int = g_c[0]:int + 52;
}

function runtime_alloc(a:int):int { // func49
  var b:int;
  var g:int;
  var c:int;
  var e:int;
  var d:int;
  var f:int;
  var k:int;
  var h:long;
  var j:int;
  var i:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    f = g_c[0]:int;
    a = f[0]:int;
    c = f[2]:int;
    d = f[3]:int;
    g = f[4]:int;
    h = f[5]:long@4;
    i = f[7]:int;
    j = f[8]:int;
    k = f[9]:int;
    b = f[1]:int;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          if (eqz(a)) { return 90040 }
          90000[0]:long = 90000[0]:long + i64_extend_i32_u(a);
          90016[0]:long = 90016[0]:long + 1L;
          90008[0]:long =
            (h = 90008[0]:long + i64_extend_i32_u(i = a + 15 >> 4));
          j = 0;
          b = 89988[0]:int;
          g = b;
          c = 0;
        }
        loop L_f {
          b = select_if(b, b != g, g_b);
          if (eqz(g_b)) {
            if (b) goto B_i;
            b = c & 255;
            c = 1;
          }
          if (eqz(g_b)) {
            br_table[B_i, B_m, ..B_k](b)
            label B_m:
            b = eqz(89840[0]:ubyte);
          }
          if (select_if(g_b, 1, b)) {
            if (eqz(g_b) | eqz(e)) {
              runtime_printstring(67307, 11);
              0;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | e == 1) {
              runtime_printnl();
              1;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | e == 2) {
              runtime_printstring(67318, 27);
              2;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | e == 3) {
              runtime_printnl();
              3;
              if (g_b == 1) goto B_b;
            }
          }
          if (eqz(g_b)) {
            90044[0]:int;
            b = 89832[0]:int;
          }
          if (eqz(g_b)) {
            if (b) goto B_t;
            b = tinygo_getCurrentStackPointer();
          }
          if (eqz(g_b) | e == 4) {
            runtime_markRoots(b, 65536);
            4;
            if (g_b == 1) goto B_b;
          }
          label B_t:
          if (eqz(g_b) | e == 5) {
            runtime_markRoots(65536, 90704);
            5;
            if (g_b == 1) goto B_b;
          }
          loop L_x {
            if (eqz(g_b)) { b = 90041[0]:ubyte }
            if (eqz(g_b)) {
              if (b) goto B_z;
              h = 0L;
              k = 0;
              c = 0;
              b = 0;
            }
            loop L_ba {
              if (eqz(g_b)) { d = 89992[0]:int <= b }
              if (eqz(g_b)) {
                if (eqz(d)) {
                  d = state(b) & 255;
                  br_table[B_ka, B_ja, B_ia, ..B_ha](d - 1);
                  label B_ka:
                  markFree(b);
                  90024[0]:long = 90024[0]:long + 1L;
                  goto B_ea;
                  label B_ja:
                  let t0 = c & 1;
                  c = 0;
                  d = eqz(t0);
                  if (d) goto B_da;
                  markFree(b);
                  goto B_ea;
                  label B_ia:
                  c = 0;
                  d = 89984[0]:int + (b >> 2);
                  f = d[0]:ubyte & (2 << (b << 1 & 6) ^ -1);
                  d[0]:byte = f;
                  goto B_da;
                  label B_ha:
                  k = k + 16;
                  goto B_da;
                }
                90032[0]:long = 90032[0]:long + h;
                b = eqz(89840[0]:ubyte);
              }
              if (eqz(select_if(g_b, 1, b))) goto B_la;
              if (eqz(g_b) | e == 6) {
                runtime_printstring(67494, 5);
                6;
                if (g_b == 1) goto B_b;
              }
              d = select_if(d, 0, g_b);
              loop L_na {
                if (eqz(g_b) | e == 7) {
                  runtime_printnl();
                  7;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  c = 89992[0]:int;
                  b = d;
                }
                loop L_qa {
                  d = select_if(d, b >= c, g_b);
                  if (eqz(g_b)) {
                    if (d) goto B_sa;
                    d = state(b) & 255;
                  }
                  if (eqz(g_b)) {
                    br_table[B_ya, B_wa, B_va, ..B_ua](d - 1)
                    label B_ya:
                  }
                  if (eqz(g_b) | e == 8) {
                    runtime_printstring(67752, 1);
                    8;
                    if (g_b == 1) goto B_b;
                  }
                  if (eqz(g_b)) goto B_ra;
                  label B_wa:
                  if (eqz(g_b) | e == 9) {
                    runtime_printstring(67499, 1);
                    9;
                    if (g_b == 1) goto B_b;
                  }
                  if (eqz(g_b)) goto B_ra;
                  label B_va:
                  if (eqz(g_b) | e == 10) {
                    runtime_printstring(67500, 1);
                    10;
                    if (g_b == 1) goto B_b;
                  }
                  if (eqz(g_b)) goto B_ra;
                  label B_ua:
                  if (eqz(g_b) | e == 11) {
                    runtime_printstring(67501, 2);
                    11;
                    if (g_b == 1) goto B_b;
                  }
                  if (eqz(g_b)) goto B_ra;
                  label B_sa:
                  if (eqz(g_b)) {
                    b = eqz(89840[0]:ubyte);
                    if (b) goto B_la;
                  }
                  if (eqz(g_b) | e == 12) {
                    runtime_printstring(67345, 9);
                    12;
                    if (g_b == 1) goto B_b;
                  }
                  if (eqz(g_b) | e == 13) {
                    runtime_printnl();
                    13;
                    if (g_b == 1) goto B_b;
                  }
                  if (eqz(g_b)) goto B_la;
                  label B_ra:
                  if (eqz(g_b)) {
                    d = b + 1;
                    c = 89992[0]:int;
                    b = (b & 63) == 63;
                    if (b) continue L_na;
                    if (c == (b = d)) continue L_na;
                    continue L_qa;
                  }
                }
              }
              label B_la:
              if (eqz(g_b)) {
                c = 2;
                d = (89984[0]:int - 90704) / 3;
                b = d <= k + (i32_wrap_i64(h) << 4);
                if (b) goto B_i;
              }
              if (eqz(g_b) | e == 14) {
                runtime_printstring(67262, 19);
                14;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b) | e == 15) {
                runtime_printnl();
                15;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b) | e == 16) {
                runtime_growHeap();
                let t1 = 16;
                if (g_b == 1) goto B_b;
                b = t1;
              }
              if (eqz(g_b)) goto B_i;
              label B_ea:
              if (eqz(g_b)) {
                h = h + 1L;
                c = 1;
              }
              label B_da:
              if (eqz(g_b)) {
                b = b + 1;
                continue L_ba;
              }
            }
            label B_z:
            if (eqz(g_b)) {
              90041[0]:byte = 0;
              c = 89992[0]:int;
              b = 0;
            }
            loop L_ob {
              if (eqz(g_b)) {
                d = b >= c;
                if (d) continue L_x;
                d = (state(b) & 255) != 3;
              }
              if (select_if(g_b, 1, d)) {
                if (eqz(g_b) | e == 17) {
                  runtime_startMark(b);
                  17;
                  if (g_b == 1) goto B_b;
                }
                c = if (g_b) { c } else { 89992[0]:int }
              }
              if (eqz(g_b)) {
                b = b + 1;
                continue L_ob;
              }
            }
          }
          label B_k:
          if (eqz(g_b) | e == 18) {
            runtime_growHeap();
            let t2 = 18;
            if (g_b == 1) goto B_b;
            b = t2;
          }
          if (eqz(g_b)) {
            b = eqz(b & 1);
            if (b) goto B_h;
            c = 2;
          }
          label B_i:
          if (eqz(g_b)) {
            g = if (89992[0]:int == g) {
                  0
                } else {
                  if (eqz(state(g) & 255)) goto B_xb;
                  g + 1;
                }
            j = 0;
            goto B_g;
            label B_xb:
            b = g + 1;
            j = j + 1;
            d = j == i;
            if (eqz(d)) {
              g = b;
              goto B_g;
            }
            89988[0]:int = b;
            c = b - i;
            b = eqz(89840[0]:ubyte);
          }
          if (select_if(g_b, 1, b)) {
            if (eqz(g_b) | e == 19) {
              runtime_printstring(67294, 13);
              19;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | e == 20) {
              runtime_printspace();
              20;
              if (g_b == 1) goto B_b;
            }
            b = select_if(b, (c << 4) + 90704, g_b);
            if (eqz(g_b) | e == 21) {
              runtime_printptr(b);
              21;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | e == 22) {
              runtime_printspace();
              22;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | e == 23) {
              runtime_printint32(a);
              23;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | e == 24) {
              runtime_printnl();
              24;
              if (g_b == 1) goto B_b;
            }
          }
          if (eqz(g_b)) {
            setState(c, 1);
            b = g - i + 2;
            loop L_ic {
              if (b != 89988[0]:int) {
                setState(b, 2);
                b = b + 1;
                continue L_ic;
              }
            }
            b = (c << 4) + 90704;
            memory_fill(b, 0, a);
            return b;
          }
          label B_h:
          if (eqz(g_b) | e == 25) {
            runtime_runtimePanicAt(67281, 13);
            25;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { unreachable }
          label B_g:
          if (eqz(g_b)) {
            b = 89988[0]:int;
            continue L_f;
          }
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f[0]:int = a;
  f[1]:int = b;
  f[2]:int = c;
  f[3]:int = d;
  f[4]:int = g;
  f[5]:long@4 = h;
  f[7]:int = i;
  f[8]:int = j;
  f[9]:int = k;
  g_c[0]:int = g_c[0]:int + 40;
  return 0;
}

function runtime_slicePanic() { // func50
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67649, 18);
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

function String_1(a:{ a:int, b:int }, b:int) { // func51
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var h:int;
  var c:int;
  var d:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    e = f.e;
    f = f.f;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        h = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 32;
        stack_pointer = e;
        e.h = 0;
        e.f = 2;
        f = 90044[0]:int;
        90044[0]:int = e + 16;
        e.e = f;
        d = 7;
        g = b & 255;
        c = 66100;
      }
      if (eqz(g_b)) {
        br_table[B_e, B_ga, B_fa, B_ea, B_da, B_ca, B_ba, B_aa, B_z, B_y, B_x, B_w, B_v, B_u, B_t, B_s, B_r, B_q, B_p, B_o, B_n, B_m, B_l, B_k, B_j, B_i, B_h, ..B_g](
          g)
        label B_ga:
        d = 4;
        c = 66107;
        goto B_e;
        label B_fa:
        d = 3;
        c = 66111;
        goto B_e;
        label B_ea:
        d = 4;
        c = 66114;
        goto B_e;
        label B_da:
        d = 5;
        c = 66118;
        goto B_e;
        label B_ca:
        d = 5;
        c = 66123;
        goto B_e;
        label B_ba:
        d = 5;
        c = 66128;
        goto B_e;
        label B_aa:
        d = 4;
        c = 66133;
        goto B_e;
        label B_z:
        d = 5;
        c = 66137;
        goto B_e;
        label B_y:
        d = 6;
        c = 66142;
        goto B_e;
        label B_x:
        d = 6;
        c = 66148;
        goto B_e;
        label B_w:
        d = 6;
        c = 66154;
        goto B_e;
        label B_v:
        c = 66160;
        goto B_e;
        label B_u:
        c = 66167;
        goto B_e;
        label B_t:
        c = 66174;
        goto B_e;
        label B_s:
        d = 9;
        c = 66181;
        goto B_e;
        label B_r:
        d = 10;
        c = 66190;
        goto B_e;
        label B_q:
        d = 6;
        c = 66200;
        goto B_e;
        label B_p:
        d = 14;
        c = 66206;
        goto B_e;
        label B_o:
        d = 4;
        c = 66220;
        goto B_e;
        label B_n:
        d = 9;
        c = 66224;
        goto B_e;
        label B_m:
        d = 3;
        c = 66233;
        goto B_e;
        label B_l:
        d = 5;
        c = 66236;
        goto B_e;
        label B_k:
        d = 5;
        c = 66241;
        goto B_e;
        label B_j:
        d = 4;
        c = 66246;
        goto B_e;
        label B_i:
        d = 3;
        c = 66250;
        goto B_e;
        label B_h:
        d = 6;
        c = 66253;
        goto B_e;
        label B_g:
        c = e + 8;
        b = i32_extend8_s(b);
      }
      if (eqz(g_b) | eqz(h)) {
        internal_itoa_Itoa(c, b);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e.g = (c = e.c);
        b = e.d;
      }
      if (eqz(g_b) | h == 1) {
        runtime_stringConcat(e, 66259, 4, c, b);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = e.b;
        c = e.a;
      }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = f;
        a.b = d;
        a.a = c;
        stack_pointer = e + 32;
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

function runtime_unsafeSlicePanic() { // func52
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67667, 37);
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

function Kind(a:ubyte_ptr):int { // func53
  if (eqz(a)) { return 0 }
  if (a & 3) { return 21 }
  return a[0] & 31;
}

function Len_1(a:ubyte_ptr, b:{ a:int, b:int, c:int, d:int }, c:int):int { // func54
  var f:int;
  var d:int;
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d[0]:int;
    b = d[1]:int;
    c = d[2]:int;
    f = d[3]:int;
    d = d[4]:int;
  }
  e = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = stack_pointer - 32;
        stack_pointer = f;
        (f + 24)[0]:long = 0L;
        f[2]:long = 0L;
        f[3]:int = 4;
        d = 90044[0]:int;
        90044[0]:int = f + 8;
        f[2]:int = d;
        e = eqz(a);
      }
      if (eqz(g_b)) {
        if (e | (a & 3)) goto B_g;
        e = (a[0] & 31) - 17;
      }
      if (eqz(g_b)) {
        br_table[B_i, B_g, B_k, B_g, B_g, B_i, B_m, B_g, B_j, ..B_g](e)
        label B_m:
      }
      if (eqz(g_b) | eqz(g)) {
        Len(a);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        a = t0;
      }
      if (eqz(g_b)) goto B_e;
      label B_k:
      if (eqz(g_b)) {
        if (c & 1) { b = b.a }
        a = eqz(b);
        if (a) goto B_f;
        a = b.d;
        goto B_e;
      }
      label B_j:
      if (eqz(g_b)) {
        if (c & 1) { b = b.a }
        f[5]:int = b;
        a = eqz(b);
        if (a) goto B_f;
        a = b.c;
        goto B_e;
      }
      label B_i:
      if (eqz(g_b)) {
        a = b.b;
        goto B_e;
      }
      label B_g:
      if (eqz(g_b) | g == 1) {
        runtime_alloc(12);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        d = t1;
      }
      if (eqz(g_b)) {
        f[6]:int = d;
        f[7]:int = d;
        d[8]:byte = (a = Kind(a));
        d[1]:int = 3;
        d[0]:int = 66757;
      }
      if (eqz(g_b) | g == 2) {
        runtime_panic(87404, d);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      a = select_if(a, 0, g_b);
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = d;
        stack_pointer = f + 32;
        return a;
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
  e.d = f;
  e.e = d;
  g_c[0]:int = g_c[0]:int + 20;
  return 0;
}

function Index(a:{ a:int, b:int, c:byte }, b:ubyte_ptr, c:{ a:int, b:int }, d:int, e:int) { // func55
  var h:int_ptr;
  var g:int;
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
    j = f.h;
    k = f.i;
    l = f.j;
    b = f.b;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          i = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          h = stack_pointer - 112;
          stack_pointer = h;
          h[3] = 23;
          memory_fill(h + 16, 0, 92);
          h[2] = (l = 90044[0]:int);
          90044[0]:int = h + 8;
          g = eqz(b);
        }
        if (eqz(g_b)) {
          if (g | (b & 3)) goto B_i;
          g = (b[0] & 31) - 17;
        }
        if (eqz(g_b)) {
          br_table[B_l, B_i, B_i, B_i, B_i, B_n, B_k, ..B_i](g)
          label B_n:
          h[6] = (g = c.a);
          h[4] = g;
          c = e >= c.b;
          if (c) goto B_h;
        }
        if (eqz(g_b) | eqz(i)) {
          elem(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) {
          h[7] = b;
          h[8] = b;
          h[5] = b;
          c = (d & 2) | ((d & 12) != 0) << 3;
          d = c | 1;
        }
        if (eqz(g_b) | i == 1) {
          Size(b);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          c = t1;
        }
        if (eqz(g_b)) {
          c = g + c * e;
          goto B_e;
        }
        label B_l:
        if (eqz(g_b)) {
          h[11] = (b = c.a);
          h[10] = b;
          c = e >= c.b;
          if (c) goto B_g;
          d = d & 2;
          c = (b + e)[0]:ubyte;
          b = 85660;
          goto B_e;
        }
        label B_k:
        if (eqz(g_b) | i == 2) {
          elem(b);
          let t2 = 2;
          if (g_b == 1) goto B_b;
          g = t2;
        }
        if (eqz(g_b)) { h[13] = g }
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
          k = t4;
        }
        if (eqz(g_b)) {
          if (k) goto B_x;
          c = 0;
        }
        if (eqz(g_b) | i == 5) {
          elem(b);
          let t5 = 5;
          if (g_b == 1) goto B_b;
          b = t5;
        }
        if (eqz(g_b)) goto B_e;
        label B_x:
        j = select_if(j, g < 5, g_b);
        if (eqz(g_b)) {
          if (j) goto B_aa;
          e = e * g;
          c = e + c;
        }
        if (eqz(g_b) | i == 6) {
          elem(b);
          let t6 = 6;
          if (g_b == 1) goto B_b;
          b = t6;
        }
        if (eqz(g_b)) goto B_e;
        label B_aa:
        if (eqz(g_b)) {
          j = d & 1;
          if (eqz(eqz(j) & k <= 4)) {
            c = e * g + c;
            if (j) goto B_f;
            h[21] = (c = internal_reflectlite_loadValue(c, g));
            goto B_f;
          }
          c = select_if(c >> (e = e * g << 3), 0, e <= 31) &
              select_if(-1 >> 32 - (g << 3), 0, g);
        }
        if (eqz(g_b) | i == 7) {
          elem(b);
          let t7 = 7;
          if (g_b == 1) goto B_b;
          b = t7;
        }
        if (eqz(g_b)) goto B_e;
        label B_i:
        if (eqz(g_b) | i == 8) {
          runtime_alloc(12);
          let t8 = 8;
          if (g_b == 1) goto B_b;
          a = t8;
        }
        if (eqz(g_b)) {
          h[25] = a;
          h[26] = a;
          a.c = (b = Kind(b));
          a.b = 5;
          a.a = 66696;
        }
        if (eqz(g_b) | i == 9) {
          runtime_panic(87404, a);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_h:
        if (eqz(g_b) | i == 10) {
          runtime_panic(86928, 66640);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_g:
        if (eqz(g_b) | i == 11) {
          runtime_panic(86928, 66688);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        if (eqz(g_b)) { h[18] = c }
        if (eqz(g_b) | i == 12) {
          elem(b);
          let t9 = 12;
          if (g_b == 1) goto B_b;
          b = t9;
        }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = l;
          a.c = d;
          a.b = c;
          a.a = b;
          stack_pointer = h + 112;
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
  f.h = j;
  f.i = k;
  f.j = l;
  g_c[0]:int = g_c[0]:int + 40;
}

function internal_reflectlite_loadValue(a:ubyte_ptr, b:int):int { // func56
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

function IsNil(a:ubyte_ptr, b:{ a:int, b:int, c:byte }, c:{ a:int, b:int, c:int, d:int }):int { // func57
  var d:int;
  var e:{ a:int, b:int, c:int, d:int }
  var g:int;
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    d = e.c;
    e = e.d;
  }
  c = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = stack_pointer - 32;
        stack_pointer = d;
        (d + 24)[0]:long = 0L;
        d[2]:long = 0L;
        d[3]:int = 4;
        e = 90044[0]:int;
        90044[0]:int = d + 8;
        d[2]:int = e;
        g = eqz(a);
      }
      a = {
            if (eqz(g_b)) {
              if (g) goto B_j;
              if (a & 3) goto B_m;
              br_table[B_m, B_m, B_g, B_m, B_k, B_j, B_l, B_m, ..B_j](
                (a[0] & 31) - 18);
              label B_m:
              a = eqz(c & 1);
              if (a) goto B_f;
              goto B_g;
              label B_l:
              a = eqz(b);
              if (a) goto B_h;
              b = b + 4;
              goto B_g;
              label B_k:
              if (b) goto B_g;
              goto B_h;
              label B_j:
            }
            if (eqz(g_b) | eqz(f)) {
              runtime_alloc(12);
              let t0 = 0;
              if (g_b == 1) goto B_b;
              b = t0;
            }
            if (eqz(g_b)) {
              d[6]:int = b;
              d[7]:int = b;
              b.c = (a = Kind(a));
              b.b = 5;
              b.a = 66752;
            }
            if (eqz(g_b) | f == 1) {
              runtime_panic(87404, b);
              1;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) { unreachable }
            label B_h:
            1;
            if (eqz(g_b)) goto B_e;
            label B_g:
            if (eqz(g_b)) { b = b.a }
            label B_f:
            select_if(a, eqz(b), g_b);
            label B_e:
          }
      if (eqz(g_b)) {
        90044[0]:int = e;
        stack_pointer = d + 32;
        return a;
      }
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

function UnsafePointer(a:ubyte_ptr, b:int_ptr, c:{ a:int, b:int, c:int, d:int }):int { // func58
  var d:{ a:int, b:int, c:int, d:int, e:long, f:int, g:int }
  var e:{ a:int, b:int, c:byte }
  var f:int;
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    e = d.c;
    d = d.d;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 32;
          stack_pointer = d;
          (d + 24)[0]:long = 0L;
          d.e = 0L;
          d.d = 4;
          e = 90044[0]:int;
          90044[0]:int = d + 8;
          d.c = e;
          f = eqz(a);
        }
        if (eqz(g_b)) {
          if (f) goto B_j;
          if (a & 3) goto B_k;
          f = a[0] & 31;
          if (f > 25) goto B_j;
          if (1 << f & 36438016) goto B_k;
          if (f == 22) goto B_h;
          if (f != 24) goto B_j;
          a = eqz(b);
          if (a) goto B_g;
          a = b[0];
          if (a) goto B_e;
          b = b + 4;
          goto B_f;
          label B_k:
          a = b;
          if (eqz(c & 1)) goto B_e;
          goto B_f;
          label B_j:
        }
        if (eqz(g_b) | eqz(g)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          e = t0;
        }
        if (eqz(g_b)) {
          d.f = e;
          d.g = e;
          e.c = (a = Kind(a));
          e.b = 13;
          e.a = 66772;
        }
        if (eqz(g_b) | g == 1) {
          runtime_panic(87404, e);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_h:
        if (eqz(select_if(g_b, 1, b))) goto B_f;
        label B_g:
        if (eqz(g_b) | g == 2) {
          runtime_nilPanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        if (eqz(g_b)) { a = b[0] }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = e;
          stack_pointer = d + 32;
          return a;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = e;
  c.d = d;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function Elem_1(a:{ a:int, b:int, c:byte }, b:ubyte_ptr, c:{ a:int, b:int }, d:int) { // func59
  var g:int_ptr;
  var e:{ a:int, b:int, c:byte }
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
    i = f.g;
    b = f.b;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer + -64;
          stack_pointer = g;
          g[1] = 13;
          memory_fill(g + 8, 0, 52);
          g[0] = (i = 90044[0]:int);
          90044[0]:int = g;
          e = eqz(b);
        }
        if (eqz(g_b)) {
          if (e) goto B_f;
          e = b & 3;
        }
        if (eqz(g_b)) {
          if (e) goto B_j;
          e = (b[0] & 31) - 20;
          br_table[B_h, B_j, ..B_f](e);
          label B_j:
          g[2] = (e = if (d & 1) { c.a } else { c });
          g[5] = e;
          if (eqz(e)) {
            b = 0;
            e = 0;
            d = 0;
            goto B_e;
          }
          c = d & 2;
          d = c | 1;
        }
        if (eqz(g_b) | eqz(h)) {
          elem(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) goto B_e;
        label B_h:
        if (eqz(g_b)) {
          d = d & 254;
          e = c.b;
          b = c.a;
          goto B_e;
        }
        label B_f:
        if (eqz(g_b) | h == 1) {
          runtime_alloc(12);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          e = t1;
        }
        if (eqz(g_b)) {
          g[13] = e;
          g[14] = e;
          e.c = (a = Kind(b));
          e.b = 4;
          e.a = 66590;
        }
        if (eqz(g_b) | h == 2) {
          runtime_panic(87404, e);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = i;
          a.c = d;
          a.b = e;
          a.a = b;
          stack_pointer = g - -64;
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
  f.g = i;
  g_c[0]:int = g_c[0]:int + 28;
}

function Field(a:{ a:int, b:int, c:byte }, b:ubyte_ptr, c:int, d:int, e:{ a:int, b:int, c:byte }) { // func60
  var g:int;
  var h:int;
  var j:int;
  var k:int;
  var i:int;
  var l:int;
  var m:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
    f = g_c[0]:int;
    a = f.a;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    h = f.g;
    k = f.h;
    i = f.i;
    l = f.j;
    m = f.k;
    b = f.b;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = stack_pointer - 112;
        stack_pointer = g;
        g[11]:int = 15;
        memory_fill(g + 48, 0, 60);
        g[10]:int = (l = 90044[0]:int);
        90044[0]:int = g + 40;
        h = eqz(b);
      }
      if (eqz(g_b)) {
        if (h) goto B_f;
        h = b & 3;
        if (h) goto B_f;
        h = (b[0] & 31) != 26;
        if (h) goto B_f;
      }
      if (eqz(g_b) | eqz(j)) {
        rawField(g, b, e);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[22]:int = (e = g[4]:int);
        g[15]:int = (h = g[2]:int);
        g[14]:int = g[0]:int;
        g[19]:int = e;
        g[18]:int = h;
        g[17]:int = g[5]:int;
        g[16]:int = e;
        k = g[7]:int;
        m = g[3]:int;
        h = g[32]:ubyte;
      }
      if (eqz(g_b) | j == 1) {
        Size(b);
        let t0 = 1;
        if (g_b == 1) goto B_b;
        i = t0;
      }
      if (eqz(g_b) | j == 2) {
        Size(e);
        let t1 = 2;
        if (g_b == 1) goto B_b;
        b = t1;
      }
      if (eqz(g_b)) {
        g[21]:int = c;
        g[24]:int = c;
        g[20]:int = c;
        if (eqz(eqz(d & 1) & b < 5)) {
          b = c + k;
          goto B_e;
        }
        if (eqz(b)) {
          b = 0;
          goto B_e;
        }
        if (i >= 5) {
          b = internal_reflectlite_loadValue(c + k, b);
          goto B_e;
        }
        b = -1 >> 32 - (b << 3) & select_if(c >> (b = k << 3), 0, b <= 31);
        goto B_e;
      }
      label B_f:
      if (eqz(g_b) | j == 3) {
        runtime_alloc(12);
        let t2 = 3;
        if (g_b == 1) goto B_b;
        e = t2;
      }
      if (eqz(g_b)) {
        g[12]:int = e;
        g[13]:int = e;
        e.c = (a = Kind(b));
        e.b = 5;
        e.a = 66594;
      }
      if (eqz(g_b) | j == 4) {
        runtime_panic(87404, e);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = l;
        a.b = b;
        a.a = e;
        a.c = (d & 249) | select_if(select_if(4, 8, h & 1), 2, m);
        stack_pointer = g + 112;
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
  f.h = k;
  f.i = i;
  f.j = l;
  f.k = m;
  g_c[0]:int = g_c[0]:int + 44;
}

function internal_reflectlite_New(a:{ a:int, b:int }, b:{ a:ubyte, b:int }) { // func61
  var e:int;
  var c:int_ptr;
  var g:int;
  var f:int;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    e = d.d;
    g = d.e;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 32;
          stack_pointer = e;
          (e + 16)[0]:long = 0L;
          c = e + 24;
          c[0] = 0;
          e[1]:long = 0L;
          e[1]:int = 5;
          g = 90044[0]:int;
          90044[0]:int = e;
          e[0]:int = g;
        }
        if (eqz(g_b) | eqz(f)) {
          isNamed(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          c = t0;
        }
        c = select_if(c, c & 1, g_b);
        c = {
              if (eqz(g_b)) {
                if (c) goto B_g;
                c = eqz(b);
                if (c) goto B_g;
                c = b & 3;
                br_table[B_k, B_j, B_j, B_i, ..B_j](c);
                label B_k:
                c = b.a & 31;
                if (c == 26) goto B_g;
                c = c != 21;
                if (c) goto B_g;
                label B_j:
                b + 1;
                goto B_f;
                label B_i:
              }
              if (eqz(g_b) | f == 1) {
                runtime_panic(86928, 66520);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_g:
              if (g_b) { c } else { b.b }
              label B_f:
            }
        if (eqz(g_b)) {
          e[3]:int = c;
          e[5]:int = c;
          e[2]:int = c;
        }
        if (eqz(g_b) | f == 2) {
          Size(b);
          let t1 = 2;
          if (g_b == 1) goto B_b;
          b = t1;
        }
        if (eqz(g_b) | f == 3) {
          runtime_alloc(b);
          let t2 = 3;
          if (g_b == 1) goto B_b;
          b = t2;
        }
        if (eqz(g_b)) {
          90044[0]:int = g;
          a.b = b;
          a.a = c;
          stack_pointer = e + 32;
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
  d.d = e;
  d.e = g;
  g_c[0]:int = g_c[0]:int + 20;
}

function Interface(a:{ a:int, b:int }, b:ubyte_ptr, c:{ a:int, b:int }, d:int) { // func62
  var g:int;
  var h:int;
  var f:int;
  var i:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    h = e.g;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          i = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 48;
          stack_pointer = g;
          (g + 24)[0]:long = 0L;
          (g + 32)[0]:long = 0L;
          (g + 40)[0]:int = 0;
          g[2]:long = 0L;
          g[3]:int = 7;
          h = 90044[0]:int;
          90044[0]:int = g + 8;
          g[2]:int = h;
          f = eqz(d & 2);
        }
        if (eqz(g_b)) {
          if (f) goto B_g;
          f = eqz(b);
          if (f) goto B_i;
          f = b & 3;
          if (f) goto B_i;
          f = (b[0] & 31) != 20;
          if (f) goto B_i;
          f = c.b;
          b = c.a;
          goto B_e;
          label B_i:
          d = eqz(d & 1);
          if (d) goto B_f;
        }
        if (eqz(g_b) | eqz(i)) {
          Size(b);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b)) {
          d = d > 4;
          if (d) goto B_f;
          f = 0;
          c = c - 1;
        }
        if (eqz(g_b) | i == 1) {
          Size(b);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          d = t1;
        }
        if (eqz(g_b)) {
          loop L_n {
            if (eqz(d)) goto B_e;
            f = (c + d)[0]:ubyte | f << 8;
            d = d - 1;
            continue L_n;
          }
          unreachable;
        }
        label B_g:
        if (eqz(g_b) | i == 2) {
          runtime_panic(86928, 66744);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        f = select_if(f, c, g_b);
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = h;
          a.b = f;
          a.a = b;
          stack_pointer = g + 48;
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
  g_c[0]:int = g_c[0]:int + 28;
}

function Bool(a:ubyte_ptr, b:int, c:int):int { // func63
  var d:int;
  var e:{ a:int, b:int, c:byte }
  var g:int;
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    d = g_c[0]:int;
    a = d[0]:int;
    e = d[1]:int;
    d = d[2]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 16;
          stack_pointer = d;
          d[3]:int = 0;
          d[1]:long@4 = 2L;
          e = 90044[0]:int;
          90044[0]:int = d;
          d[0]:int = e;
          g = eqz(a);
        }
        if (eqz(g_b)) {
          if (g | (a & 3)) goto B_g;
          if ((a[0] & 31) != 1) goto B_g;
          if (c & 1) {
            a = b[0]:ubyte;
            goto B_e;
          }
          a = b != 0;
          goto B_e;
          label B_g:
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          e = t0;
        }
        if (eqz(g_b)) {
          d[2]:int = e;
          d[3]:int = e;
          e.c = (a = Kind(a));
          e.b = 4;
          e.a = 66574;
        }
        if (eqz(g_b) | f == 1) {
          runtime_panic(87404, e);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = e;
          stack_pointer = d + 16;
          return a;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b[0]:int = a;
  b[1]:int = e;
  b[2]:int = d;
  g_c[0]:int = g_c[0]:int + 12;
  return 0;
}

function Float(a:ubyte_ptr, b:int, c:int):double { // func64
  var d:int;
  var e:{ a:int, b:int, c:byte }
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    d = g_c[0]:int;
    a = d[0]:int;
    e = d[1]:int;
    d = d[2]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 16;
          stack_pointer = d;
          d[3]:int = 0;
          d[1]:long@4 = 2L;
          e = 90044[0]:int;
          90044[0]:int = d;
          d[0]:int = e;
          if (eqz(a) | (a & 3)) goto B_e;
          let t0 = {
                     br_table[B_h, B_g, ..B_e]((a[0] & 31) - 13)
                     label B_h:
                     if (c & 1) {
                       f64_promote_f32(b[0]:float);
                       goto B_f;
                     }
                     f64_promote_f32(f32_reinterpret_i32(b));
                     goto B_f;
                     label B_g:
                     b[0]:double;
                     label B_f:
                   }
          90044[0]:int = e;
          stack_pointer = d + 16;
          return t0;
          label B_e:
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_alloc(12);
          let t1 = 0;
          if (g_b == 1) goto B_b;
          e = t1;
        }
        if (eqz(g_b)) {
          d[2]:int = e;
          d[3]:int = e;
          e.c = Kind(a);
          e.b = 5;
          e.a = 66599;
        }
        if (eqz(g_b) | f == 1) {
          runtime_panic(87404, e);
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
  b[1]:int = e;
  b[2]:int = d;
  g_c[0]:int = g_c[0]:int + 12;
  return 0.0;
}

function Uint(a:ubyte_ptr, b:int, c:int):long { // func65
  var e:int;
  var d:{ a:int, b:int, c:byte }
  var h:int;
  var g:int;
  var f:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    b = g_c[0]:int;
    a = b[0]:int;
    d = b[2]:int;
    e = b[3]:int;
    f = b[4]:long@4;
    b = b[1]:int;
  }
  c = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 16;
        stack_pointer = e;
        e[3]:int = 0;
        e[1]:long@4 = 2L;
        d = 90044[0]:int;
        90044[0]:int = e;
        e[0]:int = d;
        h = eqz(a);
      }
      f = 
        {
          if (eqz(g_b)) {
            if (h | (a & 3)) goto B_h;
            br_table[B_l, B_n, B_m, B_k, B_i, B_o, ..B_h]((a[0] & 31) - 7)
            label B_o:
            if (c & 1) goto B_j;
            goto B_f;
            label B_n:
            if (eqz(c & 1)) goto B_f;
            b[0]:ubyte;
            goto B_e;
            label B_m:
            if (eqz(c & 1)) goto B_f;
            b[0]:ushort;
            goto B_e;
            label B_l:
            if (eqz(c & 1)) goto B_f;
            goto B_j;
            label B_k:
            if (eqz(c & 1)) goto B_f;
            label B_j:
            b[0]:uint;
            goto B_e;
            label B_i:
            b[0]:long;
            goto B_e;
            label B_h:
          }
          if (eqz(g_b) | eqz(g)) {
            runtime_alloc(12);
            let t0 = 0;
            if (g_b == 1) goto B_b;
            d = t0;
          }
          if (eqz(g_b)) {
            e[2]:int = d;
            e[3]:int = d;
            d.c = Kind(a);
            d.b = 4;
            d.a = 66768;
          }
          if (eqz(g_b) | g == 1) {
            runtime_panic(87404, d);
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { unreachable }
          label B_f:
          select_if(f, i64_extend_i32_u(b), g_b);
          label B_e:
        }
      if (eqz(g_b)) {
        90044[0]:int = d;
        stack_pointer = e + 16;
        return f;
      }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c[0]:int = a;
  c[1]:int = b;
  c[2]:int = d;
  c[3]:int = e;
  c[4]:long@4 = f;
  g_c[0]:int = g_c[0]:int + 24;
  return 0L;
}

function Int(a:ubyte_ptr, b:int, c:int):long { // func66
  var e:int;
  var d:{ a:int, b:int, c:byte }
  var h:int;
  var g:int;
  var f:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    b = g_c[0]:int;
    a = b[0]:int;
    d = b[2]:int;
    e = b[3]:int;
    f = b[4]:long@4;
    b = b[1]:int;
  }
  c = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 16;
        stack_pointer = e;
        e[3]:int = 0;
        e[1]:long@4 = 2L;
        d = 90044[0]:int;
        90044[0]:int = e;
        e[0]:int = d;
        h = eqz(a);
      }
      f = {
            if (eqz(g_b)) {
              if (h | (a & 3)) goto B_h;
              br_table[B_n, B_m, B_l, B_k, B_i, ..B_h]((a[0] & 31) - 2)
              label B_n:
              if (c & 1) goto B_j;
              goto B_f;
              label B_m:
              if (c & 1) {
                b[0]:byte;
                goto B_e;
              }
              i64_extend8_s(i64_extend_i32_u(b));
              goto B_e;
              label B_l:
              if (c & 1) {
                b[0]:short;
                goto B_e;
              }
              i64_extend16_s(i64_extend_i32_u(b));
              goto B_e;
              label B_k:
              if (eqz(c & 1)) goto B_f;
              label B_j:
              b[0]:int;
              goto B_e;
              label B_i:
              b[0]:long;
              goto B_e;
              label B_h:
            }
            if (eqz(g_b) | eqz(g)) {
              runtime_alloc(12);
              let t0 = 0;
              if (g_b == 1) goto B_b;
              d = t0;
            }
            if (eqz(g_b)) {
              e[2]:int = d;
              e[3]:int = d;
              d.c = Kind(a);
              d.b = 3;
              d.a = 66701;
            }
            if (eqz(g_b) | g == 1) {
              runtime_panic(87404, d);
              1;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) { unreachable }
            label B_f:
            select_if(f, i64_extend_i32_s(b), g_b);
            label B_e:
          }
      if (eqz(g_b)) {
        90044[0]:int = d;
        stack_pointer = e + 16;
        return f;
      }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c[0]:int = a;
  c[1]:int = b;
  c[2]:int = d;
  c[3]:int = e;
  c[4]:long@4 = f;
  g_c[0]:int = g_c[0]:int + 24;
  return 0L;
}

function Complex(a:{ a:double, b:double }, b:int, c:int) { // func67
  var e:int;
  var d:{ a:int, b:int, c:byte }
  var i:int;
  var h:int;
  var f:double;
  var g:double;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    b = g_c[0]:int;
    a = b[0]:int;
    d = b[2]:int;
    e = b[3]:int;
    f = b[4]:double@4;
    g = b[6]:double@4;
    b = b[1]:int;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 16;
          stack_pointer = e;
          e[3]:int = 0;
          e[1]:long@4 = 2L;
          d = 90044[0]:int;
          90044[0]:int = e;
          e[0]:int = d;
          i = eqz(b);
        }
        if (eqz(g_b)) {
          if (i | (b & 3)) goto B_g;
          br_table[B_i, B_h, ..B_g]((b[0]:ubyte & 31) - 15)
          label B_i:
          f = f64_promote_f32(c[1]:float);
          g = f64_promote_f32(c[0]:float);
          goto B_e;
          label B_h:
          f = c[1]:double;
          g = c[0]:double;
          goto B_e;
          label B_g:
        }
        if (eqz(g_b) | eqz(h)) {
          runtime_alloc(12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b)) {
          e[2]:int = d;
          e[3]:int = d;
          d.c = (a = Kind(b));
          d.b = 7;
          d.a = 66583;
        }
        if (eqz(g_b) | h == 1) {
          runtime_panic(87404, d);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = d;
          a.b = f;
          a.a = g;
          stack_pointer = e + 16;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c[0]:int = a;
  c[1]:int = b;
  c[2]:int = d;
  c[3]:int = e;
  c[4]:double@4 = f;
  c[6]:double@4 = g;
  g_c[0]:int = g_c[0]:int + 32;
}

function String_2(a:{ a:int, b:int }, b:ubyte_ptr, c:{ a:int, b:int }) { // func68
  var d:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var g:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    g = f.e;
    f = f.f;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 48;
          stack_pointer = d;
          d[9]:long@4 = 0L;
          d[7]:long@4 = 3L;
          f = 90044[0]:int;
          90044[0]:int = d + 24;
          d[6]:int = f;
          g = eqz(b);
        }
        if (eqz(g_b)) {
          if (g) goto B_g;
          g = b & 3;
          if (g) goto B_g;
          g = (b[0] & 31) != 17;
          if (g) goto B_g;
          b = c.b;
          c = c.a;
          goto B_e;
          label B_g:
          c = d + 16;
        }
        if (eqz(g_b) | eqz(e)) {
          String(c, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[9]:int = (b = d[4]:int);
          g = d[5]:int;
          c = d + 8;
        }
        if (eqz(g_b) | e == 1) {
          runtime_stringConcat(c, 66760, 1, b, g);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[10]:int = (b = d[2]:int);
          c = d[3]:int;
        }
        if (eqz(g_b) | e == 2) {
          runtime_stringConcat(d, b, c, 66761, 7);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[0]:int;
          b = d[1]:int;
        }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = f;
          a.b = b;
          a.a = c;
          stack_pointer = d + 48;
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
  e.f = f;
  g_c[0]:int = g_c[0]:int + 24;
}

function Pointer(a:int, b:int, c:int):int { // func69
  var f:int;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  var e:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    f = e.d;
    e = e.e;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 16;
          stack_pointer = f;
          e = 90044[0]:int;
          90044[0]:int = f;
        }
        if (eqz(g_b) | eqz(d)) {
          UnsafePointer(a, b, c);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          c = t0;
        }
        if (eqz(g_b)) {
          90044[0]:int = e;
          stack_pointer = f + 16;
          return c;
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
  d.d = f;
  d.e = e;
  g_c[0]:int = g_c[0]:int + 20;
  return 0;
}

function interface_Error_func_string_Error_invoke(a:{ a:int, b:int }, b:int, c:int) { // func70
  var d:int_ptr;
  var e:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  var f:int;
  var h:int;
  var j:int;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    i = g_c[0]:int;
    a = i.a;
    b = i.b;
    c = i.c;
    d = i.d;
    e = i.e;
    f = i.f;
    h = i.g;
    j = i.h;
    i = i.i;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 400;
          stack_pointer = d;
          d[59] = 39;
          memory_fill(d + 240, 0, 156);
          d[58] = (i = 90044[0]:int);
          90044[0]:int = d + 232;
          e = c != 87508;
        }
        b = {
              if (eqz(g_b)) {
                if (e) goto B_g;
                if (eqz(b)) goto B_e;
                d[60] = b[8]:int;
                d[61] = (c = b[2]:int);
                f = d + 96;
                h = b[3]:int;
                e = b[9]:int;
              }
              if (eqz(g_b) | eqz(g)) {
                time_quote(f, c, h);
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[62] = (c = d[24]);
                f = d[25];
              }
              if (eqz(g_b)) {
                if (e) goto B_k;
                e = d + 72;
              }
              if (eqz(g_b) | g == 1) {
                runtime_stringConcat(e, 68256, 13, c, f);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[63] = (c = d[18]);
                f = d[19];
                e = d - -64;
              }
              if (eqz(g_b) | g == 2) {
                runtime_stringConcat(e, c, f, 68252, 4);
                2;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[64] = (c = d[16]);
                d[65] = (e = b[0]:int);
                h = d + 56;
                j = b[1]:int;
                f = d[17];
              }
              if (eqz(g_b) | g == 3) {
                time_quote(h, e, j);
                3;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[66] = (e = d[14]);
                j = d[15];
                h = d + 48;
              }
              if (eqz(g_b) | g == 4) {
                runtime_stringConcat(h, c, f, e, j);
                4;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[67] = (c = d[12]);
                f = d[13];
                e = d + 40;
              }
              if (eqz(g_b) | g == 5) {
                runtime_stringConcat(e, c, f, 68237, 15);
                5;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[68] = (c = d[10]);
                d[69] = (e = b[6]:int);
                h = d + 32;
                j = b[7]:int;
                f = d[11];
              }
              if (eqz(g_b) | g == 6) {
                time_quote(h, e, j);
                6;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[70] = (e = d[8]);
                j = d[9];
                h = d + 24;
              }
              if (eqz(g_b) | g == 7) {
                runtime_stringConcat(h, c, f, e, j);
                7;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[71] = (c = d[6]);
                f = d[7];
                e = d + 16;
              }
              if (eqz(g_b) | g == 8) {
                runtime_stringConcat(e, c, f, 68252, 4);
                8;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[72] = (c = d[4]);
                d[73] = (e = b[4]:int);
                f = d[5];
                h = d + 8;
                b = b[5]:int;
              }
              if (eqz(g_b) | g == 9) {
                time_quote(h, e, b);
                9;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[74] = (b = d[2]);
                e = d[3];
              }
              if (eqz(g_b) | g == 10) {
                runtime_stringConcat(d, c, f, b, e);
                10;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[1];
                d[0];
                goto B_f;
              }
              label B_k:
              e = select_if(e, d + 88, g_b);
              if (eqz(g_b) | g == 11) {
                runtime_stringConcat(e, 68256, 13, c, f);
                11;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[75] = (c = d[22]);
                d[76] = (e = b[8]:int);
                f = d + 80;
                h = d[23];
                b = b[9]:int;
              }
              if (eqz(g_b) | g == 12) {
                runtime_stringConcat(f, c, h, e, b);
                12;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[21];
                d[20];
                goto B_f;
              }
              label B_g:
              e = select_if(e, c != 87492, g_b);
              if (eqz(g_b)) {
                if (e) goto B_ka;
                if (eqz(b)) goto B_e;
                c = d + 104;
                b = b[0]:int;
              }
              if (eqz(g_b) | g == 13) {
                Error(c, b);
                13;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[27];
                d[26];
                goto B_f;
              }
              label B_ka:
              e = select_if(e, c != 87428, g_b);
              if (eqz(g_b)) {
                if (e) goto B_oa;
                if (eqz(b)) goto B_e;
                d[79] = (c = b[0]:int);
                f = b[1]:int;
                e = d + 144;
              }
              if (eqz(g_b) | g == 14) {
                runtime_stringConcat(e, c, f, 68818, 1);
                14;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[80] = (c = d[36]);
                d[81] = (e = b[2]:int);
                h = d[37];
                j = b[3]:int;
                f = d + 136;
              }
              if (eqz(g_b) | g == 15) {
                runtime_stringConcat(f, c, h, e, j);
                15;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[82] = (c = d[34]);
                f = d[35];
                e = d + 128;
              }
              if (eqz(g_b) | g == 16) {
                runtime_stringConcat(e, c, f, 68819, 2);
                16;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[83] = (c = d[32]);
                d[84] = (e = b[4]:int);
                d[85] = (b = b[5]:int);
                h = d + 120;
                f = d[33];
              }
              if (eqz(g_b) | g == 17) {
                interface_Error_func_string_Error_invoke(h, b, e);
                17;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[86] = (b = d[30]);
                h = d[31];
                e = d + 112;
              }
              if (eqz(g_b) | g == 18) {
                runtime_stringConcat(e, c, f, b, h);
                18;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[29];
                d[28];
                goto B_f;
              }
              label B_oa:
              e = select_if(e, c != 87404, g_b);
              if (eqz(g_b)) {
                if (e) goto B_ab;
                if (eqz(b)) goto B_e;
                d[88] = (c = b[0]:int);
                f = b[8]:ubyte;
                e = b[1]:int;
              }
              if (eqz(g_b)) {
                if (f) goto B_cb;
                b = d + 160;
              }
              if (eqz(g_b) | g == 19) {
                runtime_stringConcat(b, 66910, 17, c, e);
                19;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[89] = (b = d[40]);
                e = d[41];
                c = d + 152;
              }
              if (eqz(g_b) | g == 20) {
                runtime_stringConcat(c, b, e, 66896, 14);
                20;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[39];
                d[38];
                goto B_f;
              }
              label B_cb:
              f = select_if(f, d + 200, g_b);
              if (eqz(g_b) | g == 21) {
                runtime_stringConcat(f, 66910, 17, c, e);
                21;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[90] = (c = d[50]);
                f = d[51];
                e = d + 192;
              }
              if (eqz(g_b) | g == 22) {
                runtime_stringConcat(e, c, f, 66927, 4);
                22;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[91] = (c = d[48]);
                e = d[49];
                f = d + 184;
                b = b[8]:ubyte;
              }
              if (eqz(g_b) | g == 23) {
                String_1(f, b);
                23;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[92] = (b = d[46]);
                h = d[47];
                f = d + 176;
              }
              if (eqz(g_b) | g == 24) {
                runtime_stringConcat(f, c, e, b, h);
                24;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[93] = (b = d[44]);
                e = d[45];
                c = d + 168;
              }
              if (eqz(g_b) | g == 25) {
                runtime_stringConcat(c, b, e, 66931, 6);
                25;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[43];
                d[42];
                goto B_f;
              }
              label B_ab:
              e = select_if(e, c != 87388, g_b);
              if (eqz(g_b)) {
                if (e) goto B_sb;
                if (eqz(b)) goto B_e;
                d[95] = (c = b[0]:int);
                e = d + 216;
                b = b[1]:int;
              }
              if (eqz(g_b) | g == 26) {
                runtime_stringConcat(e, 66528, 30, c, b);
                26;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[96] = (b = d[54]);
                e = d[55];
                c = d + 208;
              }
              if (eqz(g_b) | g == 27) {
                runtime_stringConcat(c, b, e, 66558, 16);
                27;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                c = d[53];
                d[52];
                goto B_f;
              }
              label B_sb:
              if (eqz(g_b)) {
                if (c == 87340) {
                  if (eqz(b)) goto B_e;
                  c = b[1]:int;
                  b[0]:int;
                  goto B_f;
                }
                if (c != 87280) goto B_e;
                c = d + 224;
              }
              if (eqz(g_b) | g == 28) {
                Error(c, b);
                28;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                b
              } else {
                c = d[57];
                d[56];
              }
              label B_f:
            }
        if (eqz(g_b)) {
          90044[0]:int = i;
          a.b = c;
          a.a = b;
          stack_pointer = d + 400;
          return ;
        }
        label B_e:
        if (eqz(g_b) | g == 29) {
          runtime_nilPanic();
          29;
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
  g.h = j;
  g.i = i;
  g_c[0]:int = g_c[0]:int + 36;
}

function time_quote(a:{ a:int, b:int }, b:int, c:int) { // func71
  var d:int;
  var i:int;
  var f:ubyte_ptr;
  var l:int;
  var h:byte_ptr;
  var e:int;
  var j:int;
  var k:int;
  var n:int;
  var m:int;
  var o:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 52;
    g = g_c[0]:int;
    a = g.a;
    c = g.c;
    d = g.d;
    e = g.e;
    f = g.f;
    i = g.g;
    h = g.h;
    j = g.i;
    k = g.j;
    m = g.k;
    n = g.l;
    o = g.m;
    b = g.b;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        l = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = stack_pointer - 208;
        stack_pointer = d;
        d[37]:int = 13;
        memory_fill(d + 160, 0, 44);
        d[36]:int = (n = 90044[0]:int);
        90044[0]:int = d + 144;
        i = c + 2;
        f = i <= 0;
      }
      if (eqz(select_if(g_b, 1, f))) goto B_e;
      if (eqz(g_b) | eqz(l)) {
        runtime_alloc(i);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        h = t0;
      }
      if (eqz(g_b)) {
        h[0] = 34;
        d[38]:int = h;
        d[34]:int = 0;
        k = 1;
      }
      loop L_h {
        if (eqz(g_b)) {
          d[39]:int = h;
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
            j = e + 2 >= c;
            if (j) goto B_l;
            if (e + 3 > c | e > -4) goto B_e;
            f = select_if(3, 1, runtime_stringEqual(b + e, 3, 68269, 3) & 1);
            goto B_l;
          }
          j = d + 48;
        }
        if (eqz(g_b) | l == 2) {
          runtime_stringFromUnicode(j, f);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[44]:int = d[12]:int;
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
          j = d + 141;
          e = d + 80;
        }
        if (eqz(g_b) | l == 3) {
          runtime_sliceAppend(e, h, j, k, i, 1, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[45]:int = (h = d[20]:int);
          k = d[21]:int;
          i = d[22]:int;
        }
        label B_t:
        if (eqz(g_b)) {
          d[46]:int = h;
          e = d + 72;
        }
        if (eqz(g_b) | l == 4) {
          runtime_stringFromUnicode(e, f);
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[47]:int = (f = d[18]:int);
          j = d[19]:int;
          e = d + 56;
        }
        if (eqz(g_b) | l == 5) {
          runtime_sliceAppend(e, h, f, k, i, j, 1);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[48]:int = (h = d[14]:int);
          i = d[16]:int;
          k = d[15]:int;
          continue L_h;
        }
        label B_m:
        if (eqz(g_b)) {
          d[140]:byte = 34;
          c = d + 140;
          b = d + 104;
        }
        if (eqz(g_b) | l == 6) {
          runtime_sliceAppend(b, h, c, k, i, 1, 1);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[49]:int = (f = d[26]:int);
          c = d[27]:int;
          b = d + 96;
        }
        if (eqz(g_b) | l == 7) {
          runtime_stringFromBytes(b, f, c);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = n;
          f = d[25]:int;
          a.a = d[24]:int;
          a.b = f;
          stack_pointer = d + 208;
          return ;
        }
        label B_l:
        if (eqz(g_b)) {
          j = c - e;
          m = j > c;
          m = select_if(0, j, m);
          j = select_if(f, 0, f > 0);
          f = b + e;
        }
        loop L_ja {
          if (eqz(g_b)) {
            d[40]:int = h;
            e = eqz(j);
            if (e) continue L_h;
            e = d + 32;
          }
          if (eqz(g_b) | l == 8) {
            runtime_sliceAppend(e, h, 82694, k, i, 2, 1);
            8;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d[41]:int = (h = d[8]:int);
            i = eqz(m);
          }
          if (eqz(g_b)) {
            if (i) goto B_na;
            i = d[10]:int;
            k = d[9]:int;
            d[143]:byte = ((f[0] >> 4) + 82700)[0]:ubyte;
            o = d + 143;
            e = d + 16;
          }
          if (eqz(g_b) | l == 9) {
            runtime_sliceAppend(e, h, o, k, i, 1, 1);
            9;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d[42]:int = (h = d[4]:int);
            d[142]:byte = ((f[0] & 15) + 82700)[0]:ubyte;
            i = d + 142;
            k = d[5]:int;
            e = d[6]:int;
          }
          if (eqz(g_b) | l == 10) {
            runtime_sliceAppend(d, h, i, k, e, 1, 1);
            10;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d[43]:int = (h = d[0]:int);
            j = j - 1;
            m = m - 1;
            f = f + 1;
            i = d[2]:int;
            k = d[1]:int;
            continue L_ja;
          }
          label B_na:
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
  g.g = i;
  g.h = h;
  g.i = j;
  g.j = k;
  g.k = m;
  g.l = n;
  g.m = o;
  g_c[0]:int = g_c[0]:int + 52;
}

function Error(a:{ a:int, b:int }, b:int) { // func72
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var d:{ a:int, b:int, c:int, d:int, e:int }
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var f:int;
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
          c = stack_pointer - 32;
          stack_pointer = c;
          c.h = 0;
          c.f = 2;
          d = 90044[0]:int;
          90044[0]:int = c + 16;
          c.e = d;
          f = c + 8;
        }
        if (eqz(g_b) | eqz(e)) {
          internal_itoa_Itoa(f, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c.g = (b = c.c);
          f = c.d;
        }
        if (eqz(g_b) | e == 1) {
          runtime_stringConcat(c, 68010, 6, b, f);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = d;
          d = c.b;
          a.a = c.a;
          a.b = d;
          stack_pointer = c + 32;
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
  e.d = f;
  e.e = d;
  g_c[0]:int = g_c[0]:int + 20;
}

function internal_task_Pause() { // func73
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
          a = 89832[0]:int;
          c = eqz(a);
        }
        if (eqz(g_b)) {
          if (c) goto B_f;
          c = a[9];
          if (eqz(c)) goto B_f;
          if (c[0] != -1204030091) goto B_e;
          a = a + 28;
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
          runtime_runtimePanic(67056, 14);
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

function runtime_runtimePanic(a:int, b:{ a:int, b:int }) { // func74
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

function Unlock(a:int) { // func75
  var c:int;
  var e:{ a:int, b:int, c:int, d:int }
  var b:int_ptr;
  var f:int;
  var d:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    e = e.d;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 32;
          stack_pointer = c;
          c[5]:long@4 = 0L;
          c[3]:long@4 = 3L;
          e = 90044[0]:int;
          90044[0]:int = c + 8;
          c[2]:int = e;
          b = eqz(a);
        }
        if (eqz(g_b)) {
          if (b) goto B_f;
          b = eqz(a[0]:ubyte);
        }
        if (eqz(g_b)) {
          if (b) goto B_h;
          c[6]:int = (b = a[1]:int);
          c[4]:int = b;
          f = eqz(b);
        }
        if (eqz(g_b)) {
          if (f) goto B_j;
          a[1]:int = (f = b[0]);
          c[5]:int = f;
          b[0] = 0;
        }
        if (eqz(g_b) | eqz(d)) {
          Push(b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_j:
        if (eqz(g_b)) {
          a[0]:byte = 0;
          goto B_e;
        }
        label B_h:
        if (eqz(g_b) | d == 1) {
          runtime_panic(86928, 67048);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        if (eqz(g_b) | d == 2) {
          runtime_nilPanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = e;
          stack_pointer = c + 32;
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
  d.d = e;
  g_c[0]:int = g_c[0]:int + 16;
}

function Push(a:int_ptr) { // func76
  var b:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          var c:int_ptr = 90072[0]:int;
          if (c) { c[0] = a }
          90072[0]:int = a;
          if (a) {
            a[0] = 0;
            if (eqz(90068[0]:int)) { 90068[0]:int = a }
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

function runtime_memequal(a:int, b:int, c:int, d:int):int { // func77
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

function runtime_hash32(a:int, b:int, c:{ a:ubyte, b:ubyte, c:ubyte }, d:int_ptr@1):int { // func78
  var e:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b | ((eqz(a) & b != 0) | b < 0))) {
          var f:int = b & 2147483644;
          e = (b * -962287725 ^ c) ^ -1130422988;
          d = a;
          c = b;
          loop L_d {
            if (c >= 4) {
              e = (d[0] + e) * -962287725;
              var g:int = e >> 16;
              e = e ^ g;
              c = c - 4;
              d = d + 4;
              continue L_d;
            }
          }
          c = a + f;
          br_table[B_g, B_h, B_i, ..B_f]((b & 3) - 1)
          label B_i:
          e = e + (c.c << 16);
          label B_h:
          e = e + (c.b << 8);
          label B_g:
          c = (e + c.a) * -962287725;
          e = c >> 24 ^ c;
          label B_f:
          return e;
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

function runtime_runtimePanicAt(a:int, b:{ a:int, b:int }) { // func79
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
          runtime_printstring(67556, 22);
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

function runtime_printstring(a:ubyte_ptr, b:int) { // func80
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

function runtime_printnl() { // func81
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

function runtime_putchar(a:int) { // func82
  var b:int;
  var d:int;
  var c:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = 89844[0]:int;
          b = d > 119;
        }
        if (eqz(g_b)) {
          if (b) goto B_d;
          89844[0]:int = (b = d + 1);
          (d + 89848)[0]:byte = a;
          a = (a & 255) == 10;
        }
        if (eqz(g_b)) {
          if (eqz(a) & d != 119) goto B_f;
          data[2]:int = b;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_fd_write(1, 87636, 1, 90048);
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { 89844[0]:int = 0 }
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

function runtime_printptr(a:int) { // func83
  var c:{ a:int, b:int, c:int }
  var d:int;
  var b:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    b = g_c[0]:int;
    a = b.a;
    d = b.b;
    b = b.c;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (select_if(g_b, 1, a)) {
          if (eqz(g_b) | eqz(c)) {
            runtime_printstring(86513, 3);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_d;
        }
        if (eqz(g_b) | c == 1) {
          runtime_putchar(48);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 2) {
          runtime_putchar(120);
          2;
          if (g_b == 1) goto B_b;
        }
        d = select_if(d, 8, g_b);
        loop L_i {
          if (eqz(g_b)) {
            if (eqz(d)) goto B_d;
            b = a >> 28;
            b = select_if(b | 48, b + 87, a < -1610612736);
          }
          if (eqz(g_b) | c == 3) {
            runtime_putchar(b);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d = d - 1;
            a = a << 4;
            continue L_i;
          }
        }
        label B_d:
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = d;
  c.c = b;
  g_c[0]:int = g_c[0]:int + 12;
}

export function malloc(a:int):int { // func84
  var b:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var e:int;
  var g:int;
  var d:int;
  var f:int;
  var c:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c.a;
    e = c.d;
    d = c.c;
    b = c.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          b = stack_pointer - 32;
          stack_pointer = b;
          b.f = 2;
          e = 90044[0]:int;
          90044[0]:int = b + 16;
          b.e = e;
          g = eqz(a);
          d = 0;
        }
        if (eqz(g_b)) {
          if (g) goto B_f;
          d = a < 0;
          if (d) goto B_e;
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_alloc(a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b)) {
          b.g = d;
          b.h = d;
          b.c = a;
          b.b = a;
          b.a = d;
          b.d = d;
          a = b + 12;
        }
        if (eqz(g_b) | f == 1) {
          runtime_hashmapBinarySet(87644, a, b);
          1;
          if (g_b == 1) goto B_b;
        }
        label B_f:
        if (eqz(g_b)) {
          90044[0]:int = e;
          stack_pointer = b + 32;
          return d;
        }
        label B_e:
        if (eqz(g_b) | f == 2) {
          runtime_slicePanic();
          2;
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
  c.d = e;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

function runtime_hashmapBinarySet(a:int_ptr, b:int, c:int) { // func85
  var f:int;
  var e:int;
  var g:int;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    e = d.d;
    g = d.e;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (select_if(g_b, 1, a)) {
          if (eqz(g_b) | eqz(f)) {
            runtime_nilMapPanic();
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { unreachable }
        }
        if (eqz(g_b)) {
          g = a[1];
          e = a[3];
        }
        if (eqz(g_b) | f == 1) {
          runtime_hash32(b, e, g, a);
          let t0 = 1;
          if (g_b == 1) goto B_b;
          e = t0;
        }
        if (eqz(g_b) | f == 2) {
          runtime_hashmapSet(a, b, c, e);
          2;
          if (g_b == 1) goto B_b;
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
  d.d = e;
  d.e = g;
  g_c[0]:int = g_c[0]:int + 20;
}

export function free(a:int) { // func86
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
          runtime_hashmapBinaryGet(87644, b, d, 12);
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
          runtime_panic(86928, 67096);
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

function runtime_hashmapBinaryGet(a:int_ptr, b:int, c:int, d:int):int { // func87
  var g:int;
  var f:int;
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
        if (eqz(g_b)) {
          if (eqz(a)) {
            memory_fill(c, 0, d);
            return 0;
          }
          f = a[1];
          d = a[3];
        }
        if (eqz(g_b) | eqz(g)) {
          runtime_hash32(b, d, f, a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b) | g == 1) {
          runtime_hashmapGet(a, b, c, d);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          a = t1;
        }
        if (eqz(g_b)) { return a }
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
  g_c[0]:int = g_c[0]:int + 20;
  return 0;
}

function runtime_hashmapBinaryDelete(a:int) { // func88
  var e:int;
  var h:int;
  var i:int;
  var d:int_ptr;
  var g:int;
  var c:int;
  var k:int;
  var j:int;
  var f:int;
  var l:int;
  var n:int;
  var m:int;
  var b:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 48;
    b = g_c[0]:int;
    a = b.a;
    d = b.b;
    g = b.e;
    f = b.f;
    h = b.g;
    j = b.h;
    k = b.i;
    l = b.j;
    m = b.k;
    n = b.l;
    c = b.c;
    e = b.d;
  }
  b = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 32;
        stack_pointer = e;
        (e + 24)[0]:long = 0L;
        e[2]:long = 0L;
        e[1]:int = 6;
        h = 90044[0]:int;
        90044[0]:int = e;
        e[0]:int = h;
        g = data[4]:int;
        d = data[6]:int;
      }
      if (eqz(g_b) | eqz(i)) {
        runtime_hash32(a, d, g, c);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        c = t0;
      }
      if (eqz(g_b)) {
        j = select_if(1, c >> 24, g = c < 16777216);
        d = runtime_hashmapBucketAddrForHash(87644, c);
      }
      loop L_h {
        if (eqz(g_b)) {
          e[2]:int = d;
          e[3]:int = d;
          if (eqz(d)) goto B_g;
          k = d + 12;
          c = 0;
        }
        loop L_k {
          if (eqz(g_b)) {
            g = c == 8;
            if (g) goto B_l;
            e[4]:int = (g = k + (l = data[6]:int) * c);
            f = j != (m = c + d)[0]:ubyte;
          }
          if (eqz(g_b)) {
            if (f) goto B_n;
            e[5]:int = (n = data[9]:int);
            e[6]:int = (f = data[10]:int);
            if (eqz(f)) goto B_j;
          }
          if (eqz(g_b) | i == 1) {
            call_indirect(a, g, l, n, f);
            let t1 = 1;
            if (g_b == 1) goto B_b;
            f = t1;
          }
          if (eqz(g_b)) {
            f = eqz(f & 1);
            if (f) goto B_n;
            m[0]:byte = 0;
            memory_fill(g, 0, data[6]:int);
            memory_fill(d + (data[6]:int << 3) + (g = data[7]:int) * c + 12, 0, g);
            data[5]:int = data[5]:int - 1;
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
      if (eqz(g_b) | i == 2) {
        runtime_nilPanic();
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      if (eqz(g_b)) {
        90044[0]:int = h;
        stack_pointer = e + 32;
      }
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
  b.e = g;
  b.f = f;
  b.g = h;
  b.h = j;
  b.i = k;
  b.j = l;
  b.k = m;
  b.l = n;
  g_c[0]:int = g_c[0]:int + 48;
}

export function calloc(a:int, b:{ a:int, b:int, c:int }):int { // func89
  var d:int;
  var e:int;
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    d = c.b;
    c = c.c;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 16;
          stack_pointer = d;
          c = 90044[0]:int;
          90044[0]:int = d;
          a = a * b;
        }
        if (eqz(g_b) | eqz(e)) {
          malloc(a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          90044[0]:int = c;
          stack_pointer = d + 16;
          return a;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = d;
  b.c = c;
  g_c[0]:int = g_c[0]:int + 12;
  return 0;
}

export function realloc(a:int, b:int):int { // func90
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var h:int;
  var g:int;
  var f:int;
  var e:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    e = d.d;
    f = d.e;
    h = d.f;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 32;
          stack_pointer = c;
          c.f = 2;
          h = 90044[0]:int;
          90044[0]:int = (e = c + 16);
          c.e = h;
          f = 0;
        }
        if (select_if(g_b, 1, b)) {
          if (eqz(g_b) | eqz(g)) {
            free(a);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_g;
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
        if (eqz(g_b)) {
          c.g = f;
          c.h = f;
          e = eqz(a);
        }
        if (eqz(g_b)) {
          if (e) goto B_m;
          c.d = a;
          e = c + 12;
        }
        if (eqz(g_b) | g == 2) {
          runtime_hashmapBinaryGet(87644, e, c, 12);
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
          runtime_hashmapBinarySet(87644, a, c);
          4;
          if (g_b == 1) goto B_b;
        }
        label B_g:
        if (eqz(g_b)) {
          90044[0]:int = h;
          stack_pointer = c + 32;
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
          runtime_panic(86928, 67128);
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
  d.f = h;
  g_c[0]:int = g_c[0]:int + 24;
  return 0;
}

export function start() { // func91
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int }
  var e:int;
  var a:int;
  var b:int_ptr;
  var c:{ a:int, b:int, c:int, d:int }
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c.a;
    d = c.c;
    f = c.d;
    b = c.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer + -64;
          stack_pointer = d;
          d.b = 13;
          memory_fill(d + 8, 0, 52);
          d.a = (f = 90044[0]:int);
          90044[0]:int = d;
          89836[0]:int = (a = memory_size() << 16);
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_printstring(67806, 11);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 1) {
          runtime_printnl();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 2) {
          runtime_calculateHeapAddresses();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d.d = (a = 89984[0]:int);
          d.c = a;
          memory_fill(a, 0, b = 89836[0]:int - a);
        }
        if (eqz(g_b) | e == 3) {
          arc4random();
          let t0 = 3;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b) | e == 4) {
          arc4random();
          let t1 = 4;
          if (g_b == 1) goto B_b;
          b = t1;
        }
        if (eqz(g_b)) { data[0]:int = (a = a | 1) }
        if (eqz(g_b) | e == 5) {
          runtime_RegisterTask(67817, 9);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 6) {
          runtime_alloc(56);
          let t2 = 6;
          if (g_b == 1) goto B_b;
          a = t2;
        }
        if (eqz(g_b)) {
          a[6]:int = 0;
          a[5]:int = 1;
          d.e = a;
        }
        if (eqz(g_b) | e == 7) {
          runtime_alloc(65536);
          let t3 = 7;
          if (g_b == 1) goto B_b;
          b = t3;
        }
        if (eqz(g_b)) {
          a[9]:int = b;
          b[0] = -1204030091;
          a[8]:int = b + 65536;
          a[7]:int = b + 4;
          d.g = b;
          d.h = b;
          d.f = b;
        }
        if (eqz(g_b) | e == 8) {
          Push(a);
          8;
          if (g_b == 1) goto B_b;
        }
        loop L_r {
          if (eqz(g_b)) { a = 90064[0]:ubyte }
          if (eqz(g_b)) {
            if (a) goto B_v;
            d.l = (a = 90068[0]:int);
            d.i = a;
            b = eqz(a);
            if (b) goto B_u;
            90068[0]:int = (b = a[0]:int);
            d.j = b;
            d.k = (b = 90072[0]:int);
            b = a != b;
            if (eqz(b)) { 90072[0]:int = 0 }
            a[0]:int = 0;
          }
          if (eqz(g_b) | e == 9) {
            runtime_scheduleLogTask(67800, 6, a);
            9;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = 89832[0]:int;
            89832[0]:int = a;
            d.m = b;
            c = a[4]:int;
            a[4]:int = 90044[0]:int;
            90044[0]:int = c;
            c = a + 20;
            if (a[40]:ubyte) {
              tinygo_rewind(c);
              goto B_t;
            }
            tinygo_launch(c);
            a[40]:byte = 1;
            goto B_t;
          }
          label B_v:
          if (eqz(g_b)) { dummy() }
          if (eqz(g_b) | e == 10) {
            runtime_proc_exit(0);
            10;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            90044[0]:int = f;
            stack_pointer = d - -64;
            return ;
          }
          label B_u:
          if (eqz(g_b) | e == 11) {
            runtime_waitForEvents();
            11;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { unreachable }
          label B_t:
          if (eqz(g_b)) {
            c = a[4]:int;
            a[4]:int = 90044[0]:int;
            89832[0]:int = b;
            90044[0]:int = c;
            d.n = (b = a[7]:int);
            d.o = (a = a[8]:int);
            a = a >= b;
            if (a) continue L_r;
          }
        }
        if (eqz(g_b) | e == 12) {
          runtime_runtimePanic(67056, 14);
          12;
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
  c.d = f;
  g_c[0]:int = g_c[0]:int + 16;
}

function runtime_calculateHeapAddresses() { // func92
  var b:int;
  var d:int;
  var e:int;
  var c:{ a:int, b:int, c:int, d:int }
  var a:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    b = c.a;
    d = c.b;
    e = c.c;
    c = c.d;
  }
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          a = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          b = 89836[0]:int;
          d = b - 90704;
          e = (d - -64) / 65;
          89984[0]:int = (c = b - e);
          89992[0]:int = (c = c - 90704 >> 4);
          b = eqz(89840[0]:ubyte);
        }
        if (select_if(g_b, 1, b)) {
          if (eqz(g_b) | eqz(a)) {
            runtime_printstring(67136, 18);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 1) {
            runtime_printspace();
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 2) {
            runtime_printptr(90704);
            2;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 3) {
            runtime_printnl();
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { b = 89836[0]:int }
          if (eqz(g_b) | a == 4) {
            runtime_printstring(67154, 18);
            4;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 5) {
            runtime_printspace();
            5;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 6) {
            runtime_printptr(b);
            6;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 7) {
            runtime_printnl();
            7;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 8) {
            runtime_printstring(67172, 18);
            8;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 9) {
            runtime_printspace();
            9;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 10) {
            runtime_printptr(d);
            10;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 11) {
            runtime_printnl();
            11;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 12) {
            runtime_printstring(67190, 18);
            12;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 13) {
            runtime_printspace();
            13;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 14) {
            runtime_printptr(e);
            14;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 15) {
            runtime_printnl();
            15;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { d = 89984[0]:int }
          if (eqz(g_b) | a == 16) {
            runtime_printstring(67208, 18);
            16;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 17) {
            runtime_printspace();
            17;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 18) {
            runtime_printptr(d);
            18;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 19) {
            runtime_printnl();
            19;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 20) {
            runtime_printstring(67226, 18);
            20;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 21) {
            runtime_printspace();
            21;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 22) {
            runtime_printptr(c);
            22;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 23) {
            runtime_printnl();
            23;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 24) {
            runtime_printstring(67244, 18);
            24;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 25) {
            runtime_printspace();
            25;
            if (g_b == 1) goto B_b;
          }
          b = select_if(b, e << 2, g_b);
          if (eqz(g_b) | a == 26) {
            runtime_printptr(b);
            26;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | a == 27) {
            runtime_printnl();
            27;
            if (g_b == 1) goto B_b;
          }
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  a = g_c[0]:int;
  a.a = b;
  a.b = d;
  a.c = e;
  a.d = c;
  g_c[0]:int = g_c[0]:int + 16;
}

function runtime_RegisterTask(a:int, b:{ a:int, b:int, c:int, d:int }) { // func93
  var c:int_ptr;
  var e:int;
  var d:{ a:int, b:int, c:int, d:int }
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    d = g_c[0]:int;
    a = d.a;
    c = d.b;
    e = d.c;
    d = d.d;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          f = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 32;
          stack_pointer = c;
          c[5] = 1;
          e = 90044[0]:int;
          90044[0]:int = c + 16;
          c[4] = e;
          c[6] = (d = 89832[0]:int);
          c[1] = b;
          c[0] = a;
          c[3] = d;
          a = c + 12;
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_hashmapBinarySet(87684, a, c);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | f == 1) {
          runtime_scheduleLogTask(67800, 6, d);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = e;
          stack_pointer = c + 32;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = c;
  b.c = e;
  b.d = d;
  g_c[0]:int = g_c[0]:int + 16;
}

function runtime_run_1_gowrapper(a:int) { // func94
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

function runtime_scheduleLogTask(a:int, b:int, c:int) { // func95
  var d:int;
  var h:int;
  var f:int;
  var k:int;
  var g:long;
  var j:long;
  var n:int;
  var m:int;
  var i:int;
  var l:int;
  var p:int;
  var o:int;
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int + -64;
    e = g_c[0]:int;
    a = e[0]:int;
    c = e[2]:int;
    d = e[3]:int;
    f = e[4]:int;
    g = e[5]:long@4;
    i = e[7]:int;
    j = e[8]:long@4;
    k = e[10]:int;
    l = e[11]:int;
    m = e[12]:int;
    n = e[13]:int;
    o = e[14]:int;
    p = e[15]:int;
    b = e[1]:int;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 208;
          stack_pointer = d;
          d[31]:int = 9;
          memory_fill(d + 128, 0, 36);
          d[30]:int = (o = 90044[0]:int);
          90044[0]:int = d + 120;
          d[29]:int = c;
          f = d + 168;
          c = d + 116;
        }
        if (eqz(g_b) | eqz(h)) {
          runtime_hashmapBinaryGet(87684, c, f, 8);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          c = t0;
        }
        if (eqz(g_b)) {
          d[32]:int = (c = d[42]:int);
          k = d[43]:int;
          f = eqz(k);
        }
        c = {
              if (eqz(g_b)) {
                if (f) goto B_h;
                f = d + 104;
              }
              if (eqz(g_b) | h == 1) {
                runtime_stringConcat(f, 67752, 1, a, b);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[33]:int = (b = d[26]:int);
                f = d[27]:int;
                a = d + 96;
              }
              if (eqz(g_b) | h == 2) {
                runtime_stringConcat(a, b, f, 68818, 1);
                2;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[34]:int = (b = d[24]:int);
                f = d[25]:int;
                a = d + 88;
              }
              if (eqz(g_b) | h == 3) {
                runtime_stringConcat(a, b, f, c, k);
                3;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[35]:int = (c = d[22]:int);
                b = d[23]:int;
                a = d + 80;
              }
              if (eqz(g_b) | h == 4) {
                runtime_stringConcat(a, c, b, 68818, 1);
                4;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                k = d[21]:int;
                d[20]:int;
                goto B_g;
              }
              label B_h:
              c = select_if(c, d + 72, g_b);
              if (eqz(g_b) | h == 5) {
                runtime_stringConcat(c, 67752, 1, a, b);
                5;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[39]:int = (c = d[18]:int);
                b = d[19]:int;
                a = d - -64;
              }
              if (eqz(g_b) | h == 6) {
                runtime_stringConcat(a, c, b, 68818, 1);
                6;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[40]:int = (c = d[16]:int);
                b = d[17]:int;
                a = d + 56;
              }
              if (eqz(g_b) | h == 7) {
                runtime_stringConcat(a, c, b, 67753, 13);
                7;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                c
              } else {
                k = d[15]:int;
                d[14]:int;
              }
              label B_g:
            }
        if (eqz(g_b)) {
          d[36]:int = c;
          (d + 192)[0]:long = 0L;
          (d + 200)[0]:int = 0;
          b = 90044[0]:int;
          90044[0]:int = d + 168;
          d[23]:long = 0L;
          d[43]:int = 7;
          d[42]:int = b;
          a = d + 48;
        }
        if (eqz(g_b) | h == 8) {
          runtime_ticks();
          let t1 = 8;
          if (g_b == 1) goto B_b;
          g = t1;
        }
        if (eqz(g_b)) {
          g = g - 89968[0]:long;
          g = (g ^ (g = g >> 63L)) - g;
          j = g / 1000000000L;
        }
        if (eqz(g_b) | h == 9) {
          runtime_u64ToString(a, j);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[44]:int = (i = d[12]:int);
          l = d[13]:int;
          d[45]:int =
            (a = {
                   if ((g = g - j * 1000000000L) <= 0L) {
                     f = 9;
                     67707;
                     goto B_ca;
                   }
                   if (g < 10L) {
                     f = 8;
                     67716;
                     goto B_ca;
                   }
                   if (g < 100L) {
                     f = 7;
                     67724;
                     goto B_ca;
                   }
                   if (g < 1000L) {
                     f = 6;
                     67731;
                     goto B_ca;
                   }
                   if (g < 10000L) {
                     f = 5;
                     67737;
                     goto B_ca;
                   }
                   if (g < 100000L) {
                     f = 4;
                     67742;
                     goto B_ca;
                   }
                   if (g < 1000000L) {
                     f = 3;
                     67746;
                     goto B_ca;
                   }
                   if (g < 10000000L) {
                     f = 2;
                     67749;
                     goto B_ca;
                   }
                   select_if(67751, 0, f = g < 100000000L);
                   label B_ca:
                 });
          n = d + 40;
          g = g * 10L;
        }
        if (eqz(g_b) | h == 10) {
          runtime_u64ToString(n, g);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[46]:int = (n = d[10]:int);
          p = d[11]:int;
          m = d + 32;
        }
        if (eqz(g_b) | h == 11) {
          runtime_stringConcat(m, i, l, 67704, 1);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[47]:int = (i = d[8]:int);
          m = d[9]:int;
          l = d + 24;
        }
        if (eqz(g_b) | h == 12) {
          runtime_stringConcat(l, i, m, a, f);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[48]:int = (a = d[6]:int);
          i = d[7]:int;
          f = d + 16;
        }
        if (eqz(g_b) | h == 13) {
          runtime_stringConcat(f, a, i, n, p);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[49]:int = (a = d[4]:int);
          i = d[5]:int;
          f = d + 8;
        }
        if (eqz(g_b) | h == 14) {
          runtime_stringConcat(f, a, i, 67705, 2);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = b;
          d[37]:int = (b = d[2]:int);
          a = d[3]:int;
        }
        if (eqz(g_b) | h == 15) {
          runtime_stringConcat(d, c, k, b, a);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[38]:int = (c = d[0]:int);
          a = d[1]:int;
        }
        if (eqz(g_b) | h == 16) {
          schedular_log(c, a);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = o;
          stack_pointer = d + 208;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e[0]:int = a;
  e[1]:int = b;
  e[2]:int = c;
  e[3]:int = d;
  e[4]:int = f;
  e[5]:long@4 = g;
  e[7]:int = i;
  e[8]:long@4 = j;
  e[10]:int = k;
  e[11]:int = l;
  e[12]:int = m;
  e[13]:int = n;
  e[14]:int = o;
  e[15]:int = p;
  g_c[0]:int = g_c[0]:int - -64;
}

function runtime_waitForEvents() { // func96
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanic(67830, 27);
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

function runtime_run_1() { // func97
  var a:int;
  var e:int;
  var j:long;
  var d:int;
  var g:int_ptr;
  var i:int;
  var f:int;
  var h:{ a:int, b:int }
  var b:int;
  var l:long;
  var m:long;
  var k:int;
  var c:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 56;
    c = g_c[0]:int;
    a = c[0]:int;
    d = c[2]:int;
    f = c[3]:int;
    g = c[4]:int;
    h = c[5]:int;
    i = c[6]:int;
    j = c[7]:long@4;
    k = c[9]:int;
    l = c[10]:long@4;
    m = c[12]:long@4;
    b = c[1]:int;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          a = stack_pointer - 240;
          stack_pointer = a;
          a[23]:int = 36;
          memory_fill(a + 104, 0, 136);
          a[22]:int = (k = 90044[0]:int);
          90044[0]:int = (d = a + 88);
          b = 0;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_RegisterTask(67826, 4);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { 89836[0]:int = (d = memory_size() << 16) }
        if (eqz(g_b) | e == 1) {
          runtime_ticks();
          let t0 = 1;
          if (g_b == 1) goto B_b;
          j = t0;
        }
        if (eqz(g_b)) {
          89968[0]:long = j;
          wasm_call_ctors();
          d = a + 48;
        }
        if (eqz(g_b) | e == 2) {
          runtime_sliceAppend(d, 0, 87792, 0, 0, 1, 16);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90656[0]:long@4 = (j = a[13]:long@4);
          90652[0]:int = (g = a[12]:int);
          a[24]:int = g;
          a[25]:int = (i = 90052[0]:int);
          d = eqz(i);
        }
        if (eqz(g_b)) {
          if (eqz(d)) {
            d = 90060[0]:int;
            b = 90056[0]:int;
            goto B_l;
          }
          a[18]:int = 0;
          a[20]:int = 0;
          f = a + 80;
          d = a + 72;
        }
        if (eqz(g_b) | e == 3) {
          runtime_args_sizes_get(f, d);
          let t1 = 3;
          if (g_b == 1) goto B_b;
          d = t1;
        }
        if (eqz(g_b)) {
          d = a[20]:int;
          if (eqz(d)) {
            i = 0;
            d = 0;
            goto B_k;
          }
          f = d > 1073741823;
        }
        if (eqz(g_b)) {
          if (f) goto B_s;
          f = d << 2;
        }
        if (eqz(g_b) | e == 4) {
          runtime_alloc(f);
          let t2 = 4;
          if (g_b == 1) goto B_b;
          h = t2;
        }
        if (eqz(g_b)) {
          a[26]:int = h;
          b = a[18]:int;
          f = b < 0;
          if (f) goto B_s;
        }
        if (eqz(g_b) | e == 5) {
          runtime_alloc(b);
          let t3 = 5;
          if (g_b == 1) goto B_b;
          g = t3;
        }
        if (eqz(g_b)) {
          a[27]:int = g;
          a[28]:int = g;
          f = eqz(b);
          if (f) goto B_r;
        }
        if (eqz(g_b) | e == 6) {
          runtime_args_get(h, g);
          let t4 = 6;
          if (g_b == 1) goto B_b;
          f = t4;
        }
        if (eqz(g_b)) {
          f = d > 536870911;
          if (f) goto B_s;
          f = d << 3;
        }
        if (eqz(g_b) | e == 7) {
          runtime_alloc(f);
          let t5 = 7;
          if (g_b == 1) goto B_b;
          i = t5;
        }
        if (eqz(g_b)) {
          90052[0]:int = i;
          90056[0]:int = d;
          90060[0]:int = d;
          a[29]:int = i;
          g = i;
          f = d;
          loop L_ca {
            if (f) {
              a[33]:int = (b = h.a);
              a[31]:int = b;
              a[30]:int = b;
              (g + 4)[0]:int = strlen(b);
              g[0] = b;
              a[32]:int = i;
              h = h + 4;
              g = g + 8;
              f = f - 1;
              continue L_ca;
            } else {
              b = d;
              goto B_l;
            }
            unreachable;
          }
          unreachable;
        }
        label B_s:
        if (eqz(g_b) | e == 8) {
          runtime_slicePanic();
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_r:
        if (eqz(g_b) | e == 9) {
          runtime_lookupPanic();
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_l:
        if (eqz(g_b)) { a[34]:int = i }
        label B_k:
        if (eqz(g_b)) {
          90664[0]:int = i;
          90668[0]:int = b;
          90672[0]:int = d;
          a[35]:int = i;
          g = 0;
        }
        if (eqz(g_b) | e == 10) {
          runtime_ticks();
          let t6 = 10;
          if (g_b == 1) goto B_b;
          j = t6;
        }
        if (eqz(g_b)) { 89840[0]:byte = 1 }
        if (eqz(g_b) | e == 11) {
          runtime_Gosched();
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 12) {
          fmt_newPrinter();
          let t7 = 12;
          if (g_b == 1) goto B_b;
          h = t7;
        }
        if (eqz(g_b)) {
          a[36]:int = h;
          b = 1;
        }
        loop L_pa {
          if (eqz(g_b)) {
            d = eqz(b & 1);
            if (d) goto B_qa;
            d = eqz(g & 1);
          }
          if (select_if(select_if(g_b, 1, d), 0, eqz(g_b) | e == 13)) {
            writeByte(h, 32);
            13;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | e == 14) {
            printArg(h, 86928, 86920, 118);
            14;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = 1;
            b = 0;
            continue L_pa;
          }
          label B_qa:
        }
        if (eqz(g_b) | e == 15) {
          writeByte(h, 10);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a[37]:int = (b = h.a);
          f = a + 32;
          d = h.b;
        }
        if (eqz(g_b) | e == 16) {
          Write(f, 87808, b, d);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a[42]:int = (b = a[9]:int);
          a[40]:int = b;
          a[43]:int = (g = a[10]:int);
          a[38]:int = b;
          a[41]:int = g;
          a[39]:int = g;
        }
        if (eqz(g_b) | e == 17) {
          free_1(h);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 18) {
          runtime_Gosched();
          18;
          if (g_b == 1) goto B_b;
        }
        g = select_if(g, 4001, g_b);
        loop L_bb {
          if (eqz(g_b) | e == 19) {
            runtime_Gosched();
            19;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d = eqz(g);
            if (d) goto B_cb;
          }
          if (eqz(g_b) | e == 20) {
            runtime_alloc(13107);
            let t8 = 20;
            if (g_b == 1) goto B_b;
            h = t8;
          }
          if (eqz(g_b)) { a[44]:int = h }
          if (eqz(g_b) | e == 21) {
            runtime_Gosched();
            21;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | e == 22) {
            runtime_Gosched();
            22;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | e == 23) {
            runtime_alloc(12);
            let t9 = 23;
            if (g_b == 1) goto B_b;
            b = t9;
          }
          if (eqz(g_b)) {
            b[1]:long@4 = 56294136361779L;
            b[0]:int = h;
            90688[0]:int = b;
            90692[0]:byte = 1;
            a[45]:int = b;
            g = g - 1;
            continue L_bb;
          }
          label B_cb:
        }
        if (eqz(g_b)) {
          a[46]:int = (d = 89984[0]:int);
          l = 90032[0]:long;
          j = 90008[0]:long;
          m = 90000[0]:long;
          g = 89836[0]:int;
        }
        if (eqz(g_b) | e == 24) {
          runtime_Gosched();
          24;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 25) {
          runtime_printnl();
          25;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 26) {
          runtime_Gosched();
          26;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 27) {
          runtime_alloc(8);
          let t10 = 27;
          if (g_b == 1) goto B_b;
          b = t10;
        }
        if (eqz(g_b)) {
          b[0]:long = j - l >> 16L & 17592186044415L;
          a[47]:int = b;
          a[48]:int = b;
          a[21]:int = b;
          a[20]:int = 86848;
          f = a + 24;
          d = a + 80;
        }
        if (eqz(g_b) | e == 28) {
          fmt_Printf(f, 86864, 15, d);
          28;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a[49]:long@4 = a[3]:long }
        if (eqz(g_b) | e == 29) {
          runtime_Gosched();
          29;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 30) {
          runtime_alloc(8);
          let t11 = 30;
          if (g_b == 1) goto B_b;
          b = t11;
        }
        if (eqz(g_b)) {
          b[0]:long = m >> 20L;
          a[51]:int = b;
          a[52]:int = b;
          a[19]:int = b;
          a[18]:int = 86848;
          f = a + 16;
          d = a + 72;
        }
        if (eqz(g_b) | e == 31) {
          fmt_Printf(f, 86879, 20, d);
          31;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a[53]:long@4 = a[2]:long }
        if (eqz(g_b) | e == 32) {
          runtime_Gosched();
          32;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 33) {
          runtime_alloc(8);
          let t12 = 33;
          if (g_b == 1) goto B_b;
          b = t12;
        }
        if (eqz(g_b)) {
          b[0]:long = i64_extend_i32_u(g - 90704 >> 20);
          a[55]:int = b;
          a[56]:int = b;
          a[17]:int = b;
          a[16]:int = 86848;
          f = a + 8;
          d = a - -64;
        }
        if (eqz(g_b) | e == 34) {
          fmt_Printf(f, 86899, 13, d);
          34;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a[57]:long@4 = a[1]:long }
        if (eqz(g_b) | e == 35) {
          runtime_Gosched();
          35;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 36) {
          runtime_Gosched();
          36;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a[59]:int = 90688[0]:int;
          b = 90692[0]:ubyte;
        }
        if (eqz(g_b) | e == 37) {
          runtime_Gosched();
          37;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 38) {
          runtime_printint32(b);
          38;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 39) {
          runtime_printnl();
          39;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | e == 40) {
          runtime_Gosched();
          40;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = k;
          90064[0]:byte = 1;
          stack_pointer = a + 240;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c[0]:int = a;
  c[1]:int = b;
  c[2]:int = d;
  c[3]:int = f;
  c[4]:int = g;
  c[5]:int = h;
  c[6]:int = i;
  c[7]:long@4 = j;
  c[9]:int = k;
  c[10]:long@4 = l;
  c[12]:long@4 = m;
  g_c[0]:int = g_c[0]:int + 56;
}

function runtime_deadlock() { // func98
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
          runtime_panic(86928, 67784);
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

function runtime_ticks():long { // func99
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

function runtime_u64ToString(a:{ a:int, b:int }, b:long) { // func100
  var d:int;
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var f:long_ptr;
  var c:int;
  var g:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    d = e.b;
    c = e.c;
    f = e.d;
    e = e.e;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = stack_pointer - 48;
        stack_pointer = d;
        d[9]:long@4 = 1L;
        e = 90044[0]:int;
        90044[0]:int = d + 32;
        d[8]:int = e;
        f = b != 0L;
        c = 0;
      }
      if (eqz(g_b)) {
        if (eqz(f)) {
          c = 1;
          f = 67751;
          goto B_e;
        }
        (d + 24)[0]:int = 0;
        f = d + 16;
        f[0] = 0L;
        d[1]:long = 0L;
      }
      if (eqz(g_b)) {
        loop L_j {
          if (b != 0L) {
            f = c + 19 > 19;
            if (f) goto B_h;
            (c + d + 27)[0]:byte = i32_wrap_i64(b - (b = b / 10L) * 10L) | 48;
            c = c - 1;
            continue L_j;
          }
        }
        f = c + d + 28;
        c = 0 - c;
      }
      if (eqz(g_b) | eqz(g)) {
        runtime_stringFromBytes(d, f, c);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c = d[1]:int;
        f = d[0]:int;
        goto B_e;
      }
      label B_h:
      if (eqz(g_b) | g == 1) {
        runtime_lookupPanic();
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = e;
        a.b = c;
        a.a = f;
        stack_pointer = d + 48;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g.a = a;
  g.b = d;
  g.c = c;
  g.d = f;
  g.e = e;
  g_c[0]:int = g_c[0]:int + 20;
}

function runtime_printspace() { // func101
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_putchar(32);
                  0;
                  if (g_b == 1) goto B_a;
                }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_printuint32(a:int) { // func102
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

function runtime_printuint64(a:long) { // func103
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

function runtime_markRoots(a:int_ptr, b:int) { // func104
  var d:int;
  var c:{ a:int, b:int, c:int, d:int, e:int }
  var e:{ a:int, b:int, c:int, d:int, e:int }
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    d = e.c;
    f = e.d;
    e = e.e;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) { d = eqz(89840[0]:ubyte) }
        if (select_if(g_b, 1, d)) {
          if (eqz(g_b) | eqz(c)) {
            runtime_printstring(67354, 9);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | c == 1) {
            runtime_printspace();
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | c == 2) {
            runtime_printptr(a);
            2;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | c == 3) {
            runtime_printspace();
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | c == 4) {
            runtime_printstring(67363, 2);
            4;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | c == 5) {
            runtime_printspace();
            5;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | c == 6) {
            runtime_printptr(b);
            6;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | c == 7) {
            runtime_printspace();
            7;
            if (g_b == 1) goto B_b;
          }
          d = select_if(d, b - a, g_b);
          if (eqz(g_b) | c == 8) {
            runtime_printint32(d);
            8;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | c == 9) {
            runtime_printnl();
            9;
            if (g_b == 1) goto B_b;
          }
        }
        loop L_p {
          if (eqz(g_b)) {
            if (a >= b) goto B_q;
            e = a[0];
            d = e < 90704;
          }
          if (eqz(g_b)) {
            if (d) goto B_s;
            d = e >= 89984[0]:int;
            if (d) goto B_s;
            d = e - 90704 >> 4;
            f = eqz(state(d) & 255);
            if (f) goto B_s;
            d = findHead(d);
            f = (state(d) & 255) == 3;
            if (f) goto B_s;
            f = eqz(89840[0]:ubyte);
          }
          if (select_if(g_b, 1, f)) {
            if (eqz(g_b) | c == 10) {
              runtime_printstring(67462, 22);
              10;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | c == 11) {
              runtime_printspace();
              11;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | c == 12) {
              runtime_printptr(e);
              12;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | c == 13) {
              runtime_printspace();
              13;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | c == 14) {
              runtime_printstring(67484, 10);
              14;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | c == 15) {
              runtime_printspace();
              15;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | c == 16) {
              runtime_printptr(a);
              16;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | c == 17) {
              runtime_printnl();
              17;
              if (g_b == 1) goto B_b;
            }
          }
          if (eqz(g_b) | c == 18) {
            runtime_startMark(d);
            18;
            if (g_b == 1) goto B_b;
          }
          label B_s:
          if (eqz(g_b)) {
            a = a + 4;
            continue L_p;
          }
          label B_q:
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
  c.d = f;
  c.e = e;
  g_c[0]:int = g_c[0]:int + 20;
}

function state(a:int):int { // func105
  return (89984[0]:int + (a >> 2))[0]:ubyte >> (a << 1 & 6) & 3
}

function markFree(a:int) { // func106
  var b:int = 89984[0]:int + (a >> 2);
  b[0]:byte = b[0]:ubyte & (3 << (a << 1 & 6) ^ -1);
}

function runtime_growHeap():int { // func107
  var d:int;
  var a:int;
  var c:{ a:int, b:int, c:int }
  var b:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    b = g_c[0]:int;
    a = b.a;
    d = b.b;
    b = b.c;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = memory_grow(memory_size()) != -1;
          a = eqz(d);
        }
        if (eqz(g_b)) {
          if (a) goto B_e;
          a = memory_size();
          b = 89836[0]:int;
          89836[0]:int = a << 16;
          a = 89984[0]:int;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_calculateHeapAddresses();
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { memory_copy(89984[0]:int, a, b - a) }
        label B_e:
        if (eqz(g_b)) { return d }
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

function runtime_startMark(a:int) { // func108
  var h:int_ptr;
  var d:int_ptr;
  var e:int;
  var b:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var f:int;
  var c:int_ptr;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    g = g_c[0]:int;
    a = g.a;
    c = g.b;
    d = g.c;
    e = g.d;
    f = g.e;
    h = g.f;
    g = g.g;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          h = stack_pointer - 128;
          stack_pointer = h;
          d = h + 4;
          memory_fill(d, 0, 124);
          h[0] = a;
          setState(a, 3);
          e = 1;
        }
        loop L_f {
          if (eqz(g_b)) {
            if (e <= 0) goto B_g;
            e = e - 1;
            if (e > 31) goto B_e;
            d = eqz(89840[0]:ubyte);
            a = h[e]:int;
          }
          if (select_if(g_b, 1, d)) {
            if (eqz(g_b) | eqz(b)) {
              runtime_printstring(67365, 30);
              0;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 1) {
              runtime_printspace();
              1;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 2) {
              runtime_printint32(e);
              2;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 3) {
              runtime_printnl();
              3;
              if (g_b == 1) goto B_b;
            }
          }
          if (eqz(g_b)) {
            d = a;
            br_table[B_p, B_o, B_p, ..B_o]((state(a) & 255) - 1)
            label B_p:
            d = a + 1;
            label B_o:
            f = d << 4;
            c = f - (g = a << 4);
            f = f + 90704;
            var i:int = 89984[0]:int;
            loop L_q {
              a = c;
              c = f >= i;
              if (c) goto B_r;
              c = a + 16;
              f = f + 16;
              let t0 = state(d);
              d = d + 1;
              if ((t0 & 255) == 2) continue L_q;
              label B_r:
            }
            d = g + 90704;
          }
          loop L_s {
            if (eqz(g_b)) {
              c = eqz(a);
              if (c) continue L_f;
              f = d[0];
              c = f < 90704;
            }
            if (eqz(g_b)) {
              if (c) goto B_u;
              c = f >= 89984[0]:int;
              if (c) goto B_u;
              c = f - 90704 >> 4;
              g = state(c) & 255;
            }
            if (eqz(g_b)) {
              if (g) goto B_w;
              c = eqz(89840[0]:ubyte);
              if (c) goto B_u;
            }
            if (eqz(g_b) | b == 4) {
              runtime_printstring(67395, 31);
              4;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 5) {
              runtime_printspace();
              5;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 6) {
              runtime_printptr(f);
              6;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 7) {
              runtime_printspace();
              7;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 8) {
              runtime_printstring(67426, 3);
              8;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 9) {
              runtime_printspace();
              9;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 10) {
              runtime_printptr(d);
              10;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 11) {
              runtime_printnl();
              11;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) goto B_u;
            label B_w:
            if (eqz(g_b)) {
              f = findHead(c);
              c = (state(f) & 255) == 3;
              if (c) goto B_u;
              c = eqz(89840[0]:ubyte);
            }
            if (select_if(g_b, 1, c)) {
              if (eqz(g_b) | b == 12) {
                runtime_printstring(67429, 14);
                12;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b) | b == 13) {
                runtime_printspace();
                13;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b) | b == 14) {
                runtime_printptr(f);
                14;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b) | b == 15) {
                runtime_printnl();
                15;
                if (g_b == 1) goto B_b;
              }
            }
            if (eqz(g_b)) {
              setState(f, 3);
              c = e != 32;
            }
            if (eqz(g_b)) {
              if (c) goto B_na;
              90041[0]:byte = 1;
              e = 32;
              c = eqz(89840[0]:ubyte);
              if (c) goto B_u;
            }
            if (eqz(g_b) | b == 16) {
              runtime_printstring(67443, 19);
              16;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b) | b == 17) {
              runtime_printnl();
              17;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) goto B_u;
            label B_na:
            if (eqz(g_b)) {
              if (e > 31) goto B_e;
              c = h + (e << 2);
              c[0] = f;
              e = e + 1;
            }
            label B_u:
            if (eqz(g_b)) {
              a = a - 4;
              d = d + 4;
              continue L_s;
            }
          }
          label B_g:
        }
        if (eqz(g_b)) {
          stack_pointer = h + 128;
          return ;
        }
        label B_e:
        if (eqz(g_b) | b == 18) {
          runtime_lookupPanic();
          18;
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
  b.c = d;
  b.d = e;
  b.e = f;
  b.f = h;
  b.g = g;
  g_c[0]:int = g_c[0]:int + 28;
}

function runtime_printint32(a:int) { // func109
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

function setState(a:int, b:int) { // func110
  var c:int = 89984[0]:int + (a >> 2);
  c[0]:byte = c[0]:ubyte | b << (a << 1 & 6);
}

function findHead(a:int):int { // func111
  var b:int;
  var c:int = 89984[0]:int;
  loop L_a {
    var d:int = (c + (a >> 2))[0]:ubyte;
    if (d == 170) {
      b = (a ^ -1) | -4;
      goto B_b;
    }
    b = -1;
    if ((d >> (a << 1 & 6) & 3) == 2) goto B_b;
    return a;
    label B_b:
    a = a + b;
    continue L_a;
  }
  return unreachable;
}

function runtime_stringEqual(a:ubyte_ptr, b:int, c:ubyte_ptr, d:int):int { // func112
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

function runtime_hashmapGet(a:int_ptr, b:int, c:int, d:int):int { // func113
  var f:int;
  var j:int;
  var h:int_ptr;
  var g:int;
  var l:int;
  var k:int;
  var i:int;
  var p:int;
  var m:int;
  var o:int;
  var n:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 56;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    h = e.f;
    g = e.g;
    i = e.h;
    j = e.i;
    k = e.j;
    l = e.k;
    m = e.l;
    n = e.m;
    o = e.n;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          p = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 48;
          stack_pointer = f;
          (f + 32)[0]:long = 0L;
          (f + 40)[0]:int = 0;
          f[3]:long = 0L;
          f[3]:int = 7;
          j = 90044[0]:int;
          90044[0]:int = f + 8;
          f[2]:int = j;
          f[4]:int = (h = runtime_hashmapBucketAddrForHash(a, d));
          k = select_if(1, g = d >> 24, d = d < 16777216);
        }
        loop L_g {
          if (eqz(g_b)) {
            f[5]:int = h;
            if (eqz(h)) goto B_h;
            l = h + 12;
            d = 0;
          }
          loop L_j {
            if (eqz(g_b)) {
              g = d == 8;
              if (g) goto B_k;
              f[6]:int = (m = l + (g = a[3]) * d);
              f[7]:int = (n = l + (g << 3) + a[4] * d);
              i = k != (d + h)[0]:ubyte;
            }
            if (eqz(g_b)) {
              if (i) goto B_m;
              f[8]:int = (o = a[6]);
              f[9]:int = (i = a[7]);
              if (eqz(i)) goto B_e;
            }
            if (eqz(g_b) | eqz(p)) {
              call_indirect(b, m, g, o, i);
              let t0 = 0;
              if (g_b == 1) goto B_b;
              g = t0;
            }
            if (eqz(g_b)) {
              g = eqz(g & 1);
              if (g) goto B_m;
              memory_copy(c, n, a[4]);
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
            f[10]:int = (h = h[2]);
            continue L_g;
          }
          label B_h:
        }
        if (eqz(g_b)) { memory_fill(c, 0, a[4]) }
        label B_f:
        if (eqz(g_b)) {
          90044[0]:int = j;
          stack_pointer = f + 48;
          return h != 0;
        }
        label B_e:
        if (eqz(g_b) | p == 1) {
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
  e.f = h;
  e.g = g;
  e.h = i;
  e.i = j;
  e.j = k;
  e.k = l;
  e.l = m;
  e.m = n;
  e.n = o;
  g_c[0]:int = g_c[0]:int + 56;
  return 0;
}

function runtime_hashmapBucketAddrForHash(a:int, b:int):int { // func114
  return a[0]:int +
         ((a[4]:int + a[3]:int << 3) + 12) *
         (select_if(-1, -1 << (a = a[20]:ubyte) ^ -1, a > 31) & b)
}

function runtime_Gosched() { // func115
  var a:{ a:int, b:int, c:int, d:int }
  var e:long;
  var c:{ a:int, b:int, c:int }
  var d:int;
  var b:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    d = c.b;
    c = c.c;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          a = stack_pointer - 16;
          stack_pointer = a;
          89976[0]:long = (e = 89976[0]:long + 1L);
          a.d = 0;
          a.b = 2;
          c = 90044[0]:int;
          90044[0]:int = a;
          a.a = c;
          d = e % 1000L != 0L;
        }
        if (eqz(g_b)) {
          if (d) goto B_e;
          a.c = (d = 89832[0]:int);
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_scheduleLogTask(67792, 8, d);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { a.d = (d = 89832[0]:int) }
        if (eqz(g_b) | b == 1) {
          Push(d);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | b == 2) {
          internal_task_Pause();
          2;
          if (g_b == 1) goto B_b;
        }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = c;
          stack_pointer = a + 16;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = d;
  b.c = c;
  g_c[0]:int = g_c[0]:int + 12;
}

function fmt_newPrinter():int { // func116
  var b:int_ptr;
  var a:int;
  var c:int;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  var g:int;
  var f:int;
  var e:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    f = e.d;
    e = e.e;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          b = stack_pointer - 80;
          stack_pointer = b;
          b[3] = 11;
          memory_fill(b + 20, 0, 40);
          b[2] = (e = 90044[0]:int);
          90044[0]:int = b + 8;
          b[4] = (c = 90676[0]:int);
          d = 90680[0]:int;
          a = d <= 0;
        }
        if (eqz(g_b)) {
          if (a) goto B_f;
          b[6] = c;
          b[5] = c;
          b[7] = (f = ((a = c + (d << 3)) - 8)[0]:int);
          a = (a - 4)[0]:int;
          b[9] = c;
          b[8] = a;
          b[10] = c;
          c = d - 1;
          if (c <= 90684[0]:int) {
            90680[0]:int = c;
            goto B_e;
          }
        }
        if (eqz(g_b) | eqz(g)) {
          runtime_slicePanic();
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        if (eqz(g_b)) { 90044[0]:int = (a = b - -64) }
        if (eqz(g_b) | g == 1) {
          runtime_alloc(144);
          let t0 = 1;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          90044[0]:int = (c = b + 8);
          b[12] = a;
          b[11] = 87364;
          f = 87364;
        }
        label B_e:
        if (eqz(g_b)) {
          b[14] = a;
          b[13] = f;
          c = f == 87364;
        }
        if (eqz(g_b) | g == 2) {
          runtime_interfaceTypeAssert(c);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b | (eqz(a) | f != 87364))) {
          a[128]:byte = 0;
          a[126]:short@1 = 0;
          a[12]:long@4 = 0L;
          a[36]:long@1 = 0L;
          90044[0]:int = e;
          (a + 44)[0]:byte = 0;
          a[8]:int = a;
          stack_pointer = b + 80;
          return a;
        }
        if (eqz(g_b) | g == 3) {
          runtime_nilPanic();
          3;
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
  d.d = f;
  d.e = e;
  g_c[0]:int = g_c[0]:int + 20;
  return 0;
}

function writeByte(a:int, b:int) { // func117
  var c:int;
  var g:int;
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
          c = stack_pointer - 32;
          stack_pointer = c;
          c[7]:int = 0;
          c[5]:int = 2;
          g = 90044[0]:int;
          90044[0]:int = c + 16;
          c[4]:int = g;
          f = eqz(a);
        }
        if (eqz(g_b)) {
          if (f) goto B_e;
          c[15]:byte = b;
          c[6]:int = (b = a[0]:int);
          h = a[1]:int;
          f = c + 15;
          d = a[2]:int;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_sliceAppend(c, b, f, h, d, 1, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = g;
          g = c[2]:int;
          a[0]:long@4 = c[0]:long;
          a[2]:int = g;
          stack_pointer = c + 32;
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

function printArg(a:int, b:int, c:int, d:int) { // func118
  var i:int_ptr;
  var g:int;
  var e:int;
  var f:long;
  var j:int;
  var h:int;
  var k:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    h = g_c[0]:int;
    a = h[0]:int;
    c = h[2]:int;
    d = h[3]:int;
    e = h[4]:int;
    f = h[5]:long@4;
    i = h[7]:int;
    j = h[8]:int;
    k = h[9]:int;
    b = h[1]:int;
  }
  h = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        i = stack_pointer - 80;
        stack_pointer = i;
        i[9] = 9;
        memory_fill(i + 40, 0, 36);
        a[5]:long@4 = 0L;
        a[4]:int = c;
        a[3]:int = b;
        (a + 28)[0]:int = 0;
        i[8] = (k = 90044[0]:int);
        90044[0]:int = (e = i + 32);
      }
      if (eqz(g_b)) {
        if (b) goto B_f;
        b = d == 118;
      }
      if (eqz(g_b)) {
        if (eqz(b)) {
          b = d != 84;
          if (b) goto B_h;
        }
        a = a + 32;
      }
      if (eqz(g_b) | eqz(g)) {
        padString(a, 86613, 5);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_h:
      if (eqz(g_b) | g == 1) {
        badVerb(a, d);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_f:
      e = select_if(e, d == 112, g_b);
      if (eqz(g_b)) {
        if (e) goto B_n;
        e = d != 84;
        if (e) goto B_m;
        c = i + 24;
      }
      if (eqz(g_b) | g == 2) {
        reflect_toType(c, 87380, b);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        i[11] = (b = i[7]);
        i[10] = (d = i[6]);
        c = i + 16;
      }
      if (eqz(g_b) | g == 3) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          c,
          b,
          d);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        i[12] = (b = i[4]);
        c = i[5];
        a = a + 32;
      }
      if (eqz(g_b) | g == 4) {
        fmtS(a, b, c);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_n:
      if (eqz(g_b)) {
        i[14] = c;
        i[13] = b;
      }
      if (eqz(g_b) | g == 5) {
        fmtPointer(a, b, c, 2, 112);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_m:
      if (select_if(g_b, 1, e = select_if(e, b != 86112, g_b))) {
        if (eqz(g_b) | g == 6) {
          fmtBool(a, c, d);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      e = select_if(e, b != 86204, g_b);
      if (eqz(g_b)) {
        if (e) goto B_y;
        f = i64_extend_i32_s(c);
      }
      if (eqz(g_b) | g == 7) {
        fmtInteger_1(a, f, 1, d);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_y:
      if (eqz(g_b)) {
        f = i64_extend_i32_u(c);
        e = b != 67868;
      }
      if (eqz(g_b)) {
        if (e) goto B_ca;
        f = i64_extend8_s(f);
      }
      if (eqz(g_b) | g == 8) {
        fmtInteger_1(a, f, 1, d);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ca:
      e = select_if(e, b != 67884, g_b);
      if (eqz(g_b)) {
        if (e) goto B_fa;
        f = i64_extend16_s(f);
      }
      if (eqz(g_b) | g == 9) {
        fmtInteger_1(a, f, 1, d);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_fa:
      e = select_if(e, b != 86832, g_b);
      if (eqz(g_b)) {
        if (e) goto B_ia;
        f = i64_extend_i32_s(c);
      }
      if (eqz(g_b) | g == 10) {
        fmtInteger_1(a, f, 1, d);
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ia:
      e = select_if(e, b != 69036, g_b);
      if (eqz(g_b)) {
        if (e) goto B_la;
        f = c[0]:long;
      }
      if (eqz(g_b) | g == 11) {
        fmtInteger_1(a, f, 1, d);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_la:
      if (select_if(g_b, 1, e = select_if(e, b != 67900, g_b))) {
        if (eqz(g_b) | g == 12) {
          fmtInteger_1(a, f, 0, d);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      e = select_if(e, b != 85660, g_b);
      if (eqz(g_b)) {
        if (e) goto B_qa;
        f = f & 255L;
      }
      if (eqz(g_b) | g == 13) {
        fmtInteger_1(a, f, 0, d);
        13;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_qa:
      e = select_if(e, b != 67916, g_b);
      if (eqz(g_b)) {
        if (e) goto B_ta;
        f = f & 65535L;
      }
      if (eqz(g_b) | g == 14) {
        fmtInteger_1(a, f, 0, d);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ta:
      if (select_if(g_b, 1, e = select_if(e, b != 69020, g_b))) {
        if (eqz(g_b) | g == 15) {
          fmtInteger_1(a, f, 0, d);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      e = select_if(e, b != 86848, g_b);
      if (eqz(g_b)) {
        if (e) goto B_ya;
        f = c[0]:long;
      }
      if (eqz(g_b) | g == 16) {
        fmtInteger_1(a, f, 0, d);
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ya:
      if (select_if(g_b, 1, e = select_if(e, b != 68868, g_b))) {
        if (eqz(g_b) | g == 17) {
          fmtInteger_1(a, f, 0, d);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      e = select_if(e, b != 86928, g_b);
      if (eqz(g_b)) {
        if (e) goto B_db;
        b = c[0]:int;
        c = c[1]:int;
      }
      if (eqz(g_b) | g == 18) {
        fmtString(a, b, c, d);
        18;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_db:
      e = select_if(e, b != 85640, g_b);
      if (eqz(g_b)) {
        if (e) goto B_gb;
        b = c[0]:int;
        e = c[1]:int;
        c = c[2]:int;
      }
      if (eqz(g_b) | g == 19) {
        fmtBytes(a, b, e, c, d, 86580, 6);
        19;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_gb:
      e = select_if(e, b != 87216, g_b);
      if (eqz(g_b)) {
        if (e) goto B_jb;
        b = c[8]:ubyte;
        e = c[1]:int;
        c = c[0]:int;
        j = eqz(c);
      }
      if (eqz(g_b)) {
        if (j | (b & 14) != 2) goto B_lb;
        j = i + 8;
      }
      if (eqz(g_b) | g == 20) {
        Interface(j, c, e, b);
        20;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        j = i[2];
        a[4]:int = (h = i[3]);
        a[3]:int = j;
        i[16] = h;
        i[15] = j;
      }
      if (eqz(g_b) | g == 21) {
        handleMethods(a, d);
        let t0 = 21;
        if (g_b == 1) goto B_b;
        j = t0;
      }
      if (eqz(g_b) & (j & 1)) goto B_e;
      label B_lb:
      if (eqz(g_b) | g == 22) {
        printValue(a, c, e, b, d, 0);
        22;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_jb:
      if (eqz(g_b) | g == 23) {
        handleMethods(a, d);
        let t1 = 23;
        if (g_b == 1) goto B_b;
        e = t1;
      }
      if (eqz(g_b)) {
        if (e & 1) goto B_e;
        i[18] = c;
        i[17] = b;
      }
      if (eqz(g_b) | g == 24) {
        printValue(a, b, c, 2, d, 0);
        24;
        if (g_b == 1) goto B_b;
      }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = k;
        stack_pointer = i + 80;
      }
      return ;
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
  h[5]:long@4 = f;
  h[7]:int = i;
  h[8]:int = j;
  h[9]:int = k;
  g_c[0]:int = g_c[0]:int + 40;
}

function Write(a:{ a:int, b:int, c:int }, b:int_ptr, c:int, d:int) { // func119
  var e:int_ptr;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var g:int;
  var i:int;
  var j:int;
  var k:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    h = g_c[0]:int;
    a = h.a;
    c = h.c;
    d = h.d;
    e = h.e;
    f = h.f;
    g = h.g;
    i = h.h;
    k = h.i;
    b = h.b;
  }
  h = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          j = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 144;
          stack_pointer = e;
          e[15] = 19;
          memory_fill(e + 68, 0, 72);
          e[14] = (k = 90044[0]:int);
          90044[0]:int = e + 56;
          f = eqz(b);
        }
        if (eqz(g_b)) {
          if (f) goto B_e;
          e[16] = (f = b[0]);
          if (eqz(f)) goto B_e;
          e[17] = (g = f.a);
          e[18] = (i = f.b);
        }
        if (eqz(g_b)) {
          if (eqz(g)) {
            d = 89264;
            g = 87340;
            c = 0;
            goto B_g;
          }
          e[27] = f;
          e[28] = (g = f.a);
          e[29] = (f = f.b);
          e[30] = f;
          i = g != 87460;
        }
        c = {
              if (eqz(g_b)) {
                if (i) goto B_k;
                if (eqz(f)) goto B_e;
                g = e + 8;
                f = f.a;
              }
              if (eqz(g_b) | eqz(j)) {
                Write_1(g, f, c, d);
                0;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e[32] = (d = e[4]);
                e[31] = (g = e[3]);
                e[2];
                goto B_j;
              }
              label B_k:
              i = select_if(i, g != 87436, g_b);
              if (eqz(g_b)) {
                if (i) goto B_o;
                g = e + 24;
              }
              if (eqz(g_b) | j == 1) {
                Write(g, f, c, d);
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d = e[8];
                g = e[7];
                e[6];
                goto B_j;
              }
              label B_o:
              if (eqz(g_b)) {
                if (g != 87144) goto B_e;
                g = e + 40;
              }
              if (eqz(g_b) | j == 2) {
                Write_1(g, f, c, d);
                2;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                c
              } else {
                d = e[12];
                g = e[11];
                e[10];
              }
              label B_j:
            }
        if (eqz(g_b)) {
          e[33] = g;
          e[34] = d;
        }
        label B_g:
        if (eqz(g_b)) {
          e[19] = g;
          e[20] = d;
        }
        if (eqz(g_b | g)) {
          f = d;
          goto B_x;
        }
        if (eqz(g_b) | j == 3) {
          runtime_alloc(24);
          let t0 = 3;
          if (g_b == 1) goto B_b;
          f = t0;
        }
        if (eqz(g_b)) {
          e[21] = f;
          e[24] = f;
          e[22] = (b = b[0]);
          if (eqz(b)) goto B_e;
          e[23] = (i = b[2]);
          b = b[3];
          f.f = d;
          f.e = g;
          f.d = b;
          f.c = i;
          f.b = 5;
          f.a = 69448;
          g = 87428;
        }
        label B_x:
        if (eqz(g_b)) {
          90044[0]:int = k;
          a.c = f;
          a.b = g;
          a.a = c;
          stack_pointer = e + 144;
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
  h.h = i;
  h.i = k;
  g_c[0]:int = g_c[0]:int + 36;
}

function free_1(a:int) { // func120
  var b:int;
  var h:int;
  var g:int;
  var d:int;
  var e:int;
  var f:int;
  var i:int;
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    c = g_c[0]:int;
    a = c.a;
    d = c.d;
    e = c.e;
    g = c.f;
    h = c.g;
    f = c.c;
    b = c.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          i = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          b = stack_pointer + -64;
          stack_pointer = b;
          b[7]:long = 0L;
          b[9]:int = 6;
          h = 90044[0]:int;
          90044[0]:int = b + 32;
          b[8]:int = h;
          b[10]:int = (d = a[0]:int);
          f = 0;
          e = 0;
          g = a[2]:int;
          if (g < 65537) {
            b[15]:int = d;
            f = d;
            e = g;
          }
          a[2]:int = e;
          a[1]:int = 0;
          a[0]:int = f;
          a[3]:long@4 = 0L;
          a[34]:int = 0;
          (a + 20)[0]:long@4 = 0L;
          (a + 28)[0]:int = 0;
          a[33]:int =
            (g = select_if(0, f = a[33]:int, d = (e = a[35]:int) > 8));
          a[35]:int = select_if(0, e, d);
          b[11]:int = f;
          b[12]:int = g;
          b[13]:int = (f = 90676[0]:int);
          b[7]:int = a;
          b[6]:int = 87364;
          d = b + 24;
          e = 90680[0]:int;
          g = 90684[0]:int;
          a = b + 8;
        }
        if (eqz(g_b) | eqz(i)) {
          runtime_sliceAppend(a, f, d, e, g, 1, 8);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90676[0]:int = b[2]:int;
          90680[0]:int = b[3]:int;
          90684[0]:int = b[4]:int;
          90044[0]:int = h;
          stack_pointer = b - -64;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = f;
  c.d = d;
  c.e = e;
  c.f = g;
  c.g = h;
  g_c[0]:int = g_c[0]:int + 28;
}

function fmt_Printf(a:{ a:int, b:int }, b:byte_ptr, c:int, d:{ a:int, b:int }) { // func121
  var h:int;
  var j:int;
  var g:int;
  var e:byte_ptr;
  var l:int;
  var q:int;
  var f:int;
  var i:byte_ptr;
  var p:long_ptr@1;
  var s:int;
  var u:int;
  var v:int;
  var w:int;
  var m:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int }
  var k:int;
  var r:int;
  var o:byte_ptr;
  var t:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 84;
    m = g_c[0]:int;
    a = m.a;
    b = m.b;
    c = m.c;
    d = m.d;
    e = m.e;
    f = m.f;
    g = m.g;
    h = m.h;
    i = m.i;
    k = m.j;
    l = m.k;
    o = m.l;
    p = m.m;
    q = m.n;
    s = m.o;
    r = m.p;
    t = m.q;
    u = m.r;
    v = m.s;
    w = m.t;
    m = m.u;
  }
  var n:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int } = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        h = stack_pointer - 272;
        stack_pointer = h;
        h[47]:int = 19;
        memory_fill(h + 192, 0, 76);
        h[46]:int = (t = 90044[0]:int);
        90044[0]:int = (e = h + 184);
      }
      if (eqz(g_b) | eqz(j)) {
        fmt_newPrinter();
        let t0 = 0;
        if (g_b == 1) goto B_b;
        g = t0;
      }
      if (eqz(g_b)) {
        h[48]:int = g;
        g[124]:byte = 0;
        u = g + 40;
        v = g + 39;
        w = g + 38;
        m = g + 41;
        p = g + 36;
        q = g + 125;
        l = 0;
        s = g + 42;
        k = 0;
      }
      loop L_g {
        e = select_if(e, c <= l, g_b);
        if (eqz(g_b)) {
          if (e) goto B_j;
          q[0]:byte = 1;
          e = select_if(l, c, c < l);
          f = l;
          loop L_l {
            i = c != f;
            if (eqz(i)) {
              f = c;
              goto B_m;
            }
            if (e == f) goto B_h;
            i = (b + f)[0]:ubyte == 37;
            if (i) goto B_m;
            f = f + 1;
            continue L_l;
            label B_m:
          }
          e = f <= l;
        }
        if (eqz(g_b)) {
          if (e) goto B_q;
          e = f < l;
          if (e) goto B_p;
          e = c < f;
          if (e) goto B_p;
          i = b + l;
          e = f - l;
        }
        if (eqz(g_b) | j == 1) {
          writeString(g, i, e);
          1;
          if (g_b == 1) goto B_b;
        }
        label B_q:
        if (eqz(g_b)) {
          e = c <= f;
          if (e) goto B_j;
          p[0] = 0L;
          g[12]:long@4 = 0L;
          e = p + 8;
          e[0] = 0;
          f = f + 1;
        }
        loop L_u {
          if (eqz(g_b)) {
            e = c != f;
            if (eqz(e)) {
              f = c;
              goto B_o;
            }
            if (c <= f) goto B_h;
            l = (b + f)[0]:ubyte;
            i = l - 43;
            e = s;
          }
          if (eqz(g_b)) {
            br_table[B_ca, B_z, B_ba, B_z, B_z, B_x, ..B_da](i)
            label B_da:
            br_table[B_aa, B_z, B_z, B_ea, ..B_z](l - 32)
            label B_ea:
            e = u;
            goto B_x;
            label B_ca:
            e = v;
            goto B_x;
            label B_ba:
            e = w;
            goto B_x;
            label B_aa:
            e = m;
            goto B_x;
            label B_z:
            e = (l - 97 & 255) > 25;
            if (e) goto B_o;
            e = k > 0;
            if (e) goto B_o;
            e = l - 118;
          }
          if (eqz(g_b)) {
            br_table[B_ga, B_ia, ..B_fa](e)
            label B_ia:
            h[45]:int = 0;
            h[49]:int = (e = g[33]:int);
            r = h + 160;
            k = h + 180;
            o = g[34]:int;
            i = g[35]:int;
          }
          if (eqz(g_b) | j == 2) {
            runtime_sliceAppend(r, e, k, o, i, 1, 4);
            2;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            e = h[40]:int;
            g[34]:long@4 = h[41]:long@4;
            g[33]:int = e;
            h[50]:int = e;
          }
          label B_ga:
          if (eqz(g_b)) {
            e = g[39]:ubyte;
            k = g[40]:ubyte;
            g[39]:short@1 = 0;
            g[44]:byte = (i = k & 1);
            g[43]:byte = (e = e & 1);
          }
          label B_fa:
          if (eqz(g_b)) {
            h[51]:int = (e = d.a);
            h[52]:int = (k = d.b);
          }
          if (eqz(g_b) | j == 3) {
            printArg(g, e, k, l);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            k = 1;
            l = f + 1;
            continue L_g;
          }
          label B_x:
          if (eqz(g_b)) {
            e[0] = 1;
            f = f + 1;
            continue L_u;
          }
        }
        label B_p:
        if (eqz(g_b) | j == 4) {
          runtime_slicePanic();
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_o:
        e = select_if(e, h + 144, g_b);
        if (eqz(g_b) | j == 5) {
          argNumber(e, g, k, b, c, f);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = h[36]:int;
          f = h[37]:int;
          i = f >= c;
          e = h[152]:ubyte;
        }
        if (eqz(g_b)) {
          if (i) goto B_wa;
          if (c <= f) goto B_h;
          i = (b + f)[0]:ubyte != 42;
          if (i) goto B_wa;
          e = h + 120;
        }
        if (eqz(g_b) | j == 6) {
          fmt_intFromArg(e, d, k);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e = h[30]:int;
          g[36]:byte = (l = h[124]:ubyte);
          g[12]:int = e;
        }
        if (select_if(g_b, 1, l)) {
          if (eqz(g_b) | j == 7) {
            writeString(g, 86467, 12);
            7;
            if (g_b == 1) goto B_b;
          }
          e = if (g_b) { e } else { g[12]:int }
        }
        if (eqz(g_b)) {
          f = f + 1;
          i = e < 0;
          if (eqz(i)) {
            e = 0;
            k = 1;
            goto B_ua;
          }
          k = 1;
          g[38]:byte = 1;
          o = 0;
          g[12]:int = (e = 0 - e);
          i = s;
          goto B_va;
        }
        label B_wa:
        i = select_if(i, h + 128, g_b);
        if (eqz(g_b) | j == 8) {
          fmt_parsenum(i, b, c, f, c);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = h[34]:int;
          l = h[132]:ubyte;
          g[12]:int = h[32]:int;
          o = 1;
          g[36]:byte = l & 1;
          i = q;
          l = eqz((e & l) & 1);
          if (l) goto B_ua;
        }
        label B_va:
        if (eqz(g_b)) {
          i[0] = 0;
          e = o;
        }
        label B_ua:
        if (eqz(g_b)) {
          l = f + 1;
          i = l >= c;
        }
        if (eqz(g_b)) {
          if (i) goto B_lb;
          if (c <= f) goto B_h;
          i = (b + f)[0]:ubyte != 46;
          if (i) goto B_lb;
          if (e & 1) { q[0]:byte = 0 }
          e = h + 104;
        }
        if (eqz(g_b) | j == 9) {
          argNumber(e, g, k, b, c, l);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = h[26]:int;
          f = h[27]:int;
          i = f >= c;
          e = h[112]:ubyte;
        }
        if (eqz(g_b)) {
          if (i) goto B_qb;
          if (c <= f) goto B_h;
          i = (b + f)[0]:ubyte != 42;
          if (i) goto B_qb;
          e = h + 80;
        }
        if (eqz(g_b) | j == 10) {
          fmt_intFromArg(e, d, k);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e = h[84]:ubyte;
          g[13]:int = (l = h[20]:int);
          g[37]:byte = e & 1;
          f = f + 1;
          i = l >= 0;
          if (eqz(i)) {
            g[37]:byte = 0;
            g[13]:int = 0;
            goto B_ub;
          }
          k = 1;
          e = e & 1;
          if (e) goto B_kb;
          label B_ub:
        }
        if (eqz(g_b) | j == 11) {
          writeString(g, 86479, 11);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = 1;
          goto B_kb;
        }
        label B_qb:
        i = select_if(i, h + 88, g_b);
        if (eqz(g_b) | j == 12) {
          fmt_parsenum(i, b, c, f, c);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = h[24]:int;
          l = h[22]:int;
          g[37]:byte = (o = h[92]:ubyte);
          g[13]:int = l;
          if (o) goto B_lb;
          g[37]:byte = 1;
          g[13]:int = 0;
          e = e & 1;
          if (e) goto B_jb;
          goto B_kb;
        }
        label B_lb:
        if (eqz(g_b)) {
          e = e & 1;
          if (e) goto B_jb;
        }
        label B_kb:
        e = select_if(e, h - -64, g_b);
        if (eqz(g_b) | j == 13) {
          argNumber(e, g, k, b, c, f);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = h[16]:int;
          f = h[17]:int;
        }
        label B_jb:
        if (eqz(g_b)) {
          e = c > f;
          if (e) goto B_i;
        }
        if (eqz(g_b) | j == 14) {
          writeString(g, 86490, 10);
          14;
          if (g_b == 1) goto B_b;
        }
        label B_j:
        if (eqz(g_b)) { b = g[124]:ubyte }
        if (eqz(g_b)) {
          if (b) goto B_gc;
          c = 0;
          b = k > 0;
          if (b) goto B_gc;
          p[0] = 0L;
          g[12]:long@4 = 0L;
          b = p + 8;
          b[0] = 0;
        }
        if (eqz(g_b) | j == 15) {
          writeString(g, 86500, 9);
          15;
          if (g_b == 1) goto B_b;
        }
        f = select_if(f, 1, g_b);
        loop L_jc {
          b = select_if(b, eqz(f & 1), g_b);
          if (eqz(g_b)) {
            if (b) goto B_lc;
            h[57]:int = (f = d.a);
            h[58]:int = (e = d.b);
            b = eqz(c & 1);
          }
          if (select_if(select_if(g_b, 1, b), 0, eqz(g_b) | j == 16)) {
            writeString(g, 86623, 2);
            16;
            if (g_b == 1) goto B_b;
          }
          if (select_if(g_b, 1, f)) {
            if (eqz(g_b) | j == 17) {
              writeString(g, 86613, 5);
              17;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) goto B_kc;
          }
          b = select_if(b, h + 56, g_b);
          if (eqz(g_b) | j == 18) {
            reflect_toType(b, 87380, f);
            18;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h[60]:int = (c = h[15]:int);
            h[59]:int = (b = h[14]:int);
            i = h + 48;
          }
          if (eqz(g_b) | j == 19) {
            interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
              i,
              c,
              b);
            19;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h[61]:int = (c = h[12]:int);
            b = h[13]:int;
          }
          if (eqz(g_b) | j == 20) {
            writeString(g, c, b);
            20;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | j == 21) {
            writeByte(g, 61);
            21;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | j == 22) {
            printArg(g, f, e, 118);
            22;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_kc;
          label B_lc:
          if (eqz(g_b) | j == 23) {
            writeByte(g, 41);
            23;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_gc;
          label B_kc:
          if (eqz(g_b)) {
            c = 1;
            f = 0;
            continue L_jc;
          }
        }
        label B_gc:
        if (eqz(g_b)) {
          h[62]:int = (f = g[0]:int);
          c = h + 32;
          b = g[1]:int;
        }
        if (eqz(g_b) | j == 24) {
          Write(c, 87808, f, b);
          24;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[65]:int = (f = h[9]:int);
          h[66]:int = (c = h[10]:int);
          h[63]:int = f;
          h[64]:int = c;
        }
        if (eqz(g_b) | j == 25) {
          free_1(g);
          25;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = t;
          a.b = c;
          a.a = f;
          stack_pointer = h + 272;
          return ;
        }
        label B_i:
        if (eqz(g_b)) {
          if (c <= f) goto B_h;
          l = 1;
          o = b + f;
          e = o[0];
          i = e >= 0;
        }
        if (eqz(g_b)) {
          if (i) goto B_fd;
          i = h + 24;
          e = c - f;
        }
        if (eqz(g_b) | j == 26) {
          unicode_utf8_DecodeRuneInString(i, o, e);
          26;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          l = h[7]:int;
          e = h[6]:int;
        }
        label B_fd:
        if (eqz(g_b)) {
          l = f + l;
          f = e != 37;
        }
        if (select_if(g_b, 1, f)) {
          if (eqz(g_b) | j == 27) {
            writeByte(g, 37);
            27;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) continue L_g;
        }
        if (eqz(g_b)) { f = q[0]:ubyte }
        if (select_if(g_b, 1, f)) {
          if (eqz(g_b) | j == 28) {
            writeString(g, 86569, 2);
            28;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | j == 29) {
            writeRune(g, e);
            29;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | j == 30) {
            writeString(g, 86457, 10);
            30;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) continue L_g;
        }
        if (select_if(g_b, 1, f = select_if(f, k <= 0, g_b))) {
          if (eqz(g_b) | j == 31) {
            writeString(g, 86569, 2);
            31;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | j == 32) {
            writeRune(g, e);
            32;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | j == 33) {
            writeString(g, 86571, 9);
            33;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            k = 1;
            continue L_g;
          }
        }
        f = select_if(f, e - 118, g_b);
        if (eqz(g_b)) {
          br_table[B_xd, B_zd, ..B_wd](f)
          label B_zd:
          h[44]:int = 0;
          h[53]:int = (f = g[33]:int);
          r = h + 8;
          k = h + 176;
          o = g[34]:int;
          i = g[35]:int;
        }
        if (eqz(g_b) | j == 34) {
          runtime_sliceAppend(r, f, k, o, i, 1, 4);
          34;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = h[2]:int;
          g[34]:long@4 = h[3]:long@4;
          g[33]:int = f;
          h[54]:int = f;
        }
        label B_xd:
        if (eqz(g_b)) {
          f = g[39]:ubyte;
          k = g[40]:ubyte;
          g[39]:short@1 = 0;
          g[44]:byte = (i = k & 1);
          g[43]:byte = (f = f & 1);
        }
        label B_wd:
        if (eqz(g_b)) {
          h[55]:int = (f = d.a);
          h[56]:int = (k = d.b);
        }
        if (eqz(g_b) | j == 35) {
          printArg(g, f, k, e);
          35;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = 1;
          continue L_g;
        }
        label B_h:
      }
      if (eqz(g_b) | j == 36) {
        runtime_lookupPanic();
        36;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = n;
  g_c[0]:int = g_c[0]:int + 4;
  n = g_c[0]:int;
  n.a = a;
  n.b = b;
  n.c = c;
  n.d = d;
  n.e = e;
  n.f = f;
  n.g = g;
  n.h = h;
  n.i = i;
  n.j = k;
  n.k = l;
  n.l = o;
  n.m = p;
  n.n = q;
  n.o = s;
  n.p = r;
  n.q = t;
  n.r = u;
  n.s = v;
  n.t = w;
  n.u = m;
  g_c[0]:int = g_c[0]:int + 84;
}

function runtime_panicOrGoexit(a:int, b:{ a:int, b:int }) { // func122
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
          runtime_printstring(67549, 7);
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

function runtime_printitf(a:int, b:int) { // func123
  var e:int;
  var f:int;
  var c:int;
  var d:int;
  var g:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    f = g_c[0]:int;
    a = f[0]:int;
    b = f[1]:int;
    c = f[2]:int;
    e = f[3]:int;
    g = f[4]:long@4;
    f = f[6]:int;
  }
  d = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        d = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 32;
        stack_pointer = e;
        e[7]:int = 0;
        e[5]:long@4 = 2L;
        f = 90044[0]:int;
        90044[0]:int = e + 16;
        e[4]:int = f;
        c = a != 86112;
      }
      if (eqz(g_b)) {
        if (c) goto B_f;
        a = eqz(b & 1);
      }
      if (select_if(g_b, 1, a)) {
        if (eqz(g_b) | eqz(d)) {
          runtime_printstring(86408, 4);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      if (eqz(g_b) | d == 1) {
        runtime_printstring(86412, 5);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_f:
      c = select_if(c, a == 86204, g_b);
      if (eqz(g_b)) {
        if (c) goto B_k;
        c = a != 67868;
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
      c = select_if(c, a != 67884, g_b);
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
        if (a == 86832) goto B_k;
        c = a != 69036;
      }
      if (eqz(g_b)) {
        if (c) goto B_t;
        g = b[0]:long;
        a = g >= 0L;
      }
      if (select_if(g_b, 1, a)) {
        if (eqz(g_b) | d == 4) {
          runtime_putchar(45);
          4;
          if (g_b == 1) goto B_b;
        }
        g = select_if(g, 0L - g, g_b);
      }
      if (eqz(g_b) | d == 5) {
        runtime_printuint64(g);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_t:
      c = select_if(c, a == 67900, g_b);
      if (eqz(g_b)) {
        if (c) goto B_y;
        c = a != 85660;
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
      c = select_if(c, a != 67916, g_b);
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
        if (a == 69020) goto B_y;
        c = a != 86848;
      }
      if (eqz(g_b)) {
        if (c) goto B_ha;
        g = b[0]:long;
      }
      if (eqz(g_b) | d == 8) {
        runtime_printuint64(g);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ha:
      if (eqz(g_b)) {
        if (a == 68868) goto B_y;
        c = a != 86928;
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
          e[6]:int = (a = e[0]:int);
          b = e[1]:int;
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
        e[7]:int = (a = e[2]:int);
        b = e[3]:int;
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
      if (eqz(g_b) | d == 17) {
        runtime_printptr(b);
        17;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | d == 18) {
        runtime_putchar(41);
        18;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_y:
      if (eqz(g_b) | d == 19) {
        runtime_printuint32(b);
        19;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_k:
      if (eqz(g_b) | d == 20) {
        runtime_printint32(b);
        20;
        if (g_b == 1) goto B_b;
      }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = f;
        stack_pointer = e + 32;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d[0]:int = a;
  d[1]:int = b;
  d[2]:int = c;
  d[3]:int = e;
  d[4]:long@4 = g;
  d[6]:int = f;
  g_c[0]:int = g_c[0]:int + 28;
}

function interface_Error_func_string_typeassert(a:int):int { // func124
  return 
    (((((a == 87508 | a == 87492) | a == 87428) | a == 87404) | a == 87388) |
     a == 87340) |
    a == 87280
}

function interface_String_func_string_typeassert(a:int):int { // func125
  return 
    ((((((((((((((a == 87576 | a == 87532) | a == 87524) | a == 87516) | a == 87500) |
              a == 87484) |
             a == 87476) |
            a == 87420) |
           a == 87396) |
          a == 87380) |
         a == 87372) |
        a == 87312) |
       a == 87216) |
      a == 87092) |
     a == 87016) |
    a == 86944
}

function interface_String_func_string_String_invoke(a:{ a:int, b:int }, b:int, c:{ a:int, b:int }) { // func126
  var d:int_ptr;
  var e:int;
  var g:int;
  var h:long;
  var i:long;
  var j:int;
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    f = g_c[0]:int;
    a = f[0]:int;
    c = f[2]:int;
    d = f[3]:int;
    e = f[4]:int;
    h = f[5]:long@4;
    i = f[7]:long@4;
    j = f[9]:int;
    b = f[1]:int;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 224;
          stack_pointer = d;
          d[33] = 22;
          memory_fill(d + 136, 0, 88);
          d[32] = (j = 90044[0]:int);
          90044[0]:int = d + 128;
          e = c != 87576;
        }
        if (eqz(g_b)) {
          if (e) goto B_g;
          d[35] = (c = b[1]:int);
          d[34] = (b = b[0]:int);
          e = d + 8;
        }
        if (eqz(g_b) | eqz(g)) {
          String_2(e, b, c);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[3];
          b = d[2];
          goto B_f;
        }
        label B_g:
        e = select_if(e, c != 87532, g_b);
        if (eqz(g_b)) {
          if (e) goto B_k;
          if (eqz(b)) goto B_e;
          d[38] = (c = b[1]:int);
          d[37] = (b = b[0]:int);
          e = d + 16;
        }
        if (eqz(g_b) | g == 1) {
          String_2(e, b, c);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[5];
          b = d[4];
          goto B_f;
        }
        label B_k:
        e = select_if(e, c != 87524, g_b);
        if (eqz(g_b)) {
          if (e) goto B_o;
          if (eqz(b)) goto B_e;
          c = d + 24;
        }
        if (eqz(g_b) | g == 2) {
          String(c, b);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[7];
          b = d[6];
          goto B_f;
        }
        label B_o:
        e = select_if(e, c != 87516, g_b);
        if (eqz(g_b)) {
          if (e) goto B_s;
          if (eqz(b)) goto B_e;
          d[41] = (c = b[4]:int);
          h = b[0]:long;
          i = b[1]:long;
          e = d + 32;
        }
        if (eqz(g_b) | g == 3) {
          String_3(e, h, i, c);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[9];
          b = d[8];
          goto B_f;
        }
        label B_s:
        if (select_if(g_b, 1, e = select_if(e, c != 87500, g_b))) {
          if (eqz(g_b) | g == 4) {
            get(b);
            let t0 = 4;
            if (g_b == 1) goto B_b;
            c = t0;
          }
          if (eqz(g_b)) {
            d[43] = c;
            if (eqz(c)) goto B_e;
            d[44] = (b = c.a);
            c = c.b;
            goto B_f;
          }
        }
        e = select_if(e, c != 87484, g_b);
        if (eqz(g_b)) {
          if (e) goto B_z;
          c = d + 40;
        }
        if (eqz(g_b) | g == 5) {
          String_4(c, b);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[11];
          b = d[10];
          goto B_f;
        }
        label B_z:
        e = select_if(e, c != 87476, g_b);
        if (eqz(g_b)) {
          if (e) goto B_da;
          if (eqz(b)) goto B_e;
          d[46] = (c = b[1]:int);
          d[45] = (b = b[0]:int);
          e = d + 48;
        }
        if (eqz(g_b) | g == 6) {
          String_2(e, b, c);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[13];
          b = d[12];
          goto B_f;
        }
        label B_da:
        e = select_if(e, c != 87420, g_b);
        if (eqz(g_b)) {
          if (e) goto B_ha;
          if (eqz(b)) goto B_e;
          c = d + 56;
          b = b[0]:int;
        }
        if (eqz(g_b) | g == 7) {
          String_5(c, b);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[15];
          b = d[14];
          goto B_f;
        }
        label B_ha:
        e = select_if(e, c != 87396, g_b);
        if (eqz(g_b)) {
          if (e) goto B_la;
          if (eqz(b)) goto B_e;
          d[50] = (c = b[1]:int);
          d[49] = (b = b[0]:int);
          e = d - -64;
        }
        if (eqz(g_b) | g == 8) {
          String_2(e, b, c);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[17];
          b = d[16];
          goto B_f;
        }
        label B_la:
        e = select_if(e, c != 87380, g_b);
        if (eqz(g_b)) {
          if (e) goto B_pa;
          c = d + 72;
        }
        if (eqz(g_b) | g == 9) {
          String(c, b);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[19];
          b = d[18];
          goto B_f;
        }
        label B_pa:
        e = select_if(e, c != 87372, g_b);
        if (eqz(g_b)) {
          if (e) goto B_ta;
          if (eqz(b)) goto B_e;
          c = d + 80;
          b = b[0]:ubyte;
        }
        if (eqz(g_b) | g == 10) {
          String_1(c, b);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[21];
          b = d[20];
          goto B_f;
        }
        label B_ta:
        e = select_if(e, c != 87312, g_b);
        if (eqz(g_b)) {
          if (e) goto B_xa;
          c = d + 88;
          h = b[0]:long;
          i = b[1]:long;
          b = b[4]:int;
        }
        if (eqz(g_b) | g == 11) {
          String_3(c, h, i, b);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[23];
          b = d[22];
          goto B_f;
        }
        label B_xa:
        e = select_if(e, c != 87216, g_b);
        if (eqz(g_b)) {
          if (e) goto B_bb;
          d[54] = (c = b[1]:int);
          d[53] = (b = b[0]:int);
          e = d + 96;
        }
        if (eqz(g_b) | g == 12) {
          String_2(e, b, c);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[25];
          b = d[24];
          goto B_f;
        }
        label B_bb:
        e = select_if(e, c != 87092, g_b);
        if (eqz(g_b)) {
          if (e) goto B_fb;
          c = d + 104;
        }
        if (eqz(g_b) | g == 13) {
          String_5(c, b);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[27];
          b = d[26];
          goto B_f;
        }
        label B_fb:
        e = select_if(e, c != 87016, g_b);
        if (eqz(g_b)) {
          if (e) goto B_jb;
          c = d + 112;
          e = b[0]:int;
          b = b[1]:int;
        }
        if (eqz(g_b) | g == 14) {
          String_2(c, e, b);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[29];
          b = d[28];
          goto B_f;
        }
        label B_jb:
        if (eqz(g_b)) {
          if (c != 86944) goto B_e;
          c = d + 120;
        }
        if (eqz(g_b) | g == 15) {
          String_1(c, b);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d[31];
          b = d[30];
        }
        label B_f:
        if (eqz(g_b)) {
          90044[0]:int = j;
          a.b = c;
          a.a = b;
          stack_pointer = d + 224;
          return ;
        }
        label B_e:
        if (eqz(g_b) | g == 16) {
          runtime_nilPanic();
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f[0]:int = a;
  f[1]:int = b;
  f[2]:int = c;
  f[3]:int = d;
  f[4]:int = e;
  f[5]:long@4 = h;
  f[7]:long@4 = i;
  f[9]:int = j;
  g_c[0]:int = g_c[0]:int + 40;
}

function String_3(a:{ a:int, b:int }, b:long, c:long, d:int) { // func127
  var e:int;
  var n:int;
  var k:int;
  var h:{ a:int, b:int, c:int }
  var i:int;
  var s:long;
  var t:int;
  var f:int;
  var aa:int;
  var da:long;
  var o:int;
  var na:int;
  var g:ubyte_ptr;
  var q:int;
  var r:int;
  var l:int;
  var oa:int;
  var ka:int;
  var j:byte_ptr;
  var m:int;
  var p:int;
  var x:int;
  var v:int;
  var u:int;
  var y:int;
  var ca:{ a:int, b:int }
  var z:int;
  var fa:int;
  var ga:int;
  var ja:int;
  var w:int;
  var ma:int;
  var ia:int;
  var ba:int;
  var ea:long_ptr;
  var ha:int;
  var la:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 172;
    l = g_c[0]:int;
    a = l[0]:int;
    c = l[3]:long@4;
    d = l[5]:int;
    e = l[6]:int;
    f = l[7]:int;
    g = l[8]:int;
    h = l[9]:int;
    i = l[10]:int;
    j = l[11]:int;
    k = l[12]:int;
    m = l[13]:int;
    o = l[14]:int;
    p = l[15]:int;
    q = l[16]:int;
    r = l[17]:int;
    s = l[18]:long@4;
    t = l[20]:int;
    u = l[21]:int;
    w = l[22]:int;
    v = l[23]:int;
    x = l[24]:int;
    y = l[25]:int;
    z = l[26]:int;
    aa = l[27]:int;
    ba = l[28]:int;
    ca = l[29]:int;
    da = l[30]:long@4;
    ea = l[32]:int;
    fa = l[33]:int;
    ga = l[34]:int;
    ha = l[35]:int;
    ia = l[36]:int;
    ja = l[37]:int;
    ka = l[38]:int;
    la = l[39]:int;
    ma = l[40]:int;
    na = l[41]:int;
    oa = l[42]:int;
    b = l[1]:long@4;
  }
  l = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        n = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 1072;
        stack_pointer = e;
        e[207]:int = 47;
        memory_fill(e + 832, 0, 188);
        e[206]:int = (la = 90044[0]:int);
        90044[0]:int = (h = e + 824);
        m = 64;
        j = 0;
      }
      if (eqz(g_b) | eqz(n)) {
        runtime_alloc(64);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        k = t0;
      }
      if (eqz(g_b)) {
        e[208]:int = k;
        e[209]:int = k;
        e[257]:int = 9;
        memory_fill(e + 1032, 0, 36);
        e[256]:int = (f = 90044[0]:int);
        90044[0]:int = e + 1024;
        h = eqz(d);
      }
      if (eqz(g_b | h)) {
        h = d != 90576;
        if (h) goto B_g;
      }
      if (eqz(g_b) | n == 1) {
        get(d);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        d = t1;
      }
      if (eqz(g_b)) { e[258]:int = d }
      label B_g:
      if (eqz(g_b)) {
        s = select_if((b >> 30L & 8589934591L) + 59453308800L, c, b < 0L) -
            62135596800L;
        e[259]:int = d;
        h = d != 87728;
      }
      if (eqz(g_b)) {
        if (eqz(h)) {
          aa = 68620;
          ba = 3;
          t = 0;
          goto B_l;
        }
        h = eqz(d);
      }
      if (eqz(g_b)) {
        if (h) goto B_p;
        e[260]:int = (h = d[14]:int);
        i = eqz(h);
        if (i) goto B_r;
        i = d[5]:long > s;
        if (i) goto B_r;
        i = d[6]:long <= s;
        if (i) goto B_r;
        e[261]:int = h;
        e[262]:int = (aa = h.a);
        ba = h.b;
        e[263]:int = h;
        t = h.c;
        goto B_o;
        label B_r:
        h = e + 800;
      }
      if (eqz(g_b) | n == 2) {
        lookup(h, d, s);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        ba = e[201]:int;
        aa = e[200]:int;
        t = e[202]:int;
        goto B_o;
      }
      label B_p:
      if (eqz(g_b) | n == 3) {
        runtime_nilPanic();
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_o:
      s = select_if(s, i64_extend_i32_s(t) + s, g_b);
      label B_l:
      if (eqz(g_b)) {
        90044[0]:int = f;
        e[210]:int = aa;
        ma = 0 - t;
        ha = i32_wrap_i64(b) & 1073741823;
        w = 0 - (ia = t / 60);
        da = s + 9223372028741760000L;
        s = da / 86400L;
        ca = (i32_wrap_i64((s + 3L) % 7L) << 3) + 68644;
        d = e + 1024;
        ea = d + 8;
        o = 68561;
        ja = t > -60;
        x = -1;
        y = 0;
        z = 0;
        v = -1;
        u = -1;
        fa = 0;
        ga = 0;
        f = 39;
      }
      loop L_x {
        if (eqz(g_b)) {
          e[212]:int = k;
          e[211]:int = o;
          e[213]:int = o;
          d = eqz(f);
        }
        if (eqz(g_b)) {
          if (d) goto B_ea;
          p = 0;
          na = select_if(f, 0, d = f > 0);
          r = 1;
          h = 0;
        }
        g = 
          {
            if (eqz(g_b)) {
              loop L_na {
                d = h != na;
                if (eqz(d)) {
                  h = f;
                  g = 0;
                  f = 0;
                  goto B_ja;
                }
                d = h + o;
                i = d[0]:ubyte;
                br_table[B_wa, B_ua, B_ta, B_eb, B_db, B_cb, B_ab, B_za, B_ya, ..B_fb](
                  i - 45);
                label B_fb:
                br_table[B_hb, B_ta, B_ta, B_gb, B_ta, B_ta, B_xa, ..B_ib](i - 74)
                label B_ib:
                if (i == 90) goto B_va;
                if (i == 95) goto B_bb;
                if (i != 112) goto B_ta;
                i = f < (d = h + 2);
                if (i) goto B_qa;
                i = f <= (g = h + 1);
                if (i) goto B_pa;
                i = (g + o)[0]:ubyte != 109;
                if (i) goto B_qa;
                f = f - d;
                g = d + o;
                p = 1046;
                goto B_ja;
                label B_hb:
                if (f < (i = h + 3)) goto B_qa;
                g = f < i;
                if (g) goto B_ga;
                if (eqz(runtime_stringEqual(d, 3, 68151, 3) & 1)) goto B_qa;
                q = f < (g = h + 7);
                if (q) goto B_jb;
                q = f < g;
                if (q) goto B_ga;
                d = eqz(runtime_stringEqual(d, 7, 68154, 7) & 1);
                if (d) goto B_jb;
                f = f - g;
                g = g + o;
                p = 257;
                goto B_ja;
                label B_jb:
                g = i + o;
                d = f != i;
                if (eqz(d)) {
                  i = f;
                  goto B_kb;
                }
                d = (g[0] - 97 & 255) < 26;
                if (d) goto B_qa;
                label B_kb:
                f = f - i;
                p = 258;
                goto B_ja;
                label B_gb:
                if (f < (i = h + 3)) goto B_qa;
                g = f < i;
                if (g) goto B_ga;
                if (eqz(runtime_stringEqual(d, 3, 68161, 3) & 1)) goto B_mb;
                if (f < (g = h + 6)) goto B_nb;
                q = f < g;
                if (q) goto B_ga;
                q = eqz(runtime_stringEqual(d, 6, 68164, 6) & 1);
                if (q) goto B_nb;
                f = f - g;
                g = g + o;
                p = 261;
                goto B_ja;
                label B_nb:
                g = i + o;
                q = f != i;
                if (eqz(q)) {
                  i = f;
                  goto B_ob;
                }
                q = (g[0] - 97 & 255) < 26;
                if (q) goto B_mb;
                label B_ob:
                f = f - i;
                p = 262;
                goto B_ja;
                label B_mb:
                d = eqz(runtime_stringEqual(d, 3, 68170, 3) & 1);
                if (d) goto B_qa;
                f = f - i;
                g = i + o;
                p = 23;
                goto B_ja;
                label B_eb:
                if (f < (d = h + 2)) goto B_qb;
                i = f <= (g = h + 1);
                if (i) goto B_pa;
                i = (g + o)[0]:ubyte - 49 & 255;
                if (i > 5) goto B_qb;
                f = f - d;
                g = d + o;
                d = (i << 2) + 68016;
                p = d[0]:int;
                goto B_ja;
                label B_qb:
                i = f < (g = h + 3);
                if (i) goto B_qa;
                q = f <= (i = h + 1);
                if (q) goto B_pa;
                i = (i + o)[0]:ubyte != 48;
                if (i) goto B_qa;
                i = d >= f;
                if (i) goto B_pa;
                d = (d + o)[0]:ubyte != 50;
                if (d) goto B_qa;
                f = f - g;
                g = g + o;
                p = 523;
                goto B_ja;
                label B_db:
                d = h + 1;
                i = f < (g = h + 2);
                if (i) goto B_sa;
                i = d >= f;
                if (i) goto B_pa;
                i = (d + o)[0]:ubyte != 53;
                if (i) goto B_sa;
                f = f - g;
                g = g + o;
                p = 1036;
                goto B_ja;
                label B_cb:
                i = f < (g = h + 4);
                if (i) goto B_rb;
                i = f < g;
                if (i) goto B_ga;
                d = eqz(runtime_stringEqual(d, 4, 68173, 4) & 1);
                if (d) goto B_rb;
                f = f - g;
                g = g + o;
                p = 275;
                goto B_ja;
                label B_rb:
                f = f - (d = h + 1);
                g = d + o;
                p = 263;
                goto B_ja;
                label B_bb:
                if (f < (d = h + 2)) goto B_sb;
                g = f <= (i = h + 1);
                if (g) goto B_pa;
                g = i + o;
                q = g[0] != 50;
                if (q) goto B_sb;
                r = h + 5;
                q = r > f;
                if (q) goto B_tb;
                q = f < r;
                if (q) goto B_ga;
                if (eqz(runtime_stringEqual(g, 4, 68173, 4) & 1)) goto B_tb;
                e[214]:int = (g = o + r);
                f = f - r;
                p = 275;
                h = i;
                goto B_ia;
                label B_tb:
                f = f - d;
                g = d + o;
                p = 264;
                goto B_ja;
                label B_sb:
                i = f < (g = h + 3);
                if (i) goto B_qa;
                q = f <= (i = h + 1);
                if (q) goto B_pa;
                i = (i + o)[0]:ubyte != 95;
                if (i) goto B_qa;
                i = d >= f;
                if (i) goto B_pa;
                d = (d + o)[0]:ubyte != 50;
                if (d) goto B_qa;
                f = f - g;
                g = g + o;
                p = 522;
                goto B_ja;
                label B_ab:
                f = f - (d = h + 1);
                g = d + o;
                p = 1037;
                goto B_ja;
                label B_za:
                f = f - (d = h + 1);
                g = d + o;
                p = 1039;
                goto B_ja;
                label B_ya:
                f = f - (d = h + 1);
                g = d + o;
                p = 1041;
                goto B_ja;
                label B_xa:
                i = f < (d = h + 2);
                if (i) goto B_qa;
                i = f <= (g = h + 1);
                if (i) goto B_pa;
                i = (g + o)[0]:ubyte != 77;
                if (i) goto B_qa;
                f = f - d;
                g = d + o;
                p = 1045;
                goto B_ja;
                label B_wa:
                if (f < (g = h + 7)) goto B_ub;
                i = f < g;
                if (i) goto B_ga;
                i = eqz(runtime_stringEqual(d, 7, 68177, 7) & 1);
                if (i) goto B_ub;
                f = f - g;
                g = g + o;
                p = 30;
                goto B_ja;
                label B_ub:
                if (f < (g = h + 9)) goto B_vb;
                i = f < g;
                if (i) goto B_ga;
                i = eqz(runtime_stringEqual(d, 9, 68184, 9) & 1);
                if (i) goto B_vb;
                f = f - g;
                g = g + o;
                p = 33;
                goto B_ja;
                label B_vb:
                if (f < (g = h + 5)) goto B_wb;
                i = f < g;
                if (i) goto B_ga;
                i = eqz(runtime_stringEqual(d, 5, 68193, 5) & 1);
                if (i) goto B_wb;
                f = f - g;
                g = g + o;
                p = 29;
                goto B_ja;
                label B_wb:
                if (f < (g = h + 6)) goto B_xb;
                i = f < g;
                if (i) goto B_ga;
                i = eqz(runtime_stringEqual(d, 6, 68198, 6) & 1);
                if (i) goto B_xb;
                f = f - g;
                g = g + o;
                p = 32;
                goto B_ja;
                label B_xb:
                i = f < (g = h + 3);
                if (i) goto B_qa;
                i = f < g;
                if (i) goto B_ga;
                d = eqz(runtime_stringEqual(d, 3, 68204, 3) & 1);
                if (d) goto B_qa;
                f = f - g;
                g = g + o;
                p = 31;
                goto B_ja;
                label B_va:
                if (f < (g = h + 7)) goto B_yb;
                i = f < g;
                if (i) goto B_ga;
                i = eqz(runtime_stringEqual(d, 7, 68207, 7) & 1);
                if (i) goto B_yb;
                f = f - g;
                g = g + o;
                p = 25;
                goto B_ja;
                label B_yb:
                if (f < (g = h + 9)) goto B_zb;
                i = f < g;
                if (i) goto B_ga;
                i = eqz(runtime_stringEqual(d, 9, 68214, 9) & 1);
                if (i) goto B_zb;
                f = f - g;
                g = g + o;
                p = 28;
                goto B_ja;
                label B_zb:
                if (f < (g = h + 5)) goto B_ac;
                i = f < g;
                if (i) goto B_ga;
                i = eqz(runtime_stringEqual(d, 5, 68223, 5) & 1);
                if (i) goto B_ac;
                f = f - g;
                g = g + o;
                p = 24;
                goto B_ja;
                label B_ac:
                if (f < (g = h + 6)) goto B_bc;
                i = f < g;
                if (i) goto B_ga;
                i = eqz(runtime_stringEqual(d, 6, 68228, 6) & 1);
                if (i) goto B_bc;
                f = f - g;
                g = g + o;
                p = 27;
                goto B_ja;
                label B_bc:
                i = f < (g = h + 3);
                if (i) goto B_qa;
                i = f < g;
                if (i) goto B_ga;
                d = eqz(runtime_stringEqual(d, 3, 68234, 3) & 1);
                if (d) goto B_qa;
                f = f - g;
                g = g + o;
                p = 26;
                goto B_ja;
                label B_ua:
                if (f <= (d = h + 1)) goto B_qa;
                goto B_ra;
                label B_ta:
                if (f <= (d = h + 1)) goto B_qa;
                if (i == 44) goto B_ra;
                goto B_qa;
                label B_sa:
                f = f - d;
                g = d + o;
                p = 259;
                goto B_ja;
                label B_ra:
                g = d >= f;
                if (g) goto B_pa;
                l = (d + o)[0]:ubyte;
                oa = l == 57;
                if (eqz(oa) & l != 48) goto B_qa;
                d = r;
                loop L_cc {
                  g = d >= f;
                  if (g) goto B_la;
                  g = d >= f;
                  if (g) goto B_pa;
                  g = d + o;
                  q = d + 1;
                  d = q;
                  ka = l == (g = g[0]);
                  if (ka) continue L_cc;
                }
                if ((g - 48 & 255) < 10) goto B_qa;
                d = d - 1;
                q - 2;
                goto B_ka;
                label B_qa:
                r = r + 1;
                h = h + 1;
                continue L_na;
                label B_pa:
              }
            }
            if (eqz(g_b) | n == 4) {
              runtime_lookupPanic();
              4;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) { unreachable }
            label B_la:
            if (g_b) {
              g
            } else {
              d = select_if(f, r, f > r);
              d - 1;
            }
            label B_ka:
          }
        if (eqz(g_b)) {
          q = d > f;
          if (q) goto B_ga;
          g = (g - h << 16 & 268369920) | select_if(35, 34, oa);
          q = g | 268435456;
          p = select_if(g, q, i = i == 46);
          g = d + o;
          f = f - d;
        }
        label B_ja:
        if (eqz(g_b)) {
          e[214]:int = g;
          d = eqz(h);
          if (d) goto B_ha;
        }
        label B_ia:
        d = select_if(d, e + 784, g_b);
        if (eqz(g_b) | n == 5) {
          runtime_sliceAppend(d, k, o, j, m, h, 1);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[215]:int = (k = e[196]:int);
          m = e[198]:int;
          j = e[197]:int;
        }
        label B_ha:
        if (eqz(g_b)) {
          o = g;
          e[216]:int = k;
          d = eqz(p);
          if (d) goto B_ea;
          if (eqz(eqz(p & 256) | x >= 0)) {
            date(e + 768, s);
            z = e[194]:int;
            y = e[193]:int;
            x = e[192]:int;
          }
          if (eqz(eqz(p & 512) | v >= 0)) {
            yearYday(e + 760, s);
            v = e[191]:int;
          }
          if (u >= 0) goto B_nc;
          u = -1;
          if (eqz(p & 1024)) goto B_nc;
          clock(e + 744, da);
          ga = e[188]:int;
          fa = e[187]:int;
          u = e[186]:int;
          label B_nc:
          d = p & 65535;
          h = d - 257;
        }
        if (eqz(g_b)) {
          br_table[B_id, B_jd, B_hd, B_gd, B_ed, B_fd, B_dd, B_cd, B_bd, B_oc, B_oc, B_oc, B_oc, B_oc, B_oc, B_oc, B_oc, B_oc, B_kd, B_md, ..B_nd](
            h)
          label B_nd:
          h = d - 24 < 10;
          if (h) goto B_pc;
          h = d - 1036;
          br_table[B_yc, B_xc, B_wc, B_vc, B_uc, B_tc, B_sc, B_oc, B_oc, B_rc, B_qc, ..B_od](
            h);
          label B_od:
          h = d - 522;
          br_table[B_ad, B_zc, ..B_oc](h);
          label B_md:
          i = e + 184;
          h = x ^ (d = x >> 31);
          d = (h - d) % 100;
        }
        if (eqz(g_b) | n == 6) {
          time_appendInt(i, k, j, m, d, 2);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[48]:int;
          j = e[47]:int;
          k = e[46]:int;
          goto B_z;
        }
        label B_kd:
        d = select_if(d, e + 200, g_b);
        if (eqz(g_b) | n == 7) {
          time_appendInt(d, k, j, m, x, 4);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[52]:int;
          j = e[51]:int;
          k = e[50]:int;
          goto B_z;
        }
        label B_jd:
        d = select_if(d, e + 232, g_b);
        if (eqz(g_b) | n == 8) {
          String_6(d, y);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[218]:int = (d = e[58]:int);
          h = e[59]:int < 3;
          if (h) goto B_ga;
          h = e + 216;
        }
        if (eqz(g_b) | n == 9) {
          runtime_sliceAppend(h, k, d, j, m, 3, 1);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[56]:int;
          j = e[55]:int;
          k = e[54]:int;
          goto B_z;
        }
        label B_id:
        d = select_if(d, e + 256, g_b);
        if (eqz(g_b) | n == 10) {
          String_6(d, y);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[219]:int = (d = e[64]:int);
          i = e + 240;
          h = e[65]:int;
        }
        if (eqz(g_b) | n == 11) {
          runtime_sliceAppend(i, k, d, j, m, h, 1);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[62]:int;
          j = e[61]:int;
          k = e[60]:int;
          goto B_z;
        }
        label B_hd:
        d = select_if(d, e + 264, g_b);
        if (eqz(g_b) | n == 12) {
          time_appendInt(d, k, j, m, y, 0);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[68]:int;
          j = e[67]:int;
          k = e[66]:int;
          goto B_z;
        }
        label B_gd:
        d = select_if(d, e + 280, g_b);
        if (eqz(g_b) | n == 13) {
          time_appendInt(d, k, j, m, y, 2);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[72]:int;
          j = e[71]:int;
          k = e[70]:int;
          goto B_z;
        }
        label B_fd:
        if (eqz(g_b)) {
          e[220]:int = (d = ca.a);
          h = ca.b < 3;
          if (h) goto B_ga;
          h = e + 296;
        }
        if (eqz(g_b) | n == 14) {
          runtime_sliceAppend(h, k, d, j, m, 3, 1);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[76]:int;
          j = e[75]:int;
          k = e[74]:int;
          goto B_z;
        }
        label B_ed:
        if (eqz(g_b)) {
          e[221]:int = (d = ca.a);
          i = e + 312;
          h = ca.b;
        }
        if (eqz(g_b) | n == 15) {
          runtime_sliceAppend(i, k, d, j, m, h, 1);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[80]:int;
          j = e[79]:int;
          k = e[78]:int;
          goto B_z;
        }
        label B_dd:
        d = select_if(d, e + 328, g_b);
        if (eqz(g_b) | n == 16) {
          time_appendInt(d, k, j, m, z, 0);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[84]:int;
          j = e[83]:int;
          k = e[82]:int;
          goto B_z;
        }
        label B_cd:
        d = select_if(d, z > 9, g_b);
        if (eqz(g_b)) {
          if (d) goto B_ne;
          e[823]:byte = 32;
          h = e + 360;
          d = e + 823;
        }
        if (eqz(g_b) | n == 17) {
          runtime_sliceAppend(h, k, d, j, m, 1, 1);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[222]:int = (k = e[90]:int);
          m = e[92]:int;
          j = e[91]:int;
        }
        label B_ne:
        if (eqz(g_b)) {
          e[223]:int = k;
          d = e + 344;
        }
        if (eqz(g_b) | n == 18) {
          time_appendInt(d, k, j, m, z, 0);
          18;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[88]:int;
          j = e[87]:int;
          k = e[86]:int;
          goto B_z;
        }
        label B_bd:
        d = select_if(d, e + 376, g_b);
        if (eqz(g_b) | n == 19) {
          time_appendInt(d, k, j, m, z, 2);
          19;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[96]:int;
          j = e[95]:int;
          k = e[94]:int;
          goto B_z;
        }
        label B_ad:
        d = select_if(d, v > 99, g_b);
        if (eqz(g_b)) {
          if (d) goto B_we;
          e[822]:byte = 32;
          h = e + 424;
          d = e + 822;
        }
        if (eqz(g_b) | n == 20) {
          runtime_sliceAppend(h, k, d, j, m, 1, 1);
          20;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[224]:int = (k = e[106]:int);
          m = e[108]:int;
          j = e[107]:int;
          d = v > 9;
          if (d) goto B_we;
          e[821]:byte = 32;
          h = e + 408;
          d = e + 821;
        }
        if (eqz(g_b) | n == 21) {
          runtime_sliceAppend(h, k, d, j, m, 1, 1);
          21;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[225]:int = (k = e[102]:int);
          m = e[104]:int;
          j = e[103]:int;
        }
        label B_we:
        if (eqz(g_b)) {
          e[226]:int = k;
          d = e + 392;
        }
        if (eqz(g_b) | n == 22) {
          time_appendInt(d, k, j, m, v, 0);
          22;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[100]:int;
          j = e[99]:int;
          k = e[98]:int;
          goto B_z;
        }
        label B_zc:
        d = select_if(d, e + 440, g_b);
        if (eqz(g_b) | n == 23) {
          time_appendInt(d, k, j, m, v, 3);
          23;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[112]:int;
          j = e[111]:int;
          k = e[110]:int;
          goto B_z;
        }
        label B_yc:
        d = select_if(d, e + 456, g_b);
        if (eqz(g_b) | n == 24) {
          time_appendInt(d, k, j, m, u, 2);
          24;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[116]:int;
          j = e[115]:int;
          k = e[114]:int;
          goto B_z;
        }
        label B_xc:
        if (eqz(g_b)) {
          h = e + 472;
          d = u % 12;
          d = select_if(d, 12, d);
        }
        if (eqz(g_b) | n == 25) {
          time_appendInt(h, k, j, m, d, 0);
          25;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[120]:int;
          j = e[119]:int;
          k = e[118]:int;
          goto B_z;
        }
        label B_wc:
        if (eqz(g_b)) {
          h = e + 488;
          d = u % 12;
          d = select_if(d, 12, d);
        }
        if (eqz(g_b) | n == 26) {
          time_appendInt(h, k, j, m, d, 2);
          26;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[124]:int;
          j = e[123]:int;
          k = e[122]:int;
          goto B_z;
        }
        label B_vc:
        d = select_if(d, e + 504, g_b);
        if (eqz(g_b) | n == 27) {
          time_appendInt(d, k, j, m, fa, 0);
          27;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[128]:int;
          j = e[127]:int;
          k = e[126]:int;
          goto B_z;
        }
        label B_uc:
        d = select_if(d, e + 520, g_b);
        if (eqz(g_b) | n == 28) {
          time_appendInt(d, k, j, m, fa, 2);
          28;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[132]:int;
          j = e[131]:int;
          k = e[130]:int;
          goto B_z;
        }
        label B_tc:
        d = select_if(d, e + 536, g_b);
        if (eqz(g_b) | n == 29) {
          time_appendInt(d, k, j, m, ga, 0);
          29;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[136]:int;
          j = e[135]:int;
          k = e[134]:int;
          goto B_z;
        }
        label B_sc:
        d = select_if(d, e + 552, g_b);
        if (eqz(g_b) | n == 30) {
          time_appendInt(d, k, j, m, ga, 2);
          30;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[140]:int;
          j = e[139]:int;
          k = e[138]:int;
          goto B_z;
        }
        label B_rc:
        d = select_if(d, u < 12, g_b);
        if (eqz(g_b)) {
          if (d) goto B_xf;
          d = e + 568;
        }
        if (eqz(g_b) | n == 31) {
          runtime_sliceAppend(d, k, 68603, j, m, 2, 1);
          31;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[144]:int;
          j = e[143]:int;
          k = e[142]:int;
          goto B_z;
        }
        label B_xf:
        d = select_if(d, e + 584, g_b);
        if (eqz(g_b) | n == 32) {
          runtime_sliceAppend(d, k, 68605, j, m, 2, 1);
          32;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[148]:int;
          j = e[147]:int;
          k = e[146]:int;
          goto B_z;
        }
        label B_qc:
        d = select_if(d, u < 12, g_b);
        if (eqz(g_b)) {
          if (d) goto B_dg;
          d = e + 600;
        }
        if (eqz(g_b) | n == 33) {
          runtime_sliceAppend(d, k, 68607, j, m, 2, 1);
          33;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[152]:int;
          j = e[151]:int;
          k = e[150]:int;
          goto B_z;
        }
        label B_dg:
        d = select_if(d, e + 616, g_b);
        if (eqz(g_b) | n == 34) {
          runtime_sliceAppend(d, k, 68609, j, m, 2, 1);
          34;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[156]:int;
          j = e[155]:int;
          k = e[154]:int;
          goto B_z;
        }
        label B_pc:
        if (eqz(g_b)) {
          if (t) goto B_jg;
          d = p - 24 > 4;
          if (d) goto B_jg;
          e[820]:byte = 90;
          h = e + 632;
          d = e + 820;
        }
        if (eqz(g_b) | n == 35) {
          runtime_sliceAppend(h, k, d, j, m, 1, 1);
          35;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[160]:int;
          j = e[159]:int;
          k = e[158]:int;
          goto B_z;
        }
        label B_jg:
        if (eqz(g_b)) {
          if (eqz(ja)) {
            e[819]:byte = 45;
            d = e + 819;
            h = w;
            g = ma;
            goto B_aa;
          }
          e[816]:byte = 43;
          d = e + 816;
          h = ia;
          g = t;
          goto B_aa;
        }
        label B_oc:
        h = select_if(h, d - 34 < 2, g_b);
        if (eqz(g_b)) {
          if (h) goto B_pg;
          d = d != 23;
          if (d) continue L_x;
          d = eqz(ba);
        }
        if (eqz(g_b)) {
          if (d) goto B_rg;
          d = e + 136;
        }
        if (eqz(g_b) | n == 36) {
          runtime_sliceAppend(d, k, aa, j, m, ba, 1);
          36;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[36]:int;
          j = e[35]:int;
          k = e[34]:int;
          goto B_z;
        }
        label B_rg:
        if (eqz(g_b)) {
          if (eqz(ja)) {
            e[815]:byte = 45;
            h = e + 815;
            d = w;
            goto B_ba;
          }
          e[814]:byte = 43;
          h = e + 814;
          d = ia;
          goto B_ba;
        }
        label B_pg:
        if (eqz(g_b)) {
          ea[0] = 0L;
          (ea + 8)[0]:long = 0L;
          (ea + 16)[0]:int = 0;
          e[257]:int = 5;
          g = 90044[0]:int;
          90044[0]:int = e + 1024;
          e[256]:int = g;
          h = p >> 16 & 4095;
          r = d != 35;
          if (eqz(r)) {
            i = eqz(h);
            d = i | eqz(ha);
            if (d) goto B_ca;
          }
          e[1071]:byte = (i = select_if(46, 44, p < 268435456));
          q = e + 168;
          d = e + 1071;
        }
        if (eqz(g_b) | n == 37) {
          runtime_sliceAppend(q, k, d, j, m, 1, 1);
          37;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[258]:int = (d = e[42]:int);
          ka = e + 152;
          q = e[43]:int;
          j = e[44]:int;
        }
        if (eqz(g_b) | n == 38) {
          time_appendInt(ka, d, q, j, ha, 9);
          38;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[260]:int = (k = e[38]:int);
          e[259]:int = k;
          m = e[40]:int;
          d = e[39]:int;
          j = h > 8;
          if (eqz(j)) {
            h = m < (d = d + h - 9);
            if (h) goto B_ga;
          }
          if (r) goto B_da;
          loop L_eh {
            e[261]:int = k;
            h = d <= 0;
            if (h) goto B_da;
            j = d - 1;
            h = (j + k)[0]:ubyte;
            q = h != 48;
            if (eqz(q)) {
              d = j > m;
              if (d) goto B_ga;
              d = j;
              continue L_eh;
            }
          }
          h = h != i;
          if (h) goto B_da;
          d = j <= m;
          if (d) goto B_ca;
        }
        label B_ga:
        if (eqz(g_b) | n == 39) {
          runtime_slicePanic();
          39;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_ea:
        if (eqz(g_b)) {
          e[240]:int = k;
          e[241]:int = k;
          e[239]:int = k;
          d = e + 80;
        }
        if (eqz(g_b) | n == 40) {
          runtime_stringFromBytes(d, k, j);
          40;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[243]:int = (d = e[20]:int);
          e[242]:int = d;
          i = b >= 0L;
          h = e[21]:int;
        }
        if (eqz(g_b)) {
          if (i) goto B_lh;
          o = 0;
          g = 24;
        }
        if (eqz(g_b) | n == 41) {
          runtime_alloc(24);
          let t2 = 41;
          if (g_b == 1) goto B_b;
          f = t2;
        }
        if (eqz(g_b)) {
          f[0]:short@1 = rodata_1[2760]:ushort@1;
          j = f + 2;
          j[0] = rodata_1[2762]:ubyte;
          f[3]:byte = select_if(45, 43, c < 0L);
          e[244]:int = f;
          e[245]:int = f;
          e[246]:int = f;
          s = c >> 63L;
          s = (s ^ c) - s;
          b = s / 1000000000L;
          c = b * 1000000000L;
          da = s - c;
          i = s > 999999999999999999L;
          b = b % 1000000000L;
        }
        if (eqz(g_b)) {
          if (eqz(i)) {
            r = 4;
            goto B_ph;
          }
          c = s / 1000000000000000000L;
          i = i32_wrap_i64(c);
          g = e - -64;
        }
        if (eqz(g_b) | n == 42) {
          time_appendInt(g, f, 4, 24, i, 0);
          42;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[247]:int = (f = e[16]:int);
          o = 9;
          r = e[17]:int;
          g = e[18]:int;
        }
        label B_ph:
        if (eqz(g_b)) {
          e[248]:int = f;
          j = e + 48;
          i = i32_wrap_i64(b);
        }
        if (eqz(g_b) | n == 43) {
          time_appendInt(j, f, r, g, i, o);
          43;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[813]:byte = 46;
          e[249]:int = (f = e[12]:int);
          w = e + 32;
          j = e + 813;
          i = e[14]:int;
          g = e[13]:int;
        }
        if (eqz(g_b) | n == 44) {
          runtime_sliceAppend(w, f, j, g, i, 1, 1);
          44;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[250]:int = (f = e[8]:int);
          w = e + 16;
          j = e[9]:int;
          i = i32_wrap_i64(da);
          g = e[10]:int;
        }
        if (eqz(g_b) | n == 45) {
          time_appendInt(w, f, j, g, i, 9);
          45;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[251]:int = (f = e[4]:int);
          i = e[5]:int;
          g = e + 8;
        }
        if (eqz(g_b) | n == 46) {
          runtime_stringFromBytes(g, f, i);
          46;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[252]:int = (f = e[2]:int);
          i = e[3]:int;
        }
        if (eqz(g_b) | n == 47) {
          runtime_stringConcat(e, d, h, f, i);
          47;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h = e[1]:int;
          d = e[0]:int;
        }
        label B_lh:
        if (eqz(g_b)) {
          90044[0]:int = la;
          a.b = h;
          a.a = d;
          stack_pointer = e + 1072;
          return ;
        }
        label B_da:
        j = select_if(j, d, g_b);
        label B_ca:
        if (eqz(g_b)) {
          90044[0]:int = g;
          goto B_z;
        }
        label B_ba:
        i = select_if(i, e + 120, g_b);
        if (eqz(g_b) | n == 48) {
          runtime_sliceAppend(i, k, h, j, m, 1, 1);
          48;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[237]:int = (h = e[30]:int);
          e[236]:int = h;
          q = e + 104;
          j = e[31]:int;
          i = e[32]:int;
          g = d / 60;
        }
        if (eqz(g_b) | n == 49) {
          time_appendInt(q, h, j, i, g, 2);
          49;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[238]:int = (h = e[26]:int);
          r = e + 88;
          q = e[27]:int;
          j = e[28]:int;
          d = d - (i = g * 60);
        }
        if (eqz(g_b) | n == 50) {
          time_appendInt(r, h, q, j, d, 2);
          50;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[24]:int;
          j = e[23]:int;
          k = e[22]:int;
          goto B_z;
        }
        label B_aa:
        i = select_if(i, e + 728, g_b);
        if (eqz(g_b) | n == 51) {
          runtime_sliceAppend(i, k, d, j, m, 1, 1);
          51;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[228]:int = (d = e[182]:int);
          e[227]:int = d;
          q = e + 712;
          j = e[183]:int;
          r = h / 60;
          i = e[184]:int;
        }
        if (eqz(g_b) | n == 52) {
          time_appendInt(q, d, j, i, r, 2);
          52;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[229]:int = (k = e[178]:int);
          m = e[180]:int;
          j = e[179]:int;
          d = p - 27;
          i = d > 6;
        }
        if (eqz(g_b)) {
          if (i) goto B_ri;
          d = eqz(1 << d & 99);
          if (d) goto B_ri;
          e[818]:byte = 58;
          i = e + 696;
          d = e + 818;
        }
        if (eqz(g_b) | n == 53) {
          runtime_sliceAppend(i, k, d, j, m, 1, 1);
          53;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[230]:int = (k = e[174]:int);
          m = e[176]:int;
          j = e[175]:int;
        }
        label B_ri:
        if (eqz(g_b)) {
          e[231]:int = k;
          d = p == 26;
        }
        if (eqz(g_b)) {
          if (d) goto B_wi;
          d = p == 31;
          if (d) goto B_wi;
          i = e + 680;
          d = h - r * 60;
        }
        if (eqz(g_b) | n == 54) {
          time_appendInt(i, k, j, m, d, 2);
          54;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[232]:int = (k = e[170]:int);
          m = e[172]:int;
          j = e[171]:int;
        }
        label B_wi:
        if (eqz(g_b)) {
          e[233]:int = k;
          d = p - 25;
        }
        if (eqz(g_b)) {
          br_table[B_bj, L_x, L_x, B_dj, L_x, B_bj, L_x, L_x, B_dj, ..L_x](d)
          label B_dj:
          e[817]:byte = 58;
          h = e + 664;
          d = e + 817;
        }
        if (eqz(g_b) | n == 55) {
          runtime_sliceAppend(h, k, d, j, m, 1, 1);
          55;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          e[234]:int = (k = e[166]:int);
          m = e[168]:int;
          j = e[167]:int;
        }
        label B_bj:
        if (eqz(g_b)) {
          e[235]:int = k;
          h = e + 648;
          d = g % 60;
        }
        if (eqz(g_b) | n == 56) {
          time_appendInt(h, k, j, m, d, 2);
          56;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = e[164]:int;
          k = e[162]:int;
          j = e[163]:int;
        }
        label B_z:
        if (eqz(g_b)) {
          e[217]:int = k;
          continue L_x;
        }
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = l;
  g_c[0]:int = g_c[0]:int + 4;
  l = g_c[0]:int;
  l[0]:int = a;
  l[1]:long@4 = b;
  l[3]:long@4 = c;
  l[5]:int = d;
  l[6]:int = e;
  l[7]:int = f;
  l[8]:int = g;
  l[9]:int = h;
  l[10]:int = i;
  l[11]:int = j;
  l[12]:int = k;
  l[13]:int = m;
  l[14]:int = o;
  l[15]:int = p;
  l[16]:int = q;
  l[17]:int = r;
  l[18]:long@4 = s;
  l[20]:int = t;
  l[21]:int = u;
  l[22]:int = w;
  l[23]:int = v;
  l[24]:int = x;
  l[25]:int = y;
  l[26]:int = z;
  l[27]:int = aa;
  l[28]:int = ba;
  l[29]:int = ca;
  l[30]:long@4 = da;
  l[32]:int = ea;
  l[33]:int = fa;
  l[34]:int = ga;
  l[35]:int = ha;
  l[36]:int = ia;
  l[37]:int = ja;
  l[38]:int = ka;
  l[39]:int = la;
  l[40]:int = ma;
  l[41]:int = na;
  l[42]:int = oa;
  g_c[0]:int = g_c[0]:int + 172;
}

function get(a:{ a:int, b:int, c:int }):int { // func128
  var b:int;
  var e:{ a:int, b:int, c:int, d:int }
  var d:int;
  var c:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    d = e.c;
    e = e.d;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          b = stack_pointer - 32;
          stack_pointer = b;
          b[7]:int = 0;
          b[5]:long@4 = 2L;
          e = 90044[0]:int;
          90044[0]:int = (d = b + 16);
          b[4]:int = e;
        }
        if (eqz(g_b)) {
          if (eqz(a)) {
            a = 87728;
            goto B_e;
          }
          d = a != 90576;
          if (d) goto B_e;
          a = eqz(90644[0]:ubyte);
        }
        if (eqz(g_b)) {
          if (a) goto B_j;
          d = 90648[0]:int;
          90648[0]:int = (a = 89832[0]:int);
          b[6]:int = a;
          b[7]:int = d;
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
        if (eqz(g_b)) { 90644[0]:byte = 1 }
        label B_i:
        if (eqz(g_b)) {
          b[2]:int = 90644;
          b[0]:long = 0L;
          a = eqz(90640[0]:ubyte);
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
          90580[0]:int = 5;
          90576[0]:int = 68638;
          90640[0]:byte = 1;
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
          a = 90576;
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
          90044[0]:int = e;
          stack_pointer = b + 32;
          return a;
        }
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

function String_4(a:{ a:int, b:int }, b:int) { // func129
  var e:int_ptr;
  var f:int;
  var c:{ a:int, b:int, c:int, d:int, e:int }
  var d:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    e = d.c;
    f = d.d;
    d = d.e;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 32;
          stack_pointer = e;
          d = 90044[0]:int;
          90044[0]:int = e + 16;
          f = eqz(b);
        }
        if (eqz(g_b)) {
          if (f) goto B_e;
          f = e + 8;
        }
        if (eqz(g_b) | eqz(c)) {
          String(f, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = d;
          b = e[3];
          a.a = e[2];
          a.b = b;
          stack_pointer = e + 32;
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
  c.e = d;
  g_c[0]:int = g_c[0]:int + 20;
}

function String_5(a:{ a:int, b:int }, b:int) { // func130
  var c:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var d:byte_ptr;
  var h:byte_ptr;
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    g = g_c[0]:int;
    a = g.a;
    b = g.b;
    c = g.c;
    d = g.d;
    e = g.e;
    h = g.f;
    g = g.g;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer - 112;
        stack_pointer = c;
        (c + 72)[0]:long = 0L;
        (c + 80)[0]:long = 0L;
        (c + 88)[0]:long = 0L;
        c[25]:long@4 = 1L;
        c[8]:long = 0L;
        g = 90044[0]:int;
        90044[0]:int = c + 96;
        c[24]:int = g;
        c[12]:int = 0;
        e = 0;
      }
      loop L_f {
        if (eqz(g_b)) {
          h = c + 48;
          d = c + 32;
        }
        if (eqz(g_b) | eqz(f)) {
          runtime_stringNext(d, 68796, 13, h);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = eqz(c[32]:ubyte);
          if (d) goto B_g;
          h = -2147483648 >> (d = c[9]:int);
          d = eqz(select_if(h, 0, d <= 31) & b);
          if (d) continue L_f;
          if (e == 32) goto B_e;
          d = e + c - -64;
          d[0] = (h = c[10]:int);
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
          h = c + 56;
          d = c + 16;
        }
        if (eqz(g_b) | f == 1) {
          runtime_stringNext(d, 68809, 9, h);
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
        if (eqz(g_b) | f == 2) {
          runtime_stringFromBytes(b, d, e);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = g;
          e = c[3]:int;
          a.a = c[2]:int;
          a.b = e;
          stack_pointer = c + 112;
          return ;
        }
        label B_s:
        if (eqz(g_b)) {
          d = 45;
          if (e <= 31) goto B_q;
          goto B_e;
        }
        label B_r:
        if (eqz(g_b) | f == 3) {
          runtime_slicePanic();
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_q:
        if (eqz(g_b)) {
          h = c - -64 + e;
          h[0] = d;
          e = e + 1;
          continue L_m;
        }
      }
      label B_e:
      if (eqz(g_b) | f == 4) {
        runtime_lookupPanic();
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
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
  f.g = g;
  g_c[0]:int = g_c[0]:int + 28;
}

function runtime_nilMapPanic() { // func131
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(67601, 30);
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

function runtime_hashmapSet(a:int, b:int, c:int, d:int) { // func132
  var e:int;
  var g:int_ptr;
  var h:byte_ptr;
  var i:ubyte_ptr;
  var m:int;
  var n:int;
  var l:int;
  var k:int;
  var j:byte_ptr;
  var p:int;
  var q:int;
  var r:int;
  var o:int;
  var s:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 68;
    f = g_c[0]:int;
    a = f.a;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    h = f.g;
    i = f.h;
    j = f.i;
    k = f.j;
    l = f.k;
    n = f.l;
    o = f.m;
    p = f.n;
    q = f.o;
    r = f.p;
    s = f.q;
    b = f.b;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        m = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 224;
        stack_pointer = e;
        e[9]:int = 45;
        memory_fill(e + 40, 0, 180);
        e[8]:int = (s = 90044[0]:int);
        90044[0]:int = e + 32;
        g = eqz(a);
      }
      if (eqz(g_b)) {
        if (g) goto B_f;
        h = a[20]:ubyte;
        g = h > 29;
      }
      if (eqz(g_b)) {
        if (g) goto B_h;
        i = a[2]:int;
        g = i <= 6 << h;
        if (g) goto B_h;
      }
      if (eqz(g_b) | eqz(m)) {
        runtime_alloc(40);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        d = t0;
      }
      if (eqz(g_b)) {
        d[0]:int = (j = a[0]:int);
        d[1]:long@4 = a[1]:long@4;
        d[3]:long@4 = a[3]:long@4;
        d[20]:byte = a[20]:ubyte;
        d[6]:int = (k = a[6]:int);
        d[7]:int = (i = a[7]:int);
        d[8]:int = (l = a[8]:int);
        d[9]:int = (n = a[9]:int);
        e[10]:int = d;
        e[15]:int = n;
        e[14]:int = l;
        e[13]:int = i;
        e[12]:int = k;
        e[11]:int = j;
        d[2]:int = 0;
        j = runtime_fastrand();
        d[20]:byte = (h = h + 1);
        d[1]:int = j;
        g = (a[4]:int + a[3]:int << 3) + 12 << (i = h & 255);
      }
      if (eqz(g_b) | m == 1) {
        runtime_alloc(g);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        h = t1;
      }
      if (eqz(g_b)) {
        d[0]:int = h;
        (e + 16)[0]:long = 0L;
        (e + 24)[0]:long = 0L;
        e[16]:int = h;
        e[1]:long = 0L;
        g = a[3]:int;
      }
      if (eqz(g_b) | m == 2) {
        runtime_alloc(g);
        let t2 = 2;
        if (g_b == 1) goto B_b;
        h = t2;
      }
      if (eqz(g_b)) {
        e[17]:int = h;
        g = a[4]:int;
      }
      if (eqz(g_b) | m == 3) {
        runtime_alloc(g);
        let t3 = 3;
        if (g_b == 1) goto B_b;
        k = t3;
      }
      if (eqz(g_b)) { e[18]:int = k }
      loop L_r {
        g = select_if(g, e + 8, g_b);
        if (eqz(g_b) | m == 4) {
          runtime_hashmapNext(a, g, h, k);
          let t4 = 4;
          if (g_b == 1) goto B_b;
          g = t4;
        }
        if (eqz(g_b)) {
          g = eqz(g & 1);
          if (g) goto B_s;
          e[19]:int = (i = d[8]:int);
          e[20]:int = (j = d[9]:int);
          if (eqz(j)) goto B_f;
          l = d[1]:int;
          g = d[3]:int;
        }
        if (eqz(g_b) | m == 5) {
          call_indirect(h, g, l, i, j);
          let t5 = 5;
          if (g_b == 1) goto B_b;
          g = t5;
        }
        if (eqz(g_b) | m == 6) {
          runtime_hashmapSet(d, h, k, g);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) continue L_r;
        label B_s:
      }
      if (eqz(g_b)) {
        e[26]:int = (k = d[0]:int);
        e[27]:int = (i = d[6]:int);
        e[21]:int = k;
        e[28]:int = (l = d[7]:int);
        e[22]:int = i;
        e[29]:int = (j = d[8]:int);
        e[23]:int = l;
        e[30]:int = (h = d[9]:int);
        e[24]:int = j;
        var t:long = d[1]:long@4;
        var u:long = d[3]:long@4;
        d = d[20]:ubyte;
        e[25]:int = h;
        a[9]:int = h;
        a[7]:int = l;
        a[6]:int = i;
        a[20]:byte = d;
        a[3]:long@4 = u;
        a[1]:long@4 = t;
        a[0]:int = k;
        a[8]:int = j;
        e[31]:int = j;
        e[32]:int = h;
        if (eqz(h)) goto B_f;
        g = a[1]:int;
        d = a[3]:int;
      }
      if (eqz(g_b) | m == 7) {
        call_indirect(b, d, g, j, h);
        let t6 = 7;
        if (g_b == 1) goto B_b;
        d = t6;
      }
      label B_h:
      if (eqz(g_b)) {
        e[33]:int = (i = runtime_hashmapBucketAddrForHash(a, d));
        o = select_if(1, g = d >> 24, d < 16777216);
        h = 0;
        k = 0;
        j = 0;
        d = 0;
      }
      loop L_aa {
        if (eqz(g_b)) {
          e[37]:int = d;
          e[38]:int = (g = i);
          e[36]:int = h;
          e[35]:int = k;
          e[34]:int = j;
          l = eqz(g);
          if (l) goto B_ba;
          p = g + 12;
          d = 0;
        }
        loop L_da {
          if (eqz(g_b)) {
            e[40]:int = k;
            e[41]:int = h;
            e[39]:int = j;
            if (d == 8) goto B_ea;
            e[42]:int = (q = p + (n = a[3]:int) * d);
            e[43]:int = (r = p + (n << 3) + a[4]:int * d);
            e[46]:int = (h = select_if(h, q, l = (i = d + g)[0] | h));
            e[44]:int = (j = select_if(j, i, l));
            e[45]:int = (k = select_if(k, r, l));
            i = o != i[0];
          }
          if (eqz(g_b)) {
            if (i) goto B_ga;
            e[47]:int = (l = a[6]:int);
            e[48]:int = (i = a[7]:int);
            if (eqz(i)) goto B_f;
          }
          if (eqz(g_b) | m == 8) {
            call_indirect(b, q, n, l, i);
            let t7 = 8;
            if (g_b == 1) goto B_b;
            i = t7;
          }
          if (eqz(g_b)) {
            i = eqz(i & 1);
            if (i) goto B_ga;
            memory_copy(r, c, a[4]:int);
            goto B_e;
          }
          label B_ga:
          if (eqz(g_b)) {
            d = d + 1;
            continue L_da;
          }
          label B_ea:
        }
        if (eqz(g_b)) {
          e[49]:int = (i = g[2]);
          d = g;
          continue L_aa;
        }
        label B_ba:
      }
      if (eqz(g_b)) {
        if (h) goto B_ma;
        g = (a[4]:int + a[3]:int << 3) + 12;
      }
      if (eqz(g_b) | m == 9) {
        runtime_alloc(g);
        let t8 = 9;
        if (g_b == 1) goto B_b;
        h = t8;
      }
      if (eqz(g_b)) {
        a[2]:int = a[2]:int + 1;
        e[51]:int = h;
        e[54]:int = h;
        e[50]:int = h;
        e[52]:int = (j = h + 12);
        e[53]:int = (i = j + ((k = a[3]:int) << 3));
        memory_copy(j, b, k);
        memory_copy(i, c, a[4]:int);
        h[0] = o;
        if (eqz(d)) goto B_f;
        d[2]:int = h;
        goto B_e;
      }
      label B_ma:
      if (eqz(g_b)) {
        a[2]:int = a[2]:int + 1;
        memory_copy(h, b, a[3]:int);
        memory_copy(k, c, a[4]:int);
        if (eqz(j)) goto B_f;
        j[0] = o;
        goto B_e;
      }
      label B_f:
      if (eqz(g_b) | m == 10) {
        runtime_nilPanic();
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = s;
        stack_pointer = e + 224;
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
  f.j = k;
  f.k = l;
  f.l = n;
  f.m = o;
  f.n = p;
  f.o = q;
  f.p = r;
  f.q = s;
  g_c[0]:int = g_c[0]:int + 68;
}

function runtime_fastrand():int { // func133
  var a:int;
  data[0]:int =
    (a = (a = (a = (a = data[0]:int) << 7 ^ a) >> 1 ^ a) << 9 ^ a);
  return a;
}

function runtime_hashmapNext(a:int, b:int, c:int, d:int):int { // func134
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int }
  var e:int_ptr;
  var g:int;
  var i:int;
  var j:int;
  var k:int;
  var m:int;
  var l:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
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
    m = f.k;
    b = f.b;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        k = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        h = stack_pointer - 80;
        stack_pointer = h;
        h.b = 18;
        memory_fill(h + 12, 0, 68);
        h.a = (l = 90044[0]:int);
        90044[0]:int = h;
        i = 0;
        e = eqz(a);
      }
      if (eqz(g_b)) {
        if (e) goto B_f;
        if (eqz(b)) goto B_e;
        h.c = (e = b[0]:int);
        if (eqz(e)) {
          b[0]:int = (e = a[0]:int);
          b[1]:int = select_if(1 << (g = a[20]:ubyte), 0, g <= 31);
          h.d = e;
          b[3]:int = runtime_fastrand() & b[1]:int - 1;
          b[21]:byte = (e = runtime_fastrand() & 7);
          b[2]:int = (g = b[3]:int);
          i = a[3]:int;
          j = a[4]:int;
          b[20]:byte = e;
          b[4]:int = (g = (e = b[0]:int) + (i = (i + j << 3) + 12) * g);
          h.e = e;
          h.f = g;
        }
      }
      loop L_i {
        if (eqz(g_b)) {
          if (eqz(b[22]:ubyte)) {
            g = b[20]:ubyte;
            goto B_k;
          }
          g = b[20]:ubyte;
          if (b[2]:int != b[3]:int) goto B_k;
          if (b[21]:ubyte != (g & 255)) goto B_k;
          i = 0;
          goto B_f;
          label B_k:
          h.g = (e = b[4]:int);
          if ((g & 255) >= 8) {
            b[20]:byte = 0;
            if (eqz(e)) goto B_e;
            b[4]:int = (e = e[2]);
            h.h = e;
            g = 0;
          }
          h.i = e;
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
                   (i = ((j = a[3]:int) + a[4]:int << 3) + 12) +
                   (g = b[0]:int));
            h.j = g;
            h.k = e;
            continue L_i;
          }
          h.l = e;
          i = g & 255;
          j = (i + e)[0]:ubyte;
          if (eqz(j)) {
            b[20]:byte = (e = g + 1);
            continue L_i;
          }
          g = a[3]:int;
          h.m = e;
          h.n = (e = g * i + e + 12);
          memory_copy(c, e, g);
          h.o = (e = b[0]:int);
          h.p = (g = a[0]:int);
          if (e == g) {
            h.q = (e = b[4]:int);
            c = e + (a[3]:int << 3);
            h.r = (g = c + (e = a[4]:int) * b[20]:ubyte + 12);
            memory_copy(d, g, e);
            i = 1;
            b[20]:byte = b[20]:ubyte + 1;
            goto B_f;
          }
          b[20]:byte = b[20]:ubyte + 1;
          h.s = (g = a[8]:int);
          h.t = (e = a[9]:int);
          if (eqz(e)) goto B_e;
          j = a[3]:int;
          m = a[1]:int;
          i = 1;
        }
        if (eqz(g_b) | eqz(k)) {
          call_indirect(c, j, m, g, e);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          e = t0;
        }
        if (eqz(g_b) | k == 1) {
          runtime_hashmapGet(a, c, d, e);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          e = t1;
        }
        if (eqz(g_b)) {
          e = eqz(e & 1);
          if (e) continue L_i;
        }
      }
      label B_f:
      if (eqz(g_b)) {
        90044[0]:int = l;
        stack_pointer = h + 80;
        return i;
      }
      label B_e:
      if (eqz(g_b) | k == 2) {
        runtime_nilPanic();
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
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
  f.i = j;
  f.j = l;
  f.k = m;
  g_c[0]:int = g_c[0]:int + 44;
  return 0;
}

function runtime_reflectValueEqual(a:ubyte_ptr, b:int, c:int, d:int, e:int, f:int):int { // func135
  var h:int;
  var k:int;
  var l:int;
  var i:int;
  var j:int;
  var n:long;
  var o:long;
  var q:double;
  var r:double;
  var m:int;
  var s:int;
  var t:int;
  var u:int;
  var v:int;
  var w:int;
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 96;
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
    n = g[11]:long@4;
    o = g[13]:long@4;
    q = g[15]:double@4;
    r = g[17]:double@4;
    s = g[19]:int;
    t = g[20]:int;
    u = g[21]:int;
    v = g[22]:int;
    w = g[23]:int;
    b = g[1]:int;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        h = stack_pointer - 224;
        stack_pointer = h;
        h[39]:int = 16;
        memory_fill(h + 160, 0, 64);
        h[38]:int = (w = 90044[0]:int);
        90044[0]:int = h + 152;
        k = eqz(a) | eqz(d);
        i = k & (l = a == d);
      }
      if (eqz(g_b)) {
        if (k) goto B_e;
        k = eqz(l);
        if (k) goto B_e;
        i = a & 3;
      }
      if (eqz(g_b)) {
        if (i) goto B_l;
        i = (a[0] & 31) - 1;
      }
      if (eqz(g_b)) {
        br_table[B_g, B_s, B_s, B_s, B_s, B_s, B_q, B_q, B_q, B_q, B_q, B_q, B_p, B_p, B_o, B_o, B_n, B_l, B_l, B_i, B_l, B_h, B_k, B_h, B_h, B_j, ..B_h](
          i)
        label B_s:
      }
      if (eqz(g_b) | eqz(j)) {
        Int(a, b, c);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        n = t0;
      }
      if (eqz(g_b) | j == 1) {
        Int(d, e, f);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        o = t1;
      }
      if (eqz(g_b)) {
        i = n == o;
        goto B_e;
      }
      label B_q:
      if (eqz(g_b) | j == 2) {
        Uint(a, b, c);
        let t2 = 2;
        if (g_b == 1) goto B_b;
        n = t2;
      }
      if (eqz(g_b) | j == 3) {
        Uint(d, e, f);
        let t3 = 3;
        if (g_b == 1) goto B_b;
        o = t3;
      }
      if (eqz(g_b)) {
        i = n == o;
        goto B_e;
      }
      label B_p:
      if (eqz(g_b) | j == 4) {
        Float(a, b, c);
        let t4 = 4;
        if (g_b == 1) goto B_b;
        q = t4;
      }
      if (eqz(g_b) | j == 5) {
        Float(d, e, f);
        let t5 = 5;
        if (g_b == 1) goto B_b;
        r = t5;
      }
      if (eqz(g_b)) {
        i = q == r;
        goto B_e;
      }
      label B_o:
      c = select_if(c, h + 24, g_b);
      if (eqz(g_b) | j == 6) {
        Complex(c, a, b);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        q = h[3]:double;
        r = h[4]:double;
        a = h + 8;
      }
      if (eqz(g_b) | j == 7) {
        Complex(a, d, e);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        i = h[1]:double == q & r == h[2]:double;
        goto B_e;
      }
      label B_n:
      c = select_if(c, h + 48, g_b);
      if (eqz(g_b) | j == 8) {
        String_2(c, a, b);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        h[40]:int = (a = h[12]:int);
        i = h[13]:int;
        b = h + 40;
      }
      if (eqz(g_b) | j == 9) {
        String_2(b, d, e);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        h[41]:int = (d = h[10]:int);
        i = runtime_stringEqual(a, i, d, h[11]:int);
        goto B_e;
      }
      label B_l:
      if (eqz(g_b) | j == 10) {
        UnsafePointer(a, b, c);
        let t6 = 10;
        if (g_b == 1) goto B_b;
        a = t6;
      }
      if (eqz(g_b)) { h[42]:int = a }
      if (eqz(g_b) | j == 11) {
        UnsafePointer(d, e, f);
        let t7 = 11;
        if (g_b == 1) goto B_b;
        b = t7;
      }
      if (eqz(g_b)) {
        i = a == b;
        goto B_e;
      }
      label B_k:
      k = select_if(k, 0, g_b);
      loop L_oa {
        if (eqz(g_b) | j == 12) {
          Len_1(a, b, c);
          let t8 = 12;
          if (g_b == 1) goto B_b;
          i = t8;
        }
        if (eqz(g_b)) {
          i = i <= k;
          if (i) goto B_e;
          l = h + 72;
        }
        if (eqz(g_b) | j == 13) {
          Index(l, a, b, c, k);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[45]:int = (l = h[19]:int);
          h[44]:int = (s = h[18]:int);
          t = h[80]:ubyte;
          m = h + 56;
        }
        if (eqz(g_b) | j == 14) {
          Index(m, d, e, f, k);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[47]:int = (m = h[15]:int);
          h[46]:int = (u = h[14]:int);
          v = h[64]:ubyte;
          k = k + 1;
        }
        if (eqz(g_b) | j == 15) {
          runtime_reflectValueEqual(s, l, t, u, m, v);
          let t9 = 15;
          if (g_b == 1) goto B_b;
          l = t9;
        }
        if (eqz(g_b)) {
          l = l & 1;
          if (l) continue L_oa;
        }
      }
      if (eqz(g_b)) goto B_e;
      label B_j:
      k = select_if(k, 0, g_b);
      loop L_xa {
        if (eqz(g_b) | j == 16) {
          NumField(a);
          let t10 = 16;
          if (g_b == 1) goto B_b;
          i = t10;
        }
        if (eqz(g_b)) {
          i = i <= k;
          if (i) goto B_e;
          l = h + 104;
        }
        if (eqz(g_b) | j == 17) {
          Field(l, a, b, c, k);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[49]:int = (l = h[27]:int);
          h[48]:int = (s = h[26]:int);
          t = h[112]:ubyte;
          m = h + 88;
        }
        if (eqz(g_b) | j == 18) {
          Field(m, d, e, f, k);
          18;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[51]:int = (m = h[23]:int);
          h[50]:int = (u = h[22]:int);
          v = h[96]:ubyte;
          k = k + 1;
        }
        if (eqz(g_b) | j == 19) {
          runtime_reflectValueEqual(s, l, t, u, m, v);
          let t11 = 19;
          if (g_b == 1) goto B_b;
          l = t11;
        }
        if (eqz(g_b)) {
          l = l & 1;
          if (l) continue L_xa;
        }
      }
      if (eqz(g_b)) goto B_e;
      label B_i:
      i = select_if(i, h + 136, g_b);
      if (eqz(g_b) | j == 20) {
        Elem_1(i, a, b, c);
        20;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        h[53]:int = (a = h[35]:int);
        h[52]:int = (i = h[34]:int);
        k = h[144]:ubyte;
        b = h + 120;
      }
      if (eqz(g_b) | j == 21) {
        Elem_1(b, d, e, f);
        21;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        h[55]:int = (d = h[31]:int);
        h[54]:int = (b = h[30]:int);
        c = h[128]:ubyte;
      }
      if (eqz(g_b) | j == 22) {
        runtime_reflectValueEqual(i, a, k, b, d, c);
        let t12 = 22;
        if (g_b == 1) goto B_b;
        i = t12;
      }
      if (eqz(g_b)) goto B_e;
      label B_h:
      if (eqz(g_b) | j == 23) {
        runtime_runtimePanic(67503, 28);
        23;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      if (eqz(g_b) | j == 24) {
        Bool(a, b, c);
        let t13 = 24;
        if (g_b == 1) goto B_b;
        a = t13;
      }
      i = select_if(i,
                    (if (eqz(g_b) | j == 25) {
                       Bool(d, e, f);
                       let t14 = 25;
                       if (g_b == 1) goto B_b;
                       t14;
                     } else {
                       b
                     } ^
                     a) ^
                    1,
                    g_b);
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = w;
        stack_pointer = h + 224;
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
  g[11]:long@4 = n;
  g[13]:long@4 = o;
  g[15]:double@4 = q;
  g[17]:double@4 = r;
  g[19]:int = s;
  g[20]:int = t;
  g[21]:int = u;
  g[22]:int = v;
  g[23]:int = w;
  g_c[0]:int = g_c[0]:int + 96;
  return 0;
}

function runtime_interfaceTypeAssert(a:int) { // func136
  var b:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) & (a & 1)) { return  }
        if (eqz(g_b) | eqz(b)) {
          runtime_runtimePanic(67531, 18);
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

function runtime_stringLess(a:ubyte_ptr, b:int, c:ubyte_ptr, d:int):int { // func137
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

function runtime_stringFromUnicode(a:{ a:int, b:int }, b:int) { // func138
  var g:int;
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var e:{ a:byte, b:byte, c:byte, d:byte }
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var f:int;
  var i:int;
  var h:int;
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
          g = stack_pointer - 32;
          stack_pointer = g;
          d = 90044[0]:int;
          90044[0]:int = (e = g + 8);
          f = 0;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_alloc(4);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          e = t0;
        }
        if (eqz(g_b)) {
          if (b <= 127) {
            h = 1;
            goto B_h;
          }
          if (b <= 2047) {
            f = (b & 63) | -128;
            b = b >> 6 | -64;
            h = 2;
            goto B_h;
          }
          h = 3;
          c = 0;
          if ((b & 2147481600) == 55296) {
            i = 189;
            f = 191;
            b = 239;
            goto B_g;
          }
          if (b <= 65535) {
            i = (b & 63) | -128;
            f = (b >> 6 & 63) | -128;
            b = b >> 12 | -32;
            goto B_g;
          }
          c = (b & 63) | -128;
          i = (b >> 6 & 63) | -128;
          f = (b >> 12 & 63) | -128;
          h = 4;
          b = b >> 18 | -16;
          goto B_g;
          label B_h:
          c = 0;
          label B_g:
          e.a = b;
          90044[0]:int = d;
          e.b = f;
          e.c = i;
          e.d = c;
          a.b = h;
          a.a = e;
          stack_pointer = g + 32;
        }
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

function interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu(a:ubyte_ptr, b:int):int { // func139
  var c:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b | (eqz(a) | b != 87484))) {
          b = 21;
          return if (a & 3) { 21 } else { a[0] & 31 }
        }
        if (eqz(g_b) | eqz(c)) {
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

function reflect_toType(a:{ a:int, b:int }, b:int, c:{ a:int, b:int, c:int }) { // func140
  var d:{ a:int, b:int, c:int }
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
        b = {
              if (eqz(g_b)) {
                if (eqz(b)) {
                  c = 0;
                  0;
                  goto B_d;
                }
                b = b == 87380;
              }
              if (eqz(g_b) | eqz(d)) {
                runtime_interfaceTypeAssert(b);
                0;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                b
              } else {
                c = select_if(c, 0, b);
                87484;
              }
              label B_d:
            }
        if (eqz(g_b)) {
          a.a = b;
          a.b = c;
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

function reflect_TypeOf(a:{ a:int, b:int }, b:int) { // func141
  var e:int_ptr;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  var f:int;
  var c:{ a:int, b:int, c:int, d:int, e:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    e = c.c;
    f = c.d;
    c = c.e;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          e = stack_pointer - 16;
          stack_pointer = e;
          f = e + 8;
          c = select_if(87380, 0, b);
        }
        if (eqz(g_b) | eqz(d)) {
          reflect_toType(f, c, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = e[3];
          a.a = e[2];
          a.b = b;
          stack_pointer = e + 16;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = e;
  d.d = f;
  d.e = c;
  g_c[0]:int = g_c[0]:int + 20;
}

function Elem_2(a:{ a:int, b:int, c:byte }, b:int, c:int, d:int) { // func142
  var f:int;
  var h:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    d = e.d;
    f = e.e;
    h = e.f;
    e = e.g;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          g = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 48;
          stack_pointer = f;
          (f + 40)[0]:long = 0L;
          f[4]:long = 0L;
          f[7]:int = 4;
          h = 90044[0]:int;
          90044[0]:int = f + 24;
          f[6]:int = h;
          e = f + 8;
        }
        if (eqz(g_b) | eqz(g)) {
          Elem_1(e, b, c, d);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = h;
          h = f[3]:int;
          d = f[16]:ubyte;
          a.a = f[2]:int;
          a.c = d;
          a.b = h;
          stack_pointer = f + 48;
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
  g.e = f;
  g.f = h;
  g.g = e;
  g_c[0]:int = g_c[0]:int + 28;
}

function Field_1(a:{ a:int, b:int, c:byte }, b:int, c:int, d:int, e:int) { // func143
  var g:int;
  var i:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    i = f.g;
    f = f.h;
  }
  h = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 48;
          stack_pointer = g;
          (g + 40)[0]:long = 0L;
          g[4]:long = 0L;
          g[7]:int = 4;
          i = 90044[0]:int;
          90044[0]:int = g + 24;
          g[6]:int = i;
          f = g + 8;
        }
        if (eqz(g_b) | eqz(h)) {
          Field(f, b, c, d, e);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = i;
          i = g[3]:int;
          e = g[16]:ubyte;
          a.a = g[2]:int;
          a.c = e;
          a.b = i;
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
  h.d = d;
  h.e = e;
  h.f = g;
  h.g = i;
  h.h = f;
  g_c[0]:int = g_c[0]:int + 32;
}

function Index_1(a:{ a:int, b:int, c:byte }, b:int, c:int, d:int, e:int) { // func144
  var g:int;
  var i:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    i = f.g;
    f = f.h;
  }
  h = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 48;
          stack_pointer = g;
          (g + 40)[0]:long = 0L;
          g[4]:long = 0L;
          g[7]:int = 4;
          i = 90044[0]:int;
          90044[0]:int = g + 24;
          g[6]:int = i;
          f = g + 8;
        }
        if (eqz(g_b) | eqz(h)) {
          Index(f, b, c, d, e);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = i;
          i = g[3]:int;
          e = g[16]:ubyte;
          a.a = g[2]:int;
          a.c = e;
          a.b = i;
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
  h.d = d;
  h.e = e;
  h.f = g;
  h.g = i;
  h.h = f;
  g_c[0]:int = g_c[0]:int + 32;
}

function interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(a:{ a:int, b:int }, b:int, c:int) { // func145
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
          c = c != 87484;
        }
        if (eqz(g_b)) {
          if (c) goto B_e;
          c = d + 8;
        }
        if (eqz(g_b) | eqz(e)) {
          String_4(c, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = d.d;
          a.a = d.c;
          a.b = c;
          stack_pointer = d + 16;
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
  e.d = d;
  g_c[0]:int = g_c[0]:int + 16;
}

function internal_fmtsort_Sort_1(a:int, b:int, c:int, d:int_ptr, e:int, f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }, g:int, h:int, i:int, j:int, k:int, l:int):int { // func146
  var m:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    f = g_c[0]:int;
    a = f.a;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    h = f.g;
    i = f.h;
    b = f.b;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          m = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 32;
          stack_pointer = d;
          d[3] = 4;
          d[7] = h;
          d[6] = g;
          d[5] = b;
          d[4] = a;
          e = 90044[0]:int;
          90044[0]:int = d + 8;
          d[2] = e;
        }
        if (eqz(g_b) | eqz(m)) {
          internal_fmtsort_compare(a, b, c, g, h, i);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          h = t0;
        }
        if (eqz(g_b)) {
          90044[0]:int = e;
          stack_pointer = d + 32;
          return h;
        }
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
  g_c[0]:int = g_c[0]:int + 32;
  return 0;
}

function internal_fmtsort_compare(a:int, b:int, c:int, d:int, e:int, f:int):int { // func147
  var g:int;
  var j:int;
  var h:int;
  var k:int;
  var l:int;
  var m:int;
  var r:long;
  var s:long;
  var o:double;
  var n:double;
  var u:double;
  var q:int;
  var v:int;
  var w:int;
  var x:int;
  var i:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 100;
    i = g_c[0]:int;
    a = i[0]:int;
    c = i[2]:int;
    d = i[3]:int;
    e = i[4]:int;
    f = i[5]:int;
    g = i[6]:int;
    h = i[7]:int;
    k = i[8]:int;
    l = i[9]:int;
    m = i[10]:int;
    n = i[11]:double@4;
    o = i[13]:double@4;
    q = i[15]:int;
    r = i[16]:long@4;
    s = i[18]:long@4;
    u = i[20]:double@4;
    v = i[22]:int;
    w = i[23]:int;
    x = i[24]:int;
    b = i[1]:int;
  }
  i = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = stack_pointer - 400;
        stack_pointer = g;
        g[61]:int = 38;
        memory_fill(g + 256, 0, 144);
        g[60]:int = (x = 90044[0]:int);
        90044[0]:int = g + 240;
        h = g + 232;
      }
      if (eqz(g_b) | eqz(j)) {
        reflect_toType(h, 87380, a);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[63]:int = (h = g[59]:int);
        g[62]:int = (l = g[58]:int);
        k = g + 224;
      }
      if (eqz(g_b) | j == 1) {
        reflect_toType(k, 87380, d);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[67]:int = h;
        g[66]:int = l;
        g[69]:int = (k = g[57]:int);
        g[68]:int = (m = g[56]:int);
        g[65]:int = k;
        g[64]:int = m;
      }
      if (eqz(g_b) | j == 2) {
        runtime_reflectValueEqual(l, h, 2, m, k, 2);
        let t0 = 2;
        if (g_b == 1) goto B_b;
        k = t0;
      }
      k = select_if(k, eqz(k & 1), g_b);
      if (eqz(g_b)) {
        if (k) goto B_k;
        k = eqz(a);
      }
      if (eqz(g_b)) {
        if (k) goto B_o;
        k = a & 3;
      }
      if (eqz(g_b)) {
        if (k) goto B_u;
        k = (a[0]:ubyte & 31) - 1;
      }
      if (eqz(g_b)) {
        br_table[B_w, B_ca, B_ca, B_ca, B_ca, B_ca, B_aa, B_aa, B_aa, B_aa, B_aa, B_aa, B_y, B_y, B_x, B_x, B_z, B_u, B_t, B_q, B_u, B_o, B_r, B_o, B_o, B_s, ..B_o](
          k)
        label B_ca:
      }
      if (eqz(g_b) | j == 3) {
        Int(a, b, c);
        let t1 = 3;
        if (g_b == 1) goto B_b;
        r = t1;
      }
      if (eqz(g_b) | j == 4) {
        Int(d, e, f);
        let t2 = 4;
        if (g_b == 1) goto B_b;
        s = t2;
      }
      if (eqz(g_b)) {
        h = select_if(-1, r > s, r < s);
        goto B_j;
      }
      label B_aa:
      if (eqz(g_b) | j == 5) {
        Uint(a, b, c);
        let t3 = 5;
        if (g_b == 1) goto B_b;
        r = t3;
      }
      if (eqz(g_b) | j == 6) {
        Uint(d, e, f);
        let t4 = 6;
        if (g_b == 1) goto B_b;
        s = t4;
      }
      if (eqz(g_b)) {
        h = select_if(-1, r > s, r < s);
        goto B_j;
      }
      label B_z:
      c = select_if(c, g + 24, g_b);
      if (eqz(g_b) | j == 7) {
        String_2(c, a, b);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[70]:int = (a = g[6]:int);
        l = g[7]:int;
        b = g + 16;
      }
      if (eqz(g_b) | j == 8) {
        String_2(b, d, e);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[71]:int = (k = g[4]:int);
        h = 1;
        let t5 = cmp_isNaN_string(a, l);
        d = cmp_isNaN_string(k, b = g[5]:int);
        if (t5 & 1) {
          h = (d & 1) - 1;
          goto B_j;
        }
        if (d & 1) goto B_j;
        if (runtime_stringLess(a, l, k, b) & 1) goto B_k;
        h = runtime_stringLess(k, b, a, l) & 1;
        goto B_j;
      }
      label B_y:
      if (eqz(g_b) | j == 9) {
        Float(a, b, c);
        let t6 = 9;
        if (g_b == 1) goto B_b;
        o = t6;
      }
      if (eqz(g_b) | j == 10) {
        Float(d, e, f);
        let t7 = 10;
        if (g_b == 1) goto B_b;
        n = t7;
      }
      if (eqz(g_b)) {
        if (o != o) {
          h = select_if(-1, 0, n == n);
          goto B_j;
        }
        if (n != n) goto B_m;
        if (n > o) goto B_k;
        h = n < o;
        goto B_j;
      }
      label B_x:
      c = select_if(c, g + 48, g_b);
      if (eqz(g_b) | j == 11) {
        Complex(c, a, b);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        u = g[7]:double;
        o = g[6]:double;
        a = g + 32;
      }
      if (eqz(g_b) | j == 12) {
        Complex(a, d, e);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        var p:double = g[5]:double;
        n = g[4]:double;
        h = if (o != o) {
              select_if(-1, 0, n == n)
            } else {
              if (n != n) goto B_m;
              if (n > o) goto B_k;
              n < o;
            }
        if (h) goto B_j;
        if (u != u) {
          h = select_if(-1, 0, p == p);
          goto B_j;
        }
        if (p != p) goto B_m;
        if (p > u) goto B_k;
        h = p < u;
        goto B_j;
      }
      label B_w:
      if (eqz(g_b) | j == 13) {
        Bool(a, b, c);
        let t8 = 13;
        if (g_b == 1) goto B_b;
        a = t8;
      }
      b = select_if(b, select_if(1, -1, a & 1), g_b);
      if (eqz(g_b) | j == 14) {
        Bool(d, e, f);
        let t9 = 14;
        if (g_b == 1) goto B_b;
        c = t9;
      }
      if (eqz(g_b)) {
        h = select_if(b, 0, (a ^ c) & 1);
        goto B_j;
      }
      label B_u:
      if (eqz(g_b) | j == 15) {
        Pointer(a, b, c);
        let t10 = 15;
        if (g_b == 1) goto B_b;
        a = t10;
      }
      if (eqz(g_b) | j == 16) {
        Pointer(d, e, f);
        let t11 = 16;
        if (g_b == 1) goto B_b;
        h = t11;
      }
      if (eqz(g_b)) {
        h = select_if(-1, a > h, a < h);
        goto B_j;
      }
      label B_t:
      h = select_if(h, g - -64, g_b);
      if (eqz(g_b) | j == 17) {
        internal_fmtsort_nilCompare(h, a, b, c, d, e, f);
        17;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        h = eqz(g[68]:ubyte);
        if (eqz(h)) {
          h = g[16]:int;
          goto B_j;
        }
      }
      if (eqz(g_b) | j == 18) {
        Pointer(a, b, c);
        let t12 = 18;
        if (g_b == 1) goto B_b;
        a = t12;
      }
      if (eqz(g_b) | j == 19) {
        Pointer(d, e, f);
        let t13 = 19;
        if (g_b == 1) goto B_b;
        h = t13;
      }
      if (eqz(g_b)) {
        h = select_if(-1, a > h, a < h);
        goto B_j;
      }
      label B_s:
      l = select_if(l, 0, g_b);
      loop L_kb {
        if (eqz(g_b) | j == 20) {
          NumField(a);
          let t14 = 20;
          if (g_b == 1) goto B_b;
          h = t14;
        }
        if (eqz(g_b)) {
          h = h <= l;
          if (h) goto B_n;
          h = g + 88;
        }
        if (eqz(g_b) | j == 21) {
          Field_1(h, a, b, c, l);
          21;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[73]:int = (h = g[23]:int);
          g[72]:int = (k = g[22]:int);
          q = g + 72;
          m = g[96]:ubyte;
        }
        if (eqz(g_b) | j == 22) {
          Field_1(q, d, e, f, l);
          22;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[75]:int = (q = g[19]:int);
          g[74]:int = (v = g[18]:int);
          w = g[80]:ubyte;
          l = l + 1;
        }
        if (eqz(g_b) | j == 23) {
          internal_fmtsort_compare(k, h, m, v, q, w);
          let t15 = 23;
          if (g_b == 1) goto B_b;
          h = t15;
        }
        if (eqz(g_b)) {
          if (h) goto B_j;
          continue L_kb;
        }
      }
      label B_r:
      l = select_if(l, 0, g_b);
      loop L_tb {
        if (eqz(g_b) | j == 24) {
          Len_1(a, b, c);
          let t16 = 24;
          if (g_b == 1) goto B_b;
          h = t16;
        }
        if (eqz(g_b)) {
          h = h <= l;
          if (h) goto B_n;
          h = g + 120;
        }
        if (eqz(g_b) | j == 25) {
          Index_1(h, a, b, c, l);
          25;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[77]:int = (h = g[31]:int);
          g[76]:int = (k = g[30]:int);
          q = g + 104;
          m = g[128]:ubyte;
        }
        if (eqz(g_b) | j == 26) {
          Index_1(q, d, e, f, l);
          26;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[79]:int = (q = g[27]:int);
          g[78]:int = (v = g[26]:int);
          w = g[112]:ubyte;
          l = l + 1;
        }
        if (eqz(g_b) | j == 27) {
          internal_fmtsort_compare(k, h, m, v, q, w);
          let t17 = 27;
          if (g_b == 1) goto B_b;
          h = t17;
        }
        if (eqz(g_b)) {
          if (h) goto B_j;
          continue L_tb;
        }
      }
      label B_q:
      h = select_if(h, g + 216, g_b);
      if (eqz(g_b) | j == 28) {
        internal_fmtsort_nilCompare(h, a, b, c, d, e, f);
        28;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        if (g[220]:ubyte) {
          h = g[54]:int;
          goto B_j;
        }
        h = g + 200;
      }
      if (eqz(g_b) | j == 29) {
        Elem_2(h, a, b, c);
        29;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[81]:int = g[51]:int;
        g[80]:int = (h = g[50]:int);
        l = g + 192;
      }
      if (eqz(g_b) | j == 30) {
        reflect_toType(l, 87380, h);
        30;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[85]:int = (h = g[49]:int);
        g[84]:int = (l = g[48]:int);
        g[83]:int = h;
        g[82]:int = l;
        k = g + 176;
      }
      if (eqz(g_b) | j == 31) {
        Elem_2(k, d, e, f);
        31;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[87]:int = g[45]:int;
        g[86]:int = (k = g[44]:int);
        m = g + 168;
      }
      if (eqz(g_b) | j == 32) {
        reflect_toType(m, 87380, k);
        32;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[91]:int = (k = g[43]:int);
        g[90]:int = (m = g[42]:int);
        g[89]:int = k;
        g[88]:int = m;
      }
      if (eqz(g_b) | j == 33) {
        internal_fmtsort_compare(l, h, 2, m, k, 2);
        let t18 = 33;
        if (g_b == 1) goto B_b;
        h = t18;
      }
      if (eqz(g_b)) {
        if (h) goto B_j;
        h = g + 152;
      }
      if (eqz(g_b) | j == 34) {
        Elem_2(h, a, b, c);
        34;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[93]:int = (a = g[39]:int);
        g[92]:int = (h = g[38]:int);
        l = g[160]:ubyte;
        b = g + 136;
      }
      if (eqz(g_b) | j == 35) {
        Elem_2(b, d, e, f);
        35;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[95]:int = (k = g[35]:int);
        g[94]:int = (m = g[34]:int);
        b = g[144]:ubyte;
      }
      if (eqz(g_b) | j == 36) {
        internal_fmtsort_compare(h, a, l, m, k, b);
        let t19 = 36;
        if (g_b == 1) goto B_b;
        h = t19;
      }
      if (eqz(g_b)) goto B_j;
      label B_o:
      a = select_if(a, g + 8, g_b);
      if (eqz(g_b) | j == 37) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          a,
          h,
          l);
        37;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[96]:int = (a = g[2]:int);
        b = g[3]:int;
      }
      if (eqz(g_b) | j == 38) {
        runtime_stringConcat(g, 67932, 21, a, b);
        38;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[97]:int = (h = g[0]:int);
        l = g[1]:int;
      }
      if (eqz(g_b) | j == 39) {
        runtime_alloc(8);
        let t20 = 39;
        if (g_b == 1) goto B_b;
        a = t20;
      }
      if (eqz(g_b)) {
        a[1]:int = l;
        a[0]:int = h;
        g[98]:int = a;
        g[99]:int = a;
      }
      if (eqz(g_b) | j == 40) {
        runtime_panic(86928, a);
        40;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_n:
      if (eqz(g_b)) {
        h = 0;
        goto B_j;
      }
      label B_m:
      if (eqz(g_b)) {
        h = 1;
        goto B_j;
      }
      label B_k:
      h = select_if(h, -1, g_b);
      label B_j:
      if (eqz(g_b)) {
        90044[0]:int = x;
        stack_pointer = g + 400;
        return h;
      }
      unreachable;
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
  i[6]:int = g;
  i[7]:int = h;
  i[8]:int = k;
  i[9]:int = l;
  i[10]:int = m;
  i[11]:double@4 = n;
  i[13]:double@4 = o;
  i[15]:int = q;
  i[16]:long@4 = r;
  i[18]:long@4 = s;
  i[20]:double@4 = u;
  i[22]:int = v;
  i[23]:int = w;
  i[24]:int = x;
  g_c[0]:int = g_c[0]:int + 100;
  return 0;
}

function slices_insertionSortCmpFunc_internal_fmtsort_KeyValue(a:int, b:int, c:int, d:int) { // func148
  var g:int_ptr;
  var i:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int, w:int, x:int, y:int, z:int, aa:int, ba:int, ca:int, da:int }
  var m:int;
  var j:int_ptr;
  var h:int;
  var k:int;
  var y:int;
  var z:int;
  var ca:int;
  var fa:int;
  var p:int;
  var o:int;
  var r:int;
  var n:int;
  var q:int;
  var s:int;
  var l:int;
  var u:int;
  var t:int;
  var da:int;
  var aa:int_ptr;
  var ba:int_ptr;
  var v:int_ptr;
  var w:int_ptr;
  var x:int_ptr;
  var ea:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 120;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    c = e.c;
    d = e.d;
    g = e.e;
    i = e.f;
    h = e.g;
    j = e.h;
    k = e.i;
    l = e.j;
    m = e.k;
    n = e.l;
    o = e.m;
    p = e.n;
    q = e.o;
    r = e.p;
    s = e.q;
    t = e.r;
    u = e.s;
    v = e.t;
    w = e.u;
    x = e.v;
    y = e.w;
    z = e.x;
    aa = e.y;
    ba = e.z;
    ca = e.aa;
    da = e.ba;
    ea = e.ca;
    e = e.da;
  }
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int, w:int, x:int, y:int, z:int, aa:int, ba:int, ca:int, da:int } = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        fa = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = stack_pointer - 80;
        stack_pointer = g;
        g[3] = 16;
        memory_fill(g + 16, 0, 64);
        g[2] = (ea = 90044[0]:int);
        90044[0]:int = g + 8;
        m = c * 24 + a;
        i = c;
      }
      loop L_e {
        if (eqz(g_b)) {
          e = i + 1;
          a = e >= d;
        }
        if (eqz(g_b)) {
          if (a) goto B_i;
          a = m;
        }
        loop L_k {
          if (eqz(g_b)) {
            j = i + 1;
            h = j <= c;
            if (h) goto B_g;
            j = b <= j;
            if (j) goto B_h;
            g[7] = (h = (j = a + 40)[0]);
            g[6] = (n = (v = a + 36)[0]);
            g[5] = (o = (w = a + 28)[0]);
            g[4] = (p = (x = a + 24)[0]);
            k = b <= i;
            if (k) goto B_h;
            y = a + 44;
            q = y[0]:ubyte;
            z = a + 32;
            r = z[0]:ubyte;
            g[9] = (k = a[1]:int);
            g[8] = (s = a[0]:int);
            g[11] = (t = (aa = a + 16)[0]);
            g[10] = (u = (ba = a + 12)[0]);
            ca = a + 20;
            da = ca[0]:ubyte;
            l = a[8]:ubyte;
          }
          if (eqz(g_b) | eqz(fa)) {
            internal_fmtsort_Sort_1(p, o, r, n, h, q, s, k, l, u, t, da);
            let t0 = 0;
            if (g_b == 1) goto B_b;
            h = t0;
          }
          if (eqz(g_b)) {
            h = h >= 0;
            if (h) goto B_g;
            g[13] = (h = a[1]:int);
            g[12] = (n = a[0]:int);
            g[15] = (o = aa[0]);
            g[14] = (p = ba[0]);
            g[19] = (q = j[0]);
            g[18] = (r = v[0]);
            g[17] = (k = w[0]);
            g[16] = (s = x[0]);
            t = y[0]:ubyte;
            u = z[0]:ubyte;
            l = ca[0]:ubyte;
            z[0]:byte = (da = a[8]:ubyte);
            w[0] = h;
            x[0] = n;
            y[0]:byte = l;
            j[0] = o;
            v[0] = p;
            a[0]:int = s;
            a[1]:int = k;
            a[8]:byte = u;
            ba[0] = r;
            aa[0] = q;
            ca[0]:byte = t;
            a = a - 24;
            i = i - 1;
            continue L_k;
          }
        }
        label B_i:
        if (eqz(g_b)) {
          90044[0]:int = ea;
          stack_pointer = g + 80;
          return ;
        }
        label B_h:
        if (eqz(g_b) | fa == 1) {
          runtime_lookupPanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_g:
        if (eqz(g_b)) {
          m = m + 24;
          i = e;
          continue L_e;
        }
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
  f.e = g;
  f.f = i;
  f.g = h;
  f.h = j;
  f.i = k;
  f.j = l;
  f.k = m;
  f.l = n;
  f.m = o;
  f.n = p;
  f.o = q;
  f.p = r;
  f.q = s;
  f.r = t;
  f.s = u;
  f.t = v;
  f.u = w;
  f.v = x;
  f.w = y;
  f.x = z;
  f.y = aa;
  f.z = ba;
  f.aa = ca;
  f.ba = da;
  f.ca = ea;
  f.da = e;
  g_c[0]:int = g_c[0]:int + 120;
}

function slices_symMergeCmpFunc_internal_fmtsort_KeyValue(a:int_ptr, b:int, c:int, d:int, e:int) { // func149
  var h:int_ptr;
  var j:int;
  var f:int;
  var w:int;
  var m:int;
  var t:int;
  var n:int_ptr;
  var i:{ a:int, b:int, c:ubyte, d:int, e:int, f:ubyte }
  var k:int_ptr;
  var u:int;
  var p:int;
  var o:int_ptr;
  var l:int_ptr;
  var r:int;
  var s:int;
  var x:int;
  var q:int;
  var v:int;
  var y:int;
  var z:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int, w:int, x:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 96;
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
    n = g.m;
    o = g.n;
    p = g.o;
    q = g.p;
    r = g.q;
    t = g.r;
    u = g.s;
    v = g.t;
    w = g.u;
    x = g.v;
    y = g.w;
    z = g.x;
    b = g.b;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        s = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        h = stack_pointer - 176;
        stack_pointer = h;
        h[3] = 40;
        memory_fill(h + 16, 0, 160);
        h[2] = (z = 90044[0]:int);
        90044[0]:int = h + 8;
        j = d - c != 1;
      }
      if (eqz(g_b)) {
        if (j) goto B_g;
        j = c * 24;
        f = j + a;
      }
      loop L_i {
        if (eqz(g_b)) {
          if (d >= e) {
            f = d - 1;
            d = f < c;
            d = select_if(c, f, d) - c;
            w = select_if(c, b, b < c);
            f = c * 24 + a;
            loop L_l {
              if (eqz(d)) goto B_f;
              j = c + 1;
              if (j >= b) goto B_e;
              h[15] = (p = (l = f + 40)[0]);
              h[14] = (a = (r = f + 36)[0]:int);
              h[13] = (n = (k = f + 28)[0]);
              h[12] = (e = (i = f + 24).a);
              if (c == w) goto B_e;
              m = f + 44;
              o = m[0]:ubyte;
              t = f + 32;
              u = t[0]:ubyte;
              c = f[0]:int;
              f[0]:int = e;
              e = f[1]:int;
              f[1]:int = n;
              i.a = c;
              k[0] = e;
              t[0]:byte = f[8]:ubyte;
              f[8]:byte = u;
              n = f + 12;
              k = n[0];
              n[0] = a;
              n = f + 16;
              a = n[0];
              n[0] = p;
              f = f + 20;
              p = f[0]:ubyte;
              f[0]:byte = o;
              h[17] = e;
              h[16] = c;
              h[19] = a;
              h[18] = k;
              m[0]:byte = p;
              l[0] = a;
              r[0]:int = k;
              d = d - 1;
              f = i;
              c = j;
              continue L_l;
            }
            unreachable;
          }
          k = d + e >> 1;
          if (k >= b) goto B_e;
          h[7] = (j = (i = k * 24 + a).e);
          h[6] = (l = i.d);
          h[5] = (p = i.b);
          h[4] = (r = i.a);
          if (b <= c) goto B_e;
          n = i.f;
          i = i.c;
          h[11] = (m = f[4]:int);
          h[10] = (o = f[3]:int);
          h[9] = (t = f[1]:int);
          h[8] = (u = f[0]:int);
          x = f[8]:ubyte;
          q = f[20]:ubyte;
        }
        if (eqz(g_b) | eqz(s)) {
          internal_fmtsort_Sort_1(r, p, i, l, j, n, u, t, x, o, m, q);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          j = t0;
        }
        if (eqz(g_b)) {
          e = select_if(e, k, i = j < 0);
          j = k + 1;
          d = select_if(j, d, i);
          continue L_i;
        }
      }
      label B_g:
      j = select_if(j, e - d != 1, g_b);
      if (eqz(g_b)) {
        if (j) goto B_o;
        f = d * 24 + a;
        e = d;
      }
      loop L_q {
        if (eqz(g_b)) {
          if (c >= e) {
            f = d * 24 + a - 24;
            loop L_t {
              if (c >= d) goto B_f;
              d = d - 1;
              if (d >= b) goto B_e;
              h[29] = (e = f[1]:int);
              h[28] = (i = f[0]:int);
              h[31] = (j = (a = f + 16)[0]);
              h[30] = (k = (l = f + 12)[0]);
              p = d + 1;
              if (p >= b) goto B_e;
              r = f + 20;
              n = r[0]:ubyte;
              m = f[8]:ubyte;
              o = f + 24;
              d = o[0];
              o[0] = i;
              o = f + 28;
              i = o[0];
              o[0] = e;
              e = f + 32;
              o = e[0]:ubyte;
              e[0]:byte = m;
              m = f + 36;
              e = m[0]:int;
              m[0]:int = k;
              m = f + 40;
              k = m[0]:int;
              m[0]:int = j;
              j = f + 44;
              m = j[0]:ubyte;
              j[0]:byte = n;
              f[0]:int = d;
              f[1]:int = i;
              f[8]:byte = o;
              h[35] = k;
              h[34] = e;
              h[33] = i;
              h[32] = d;
              r[0]:byte = m;
              a[0] = k;
              l[0] = e;
              d = p - 1;
              f = f - 24;
              continue L_t;
            }
            unreachable;
          }
          if (b <= d) goto B_e;
          h[23] = (j = f[4]:int);
          h[22] = (l = f[3]:int);
          h[21] = (p = f[1]:int);
          h[20] = (r = f[0]:int);
          k = c + e >> 1;
          if (k >= b) goto B_e;
          n = f[20]:ubyte;
          m = f[8]:ubyte;
          h[27] = (o = (i = k * 24 + a).e);
          h[26] = (t = i.d);
          h[25] = (u = i.b);
          h[24] = (w = i.a);
          q = i.c;
          i = i.f;
        }
        if (eqz(g_b) | s == 1) {
          internal_fmtsort_Sort_1(r, p, m, l, j, n, w, u, q, t, o, i);
          let t1 = 1;
          if (g_b == 1) goto B_b;
          j = t1;
        }
        if (eqz(g_b)) {
          e = select_if(k, e, i = j < 0);
          c = select_if(c, j = k + 1, i);
          continue L_q;
        }
      }
      label B_o:
      if (eqz(g_b)) {
        v = c + e >> 1;
        f = v < d;
        y = d + v;
        i = y - e;
        k = select_if(i, c, f);
        j = select_if(v, d, f);
      }
      loop L_x {
        if (eqz(g_b)) {
          i = j <= k;
          if (i) goto B_y;
          f = y + ((i = j + k >> 1) ^ -1);
          if (f >= b) goto B_e;
          h[39] = (l = (f = f * 24 + a)[4]:int);
          h[38] = (p = f[3]:int);
          h[37] = (r = f[1]:int);
          h[36] = (n = f[0]:int);
          if (b <= i) goto B_e;
          m = f[20]:ubyte;
          o = f[8]:ubyte;
          h[43] = (t = (f = i * 24 + a)[4]:int);
          h[42] = (u = f[3]:int);
          h[41] = (w = f[1]:int);
          h[40] = (x = f[0]:int);
          q = f[8]:ubyte;
          f = f[20]:ubyte;
        }
        if (eqz(g_b) | s == 2) {
          internal_fmtsort_Sort_1(n, r, o, p, l, m, x, w, q, u, t, f);
          let t2 = 2;
          if (g_b == 1) goto B_b;
          f = t2;
        }
        if (eqz(g_b)) {
          j = select_if(i, j, f = f < 0);
          k = select_if(k, i = i + 1, f);
          continue L_x;
        }
        label B_y:
      }
      if (eqz(g_b)) {
        l = y - k;
        j = d <= k;
      }
      if (eqz(g_b)) {
        if (j) goto B_da;
        j = d >= l;
        if (j) goto B_da;
        i = d - k;
        f = l - d;
      }
      loop L_fa {
        j = select_if(j, d - i, g_b);
        loop L_ga {
          if (eqz(g_b)) {
            if (f == i) goto B_ha;
            q = f >= i;
          }
          if (select_if(g_b, 1, q)) {
            if (eqz(g_b) | s == 3) {
              slices_swapRangeCmpFunc_internal_fmtsort_KeyValue(a, b, j, d, f);
              3;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              i = i - f;
              continue L_fa;
            }
          }
          q = select_if(q, f + j, g_b);
          if (eqz(g_b) | s == 4) {
            slices_swapRangeCmpFunc_internal_fmtsort_KeyValue(a, b, j, q, i);
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
      if (eqz(g_b) | s == 5) {
        slices_swapRangeCmpFunc_internal_fmtsort_KeyValue(a, b, j, d, i);
        5;
        if (g_b == 1) goto B_b;
      }
      label B_da:
      if (eqz(eqz(select_if(g_b, 1, (d = select_if(d, c >= k, g_b)) | k >= v))) &
          (eqz(g_b) | s == 6)) {
        slices_symMergeCmpFunc_internal_fmtsort_KeyValue(a, b, c, k, v);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) & (l <= v | e <= l)) goto B_f;
      if (eqz(g_b) | s == 7) {
        slices_symMergeCmpFunc_internal_fmtsort_KeyValue(a, b, v, l, e);
        7;
        if (g_b == 1) goto B_b;
      }
      label B_f:
      if (eqz(g_b)) {
        90044[0]:int = z;
        stack_pointer = h + 176;
        return ;
      }
      label B_e:
      if (eqz(g_b) | s == 8) {
        runtime_lookupPanic();
        8;
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
  g.m = n;
  g.n = o;
  g.o = p;
  g.p = q;
  g.q = r;
  g.r = t;
  g.s = u;
  g.t = v;
  g.u = w;
  g.v = x;
  g.w = y;
  g.x = z;
  g_c[0]:int = g_c[0]:int + 96;
}

function slices_swapRangeCmpFunc_internal_fmtsort_KeyValue(a:int, b:int, c:long_ptr@4, d:int, e:int) { // func150
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
          var j:int = d * 24;
          var k:int = c * 24;
          loop L_e {
            if (e) {
              if (eqz(f) | eqz(g)) goto B_d;
              b = a + k;
              d = b + 20;
              var l:int = d[0]:ubyte;
              c = a + j;
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

function cmp_isNaN_string(a:int, b:int):int { // func151
  return runtime_stringEqual(a, b, a, b) ^ 1
}

function internal_fmtsort_nilCompare(a:{ a:int, b:byte }, b:int, c:int, d:int, e:int, f:int, g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }) { // func152
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

function time_appendInt(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int, f:int) { // func153
  var g:int;
  var h:int;
  var k:int;
  var j:int;
  var l:int;
  var m:int;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
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
    m = i.k;
    b = i.b;
  }
  i = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          k = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 144;
          stack_pointer = g;
          g[25]:int = 9;
          memory_fill(g + 104, 0, 36);
          g[24]:int = (m = 90044[0]:int);
          90044[0]:int = g + 96;
          h = e >= 0;
        }
        if (eqz(g_b)) {
          if (h) goto B_e;
          g[95]:byte = 45;
          j = g + 95;
          h = g + 72;
        }
        if (eqz(g_b) | eqz(k)) {
          runtime_sliceAppend(h, b, j, c, d, 1, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[26]:int = (b = g[18]:int);
          e = 0 - e;
          d = g[20]:int;
          c = g[19]:int;
        }
        label B_e:
        if (eqz(g_b)) {
          g[27]:int = b;
          h = f != 2;
        }
        if (eqz(g_b)) {
          if (h) goto B_l;
          h = e >= 100;
          if (h) goto B_l;
          g[93]:byte = (h = (e & 255) / 10) | 48;
          g[94]:byte = e - h * 10 | 48;
          f = g + 93;
          e = g + 8;
        }
        if (eqz(g_b) | k == 1) {
          runtime_sliceAppend(e, b, f, c, d, 2, 1);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = g[4]:int;
          f = g[3]:int;
          b = g[2]:int;
          goto B_k;
        }
        label B_l:
        h = select_if(h, f != 4, g_b);
        if (eqz(g_b)) {
          if (h) goto B_p;
          h = e > 9999;
          if (h) goto B_p;
          g[89]:byte = (h = e & 65535) / 1000 + 48;
          g[91]:byte = (j = h / 10) % 10 | 48;
          g[92]:byte = e - j * 10 | 48;
          g[90]:byte = (h / 100 & 255) % 10 | 48;
          f = g + 89;
          e = g + 24;
        }
        if (eqz(g_b) | k == 2) {
          runtime_sliceAppend(e, b, f, c, d, 4, 1);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = g[8]:int;
          f = g[7]:int;
          b = g[6]:int;
          goto B_k;
        }
        label B_p:
        if (eqz(g_b)) {
          j = eqz(e);
          h = e;
          loop L_u {
            l = eqz(h);
            if (eqz(l)) {
              h = h / 10;
              j = j + 1;
              continue L_u;
            }
          }
          h = f - j;
        }
        loop L_w {
          if (eqz(g_b)) {
            g[30]:int = b;
            f = h <= 0;
            if (f) goto B_x;
            g[88]:byte = 48;
            l = g + 88;
            f = g + 40;
          }
          if (eqz(g_b) | k == 3) {
            runtime_sliceAppend(f, b, l, c, d, 1, 1);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g[31]:int = (b = g[10]:int);
            h = h - 1;
            d = g[12]:int;
            c = g[11]:int;
            continue L_w;
          }
          label B_x:
        }
        if (eqz(g_b)) {
          f = c + j;
          h = f > d;
        }
        if (eqz(g_b)) {
          if (eqz(h)) {
            if (d < f) goto B_da;
            goto B_ca;
          }
          f = j < 0;
          if (f) goto B_da;
        }
        if (eqz(g_b) | k == 4) {
          runtime_alloc(j);
          let t0 = 4;
          if (g_b == 1) goto B_b;
          h = t0;
        }
        if (eqz(g_b)) {
          g[33]:int = h;
          f = g + 56;
        }
        if (eqz(g_b) | k == 5) {
          runtime_sliceAppend(f, b, h, c, d, j, 1);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[34]:int = (b = g[14]:int);
          d = g[16]:int;
          f = g[15]:int;
          goto B_ca;
        }
        label B_da:
        if (eqz(g_b) | k == 6) {
          runtime_slicePanic();
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_ca:
        if (eqz(g_b)) {
          g[32]:int = b;
          h = f - 1;
          loop L_na {
            if (eqz(e < 10 | h <= 0)) {
              if (f <= h) goto B_j;
              (b + h)[0]:byte = (c = e / 10) * 246 + e + 48;
              h = h - 1;
              e = c;
              continue L_na;
            }
          }
          if (f <= h) goto B_j;
          (b + h)[0]:byte = e + 48;
        }
        label B_k:
        if (eqz(g_b)) {
          90044[0]:int = m;
          a.c = d;
          a.b = f;
          a.a = b;
          stack_pointer = g + 144;
          return ;
        }
        label B_j:
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
  i.k = m;
  g_c[0]:int = g_c[0]:int + 44;
}

function lookup(a:{ a:int, b:int, c:int }, b:int, c:long) { // func154
  var d:int;
  var l:int;
  var e:int;
  var f:int;
  var h:int;
  var k:int;
  var i:int;
  var j:int;
  var m:int;
  var p:int;
  var ba:int;
  var g:int;
  var z:int;
  var y:int;
  var x:int;
  var w:int;
  var v:int;
  var o:int;
  var n:int;
  var r:int;
  var s:int;
  var q:long;
  var t:long;
  var u:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 92;
    g = g_c[0]:int;
    a = g[0]:int;
    c = g[2]:long@4;
    d = g[4]:int;
    e = g[5]:int;
    f = g[6]:int;
    h = g[7]:int;
    i = g[8]:int;
    j = g[9]:int;
    k = g[10]:int;
    m = g[11]:int;
    n = g[12]:int;
    o = g[13]:int;
    p = g[14]:int;
    r = g[15]:int;
    s = g[16]:int;
    u = g[17]:int;
    v = g[18]:int;
    w = g[19]:int;
    x = g[20]:int;
    y = g[21]:int;
    z = g[22]:int;
    b = g[1]:int;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        l = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = stack_pointer - 320;
        stack_pointer = d;
        d[41]:int = 37;
        memory_fill(d + 172, 0, 144);
        d[40]:int = (u = 90044[0]:int);
        90044[0]:int = (f = d + 160);
      }
      if (eqz(g_b) | eqz(l)) {
        get(b);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        e = t0;
      }
      if (eqz(g_b)) {
        d[42]:int = e;
        b = eqz(e);
      }
      if (eqz(g_b)) {
        if (b) goto B_i;
        d[43]:int = e[2]:int;
        if (eqz(e[3]:int)) {
          h = 3;
          k = 68620;
          j = 0;
          goto B_g;
        }
        d[44]:int = (b = e[14]:int);
        if (eqz(b)) goto B_l;
        if (e[5]:long > c) goto B_l;
        if (e[6]:long <= c) goto B_l;
        d[45]:int = (k = b[0]:int);
        j = b[2]:int;
        h = b[1]:int;
        goto B_g;
        label B_l:
        d[46]:int = (b = e[5]:int);
        f = eqz(e[6]:int);
      }
      if (eqz(g_b)) {
        if (f) goto B_m;
        d[59]:int = b;
        if (eqz(e[6]:int)) goto B_h;
        if (eqz(b)) goto B_i;
        if (b[0]:long > c) goto B_m;
        d[60]:int = (i = e[5]:int);
        b = 0;
        q = 9223372036854775807L;
        f = e[6]:int;
        h = f;
        loop L_o {
          if (h - b >= 2) {
            k = b + h >> 1;
            if (k >= f) goto B_h;
            if (eqz(i)) goto B_i;
            t = ((k << 4) + i)[0]:long;
            j = t > c;
            q = select_if(t, q, j);
            h = select_if(k, h, j);
            b = select_if(b, k, j);
            continue L_o;
          }
        }
        d[61]:int = (h = e[2]:int);
        if (b >= f) goto B_h;
        m = e[3]:int;
        if (m <= (k = ((n = b << 4) + i)[8]:ubyte)) goto B_h;
        if (eqz(h)) goto B_i;
        d[62]:int = (k = (h = h + (i = k << 4))[0]:int);
        j = h[2]:int;
        h = h[1]:int;
        if (f - 1 != b) goto B_g;
        d[63]:int = (b = e[8]:int);
        if (eqz(e[9]:int)) goto B_g;
        d[64]:int = b;
        f = d + 136;
        e = e[9]:int;
      }
      if (eqz(g_b) | l == 1) {
        time_tzsetName(f, b, e);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d[66]:int = (b = d[36]:int);
        d[65]:int = (m = d[34]:int);
        f = eqz(d[152]:ubyte);
      }
      b = 
        {
          e = 
            {
              if (eqz(g_b)) {
                if (f) goto B_u;
                n = d[35]:int;
                f = d + 120;
                e = d[37]:int;
              }
              if (eqz(g_b) | l == 2) {
                time_tzsetOffset(f, b, e);
                2;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[68]:int = (b = d[31]:int);
                d[67]:int = b;
                f = eqz(d[132]:ubyte);
                if (f) goto B_u;
                o = 0 - (i = d[30]:int);
                e = d[32]:int;
                f = eqz(e);
              }
              if (eqz(g_b)) {
                if (f) goto B_z;
                f = b[0]:ubyte == 44;
                if (f) goto B_z;
                f = d + 96;
              }
              if (eqz(g_b) | l == 3) {
                time_tzsetName(f, b, e);
                3;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[70]:int = (b = d[26]:int);
                d[69]:int = (r = d[24]:int);
                f = eqz(d[112]:ubyte);
                if (f) goto B_u;
                s = d[25]:int;
                e = d[27]:int;
                f = eqz(e);
              }
              p = {
                    if (eqz(g_b)) {
                      if (f) goto B_ea;
                      f = b[0]:ubyte == 44;
                      if (f) goto B_ea;
                      f = d + 80;
                    }
                    if (eqz(g_b) | l == 4) {
                      time_tzsetOffset(f, b, e);
                      4;
                      if (g_b == 1) goto B_b;
                    }
                    if (eqz(g_b)) {
                      d[72]:int = (b = d[21]:int);
                      d[71]:int = b;
                      f = eqz(d[92]:ubyte);
                      if (f) goto B_u;
                      e = d[22]:int;
                      0 - (f = d[20]:int);
                      goto B_da;
                    }
                    label B_ea:
                    if (g_b) {
                      p
                    } else {
                      d[72]:int = b;
                      3600 - i;
                    }
                    label B_da:
                  }
              if (eqz(g_b)) {
                d[73]:int = (b = select_if(b, 68623, e));
                i = b[0]:ubyte;
                if (i != 59) {
                  f = i != 44;
                  if (f) goto B_u;
                }
                f = d + 48;
                i = e - 1;
                e = select_if(i, 14, e);
                b = b + 1;
              }
              if (eqz(g_b) | l == 5) {
                time_tzsetRule(f, b, e);
                5;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                d[74]:int = (g = d[17]:int);
                e = 0;
                e;
                if (b = eqz(d[76]:ubyte)) goto B_t;
                i = 0;
                f = 0;
                0;
                if (eqz(ba = d[18]:int)) goto B_s;
                b = g[0]:ubyte != 44;
                if (b) goto B_u;
                v = d[16]:int;
                w = d[15]:int;
                x = d[14]:int;
                y = d[13]:int;
                z = d[12]:int;
                f = g + 1;
                e = ba - 1;
                b = d + 16;
              }
              if (eqz(g_b) | l == 6) {
                time_tzsetRule(b, f, e);
                6;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                e = 0;
                e;
                if (b = eqz(d[44]:ubyte)) goto B_t;
                i = 0;
                f = 0;
                0;
                if (d[10]:int > 0) goto B_s;
                yearYday(d + 8, (c + 9223372028741760000L) / 86400L);
                b = d[2]:int;
                e = time_tzruleTime(b, z, y, x, w, v, o);
                q = i64_extend_i32_s(e);
                b = 
                  time_tzruleTime(b, d[4]:int, d[5]:int, d[6]:int, d[7]:int, d[8]:int, p);
                var aa:long = i64_extend_i32_s(b);
                t = i64_extend_i32_s(d[3]:int * 86400 - 86400) + c % 86400L;
                if (b >= e) {
                  e = m;
                  i = n;
                  m = r;
                  n = s;
                  f = o;
                  o = p;
                  c = q;
                  q = aa;
                  goto B_pa;
                }
                e = r;
                i = s;
                f = p;
                c = aa;
                label B_pa:
                b = c > t;
                if (b) goto B_y;
                b = q <= t;
                if (b) goto B_y;
              }
              label B_z:
              if (eqz(g_b)) {
                e = m;
                i = n;
                f = o;
                1;
                goto B_s;
              }
              label B_y:
              1;
              if (eqz(g_b)) goto B_s;
              label B_u:
              select_if(e, 0, g_b);
              label B_t:
            }
          if (g_b) {
            b
          } else {
            i = 0;
            f = 0;
            0;
          }
          label B_s:
        }
      if (eqz(g_b)) {
        if (eqz(b & 1)) goto B_g;
        k = e;
        h = i;
        j = f;
        goto B_g;
      }
      label B_m:
      if (eqz(g_b)) {
        d[47]:int = (m = e[2]:int);
        o = e[3]:int;
        d[48]:int = (n = e[5]:int);
        f = 0;
        j = e[6]:int;
        b = j > 0;
        i = select_if(j, 0, b);
        h = n + 8;
        b = 0;
        loop L_wa {
          if (b == i) goto B_va;
          if (b == j) goto B_h;
          b = b + 1;
          k = h[0]:ubyte;
          h = h + 16;
          if (k) continue L_wa;
        }
        if (j <= b - 1) goto B_va;
        d[49]:int = n;
        if (e[6]:int <= 0) goto B_xa;
        d[50]:int = (k = e[2]:int);
        h = e[3]:int;
        d[51]:int = (b = e[5]:int);
        if (eqz(e[6]:int)) goto B_h;
        j = b[8]:ubyte;
        if (j >= h) goto B_h;
        if (eqz((k + (j << 4))[12]:ubyte)) goto B_xa;
        d[52]:int = b;
        if (eqz(e[6]:int)) goto B_h;
        f = b[8]:ubyte;
        b = (f << 4) - 4;
        loop L_ya {
          if (f <= 0) goto B_xa;
          d[53]:int = (h = e[2]:int);
          f = f - 1;
          if (f >= e[3]:int) goto B_h;
          h = b + h;
          b = b - 16;
          if (h[0]:ubyte) continue L_ya;
        }
        goto B_va;
        label B_xa:
        d[54]:int = (j = e[2]:int);
        f = 0;
        b = e[3]:int;
        i = b > 0;
        i = select_if(b, 0, i);
        h = j + 12;
        b = 0;
        loop L_za {
          if (b == i) goto B_va;
          d[55]:int = j;
          if (e[3]:int <= b) goto B_h;
          b = b + 1;
          k = h[0]:ubyte;
          h = h + 16;
          if (k) continue L_za;
        }
        f = b - 1;
        label B_va:
        if (f >= o) goto B_h;
        if (eqz(m)) goto B_i;
        d[56]:int = (k = (b = m + (f << 4))[0]:int);
        j = b[2]:int;
        h = b[1]:int;
        d[57]:int = (b = e[5]:int);
        if (e[6]:int <= 0) goto B_g;
        d[58]:int = b;
        if (eqz(e[6]:int)) goto B_h;
        if (b) goto B_g;
      }
      label B_i:
      if (eqz(g_b) | l == 7) {
        runtime_nilPanic();
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_h:
      if (eqz(g_b) | l == 8) {
        runtime_lookupPanic();
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      if (eqz(g_b)) {
        90044[0]:int = u;
        a.c = j;
        a.b = h;
        a.a = k;
        stack_pointer = d + 320;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g[0]:int = a;
  g[1]:int = b;
  g[2]:long@4 = c;
  g[4]:int = d;
  g[5]:int = e;
  g[6]:int = f;
  g[7]:int = h;
  g[8]:int = i;
  g[9]:int = j;
  g[10]:int = k;
  g[11]:int = m;
  g[12]:int = n;
  g[13]:int = o;
  g[14]:int = p;
  g[15]:int = r;
  g[16]:int = s;
  g[17]:int = u;
  g[18]:int = v;
  g[19]:int = w;
  g[20]:int = x;
  g[21]:int = y;
  g[22]:int = z;
  g_c[0]:int = g_c[0]:int + 92;
}

function time_tzsetName(a:{ a:int, b:int, c:int, d:int, e:byte }, b:ubyte_ptr, c:int) { // func155
  var g:int;
  var d:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var e:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    e = f.e;
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
          d = eqz(c);
        }
        b = {
              if (eqz(g_b)) {
                if (d) goto B_g;
                d = b[0] == 60;
              }
              if (eqz(g_b)) {
                if (d) goto B_j;
                g[10]:int = 0;
              }
              loop L_m {
                if (eqz(g_b)) {
                  e = g + 40;
                  d = g + 24;
                }
                if (eqz(g_b) | eqz(h)) {
                  runtime_stringNext(d, b, c, e);
                  0;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  d = eqz(g[24]:ubyte);
                  if (d) goto B_l;
                  d = g[8]:int - 43;
                  e = d > 14;
                  if (e) continue L_m;
                  d = eqz(1 << d & 32743);
                  if (d) continue L_m;
                }
              }
              if (eqz(g_b)) {
                d = g[7]:int;
                e = d < 3;
                if (e) goto B_g;
                e = c < d;
                if (e) goto B_i;
                c = c - d;
                e = b + d;
                f = 1;
                goto B_e;
              }
              label B_l:
              if (eqz(g_b)) {
                d = c < 3;
                if (d) goto B_g;
                f = 1;
                e = 0;
                d = c;
                c = 0;
                goto B_e;
              }
              label B_j:
              if (eqz(g_b)) {
                g[10]:int = 0;
                d = 0;
              }
              loop L_t {
                if (eqz(g_b)) {
                  f = g + 40;
                  e = g + 8;
                }
                if (eqz(g_b) | h == 1) {
                  runtime_stringNext(e, b, c, f);
                  1;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) {
                  0;
                  if (eqz(e = g[8]:ubyte)) goto B_f;
                  e = g[4]:int != 62;
                  if (e) continue L_t;
                }
              }
              if (eqz(g_b)) {
                e = g[3]:int;
                d = e - 1;
                f = d >= c;
                if (f) goto B_i;
                f = 1;
                e = e + 1;
                if (e > c) goto B_i;
                c = c - e;
                e = b + e;
                b = b + 1;
                goto B_e;
              }
              label B_i:
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
                d = 0;
                0;
              }
              label B_f:
            }
        if (eqz(g_b)) {
          e = 0;
          f = 0;
          c = 0;
        }
        label B_e:
        if (eqz(g_b)) {
          a.a = b;
          a.b = d;
          a.c = e;
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
  h.d = d;
  h.e = e;
  h.f = g;
  h.g = f;
  g_c[0]:int = g_c[0]:int + 28;
}

function time_tzsetOffset(a:{ a:int, b:int, c:int, d:byte }, b:ubyte_ptr, c:ubyte_ptr) { // func156
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

function time_tzsetRule(a:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:byte }, b:ubyte_ptr, c:ubyte_ptr) { // func157
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

function yearYday(a:{ a:int, b:int }, b:long) { // func158
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

function time_tzruleTime(a:int, b:int, c:int, d:int, e:int, f:int, g:int):int { // func159
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

function time_tzsetNum(a:{ a:int, b:int, c:int, d:byte }, b:int, c:int, d:int, e:int) { // func160
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

function split(a:{ a:long, b:int, c:int }, b:long) { // func161
  var c:long;
  a.a = (c = (b = b << 2L | 3L) / 146097L);
  a.b = (b = (b - c * 146097L | 3L) * 2939745L) >> 32L;
  a.c = i32_wrap_i64(b) / 11758980;
}

function date(a:{ a:int, b:int, c:int }, b:long) { // func162
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

function clock(a:{ a:int, b:int, c:int }, b:long) { // func163
  var c:int;
  var d:int;
  a.a = (d = (c = i32_wrap_i64(b % 86400L)) / 3600);
  a.b = (d = (c = d * -3600 + c) / 60);
  a.c = d * -60 + c;
}

function String_6(a:{ a:int, b:int }, b:int) { // func164
  var c:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var d:int;
  var h:long;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    f = g_c[0]:int;
    a = f.a;
    b = f.b;
    c = f.c;
    d = f.d;
    g = f.e;
    f = f.f;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 80;
          stack_pointer = c;
          c[17]:long@4 = 0L;
          c[15]:long@4 = 3L;
          f = 90044[0]:int;
          90044[0]:int = c + 56;
          c[14]:int = f;
          d = b - 1 > 11;
        }
        if (eqz(g_b)) {
          if (eqz(d)) {
            d = b << 3;
            b = (d + 68696)[0]:int;
            d = (d + 68692)[0]:int;
            goto B_e;
          }
          (c + 48)[0]:int = 0;
          (c + 40)[0]:long = 0L;
          c[4]:long = 0L;
          d = eqz(b);
        }
        b = {
              if (eqz(g_b)) {
                if (d) goto B_i;
                h = i64_extend_i32_s(b);
                b = 19;
              }
              if (eqz(g_b)) {
                loop L_m {
                  d = eqz(h);
                  if (d) goto B_k;
                  d = b > 19;
                  if (eqz(d)) {
                    (c + 32 + b)[0]:byte =
                      (g = i32_wrap_i64(h - (h = h / 10L) * 10L) | 48);
                    b = b - 1;
                    continue L_m;
                  }
                }
              }
              if (eqz(g_b) | eqz(e)) {
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
                c[51]:byte = 48;
                19;
              }
              label B_h:
            }
        if (eqz(g_b)) {
          d = c + 24;
          g = c + 32 + b;
          b = 20 - b;
        }
        if (eqz(g_b) | e == 1) {
          runtime_stringFromBytes(d, g, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[17]:int = (b = c[6]:int);
          g = c[7]:int;
          d = c + 16;
        }
        if (eqz(g_b) | e == 2) {
          runtime_stringConcat(d, 68611, 8, b, g);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c[18]:int = (b = c[4]:int);
          g = c[5]:int;
          d = c + 8;
        }
        if (eqz(g_b) | e == 3) {
          runtime_stringConcat(d, b, g, 68619, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = c[2]:int;
          b = c[3]:int;
        }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = f;
          a.b = b;
          a.a = d;
          stack_pointer = c + 80;
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
  e.f = f;
  g_c[0]:int = g_c[0]:int + 24;
}

function GoString(a:{ a:int, b:int }, b:long, c:long, d:{ a:int, b:int }) { // func165
  var e:int;
  var g:int;
  var f:int_ptr;
  var k:int;
  var h:int;
  var l:int;
  var m:int;
  var r:int;
  var j:int;
  var q:int;
  var p:int;
  var n:int;
  var o:int;
  var i:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 72;
    i = g_c[0]:int;
    a = i[0]:int;
    c = i[3]:long@4;
    d = i[5]:int;
    e = i[6]:int;
    f = i[7]:int;
    g = i[8]:int;
    h = i[9]:int;
    j = i[10]:int;
    l = i[11]:int;
    m = i[12]:int;
    n = i[13]:int;
    o = i[14]:int;
    p = i[15]:int;
    q = i[16]:int;
    r = i[17]:int;
    b = i[1]:long@4;
  }
  i = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        k = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer - 544;
        stack_pointer = e;
        e[101]:int = 33;
        memory_fill(e + 408, 0, 132);
        e[100]:int = (o = 90044[0]:int);
        90044[0]:int = e + 400;
        g = eqz(d);
      }
      if (eqz(g_b | g)) {
        g = d;
        f = g != 90576;
        if (f) goto B_e;
      }
      if (eqz(g_b) | eqz(k)) {
        get(d);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        g = t0;
      }
      if (eqz(g_b)) { e[102]:int = g }
      label B_e:
      if (eqz(g_b)) {
        e[103]:int = g;
        f = g == 87728;
        c = select_if((b >> 30L & 8589934591L) + 59453308800L, c, b < 0L) -
            62135596800L;
      }
      if (eqz(g_b)) {
        if (f) goto B_j;
        f = eqz(g);
      }
      if (eqz(g_b | f)) {
        e[104]:int = (f = g[14]:int);
        h = eqz(f);
        if (h) goto B_l;
        h = g[5]:long > c;
        if (h) goto B_l;
        h = g[6]:long <= c;
        if (h) goto B_l;
        e[105]:int = f;
        c = f[2] + c;
        goto B_j;
      }
      if (eqz(g_b) | k == 1) {
        runtime_nilPanic();
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_l:
      f = select_if(f, e + 384, g_b);
      if (eqz(g_b) | k == 2) {
        lookup(f, g, c);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[106]:int = (g = e[96]:int);
        c = e[98]:int + c;
      }
      label B_j:
      if (eqz(g_b)) {
        date(e + 368, (c = c + 9223372028741760000L) / 86400L);
        j = e[94]:int;
        f = e[93]:int;
        h = e[92]:int;
        g = e + 352;
        clock(g, c);
        p = e[89]:int;
        q = e[88]:int;
        n = e[90]:int;
      }
      if (eqz(g_b) | k == 3) {
        runtime_alloc(70);
        let t1 = 3;
        if (g_b == 1) goto B_b;
        g = t1;
      }
      if (eqz(g_b)) {
        g[0]:long@1 = rodata_1[2672]:long@1;
        (g + 8)[0]:short@1 = (m = rodata_1[2680]:ushort@1);
        e[107]:int = g;
        e[108]:int = g;
        l = e + 336;
      }
      if (eqz(g_b) | k == 4) {
        time_appendInt(l, g, 10, 70, h, 0);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[109]:int = (g = e[84]:int);
        l = e[85]:int;
        m = f - 1 > 11;
        h = e[86]:int;
      }
      g = {
            if (eqz(g_b)) {
              if (m) goto B_x;
              m = e + 304;
            }
            if (eqz(g_b) | k == 5) {
              runtime_sliceAppend(m, g, 68522, l, h, 7, 1);
              5;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              e[110]:int = (g = e[76]:int);
              e[111]:int = (h = ((f = f << 3) + 68692)[0]:int);
              l = e + 288;
              m = e[77]:int;
              r = e[78]:int;
              f = (f + 68696)[0]:int;
            }
            if (eqz(g_b) | k == 6) {
              runtime_sliceAppend(l, g, h, m, r, f, 1);
              6;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              f = e[74]:int;
              h = e[73]:int;
              e[72]:int;
              goto B_w;
            }
            label B_x:
            m = select_if(m, e + 320, g_b);
            if (eqz(g_b) | k == 7) {
              time_appendInt(m, g, l, h, f, 0);
              7;
              if (g_b == 1) goto B_b;
            }
            if (g_b) {
              g
            } else {
              f = e[82]:int;
              h = e[81]:int;
              e[80]:int;
            }
            label B_w:
          }
      if (eqz(g_b)) {
        e[112]:int = g;
        e[113]:int = g;
        l = e + 272;
      }
      if (eqz(g_b) | k == 8) {
        runtime_sliceAppend(l, g, 86623, h, f, 2, 1);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[114]:int = (g = e[68]:int);
        h = e[69]:int;
        l = e[70]:int;
        f = e + 256;
      }
      if (eqz(g_b) | k == 9) {
        time_appendInt(f, g, h, l, j, 0);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[115]:int = (g = e[64]:int);
        h = e[65]:int;
        j = e[66]:int;
        f = e + 240;
      }
      if (eqz(g_b) | k == 10) {
        runtime_sliceAppend(f, g, 86623, h, j, 2, 1);
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[116]:int = (g = e[60]:int);
        h = e[61]:int;
        j = e[62]:int;
        f = e + 224;
      }
      if (eqz(g_b) | k == 11) {
        time_appendInt(f, g, h, j, q, 0);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[117]:int = (g = e[56]:int);
        h = e[57]:int;
        j = e[58]:int;
        f = e + 208;
      }
      if (eqz(g_b) | k == 12) {
        runtime_sliceAppend(f, g, 86623, h, j, 2, 1);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[118]:int = (g = e[52]:int);
        h = e[53]:int;
        j = e[54]:int;
        f = e + 192;
      }
      if (eqz(g_b) | k == 13) {
        time_appendInt(f, g, h, j, p, 0);
        13;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[119]:int = (g = e[48]:int);
        h = e[49]:int;
        j = e[50]:int;
        f = e + 176;
      }
      if (eqz(g_b) | k == 14) {
        runtime_sliceAppend(f, g, 86623, h, j, 2, 1);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[120]:int = (g = e[44]:int);
        h = e[45]:int;
        j = e[46]:int;
        f = e + 160;
      }
      if (eqz(g_b) | k == 15) {
        time_appendInt(f, g, h, j, n, 0);
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[121]:int = (g = e[40]:int);
        h = e[41]:int;
        j = e[42]:int;
        f = e + 144;
      }
      if (eqz(g_b) | k == 16) {
        runtime_sliceAppend(f, g, 86623, h, j, 2, 1);
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[122]:int = (g = e[36]:int);
        h = e[37]:int;
        j = e[38]:int;
        l = i32_wrap_i64(b) & 1073741823;
        f = e + 128;
      }
      if (eqz(g_b) | k == 17) {
        time_appendInt(f, g, h, j, l, 0);
        17;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[123]:int = (g = e[32]:int);
        h = e[33]:int;
        j = e[34]:int;
        f = e + 112;
      }
      if (eqz(g_b) | k == 18) {
        runtime_sliceAppend(f, g, 86623, h, j, 2, 1);
        18;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[126]:int = (d = select_if(d, 87728, d));
        e[125]:int = d;
        e[124]:int = (g = e[28]:int);
        j = e[29]:int;
        h = d != 87728;
        f = e[30]:int;
      }
      d = {
            if (eqz(g_b)) {
              if (h) goto B_db;
              d = e + 24;
            }
            if (eqz(g_b) | k == 19) {
              runtime_sliceAppend(d, g, 68529, j, f, 8, 1);
              19;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              g = e[8]:int;
              f = e[7]:int;
              e[6]:int;
              goto B_cb;
            }
            label B_db:
            h = select_if(h, d != 90576, g_b);
            if (eqz(g_b)) {
              if (h) goto B_hb;
              d = e + 40;
            }
            if (eqz(g_b) | k == 20) {
              runtime_sliceAppend(d, g, 68537, j, f, 10, 1);
              20;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              g = e[12]:int;
              f = e[11]:int;
              e[10]:int;
              goto B_cb;
            }
            label B_hb:
            h = select_if(h, e + 96, g_b);
            if (eqz(g_b) | k == 21) {
              runtime_sliceAppend(h, g, 68547, j, f, 14, 1);
              21;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              e[131]:int = (g = e[24]:int);
              e[132]:int = (f = d.a);
              j = e[26]:int;
              h = e[25]:int;
              l = e + 88;
              d = d.b;
            }
            if (eqz(g_b) | k == 22) {
              time_quote(l, f, d);
              22;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              e[133]:int = (d = e[22]:int);
              l = e[23]:int;
              f = e + 72;
            }
            if (eqz(g_b) | k == 23) {
              runtime_sliceAppend(f, g, d, h, j, l, 1);
              23;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              e[398]:byte = 41;
              e[134]:int = (d = e[18]:int);
              f = e + 398;
              h = e[19]:int;
              j = e[20]:int;
              g = e + 56;
            }
            if (eqz(g_b) | k == 24) {
              runtime_sliceAppend(g, d, f, h, j, 1, 1);
              24;
              if (g_b == 1) goto B_b;
            }
            if (g_b) {
              d
            } else {
              g = e[16]:int;
              f = e[15]:int;
              e[14]:int;
            }
            label B_cb:
          }
      if (eqz(g_b)) {
        e[127]:int = d;
        e[128]:int = d;
        e[399]:byte = 41;
        j = e + 399;
        h = e + 8;
      }
      if (eqz(g_b) | k == 25) {
        runtime_sliceAppend(h, d, j, f, g, 1, 1);
        25;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[129]:int = (d = e[2]:int);
        g = e[3]:int;
      }
      if (eqz(g_b) | k == 26) {
        runtime_stringFromBytes(e, d, g);
        26;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        90044[0]:int = o;
        d = e[1]:int;
        a.a = e[0]:int;
        a.b = d;
        stack_pointer = e + 544;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = i;
  g_c[0]:int = g_c[0]:int + 4;
  i = g_c[0]:int;
  i[0]:int = a;
  i[1]:long@4 = b;
  i[3]:long@4 = c;
  i[5]:int = d;
  i[6]:int = e;
  i[7]:int = f;
  i[8]:int = g;
  i[9]:int = h;
  i[10]:int = j;
  i[11]:int = l;
  i[12]:int = m;
  i[13]:int = n;
  i[14]:int = o;
  i[15]:int = p;
  i[16]:int = q;
  i[17]:int = r;
  g_c[0]:int = g_c[0]:int + 72;
}

function Write_1(a:{ a:int, b:int, c:int }, b:int, c:int, d:int) { // func166
  var h:int;
  var f:int;
  var g:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = 0;
          f = 0;
        }
        if (eqz(g_b) | eqz(h)) {
          write(b, c, d);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        b = select_if(b, d >= 0, g_b);
        if (eqz(g_b)) {
          if (b) goto B_f;
          f = 89276[0]:int;
        }
        if (eqz(g_b) | h == 1) {
          runtime_interfaceTypeAssert(1);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f = {
                if (f != 20) {
                  g = 87280;
                  if (f != 44) goto B_f;
                  89256;
                  goto B_j;
                }
                89248;
                label B_j:
              }
          g = 87340;
        }
        label B_f:
        if (eqz(g_b)) {
          a.b = g;
          a.a = d;
          a.c = f;
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
  g_c[0]:int = g_c[0]:int + 24;
}

function strconv_appendQuotedWith(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int) { // func167
  var f:int;
  var h:int;
  var i:int;
  var m:int;
  var j:int;
  var k:int;
  var l:int;
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
    l = g.k;
    n = g.l;
    b = g.b;
  }
  g = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          m = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 160;
          stack_pointer = f;
          f[29]:int = 10;
          memory_fill(f + 120, 0, 40);
          f[28]:int = (n = 90044[0]:int);
          90044[0]:int = f + 112;
          i = 68;
          h = d < 69;
        }
        if (eqz(g_b)) {
          if (h) goto B_f;
          i = d + 2;
          b = i < 0;
          if (b) goto B_e;
        }
        if (eqz(g_b) | eqz(m)) {
          runtime_alloc(i);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) { f[30]:int = b }
        label B_f:
        if (eqz(g_b)) {
          f[111]:byte = 34;
          f[31]:int = b;
          j = f + 111;
          h = f + 96;
        }
        if (eqz(g_b) | m == 1) {
          runtime_sliceAppend(h, b, j, 0, i, 1, 1);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[32]:int = (b = f[24]:int);
          j = f[25]:int;
          h = f[26]:int;
        }
        loop L_m {
          if (eqz(g_b)) {
            f[34]:int = b;
            f[33]:int = c;
            i = d <= 0;
          }
          if (eqz(g_b)) {
            if (i) goto B_p;
            k = c[0]:byte;
            l = k >= 0;
            i = 1;
          }
          if (eqz(g_b)) {
            if (l) goto B_r;
            i = f + 72;
          }
          if (eqz(g_b) | m == 2) {
            unicode_utf8_DecodeRuneInString(i, c, d);
            2;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            k = f[18]:int;
            i = f[19]:int;
            l = i != 1;
            if (l) goto B_r;
            l = k != 65533;
            if (l) goto B_r;
            k = f + 40;
            i = 1;
          }
          if (eqz(g_b) | m == 3) {
            runtime_sliceAppend(k, b, 82694, j, h, 2, 1);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            f[35]:int = (b = f[10]:int);
            f[110]:byte = ((c[0]:ubyte >> 4) + 82700)[0]:ubyte;
            j = f + 110;
            k = f[11]:int;
            l = f[12]:int;
            h = f + 24;
          }
          if (eqz(g_b) | m == 4) {
            runtime_sliceAppend(h, b, j, k, l, 1, 1);
            4;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            f[36]:int = (b = f[6]:int);
            f[109]:byte = ((c[0]:ubyte & 15) + 82700)[0]:ubyte;
            j = f + 109;
            k = f[7]:int;
            l = f[8]:int;
            h = f + 8;
          }
          if (eqz(g_b) | m == 5) {
            runtime_sliceAppend(h, b, j, k, l, 1, 1);
            5;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h = f[4]:int;
            j = f[3]:int;
            b = f[2]:int;
            goto B_o;
          }
          label B_r:
          l = select_if(l, f + 56, g_b);
          if (eqz(g_b) | m == 6) {
            strconv_appendEscapedRune(l, b, j, h, k, 34, e);
            6;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h = f[16]:int;
            j = f[15]:int;
            b = f[14]:int;
            goto B_o;
          }
          label B_p:
          if (eqz(g_b)) {
            f[108]:byte = 34;
            d = f + 108;
            c = f + 80;
          }
          if (eqz(g_b) | m == 7) {
            runtime_sliceAppend(c, b, d, j, h, 1, 1);
            7;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            90044[0]:int = n;
            b = f[21]:int;
            c = f[20]:int;
            a.c = f[22]:int;
            a.a = c;
            a.b = b;
            stack_pointer = f + 160;
            return ;
          }
          label B_o:
          if (eqz(g_b)) {
            f[37]:int = b;
            f[38]:int = b;
            k = d < i;
            if (k) goto B_e;
            d = d - i;
            c = c + i;
            continue L_m;
          }
        }
        label B_e:
        if (eqz(g_b) | m == 8) {
          runtime_slicePanic();
          8;
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
  g.l = n;
  g_c[0]:int = g_c[0]:int + 48;
}

function strconv_appendEscapedRune(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int, f:int, g:int) { // func168
  var h:int;
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
    k = i.i;
    l = i.j;
    b = i.b;
  }
  i = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          j = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          h = stack_pointer - 352;
          stack_pointer = h;
          h[75]:int = 11;
          memory_fill(h + 304, 0, 44);
          h[74]:int = (l = 90044[0]:int);
          90044[0]:int = h + 296;
          k = e == 92;
        }
        if (eqz(g_b)) {
          if (eqz(k)) {
            f = (f & 255) != e;
            if (f) goto B_f;
          }
          h[295]:byte = 92;
          g = h + 295;
          f = h + 16;
        }
        if (eqz(g_b) | eqz(j)) {
          runtime_sliceAppend(f, b, g, c, d, 1, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[294]:byte = e;
          h[77]:int = (e = h[4]:int);
          c = h[5]:int;
          d = h[6]:int;
          b = h + 294;
        }
        if (eqz(g_b) | j == 1) {
          runtime_sliceAppend(h, e, b, c, d, 1, 1);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[2]:int;
          b = h[1]:int;
          d = h[0]:int;
          goto B_e;
        }
        label B_f:
        f = select_if(f, eqz(g & 1), g_b);
        if (eqz(g_b)) {
          if (f) goto B_n;
          f = e > 127;
          if (f) goto B_m;
        }
        if (eqz(g_b) | j == 2) {
          strconv_IsPrint(e);
          let t0 = 2;
          if (g_b == 1) goto B_b;
          f = t0;
        }
        if (eqz(g_b)) {
          f = eqz(f & 1);
          if (f) goto B_m;
          h[293]:byte = e;
          f = h + 293;
          e = h + 32;
        }
        if (eqz(g_b) | j == 3) {
          runtime_sliceAppend(e, b, f, c, d, 1, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[10]:int;
          b = h[9]:int;
          d = h[8]:int;
          goto B_e;
        }
        label B_n:
        if (eqz(g_b) | j == 4) {
          strconv_IsPrint(e);
          let t1 = 4;
          if (g_b == 1) goto B_b;
          f = t1;
        }
        if (eqz(g_b)) {
          f = eqz(f & 1);
          if (f) goto B_m;
          f = h + 272;
        }
        if (eqz(g_b) | j == 5) {
          unicode_utf8_AppendRune(f, b, c, d, e);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[70]:int;
          b = h[69]:int;
          d = h[68]:int;
          goto B_e;
        }
        label B_m:
        f = select_if(f, e - 7, g_b);
        if (eqz(g_b)) {
          br_table[B_fa, B_da, B_z, B_ba, B_y, B_ca, B_aa, ..B_x](f)
          label B_fa:
          e = h + 160;
        }
        if (eqz(g_b) | j == 6) {
          runtime_sliceAppend(e, b, 82680, c, d, 2, 1);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[42]:int;
          b = h[41]:int;
          d = h[40]:int;
          goto B_e;
        }
        label B_da:
        e = select_if(e, h + 176, g_b);
        if (eqz(g_b) | j == 7) {
          runtime_sliceAppend(e, b, 82682, c, d, 2, 1);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[46]:int;
          b = h[45]:int;
          d = h[44]:int;
          goto B_e;
        }
        label B_ca:
        e = select_if(e, h + 192, g_b);
        if (eqz(g_b) | j == 8) {
          runtime_sliceAppend(e, b, 82684, c, d, 2, 1);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[50]:int;
          b = h[49]:int;
          d = h[48]:int;
          goto B_e;
        }
        label B_ba:
        e = select_if(e, h + 208, g_b);
        if (eqz(g_b) | j == 9) {
          runtime_sliceAppend(e, b, 82686, c, d, 2, 1);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[54]:int;
          b = h[53]:int;
          d = h[52]:int;
          goto B_e;
        }
        label B_aa:
        e = select_if(e, h + 224, g_b);
        if (eqz(g_b) | j == 10) {
          runtime_sliceAppend(e, b, 82688, c, d, 2, 1);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[58]:int;
          b = h[57]:int;
          d = h[56]:int;
          goto B_e;
        }
        label B_z:
        e = select_if(e, h + 240, g_b);
        if (eqz(g_b) | j == 11) {
          runtime_sliceAppend(e, b, 82690, c, d, 2, 1);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[62]:int;
          b = h[61]:int;
          d = h[60]:int;
          goto B_e;
        }
        label B_y:
        e = select_if(e, h + 256, g_b);
        if (eqz(g_b) | j == 12) {
          runtime_sliceAppend(e, b, 82692, c, d, 2, 1);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[66]:int;
          b = h[65]:int;
          d = h[64]:int;
          goto B_e;
        }
        label B_x:
        f = select_if(f, e < 32, g_b);
        if (eqz(g_b)) {
          if (eqz(f)) {
            f = e != 127;
            if (f) goto B_ua;
          }
          f = h + 80;
        }
        if (eqz(g_b) | j == 13) {
          runtime_sliceAppend(f, b, 82694, c, d, 2, 1);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[79]:int = (d = h[20]:int);
          h[292]:byte = ((e >> 4 & 15) + 82700)[0]:ubyte;
          c = h + 292;
          f = h[21]:int;
          g = h[22]:int;
          b = h - -64;
        }
        if (eqz(g_b) | j == 14) {
          runtime_sliceAppend(b, d, c, f, g, 1, 1);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[291]:byte = ((e & 15) + 82700)[0]:ubyte;
          h[80]:int = (e = h[16]:int);
          c = h + 291;
          d = h[17]:int;
          f = h[18]:int;
          b = h + 48;
        }
        if (eqz(g_b) | j == 15) {
          runtime_sliceAppend(b, e, c, d, f, 1, 1);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = h[14]:int;
          b = h[13]:int;
          d = h[12]:int;
          goto B_e;
        }
        label B_ua:
        f = select_if(f, e < 55296, g_b);
        if (eqz(g_b)) {
          if (eqz(f)) {
            f = 65533;
            g = e - 57344 >= 1056768;
            if (g) goto B_db;
          }
          if (e < 65536) {
            f = e;
            goto B_db;
          }
          f = h + 144;
        }
        if (eqz(g_b) | j == 16) {
          runtime_sliceAppend(f, b, 82698, c, d, 2, 1);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[84]:int = (d = h[36]:int);
          f = 28;
          c = h[38]:int;
          b = h[37]:int;
        }
        loop L_jb {
          if (eqz(g_b)) {
            h[85]:int = d;
            if (f < 0) goto B_e;
            h[289]:byte =
              ((e >> select_if(31, f, f >= 31) & 15) + 82700)[0]:ubyte;
            k = h + 289;
            g = h + 128;
          }
          if (eqz(g_b) | j == 17) {
            runtime_sliceAppend(g, d, k, b, c, 1, 1);
            17;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h[86]:int = (d = h[32]:int);
            f = f - 4;
            c = h[34]:int;
            b = h[33]:int;
            continue L_jb;
          }
        }
        label B_db:
        e = select_if(e, h + 112, g_b);
        if (eqz(g_b) | j == 18) {
          runtime_sliceAppend(e, b, 82696, c, d, 2, 1);
          18;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          h[81]:int = (d = h[28]:int);
          e = 12;
          c = h[30]:int;
          b = h[29]:int;
        }
        loop L_pb {
          if (eqz(g_b)) {
            h[82]:int = d;
            if (e < 0) goto B_e;
            h[290]:byte =
              ((f >> select_if(31, e, e >= 31) & 15) + 82700)[0]:ubyte;
            k = h + 290;
            g = h + 96;
          }
          if (eqz(g_b) | j == 19) {
            runtime_sliceAppend(g, d, k, b, c, 1, 1);
            19;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h[83]:int = (d = h[24]:int);
            e = e - 4;
            c = h[26]:int;
            b = h[25]:int;
            continue L_pb;
          }
        }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = l;
          a.c = c;
          a.b = b;
          a.a = d;
          stack_pointer = h + 352;
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
  i.h = h;
  i.i = k;
  i.j = l;
  g_c[0]:int = g_c[0]:int + 40;
}

function strconv_IsPrint(a:int):int { // func169
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
            b = select_if(e + 1, b, g = ((e << 2) + 83448)[0]:int < a);
            d = select_if(d, e, g);
            continue L_m;
          }
          unreachable;
        }
        b = c + 16;
      }
      if (eqz(g_b) | eqz(f)) {
        strconv_bsearch_uint16_uint16(b, 87860, 424, a);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        d = 0;
        b = c[4]:int;
        if (b > 423) goto B_e;
        if (b > 423) goto B_i;
        e = a & 65535;
        if (e < (((b & 510) << 1) + 87860)[0]:ushort) goto B_e;
        if (e > ((b << 1 | 2) + 87860)[0]:ushort) goto B_e;
        b = c + 8;
      }
      if (eqz(g_b) | f == 1) {
        strconv_bsearch_uint16_uint16(b, 88708, 133, a);
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
        if ((((b & 510) << 2) + 83448)[0]:int > a) goto B_e;
        if (((b << 2 | 4) + 83448)[0]:int < a) goto B_e;
        if (a > 131071) goto B_f;
        b = c + 24;
      }
      if (eqz(g_b) | f == 2) {
        strconv_bsearch_uint16_uint16(b, 88974, 112, a);
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

function strconv_bsearch_uint16_uint16(a:{ a:int, b:byte }, b:int, c:int, d:int) { // func170
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

function strconv_leftShift(a:int, b:int) { // func171
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
          d = (c + 82724)[0]:int;
          f = d > 0;
          g = select_if(d, 0, f);
          var j:int = (c + 82720)[0]:int;
          var k:int = (c + 82716)[0]:int;
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
          e = select_if(e, f >= 0, g_b);
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
            if (f > 799) goto B_k;
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

function strconv_trim(a:int_ptr) { // func172
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

function strconv_rightShift(a:int, b:int) { // func173
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

function strconv_formatBits(a:{ a:int, b:int, c:int, d:int, e:int }, b:int, c:int, d:int, e:long, f:int) { // func174
  var i:int;
  var m:int;
  var h:int;
  var j:int;
  var p:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var k:int;
  var l:int;
  var n:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    g = g_c[0]:int;
    a = g.a;
    c = g.c;
    d = g.d;
    f = g.e;
    h = g.f;
    i = g.g;
    m = g.h;
    b = g.b;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        n = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        i = stack_pointer - 96;
        stack_pointer = i;
        i[21]:long@4 = 1L;
        m = 90044[0]:int;
        90044[0]:int = i + 80;
        i[20]:int = m;
        j = 65;
        memory_fill(i + 15, 0, 65);
        h = i + 15;
        p = h - 2;
        e = select_if(0L - e, e, f & 1);
      }
      if (eqz(g_b)) {
        loop L_g {
          if (e >= 1000000000L) {
            var o:int = j + p;
            h = i32_wrap_i64(e + (e = e / 1000000000L) * 3294967296L);
            g = 0;
            loop L_i {
              if (g != -8) {
                k = h / 100;
                l = g + j;
                if (l - 1 > 64) goto B_e;
                var q:byte_ptr = g + o;
                (q + 1)[0]:byte = ((h = h - k * 100 << 1) + 82481)[0]:ubyte;
                if (l - 2 > 64) goto B_e;
                q[0] = (h + 82480)[0]:ubyte;
                g = g - 2;
                h = k;
                continue L_i;
              }
            }
            h = h << 1;
            if (h > 199) goto B_e;
            j = g + j - 1;
            if (j > 64) goto B_e;
            (g + o + 1)[0]:byte = (h + 82481)[0]:ubyte;
            continue L_g;
          }
        }
        g = i32_wrap_i64(e);
        loop L_k {
          if (g >= 100) {
            h = g / 100;
            if (j - 1 > 64) goto B_e;
            k = j + i + 15;
            (k - 1)[0]:byte = ((g = g - h * 100 << 1) + 82481)[0]:ubyte;
            l = j - 2;
            if (l > 64) goto B_e;
            (k - 2)[0]:byte = (g + 82480)[0]:ubyte;
            j = l;
            g = h;
            continue L_k;
          }
        }
        h = j - 1;
        if (h > 64) goto B_e;
        k = j + i + 15;
        (k - 1)[0]:byte = ((l = g << 1) + 82481)[0]:ubyte;
        if (g >= 10) {
          h = j - 2;
          if (h > 64) goto B_e;
          (k - 2)[0]:byte = (l + 82480)[0]:ubyte;
        }
        if (f & 1) {
          h = h - 1;
          if (h > 64) goto B_e;
          (h + i + 15)[0]:byte = 45;
        }
        f = h + i + 15;
        h = 65 - h;
      }
      if (eqz(g_b) | eqz(n)) {
        runtime_sliceAppend(i, b, f, c, d, h, 1);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        90044[0]:int = m;
        g = i[1]:int;
        h = i[0]:int;
        k = i[2]:int;
        a.e = 0;
        a.c = k;
        a.a = h;
        a.d = 0;
        a.b = g;
        stack_pointer = i + 96;
        return ;
      }
      label B_e:
      if (eqz(g_b) | n == 1) {
        runtime_lookupPanic();
        1;
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
  g.e = f;
  g.f = h;
  g.g = i;
  g.h = m;
  g_c[0]:int = g_c[0]:int + 32;
}

function strconv_formatDigits(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int) { // func175
  var l:int;
  var n:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int }
  var p:int;
  var o:int;
  var m:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int }
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
    l = n.l;
    o = n.m;
    p = n.n;
    n = n.o;
  }
  m = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        m = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        l = stack_pointer - 96;
        stack_pointer = l;
        l[17]:long@4 = 5L;
        l[22]:int = e;
        l[21]:int = e;
        l[20]:int = e;
        l[19]:int = e;
        n = 90044[0]:int;
        90044[0]:int = l - -64;
        l[16]:int = n;
        p = k & 255;
        o = p - 101;
      }
      e = 
        {
          if (eqz(g_b)) {
            br_table[B_j, B_h, B_g, ..B_k](o)
            label B_k:
            p = p - 69;
            br_table[B_j, B_f, B_g, ..B_f](p);
            label B_j:
          }
          if (eqz(g_b) | eqz(m)) {
            strconv_fmtE(l, b, d, e, f, g, h, i, j, k);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h = l[1]:int;
            b = l[0]:int;
            l[2]:int;
            goto B_e;
          }
          label B_h:
          c = select_if(c, l + 16, g_b);
          if (eqz(g_b) | m == 1) {
            strconv_fmtF(c, b, d, e, f, g, h, i, j);
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h = l[5]:int;
            b = l[4]:int;
            l[6]:int;
            goto B_e;
          }
          label B_g:
          if (eqz(g_b)) {
            p = i - 1;
            o = p < -4;
          }
          if (eqz(g_b)) {
            if (eqz(o)) {
              c = 
                p < select_if(6, select_if(j, select_if(j, h, h < i), h >= j), c & 1);
              if (c) goto B_q;
            }
            j = select_if(h, j, h < j) - 1;
            k = k - 2;
            c = l + 48;
          }
          if (eqz(g_b) | m == 2) {
            strconv_fmtE(c, b, d, e, f, g, h, i, j, k);
            2;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h = l[13]:int;
            b = l[12]:int;
            l[14]:int;
            goto B_e;
          }
          label B_q:
          if (eqz(g_b)) {
            j = select_if(h, j, i < j) - i;
            k = j > 0;
            j = select_if(j, 0, k);
            c = l + 32;
          }
          if (eqz(g_b) | m == 3) {
            strconv_fmtF(c, b, d, e, f, g, h, i, j);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            h = l[9]:int;
            b = l[8]:int;
            l[10]:int;
            goto B_e;
          }
          label B_f:
          if (g_b) {
            e
          } else {
            (b + 2)[0]:byte = k;
            (b + 1)[0]:byte = 37;
            h = 3;
            68;
          }
          label B_e:
        }
      if (eqz(g_b)) {
        90044[0]:int = n;
        a.c = e;
        a.b = h;
        a.a = b;
        stack_pointer = l + 96;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = m;
  g_c[0]:int = g_c[0]:int + 4;
  m = g_c[0]:int;
  m.a = a;
  m.b = b;
  m.c = c;
  m.d = d;
  m.e = e;
  m.f = f;
  m.g = g;
  m.h = h;
  m.i = i;
  m.j = j;
  m.k = k;
  m.l = l;
  m.m = o;
  m.n = p;
  m.o = n;
  g_c[0]:int = g_c[0]:int + 60;
}

function strconv_fmtE(a:{ a:int, b:int, c:int }, b:int, c:int, d:ubyte_ptr, e:int, f:int, g:int, h:int, i:int, j:int) { // func176
  var k:int;
  var m:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int }
  var l:int;
  var o:int;
  var n:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 56;
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
    l = n.l;
    o = n.m;
    n = n.n;
  }
  m = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        m = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        k = stack_pointer - 224;
        stack_pointer = k;
        k[41]:int = 14;
        memory_fill(k + 168, 0, 56);
        k[44]:int = d;
        k[40]:int = (n = 90044[0]:int);
        90044[0]:int = k + 160;
        l = 1;
        c = eqz(c & 1);
        if (eqz(c)) {
          k[42]:int = b;
          (b + 1)[0]:byte = 45;
          90044[0]:int = (c = k + 160);
          l = 2;
        }
        k[43]:int = b;
      }
      if (eqz(g_b)) {
        k[159]:byte =
          if (g) {
            if (c = eqz(e)) goto B_h;
            d[0];
          } else {
            48
          }
        e = k + 159;
        c = k + 136;
      }
      if (eqz(g_b) | eqz(m)) {
        runtime_sliceAppend(c, b, e, l, 68, 1, 1);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        k[45]:int = (b = k[34]:int);
        e = k[35]:int;
        l = i <= 0;
        c = k[36]:int;
      }
      if (eqz(g_b)) {
        if (l) goto B_m;
        k[158]:byte = 46;
        o = k + 158;
        l = k + 120;
      }
      if (eqz(g_b) | m == 1) {
        runtime_sliceAppend(l, b, o, e, c, 1, 1);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        k[46]:int = (b = k[30]:int);
        e = k[31]:int;
        l = i + 1;
        o = l > g;
        l = select_if(g, l, o);
        o = l >= 2;
        c = k[32]:int;
      }
      if (eqz(g_b)) {
        if (eqz(o)) {
          l = 1;
          goto B_q;
        }
        k[47]:int = d;
        if (f < l) goto B_g;
        f = k + 104;
        o = l - 1;
        d = d + 1;
      }
      if (eqz(g_b) | m == 2) {
        runtime_sliceAppend(f, b, d, e, c, o, 1);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        k[48]:int = (b = k[26]:int);
        e = k[27]:int;
        c = k[28]:int;
      }
      label B_q:
      loop L_v {
        if (eqz(g_b)) {
          k[49]:int = b;
          d = i < l;
          if (d) goto B_m;
          k[157]:byte = 48;
          f = k + 157;
          d = k + 88;
        }
        if (eqz(g_b) | m == 3) {
          runtime_sliceAppend(d, b, f, e, c, 1, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k[50]:int = (b = k[22]:int);
          l = l + 1;
          c = k[24]:int;
          e = k[23]:int;
          continue L_v;
        }
      }
      label B_m:
      if (eqz(g_b)) {
        k[156]:byte = j;
        k[51]:int = b;
        f = k + 156;
        d = k + 72;
      }
      if (eqz(g_b) | m == 4) {
        runtime_sliceAppend(d, b, f, e, c, 1, 1);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        k[52]:int = (l = k[18]:int);
        k[155]:byte = select_if(45, 43, (b = select_if(h - 1, 0, g)) < 0);
        d = k + 155;
        e = k[19]:int;
        f = k[20]:int;
        c = k + 56;
      }
      if (eqz(g_b) | m == 5) {
        runtime_sliceAppend(c, l, d, e, f, 1, 1);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        k[53]:int = (l = k[14]:int);
        e = k[15]:int;
        i = b >> 31;
        b = (i ^ b) - i;
        d = b > 9;
        c = k[16]:int;
      }
      if (eqz(g_b)) {
        if (d) goto B_ea;
        k[153]:byte = 48;
        k[154]:byte = b + 48;
        d = k + 153;
        b = k + 8;
      }
      if (eqz(g_b) | m == 6) {
        runtime_sliceAppend(b, l, d, e, c, 2, 1);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        b = k[4]:int;
        l = k[3]:int;
        c = k[2]:int;
        goto B_f;
      }
      label B_ea:
      d = select_if(d, b > 99, g_b);
      if (eqz(g_b)) {
        if (d) goto B_ia;
        k[151]:byte = (i = (b & 255) / 10) | 48;
        k[152]:byte = b - i * 10 | 48;
        d = k + 151;
        b = k + 24;
      }
      if (eqz(g_b) | m == 7) {
        runtime_sliceAppend(b, l, d, e, c, 2, 1);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        b = k[8]:int;
        l = k[7]:int;
        c = k[6]:int;
        goto B_f;
      }
      label B_ia:
      if (eqz(g_b)) {
        k[148]:byte = b / 100 + 48;
        k[150]:byte = b - (i = b / 10) * 10 | 48;
        k[149]:byte = (i & 255) % 10 | 48;
        d = k + 148;
        b = k + 40;
      }
      if (eqz(g_b) | m == 8) {
        runtime_sliceAppend(b, l, d, e, c, 3, 1);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        b = k[12]:int;
        l = k[11]:int;
        c = k[10]:int;
        goto B_f;
      }
      label B_h:
      if (eqz(g_b) | m == 9) {
        runtime_lookupPanic();
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      if (eqz(g_b) | m == 10) {
        runtime_slicePanic();
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      if (eqz(g_b)) {
        90044[0]:int = n;
        a.c = b;
        a.b = l;
        a.a = c;
        stack_pointer = k + 224;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = m;
  g_c[0]:int = g_c[0]:int + 4;
  m = g_c[0]:int;
  m.a = a;
  m.b = b;
  m.c = c;
  m.d = d;
  m.e = e;
  m.f = f;
  m.g = g;
  m.h = h;
  m.i = i;
  m.j = j;
  m.k = k;
  m.l = l;
  m.m = o;
  m.n = n;
  g_c[0]:int = g_c[0]:int + 56;
}

function strconv_fmtF(a:{ a:int, b:int, c:int }, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int) { // func177
  var j:int;
  var k:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int }
  var m:int;
  var n:int;
  var l:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int }
  var o:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 56;
    l = g_c[0]:int;
    a = l.a;
    b = l.b;
    c = l.c;
    d = l.d;
    e = l.e;
    f = l.f;
    g = l.g;
    h = l.h;
    i = l.i;
    j = l.j;
    m = l.k;
    n = l.l;
    o = l.m;
    l = l.n;
  }
  k = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          k = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          j = stack_pointer - 144;
          stack_pointer = j;
          j[21]:int = 13;
          memory_fill(j + 88, 0, 52);
          j[24]:int = d;
          j[20]:int = (o = 90044[0]:int);
          90044[0]:int = j + 80;
          m = 1;
          if (c & 1) {
            j[22]:int = b;
            (b + 1)[0]:byte = 45;
            90044[0]:int = j + 80;
            m = 2;
          }
          j[23]:int = b;
          c = h <= 0;
        }
        if (eqz(g_b)) {
          if (c) goto B_i;
          if (f < (c = select_if(g, h, g < h))) goto B_g;
          f = j + 48;
        }
        if (eqz(g_b) | eqz(k)) {
          runtime_sliceAppend(f, b, d, m, 68, c, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j[25]:int = (b = j[12]:int);
          f = h - c;
          m = j[14]:int;
          c = j[13]:int;
        }
        loop L_m {
          if (eqz(g_b)) {
            j[26]:int = b;
            n = eqz(f);
            if (n) goto B_h;
            j[79]:byte = 48;
            n = j + 32;
            l = j + 79;
          }
          if (eqz(g_b) | k == 1) {
            runtime_sliceAppend(n, b, l, c, m, 1, 1);
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            j[27]:int = (b = j[8]:int);
            f = f - 1;
            m = j[10]:int;
            c = j[9]:int;
            continue L_m;
          }
        }
        label B_i:
        if (eqz(g_b)) {
          j[76]:byte = 48;
          f = j + 76;
          c = j - -64;
        }
        if (eqz(g_b) | k == 2) {
          runtime_sliceAppend(c, b, f, m, 68, 1, 1);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j[34]:int = (b = j[16]:int);
          m = j[18]:int;
          c = j[17]:int;
        }
        label B_h:
        if (eqz(g_b)) {
          j[28]:int = b;
          f = i <= 0;
        }
        if (eqz(g_b)) {
          if (f) goto B_u;
          j[78]:byte = 46;
          n = j + 78;
          f = j + 16;
        }
        if (eqz(g_b) | k == 3) {
          runtime_sliceAppend(f, b, n, c, m, 1, 1);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j[29]:int = (b = j[4]:int);
          m = j[6]:int;
          c = j[5]:int;
        }
        loop L_y {
          if (eqz(g_b)) {
            j[30]:int = b;
            if (eqz(i)) goto B_u;
            f = 48;
            if (eqz(h < 0 | g <= h)) {
              j[31]:int = d;
              if (e <= h) goto B_f;
              f = (d + h)[0]:ubyte;
            }
            j[77]:byte = f;
            f = j + 77;
          }
          if (eqz(g_b) | k == 4) {
            runtime_sliceAppend(j, b, f, c, m, 1, 1);
            4;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            j[32]:int = (b = j[0]:int);
            i = i - 1;
            h = h + 1;
            m = j[2]:int;
            c = j[1]:int;
            continue L_y;
          }
        }
        label B_u:
        if (eqz(g_b)) {
          90044[0]:int = o;
          a.c = m;
          a.b = c;
          a.a = b;
          stack_pointer = j + 144;
          return ;
        }
        label B_g:
        if (eqz(g_b) | k == 5) {
          runtime_slicePanic();
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        if (eqz(g_b) | k == 6) {
          runtime_lookupPanic();
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = k;
  g_c[0]:int = g_c[0]:int + 4;
  k = g_c[0]:int;
  k.a = a;
  k.b = b;
  k.c = c;
  k.d = d;
  k.e = e;
  k.f = f;
  k.g = g;
  k.h = h;
  k.i = i;
  k.j = j;
  k.k = m;
  k.l = n;
  k.m = o;
  k.n = l;
  g_c[0]:int = g_c[0]:int + 56;
}

function strconv_mult128bitPow10(a:{ a:long, b:int, c:byte }, b:long, c:int, d:int) { // func178
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
                ((f = d << 4) + 76336)[0]:long + i64_extend_i32_u(d >> 31));
              math_bits_Mul64(e, b, (f + 76344)[0]:long);
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
        runtime_panic(86928, 82472);
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

function strconv_divisibleByPower5(a:long, b:int):int { // func179
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

function strconv_formatDecimal(a:int_ptr, b:long, c:int, d:int, e:int) { // func180
  var g:int;
  var k:int;
  var i:long;
  var h:long;
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
      g = select_if(g, e > 19, g_b);
      if (eqz(g_b)) {
        if (g) goto B_d;
        i = ((e << 3) + 81904)[0]:long;
        g = 0;
      }
      loop L_f {
        k = select_if(k, b < i, g_b);
        if (eqz(g_b)) {
          if (eqz(k)) {
            b = b - (h = b / 10L) * 10L;
            if (b >= 6L) {
              d = 1;
              goto B_g;
            }
            if (b != 5L) {
              d = 0;
              goto B_g;
            }
            d = i32_wrap_i64(h) | c;
            goto B_g;
          }
          h = i64_extend_i32_u(d) & 1L;
          b = h + b;
          if (b >= i) {
            g = g + 1;
            b = b / 10L;
          }
          c = eqz(a);
          if (eqz(c)) {
            a[3] = e;
            c = e - 1;
            loop L_n {
              if (b >= 100L) {
                if (b <= 4294967295L) {
                  d = i32_wrap_i64(b);
                  e = d / 100;
                  b = i64_extend_i32_u(e);
                  h = i64_extend_i32_u(d - e * 100);
                  goto B_o;
                }
                h = b - (i = b / 100L) * 100L;
                b = i;
                goto B_o;
              }
              if (eqz(b)) goto B_r;
              if (a[1] <= c) goto B_d;
              (a[0] + c)[0]:byte = ((d = i32_wrap_i64(b) << 1) + 82481)[0]:ubyte;
              if (b < 10L) goto B_r;
              if (a[1] <= c - 1) goto B_d;
              (a[0] + c - 1)[0]:byte = (d + 82480)[0]:ubyte;
              label B_r:
              c = a[3] - 1;
              d = a[1];
              loop L_s {
                if (c >= d) goto B_d;
                if ((a[0] + c)[0]:ubyte == 48) {
                  a[3] = c;
                  c = c - 1;
                  g = g + 1;
                  continue L_s;
                }
              }
              a[4] = c + g + 1;
              return ;
              label B_o:
              if (a[1] <= c) goto B_d;
              (a[0] + c)[0]:byte = ((d = i32_wrap_i64(h) << 1) + 82481)[0]:ubyte;
              if (a[1] <= c - 1) goto B_d;
              (a[0] + c - 1)[0]:byte = (d + 82480)[0]:ubyte;
              c = c - 2;
              continue L_n;
            }
            unreachable;
          }
        }
        if (eqz(g_b) | eqz(j)) {
          runtime_nilPanic();
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_g:
        if (eqz(g_b)) {
          g = g + 1;
          k = b != 0L;
          c = k | c;
          b = h;
          continue L_f;
        }
      }
      label B_d:
      if (eqz(g_b) | j == 1) {
        runtime_lookupPanic();
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
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

function strconv_mult64bitPow10(a:{ a:int, b:int, c:byte }, b:int, c:int, d:int) { // func181
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
              ((d << 4) + 76344)[0]:long + i64_extend_i32_u(d >> 31));
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
        runtime_panic(86928, 82416);
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

function strconv_ryuDigits(a:{ a:int, b:int, c:int, d:int, e:int }, b:long, c:long, d:long, e:int, f:int) { // func182
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
            if (e + 1 <= 0) goto B_w;
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

function strconv_divmod1e9(a:{ a:int, b:int }, b:long) { // func183
  var d:long;
  var c:long_ptr = stack_pointer - 16;
  stack_pointer = c;
  math_bits_Mul64(c, b >> 1L, -8543223759426509416L);
  a.a = (d = c[0] >> 28L);
  a.b = d * 3294967296L + b;
  stack_pointer = c + 16;
}

function strconv_ryuDigits32(a:int_ptr, b:{ a:int, b:int }, c:int, d:int, e:int, f:int, g:{ a:int, b:int }) { // func184
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
            (a[0] + b)[0]:byte = ((d = d - c * 100 << 1) + 82481)[0]:ubyte;
            if (a[1] <= b - 1) goto B_e;
            (a[0] + b - 1)[0]:byte = (d + 82480)[0]:ubyte;
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

function strconv_appendQuotedRuneWith(a:{ a:int, b:int, c:int }, b:byte_ptr, c:int, d:int) { // func185
  var e:int;
  var i:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var h:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
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
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        e = stack_pointer + -64;
        stack_pointer = e;
        i = 90044[0]:int;
        b[0] = 39;
        e[13]:long@4 = 0L;
        e[11]:int = 3;
        e[12]:int = b;
        e[10]:int = i;
        90044[0]:int = e + 40;
        h = e + 24;
        c = 
          select_if(c, f = select_if(65533, c, c - 57344 >= 1056768), c < 55296);
      }
      if (eqz(g_b) | eqz(g)) {
        strconv_appendEscapedRune(h, b, 1, 68, c, 39, d);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e[39]:byte = 39;
        e[13]:int = (c = e[6]:int);
        d = e + 39;
        h = e[7]:int;
        f = e[8]:int;
        b = e + 8;
      }
      if (eqz(g_b) | g == 1) {
        runtime_sliceAppend(b, c, d, h, f, 1, 1);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        90044[0]:int = i;
        c = e[3]:int;
        b = e[2]:int;
        a.c = e[4]:int;
        a.a = b;
        a.b = c;
        stack_pointer = e - -64;
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

function write_1(a:int, b:int, c:int) { // func186
  var f:int;
  var g:int;
  var h:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var i:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    f = d.d;
    g = d.e;
    h = d.f;
    i = d.g;
    d = d.h;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 32;
          stack_pointer = f;
          f[7]:int = 0;
          f[5]:int = 2;
          g = 90044[0]:int;
          90044[0]:int = f + 16;
          f[4]:int = g;
          h = eqz(a);
        }
        if (eqz(g_b)) {
          if (h) goto B_e;
          f[6]:int = (h = a[0]:int);
          i = a[1]:int;
          d = a[2]:int;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_sliceAppend(f, h, b, i, d, c, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = g;
          g = f[2]:int;
          a[0]:long@4 = f[0]:long;
          a[2]:int = g;
          stack_pointer = f + 32;
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
  e.g = i;
  e.h = d;
  g_c[0]:int = g_c[0]:int + 32;
}

function writeRune(a:int, b:int) { // func187
  var d:int;
  var f:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var h:int;
  var g:int;
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    d = c.c;
    f = c.d;
    g = c.e;
    h = c.f;
    c = c.g;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 32;
          stack_pointer = d;
          d[7]:int = 0;
          d[5]:int = 2;
          f = 90044[0]:int;
          90044[0]:int = d + 16;
          d[4]:int = f;
          d[6]:int = (h = a[0]:int);
          g = a[1]:int;
          c = a[2]:int;
        }
        if (eqz(g_b) | eqz(e)) {
          unicode_utf8_AppendRune(d, h, g, c, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = f;
          f = d[2]:int;
          a[0]:long@4 = d[0]:long;
          a[2]:int = f;
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
  e.c = d;
  e.d = f;
  e.e = g;
  e.f = h;
  e.g = c;
  g_c[0]:int = g_c[0]:int + 28;
}

function writeString(a:int, b:int, c:int) { // func188
  var f:int;
  var g:int;
  var h:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var i:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    f = d.d;
    g = d.e;
    h = d.f;
    i = d.g;
    d = d.h;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 32;
          stack_pointer = f;
          f[7]:int = 0;
          f[5]:int = 2;
          g = 90044[0]:int;
          90044[0]:int = f + 16;
          f[4]:int = g;
          h = eqz(a);
        }
        if (eqz(g_b)) {
          if (h) goto B_e;
          f[6]:int = (h = a[0]:int);
          i = a[1]:int;
          d = a[2]:int;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_sliceAppend(f, h, b, i, d, c, 1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = g;
          g = f[2]:int;
          a[0]:long@4 = f[0]:long;
          a[2]:int = g;
          stack_pointer = f + 32;
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
  e.g = i;
  e.h = d;
  g_c[0]:int = g_c[0]:int + 32;
}

function fmtBx(a:int, b:int, c:int, d:{ a:int, b:int, c:int, d:int }) { // func189
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
        fmtSbx(a, 0, 0, b, c, d);
        0;
        if (g_b == 1) goto B_b;
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

function fmtSbx(a:int, b:int, c:int, d:int, e:int, f:ubyte_ptr) { // func190
  var g:int;
  var i:int;
  var h:{ a:int, b:int, c:int }
  var k:int;
  var m:int;
  var j:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int }
  var p:int;
  var q:int;
  var n:int;
  var o:int;
  var l:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int + -64;
    l = g_c[0]:int;
    a = l.a;
    b = l.b;
    c = l.c;
    d = l.d;
    e = l.e;
    f = l.f;
    g = l.g;
    h = l.h;
    i = l.i;
    k = l.j;
    m = l.k;
    n = l.l;
    o = l.m;
    p = l.n;
    q = l.o;
    l = l.p;
  }
  j = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          j = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 128;
          stack_pointer = g;
          g[21]:int = 10;
          memory_fill(g + 92, 0, 36);
          g[20]:int = (l = 90044[0]:int);
          90044[0]:int = g + 80;
          i = eqz(a);
        }
        if (eqz(g_b)) {
          if (i) goto B_f;
          i = select_if(e, c, d);
          if (a[5]:ubyte) {
            k = i > (h = a[5]:int);
            i = select_if(h, i, k);
          }
          h = i << 1;
          k = h <= 0;
        }
        if (eqz(g_b)) {
          if (eqz(k)) {
            k = a[8]:ubyte;
            if (a[9]:ubyte) {
              h = i + select_if(m = i << 2, h, k = k & 1);
              p = h - 1;
              goto B_i;
            }
            m = h + 2;
            p = select_if(m, h, k = k & 1);
            goto B_i;
          }
          if (eqz(a[4]:ubyte)) goto B_e;
          b = a[4]:int;
        }
        if (eqz(g_b) | eqz(j)) {
          writePadding(a, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_i:
        if (eqz(g_b)) { h = eqz(a[4]:ubyte) }
        if (eqz(g_b)) {
          if (h) goto B_o;
          k = p >= (h = a[4]:int);
          if (k) goto B_o;
          k = a[6]:ubyte;
          if (k) goto B_o;
          h = h - p;
        }
        if (eqz(g_b) | j == 1) {
          writePadding(a, h);
          1;
          if (g_b == 1) goto B_b;
        }
        label B_o:
        if (eqz(g_b)) {
          g[22]:int = (h = a[0]:int);
          if (eqz(h)) goto B_f;
          g[23]:int = (k = h.a);
          m = h.c;
          n = h.b;
          h = eqz(a[8]:ubyte);
        }
        if (eqz(g_b)) {
          if (h) goto B_s;
          g[78]:byte = 48;
          g[79]:byte = f[16];
          q = g + 78;
          h = g + 56;
        }
        if (eqz(g_b) | j == 2) {
          runtime_sliceAppend(h, k, q, n, m, 2, 1);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[24]:int = (k = g[14]:int);
          n = g[15]:int;
          m = g[16]:int;
        }
        label B_s:
        if (eqz(g_b)) {
          g[25]:int = k;
          q = select_if(i, 0, i > 0);
          h = 0;
        }
        loop L_x {
          if (eqz(g_b)) {
            g[26]:int = k;
            i = h == q;
          }
          if (eqz(g_b)) {
            if (i) goto B_aa;
            i = eqz(h);
          }
          if (eqz(g_b)) {
            if (i) goto B_ca;
            i = eqz(a[9]:ubyte & 1);
            if (i) goto B_ca;
            g[77]:byte = 32;
            o = g + 77;
            i = g + 40;
          }
          if (eqz(g_b) | j == 3) {
            runtime_sliceAppend(i, k, o, n, m, 1, 1);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g[27]:int = (k = g[10]:int);
            m = g[12]:int;
            n = g[11]:int;
            i = eqz(a[8]:ubyte);
            if (i) goto B_ca;
            g[75]:byte = 48;
            g[76]:byte = f[16];
            o = g + 75;
            i = g + 24;
          }
          if (eqz(g_b) | j == 4) {
            runtime_sliceAppend(i, k, o, n, m, 2, 1);
            4;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g[28]:int = (k = g[6]:int);
            n = g[7]:int;
            m = g[8]:int;
          }
          label B_ca:
          if (eqz(g_b)) {
            g[29]:int = k;
            if (d) {
              i = d;
              o = e <= h;
              if (o) goto B_ja;
              goto B_z;
            }
            i = b;
            o = c > h;
            if (o) goto B_z;
            label B_ja:
          }
          if (eqz(g_b) | j == 5) {
            runtime_lookupPanic();
            5;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { unreachable }
          label B_aa:
          if (eqz(g_b)) {
            g[31]:int = (h = a[0]:int);
            if (eqz(h)) goto B_f;
            h.c = m;
            h.b = n;
            h.a = k;
            if (eqz(a[4]:ubyte)) goto B_e;
            if (p >= (h = a[4]:int)) goto B_e;
            if (eqz(a[6]:ubyte)) goto B_e;
            b = h - p;
          }
          if (eqz(g_b) | j == 6) {
            writePadding(a, b);
            6;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_e;
          label B_z:
          if (eqz(g_b)) {
            g[74]:byte = (((i = (h + i)[0]:ubyte) & 15) + f)[0]:ubyte;
            g[73]:byte = ((i >> 4) + f)[0]:ubyte;
            o = g + 73;
            i = g + 8;
          }
          if (eqz(g_b) | j == 7) {
            runtime_sliceAppend(i, k, o, n, m, 2, 1);
            7;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g[30]:int = (k = g[2]:int);
            h = h + 1;
            m = g[4]:int;
            n = g[3]:int;
            continue L_x;
          }
        }
        label B_f:
        if (eqz(g_b) | j == 8) {
          runtime_nilPanic();
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = l;
          stack_pointer = g + 128;
        }
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
  j.j = k;
  j.k = m;
  j.l = n;
  j.m = o;
  j.n = p;
  j.o = q;
  j.p = l;
  g_c[0]:int = g_c[0]:int - -64;
}

function fmtFloat(a:int, b:double, c:int, d:int, e:int) { // func191
  var f:int;
  var j:ubyte_ptr;
  var m:int;
  var g:int;
  var i:ubyte_ptr;
  var l:long;
  var h:int;
  var o:long;
  var k:ubyte_ptr;
  var t:int;
  var s:long;
  var p:int;
  var q:int;
  var w:long;
  var r:int;
  var u:int;
  var v:int;
  var y:int;
  var aa:long;
  var x:long;
  var z:long;
  var ba:int;
  var n:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 128;
    n = g_c[0]:int;
    a = n[0]:int;
    d = n[2]:int;
    e = n[3]:int;
    f = n[4]:int;
    g = n[5]:int;
    h = n[6]:int;
    i = n[7]:int;
    j = n[8]:int;
    k = n[9]:int;
    l = n[10]:long@4;
    o = n[12]:long@4;
    p = n[14]:int;
    q = n[15]:int;
    r = n[16]:int;
    s = n[17]:long@4;
    t = n[19]:int;
    u = n[20]:int;
    w = n[21]:long@4;
    v = n[23]:int;
    x = n[24]:long@4;
    y = n[26]:int;
    z = n[27]:long@4;
    aa = n[29]:long@4;
    ba = n[31]:int;
    c = n[1]:int;
  }
  n = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        m = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = stack_pointer - 768;
        stack_pointer = f;
        f[139]:int = 51;
        memory_fill(f + 560, 0, 204);
        f[138]:int = (ba = 90044[0]:int);
        90044[0]:int = f + 552;
        j = eqz(a);
      }
      if (eqz(g_b)) {
        if (j) goto B_f;
        if (a[5]:ubyte) { e = a[5]:int }
        j = c == 64;
        if (eqz(j)) {
          j = c != 32;
          if (j) goto B_i;
          j = i32_reinterpret_f32(f32_demote_f64(b));
          l = i64_extend_i32_u(j);
          g = 87836;
          r = 1;
          goto B_e;
        }
        l = i64_reinterpret_f64(b);
        g = 87848;
        r = 0;
        goto B_e;
        label B_i:
      }
      if (eqz(g_b) | eqz(m)) {
        runtime_panic(86928, 82112);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      if (eqz(g_b) | m == 1) {
        runtime_nilPanic();
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b)) {
        p = a + 24;
        f[140]:int = g;
        s = select_if(-1L,
                      -1L << (o = i64_extend_i32_u(i = g[0]:int)) ^ -1L,
                      k = i > 63) &
            l;
        h = g[1]:int;
        j = h + i;
        t = j < 64 & l >> i64_extend_i32_u(j) != 0L;
        j = select_if(-1, q = -1 << h ^ -1, h > 31);
        h = j & (u = select_if(0, i32_wrap_i64(l = l >> o), k));
        j = h != j;
      }
      if (eqz(g_b)) {
        if (j) goto B_v;
        f[141]:int =
          (h = select_if(select_if(82123, 82127, t), 82120, g = eqz(s)));
        j = f + 88;
        c = select_if(4, 3, g);
      }
      if (eqz(g_b) | m == 2) {
        runtime_sliceAppend(j, p, h, 1, 68, c, 1);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        k = f[24]:int;
        h = f[23]:int;
        g = f[22]:int;
        goto B_u;
      }
      label B_v:
      if (eqz(g_b)) {
        l = s | (o = select_if(0L, select_if(1L << o, 0L, h), k));
        q = g[2]:int;
        k = q + select_if(1, h, h <= 1);
        h = d & 255;
        j = h == 88;
      }
      if (eqz(g_b)) {
        if (j) goto B_ca;
        j = h == 120;
        if (j) goto B_ca;
        j = h != 98;
        if (j) goto B_ba;
        h = 1;
        if (t) {
          (a + 25)[0]:byte = 45;
          90044[0]:int = f + 552;
          f[142]:int = p;
          h = 2;
        }
        f[143]:int = p;
        c = f + 320;
      }
      if (eqz(g_b) | m == 3) {
        strconv_formatBits(c, p, h, 68, l, 0);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[528]:byte = 112;
        f[145]:int = f[83]:int;
        f[144]:int = (h = f[80]:int);
        p = f + 304;
        i = f + 528;
        j = f[81]:int;
        c = f[82]:int;
      }
      if (eqz(g_b) | m == 4) {
        runtime_sliceAppend(p, h, i, j, c, 1, 1);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[146]:int = (h = f[76]:int);
        i = f[78]:int;
        g = k - g[0]:int;
        j = g < 0;
        c = f[77]:int;
      }
      if (eqz(g_b)) {
        if (j) goto B_ja;
        f[504]:byte = 43;
        p = f + 288;
        j = f + 504;
      }
      if (eqz(g_b) | m == 5) {
        runtime_sliceAppend(p, h, j, c, i, 1, 1);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[147]:int = (h = f[72]:int);
        i = f[74]:int;
        c = f[73]:int;
      }
      label B_ja:
      if (eqz(g_b)) {
        f[148]:int = h;
        p = f + 264;
        o = i64_extend_i32_s(g);
        j = g >> 31;
      }
      if (eqz(g_b) | m == 6) {
        strconv_formatBits(p, h, c, i, o, j);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[150]:int = (c = f[69]:int);
        f[149]:int = (g = f[66]:int);
        k = f[68]:int;
        h = f[67]:int;
        goto B_u;
      }
      label B_ca:
      if (eqz(g_b)) {
        h = select_if(0, k, eqz(l));
        l = select_if(l << i64_extend_i32_u(g = 60 - i), 0L, g <= 63);
        loop L_ra {
          if (eqz(eqz(l) | (l & 1152921504606846976L) != 0L)) {
            h = h - 1;
            l = l << 1L;
            continue L_ra;
          }
        }
        if (e > 14) goto B_ta;
        s = l >> (o = i64_extend_i32_u(60 - (g = e << 2)));
        l = 
          i64_extend_i32_u(
            ((s & 1L) | (l << i64_extend_i32_u(g) & 1152921504606846975L)) >
            576460752303423488L) +
          s <<
          o;
        if (eqz(l & 2305843009213693952L)) goto B_ta;
        h = h + 1;
        l = l >> 1L;
        label B_ta:
        f[151]:int = (k = select_if(82131, 82700, (d & 255) == 88));
        g = 1;
        if (t) {
          (a + 25)[0]:byte = 45;
          90044[0]:int = f + 552;
          f[152]:int = p;
          g = 2;
        }
        f[505]:byte = d;
        f[153]:int = p;
        f[504]:byte = 48;
        f[506]:byte = (i32_wrap_i64(o = l >> 60L) & 1) | 48;
        j = f + 488;
        c = f + 504;
      }
      if (eqz(g_b) | m == 7) {
        runtime_sliceAppend(j, p, c, g, 68, 3, 1);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[154]:int = (g = f[122]:int);
        l = l << 4L;
        i = f[124]:int;
        j = e >= 0;
        c = f[123]:int;
      }
      if (eqz(g_b)) {
        if (j) goto B_xa;
        j = eqz(l);
        if (j) goto B_xa;
        f[527]:byte = 46;
        p = f + 472;
        j = f + 527;
      }
      if (eqz(g_b) | m == 8) {
        runtime_sliceAppend(p, g, j, c, i, 1, 1);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[155]:int = (g = f[118]:int);
        i = f[120]:int;
        c = f[119]:int;
      }
      loop L_bb {
        if (eqz(g_b)) {
          f[156]:int = g;
          j = eqz(l);
          if (j) goto B_aa;
          f[526]:byte = (k + i32_wrap_i64(o = l >> 60L))[0]:ubyte;
          p = f + 456;
          j = f + 526;
        }
        if (eqz(g_b) | m == 9) {
          runtime_sliceAppend(p, g, j, c, i, 1, 1);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[157]:int = (g = f[114]:int);
          l = l << 4L;
          i = f[116]:int;
          c = f[115]:int;
          continue L_bb;
        }
      }
      label B_xa:
      if (eqz(g_b)) {
        j = e <= 0;
        if (j) goto B_aa;
        f[527]:byte = 46;
        p = f + 440;
        j = f + 527;
      }
      if (eqz(g_b) | m == 10) {
        runtime_sliceAppend(p, g, j, c, i, 1, 1);
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[161]:int = (g = f[110]:int);
        i = f[112]:int;
        p = e;
        c = f[111]:int;
      }
      loop L_ib {
        if (eqz(g_b)) {
          f[162]:int = g;
          j = eqz(p);
          if (j) goto B_aa;
          f[526]:byte = (k + i32_wrap_i64(o = l >> 60L))[0]:ubyte;
          q = f + 424;
          j = f + 526;
        }
        if (eqz(g_b) | m == 11) {
          runtime_sliceAppend(q, g, j, c, i, 1, 1);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[163]:int = (g = f[106]:int);
          p = p - 1;
          l = l << 4L;
          i = f[108]:int;
          c = f[107]:int;
          continue L_ib;
        }
      }
      label B_ba:
      if (eqz(g_b)) {
        (f + 520)[0]:int = 0;
        (f + 512)[0]:long = 0L;
        f[63]:long = 0L;
        j = e >= 0;
      }
      if (select_if(g_b, 1, j)) {
        if (eqz(g_b) | m == 12) {
          runtime_alloc(32);
          let t0 = 12;
          if (g_b == 1) goto B_b;
          h = t0;
        }
        if (eqz(g_b)) {
          f[127]:long@4 = 137438953504L;
          f[126]:int = h;
          f[166]:int = h;
          c = l != 0L;
          if (eqz(c)) {
            f[129]:long@4 = 0L;
            goto B_ob;
          }
          i = k - (h = g[0]:int);
          c = i > 0;
        }
        if (eqz(g_b)) {
          if (c) goto B_ub;
          c = 0 - i;
          j = c > i32_wrap_i64(o = ctz(l));
          if (j) goto B_ub;
          l = select_if(0L, o = l >> i64_extend_i32_u(c), c = c > 63);
          j = f + 504;
        }
        if (eqz(g_b) | m == 13) {
          strconv_ryuDigits(j, l, l, l, 1, 0);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_ob;
        label B_ub:
        if (eqz(g_b)) {
          o = 1L;
          c = -1;
          j = select_if(1L << i64_extend_i32_u(h), 0L, h <= 63) != l;
          if (eqz(j)) {
            c = select_if(-1, -2, g = i == g[2]:int - h + 1);
            o = select_if(1L, 2L, g);
          }
          s = l << o;
          w = s - 1L;
          o = o | s;
          g = c + i;
        }
        if (eqz(g_b)) {
          if (g) goto B_zb;
          c = f + 504;
        }
        if (eqz(g_b) | m == 14) {
          strconv_ryuDigits(c, w, s, o, 1, 0);
          14;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_ob;
        label B_zb:
        if (eqz(g_b)) {
          i = g * -78913 >> 18;
          h = i + 1;
          c = eqz(r);
        }
        if (eqz(g_b)) {
          if (c) goto B_dc;
          j = f + 152;
          c = i32_wrap_i64(w);
        }
        if (eqz(g_b) | m == 15) {
          strconv_mult64bitPow10(j, c, g, h);
          15;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = f[160]:ubyte;
          z = f[38]:uint;
          j = f + 136;
          c = i32_wrap_i64(s);
        }
        if (eqz(g_b) | m == 16) {
          strconv_mult64bitPow10(j, c, g, h);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          x = f[34]:uint;
          q = f + 120;
          j = i32_wrap_i64(o);
          c = f[144]:ubyte;
        }
        if (eqz(g_b) | m == 17) {
          strconv_mult64bitPow10(q, j, g, h);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          aa = f[30]:uint;
          j = f[128]:ubyte;
          g = f[31]:int;
          goto B_pb;
        }
        label B_dc:
        c = select_if(c, f + 200, g_b);
        if (eqz(g_b) | m == 18) {
          strconv_mult128bitPow10(c, w, g, h);
          18;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          k = f[212]:ubyte;
          z = f[25]:long;
          c = f + 184;
        }
        if (eqz(g_b) | m == 19) {
          strconv_mult128bitPow10(c, s, g, h);
          19;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          x = f[23]:long;
          j = f + 168;
          c = f[196]:ubyte;
        }
        if (eqz(g_b) | m == 20) {
          strconv_mult128bitPow10(j, o, g, h);
          20;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j = f[180]:ubyte;
          g = f[44]:int;
          aa = f[21]:long;
          goto B_pb;
        }
      }
      if (eqz(g_b)) {
        j = e;
        i = d & 255;
        h = i - 101;
      }
      if (eqz(g_b)) {
        br_table[B_wc, B_sc, B_vc, ..B_xc](h)
        label B_xc:
        h = 1;
        j = e;
        i = i - 69;
        br_table[B_wc, B_uc, B_vc, ..B_uc](i);
        label B_wc:
        h = e + 1;
        j = e;
        goto B_uc;
        label B_vc:
        j = select_if(1, e, e <= 1);
        h = j;
        label B_uc:
      }
      if (eqz(g_b) | m == 21) {
        runtime_alloc(24);
        let t1 = 21;
        if (g_b == 1) goto B_b;
        i = t1;
      }
      if (eqz(g_b)) {
        f[171]:int = i;
        c = c != 32;
      }
      g = 
        {
          g = 
            {
              if (eqz(g_b)) {
                if (c) goto B_kd;
                c = h > 9;
                if (c) goto B_kd;
                f[127]:long@4 = 103079215128L;
                f[126]:int = i;
                c = h < 0;
                if (c) goto B_jd;
                c = h >= 10;
                if (c) goto B_id;
                i = i32_wrap_i64(l);
                if (eqz(i)) {
                  f[129]:int = 0;
                  0;
                  goto B_ad;
                }
                c = clz(i) - 7;
                q = c > 25;
                r = i << (c = select_if(0, c, q));
                u = f + 216;
                g = h + (i = (c = k - g[0]:int + c) * -78913 - 1893913 >> 18);
              }
              if (eqz(g_b) | m == 22) {
                strconv_mult64bitPow10(u, r, c, g);
                22;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                i = f[55]:int;
                c = i >= 0;
                if (c) goto B_hd;
                c = f[224]:ubyte;
                k = f[54]:int;
                if (g < -10) {
                  u = g < 28;
                  goto B_pd;
                }
                o = i64_extend_i32_u(r);
                r = strconv_divisibleByPower5(o, 0 - g);
                u = r | g < 28;
                c = c | r;
                label B_pd:
                y = select_if(0, k >> (r = 0 - i), v = r > 31);
                k = k & select_if(-1, -1 << r ^ -1, v);
                v = i ^ -1;
                r = 1;
                q = eqz(u & 1);
                if (q) goto B_gd;
                q = k > (i = select_if(1 << v, 0, i >= -32));
                if (q) goto B_bd;
                i = i != k;
                q = eqz((i | c) & 1);
                if (q) goto B_bd;
                r = 0;
                if (i) goto B_bd;
                i = (c ^ 1) & 1;
                if (i) goto B_bd;
                r = y & 1;
                goto B_bd;
              }
              label B_kd:
              if (eqz(g_b)) {
                c = h > 18;
                if (c) goto B_sc;
                f[127]:long@4 = 103079215128L;
                f[126]:int = i;
                c = l != 0L;
                if (eqz(c)) {
                  f[129]:int = 0;
                  0;
                  goto B_cd;
                }
                g = k - g[0]:int;
                if (l <= 18014398509481983L) {
                  g = g - i32_wrap_i64(o = clz(l)) + 9;
                  l = l << (o = o + 4294967287L & 4294967295L);
                }
                q = f + 232;
                i = h + (c = g * -78913 - 4261303 >> 18);
              }
              if (eqz(g_b) | m == 23) {
                strconv_mult128bitPow10(q, l, g, i);
                23;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) {
                g = f[60]:int;
                c = g >= 0;
                if (c) goto B_fd;
                c = f[244]:ubyte;
                o = f[29]:long;
                if (i < -22) {
                  r = i < 56;
                  goto B_wd;
                }
                r = strconv_divisibleByPower5(l, 0 - i);
                c = r | c;
                label B_wd:
                s = select_if(0L, o >> (l = i64_extend_i32_u(k = 0 - g)), k = k > 63);
                l = o & select_if(-1L, -1L << l ^ -1L, k);
                k = 1;
                o = i64_extend_i32_u(g ^ -1);
                q = eqz(r & 1);
                if (q) goto B_ed;
                o = select_if(1L << o, 0L, g >= -64);
                g = o < l;
                if (g) goto B_dd;
                g = l != o;
                q = eqz((g | c) & 1);
                if (q) goto B_dd;
                k = 0;
                if (g) goto B_dd;
                g = (c ^ 1) & 1;
                if (g) goto B_dd;
                g = i32_wrap_i64(s);
                k = g & 1;
                goto B_dd;
              }
              label B_jd:
              if (eqz(g_b) | m == 24) {
                runtime_panic(86928, 82192);
                24;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_id:
              if (eqz(g_b) | m == 25) {
                runtime_panic(86928, 82240);
                25;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_hd:
              if (eqz(g_b) | m == 26) {
                runtime_panic(86928, 82296);
                26;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_gd:
              if (eqz(g_b)) {
                q = i > -33;
                r = q & (i = k >> v == 1);
                goto B_bd;
              }
              label B_fd:
              if (eqz(g_b) | m == 27) {
                runtime_panic(86928, 82360);
                27;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_ed:
              if (eqz(g_b)) {
                q = g > -65;
                k = q & (g = (o = l >> o) == 1L);
              }
              label B_dd:
              if (eqz(g_b)) {
                q = f + 504;
                g = l != 0L;
                c = g | (c ^ 1);
              }
              if (eqz(g_b) | m == 28) {
                strconv_formatDecimal(q, s, c, k, h);
                28;
                if (g_b == 1) goto B_b;
              }
              if (g_b) {
                g
              } else {
                c = f[130]:int;
                c - i;
              }
              label B_cd:
            }
          if (eqz(g_b)) {
            f[130]:int = g;
            goto B_nb;
          }
          label B_bd:
          if (eqz(g_b)) {
            q = f + 504;
            o = i64_extend_i32_u(y);
            i = k != 0;
            c = i | (c ^ 1);
          }
          if (eqz(g_b) | m == 29) {
            strconv_formatDecimal(q, o, c, r, h);
            29;
            if (g_b == 1) goto B_b;
          }
          if (g_b) {
            g
          } else {
            c = f[130]:int;
            c - g;
          }
          label B_ad:
        }
      if (eqz(g_b)) {
        f[130]:int = g;
        goto B_nb;
      }
      label B_sc:
      if (eqz(g_b) | m == 30) {
        runtime_alloc(812);
        let t2 = 30;
        if (g_b == 1) goto B_b;
        c = t2;
      }
      if (eqz(g_b)) {
        f[168]:int = c;
        f[169]:int = c;
        (f + 544)[0]:long = 0L;
        (f + 536)[0]:long = 0L;
        f[66]:long = 0L;
        h = 0;
        loop L_se {
          if (l != 0L) {
            i = h == 24;
            if (i) goto B_t;
            (h + f + 528)[0]:byte = i32_wrap_i64((o = l / 10L) * 246L + l) + 48;
            h = h + 1;
            l = o;
            continue L_se;
          }
        }
        i = h - 1;
        h = 0;
        loop L_ue {
          c[200]:int = h;
          q = i == -1;
          if (q) goto B_ve;
          if (h > 799) goto B_t;
          (c + h)[0]:byte = (f + 528 + i)[0]:ubyte;
          i = i - 1;
          h = c[200]:int + 1;
          continue L_ue;
          label B_ve:
        }
        c[201]:int = h;
      }
      if (eqz(g_b) | m == 31) {
        strconv_trim(c);
        31;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { i = eqz(c[200]:int) }
      if (eqz(g_b)) {
        if (i) goto B_ye;
        g = k - g[0]:int;
        i = g <= 0;
      }
      if (select_if(g_b, 1, i)) {
        loop L_bf {
          if (eqz(g_b)) {
            i = g < 29;
            if (i) goto B_cf;
          }
          if (eqz(g_b) | m == 32) {
            strconv_leftShift(c, 28);
            32;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = g - 28;
            continue L_bf;
          }
          label B_cf:
        }
        if (eqz(g_b) | m == 33) {
          strconv_leftShift(c, g);
          33;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_ye;
      }
      if (eqz(g_b)) {
        i = g >= 0;
        if (i) goto B_ye;
      }
      loop L_if {
        if (eqz(g_b)) {
          i = g > -29;
          if (i) goto B_jf;
        }
        if (eqz(g_b) | m == 34) {
          strconv_rightShift(c, 28);
          34;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = g + 28;
          continue L_if;
        }
        label B_jf:
      }
      i = select_if(i, 0 - g, g_b);
      if (eqz(g_b) | m == 35) {
        strconv_rightShift(c, i);
        35;
        if (g_b == 1) goto B_b;
      }
      label B_ye:
      if (eqz(g_b)) {
        g = d & 255;
        i = g - 101;
      }
      if (eqz(g_b)) {
        br_table[B_uf, B_tf, B_sf, ..B_vf](i)
        label B_vf:
        i = g - 69;
        br_table[B_uf, B_pf, B_sf, ..B_pf](i);
        label B_uf:
        g = j + 1;
        goto B_rf;
        label B_tf:
        g = c[201]:int + j;
        goto B_rf;
        label B_sf:
        g = select_if(1, j, j <= 1);
        j = g;
        label B_rf:
        i = g < 0;
        if (i) goto B_pf;
        h = c[200]:int;
        i = h <= g;
        if (i) goto B_pf;
        i = g > 799;
        if (i) goto B_t;
        k = c + g;
        i = k[0];
        q = i != 53;
      }
      if (eqz(g_b)) {
        if (q) goto B_zf;
        q = g + 1;
        h = q != h;
        if (h) goto B_zf;
        i = c[809]:ubyte;
        if (i) goto B_wf;
        i = eqz(g);
        if (i) goto B_yf;
        i = eqz((k - 1)[0]:ubyte & 1);
        if (i) goto B_yf;
        goto B_wf;
        label B_zf:
        i = i > 52;
        if (i) goto B_wf;
        label B_yf:
        c[200]:int = g;
      }
      if (eqz(g_b) | m == 36) {
        strconv_trim(c);
        36;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_pf;
      label B_wf:
      if (eqz(g_b)) {
        loop L_dg {
          if (eqz(g)) goto B_cg;
          g = g - 1;
          h = g + c;
          i = h[0]:ubyte;
          q = i > 56;
          if (q) continue L_dg;
        }
        h[0]:byte = i + 1;
        c[200]:int = (i = g + 1);
        goto B_pf;
        label B_cg:
        c[200]:int = 1;
        c[0]:byte = 49;
        c[201]:int = (i = c[201]:int + 1);
      }
      label B_pf:
      if (eqz(g_b)) {
        h = c[200]:int;
        i = c[201]:int;
        g = f + 248;
      }
      if (eqz(g_b) | m == 37) {
        strconv_formatDigits(g, p, 0, t, c, 800, 800, h, i, j, d);
        37;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[170]:int = (g = f[62]:int);
        k = f[64]:int;
        h = f[63]:int;
        goto B_u;
      }
      label B_pb:
      q = select_if(q, g >= 0, g_b);
      if (eqz(q | g_b)) {
        q = i + 25 <= 23;
        if (eqz(q)) {
          i = i < 55;
          j = i & j;
          c = c & i;
          r = i & k;
          goto B_jg;
        }
        r = strconv_divisibleByPower5(w, i = i ^ -1) | k;
        q = strconv_divisibleByPower5(s, i);
        c = q | c;
        j = strconv_divisibleByPower5(o, i) | j;
        label B_jg:
        let t3, t4 = 
          select_if(0L, aa >> (o = i64_extend_i32_u(i = 0 - g)), i = i > 63),
          (j = j ^ 1) |
          (y = (aa & (s = select_if(-1L, -1L << o ^ -1L, i))) != 0L);
        w = select_if(0L, w = x >> o, i);
        aa = select_if(0L, z >> o, i);
        o = s & x;
        s = s & z;
        z = 
          t3 -
          (i64_extend_i32_u((k = select_if(t4, eqz(l & 1L), (j & 1) | y)) ^ -1) &
           1L);
        x = i64_extend_i32_u(g ^ -1);
        if (c & 1) {
          i = 1;
          x = select_if(1L << x, 0L, g >= -64);
          j = x < o;
          if (j) goto B_hg;
          j = i32_wrap_i64(w);
          i = j & o == x;
          goto B_hg;
        }
        j = o >> x == 1L;
        i = j & g > -65;
        goto B_hg;
      }
      if (eqz(g_b) | m == 38) {
        runtime_panic(86928, 82360);
        38;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_hg:
      if (eqz(g_b)) {
        g = f + 504;
        l = aa + select_if(select_if(l & 1L, 1L, eqz(s)), 1L, r & 1);
        j = eqz(o);
        c = j & c;
      }
      if (eqz(g_b) | m == 39) {
        strconv_ryuDigits(g, l, w, z, c, i);
        39;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { f[130]:int = (c = f[130]:int - h) }
      label B_ob:
      if (eqz(g_b)) {
        g = d & 255;
        c = g - 101;
        br_table[B_ug, B_tg, B_sg, ..B_vg](c);
        label B_vg:
        j = e;
        c = g - 69;
        br_table[B_ug, B_nb, B_sg, ..B_nb](c);
        label B_ug:
        g = f[129]:int - 1;
        c = g > 0;
        j = select_if(g, 0, c);
        goto B_nb;
        label B_tg:
        g = f[129]:int - f[130]:int;
        c = g > 0;
        j = select_if(g, 0, c);
        goto B_nb;
        label B_sg:
        j = f[129]:int;
      }
      label B_nb:
      if (eqz(g_b)) {
        f[167]:int = (g = f[126]:int);
        v = f + 104;
        u = e >> 31;
        q = f[127]:int;
        h = f[128]:int;
        i = f[129]:int;
        c = f[130]:int;
      }
      if (eqz(g_b) | m == 40) {
        strconv_formatDigits(v, p, u, t, g, q, h, i, c, j, d);
        40;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        k = f[28]:int;
        h = f[27]:int;
        g = f[26]:int;
        goto B_u;
      }
      label B_aa:
      if (eqz(g_b)) {
        f[158]:int = g;
        f[525]:byte = (d & 32) | 80;
        p = f + 408;
        j = f + 525;
      }
      if (eqz(g_b) | m == 41) {
        runtime_sliceAppend(p, g, j, c, i, 1, 1);
        41;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[524]:byte = select_if(45, 43, h < 0);
        f[159]:int = (g = f[102]:int);
        p = f + 392;
        i = f + 524;
        j = f[103]:int;
        c = f[104]:int;
      }
      if (eqz(g_b) | m == 42) {
        runtime_sliceAppend(p, g, i, j, c, 1, 1);
        42;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[160]:int = (i = f[98]:int);
        p = f[99]:int;
        g = (h ^ (g = h >> 31)) - g;
        j = g > 99;
        c = f[100]:int;
      }
      h = {
            if (eqz(g_b)) {
              if (j) goto B_fh;
              f[528]:byte = (h = g / 10) + 48;
              f[529]:byte = g - h * 10 + 48;
              j = f + 528;
              h = f + 344;
            }
            if (eqz(g_b) | m == 43) {
              runtime_sliceAppend(h, i, j, p, c, 2, 1);
              43;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              k = f[88]:int;
              g = f[86]:int;
              f[87]:int;
              goto B_eh;
            }
            label B_fh:
            j = select_if(j, g > 999, g_b);
            if (eqz(g_b)) {
              if (j) goto B_jh;
              f[528]:byte = (h = g & 65535) / 100 | 48;
              f[530]:byte = g - (h = h / 10) * 10 | 48;
              f[529]:byte = (h & 255) % 10 | 48;
              j = f + 528;
              h = f + 360;
            }
            if (eqz(g_b) | m == 44) {
              runtime_sliceAppend(h, i, j, p, c, 3, 1);
              44;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              k = f[92]:int;
              g = f[90]:int;
              f[91]:int;
              goto B_eh;
            }
            label B_jh:
            if (eqz(g_b)) {
              f[528]:byte = g / 1000 + 48;
              f[530]:byte = (h = g / 10) % 10 | 48;
              f[531]:byte = g - h * 10 | 48;
              f[529]:byte = (g / 100 & 255) % 10 | 48;
              j = f + 528;
              h = f + 376;
            }
            if (eqz(g_b) | m == 45) {
              runtime_sliceAppend(h, i, j, p, c, 4, 1);
              45;
              if (g_b == 1) goto B_b;
            }
            if (g_b) {
              h
            } else {
              k = f[96]:int;
              g = f[94]:int;
              f[95]:int;
            }
            label B_eh:
          }
      if (eqz(g_b)) {
        f[164]:int = g;
        f[165]:int = g;
      }
      label B_u:
      if (eqz(g_b)) {
        f[172]:int = g;
        f[174]:int = g;
        f[173]:int = g;
        c = h < 2;
        if (c) goto B_t;
        br_table[B_uh, B_th, B_uh, ..B_th](g[1]:ubyte - 43)
        label B_uh:
        c = k <= (h = h - 1);
        if (c) goto B_s;
        g = g + 1;
        k = k - 1;
        goto B_sh;
        label B_th:
        g[0]:byte = 43;
        label B_sh:
        f[175]:int = g;
        if (eqz(a[9]:ubyte)) goto B_vh;
        c = eqz(h);
        if (c) goto B_t;
        if (g[0]:ubyte != 43) goto B_vh;
        if (a[7]:ubyte) goto B_vh;
        g[0]:byte = 32;
        label B_vh:
        c = h < 2;
        if (c) goto B_t;
        i = g[1]:ubyte;
        if (eqz(i != 78 & i != 73)) {
          c = a[10]:ubyte;
          a[10]:byte = 0;
          i = g + 1;
          if (i[0] != 78) goto B_r;
          if (a[9]:ubyte) goto B_r;
          if (a[7]:ubyte) goto B_r;
          if (k <= (h = h - 1)) goto B_s;
          k = k - 1;
          goto B_q;
        }
        c = eqz(a[8]:ubyte);
      }
      if (eqz(g_b)) {
        if (c) goto B_xh;
        c = d == 98;
        if (c) goto B_xh;
        t = 0;
        c = 0;
        j = d - 118;
        br_table[B_ai, B_zh, B_ai, ..B_bi](j);
        label B_bi:
        if (d == 103) goto B_ai;
        j = d != 71;
        if (j) goto B_zh;
        label B_ai:
        c = select_if(6, e, e == -1);
        label B_zh:
        r = 6;
      }
      if (eqz(g_b) | m == 46) {
        runtime_alloc(6);
        let t5 = 46;
        if (g_b == 1) goto B_b;
        e = t5;
      }
      if (eqz(g_b)) {
        f[177]:int = e;
        u = (d | 32) == 120;
        v = 0;
        y = 0;
        i = 1;
        d = -1;
      }
      loop L_ei {
        if (eqz(g_b)) {
          f[179]:int = g;
          f[178]:int = e;
          j = h <= i;
        }
        if (eqz(g_b)) {
          if (j) goto B_hi;
          if (h <= i) goto B_t;
          j = g + i;
          p = j[0];
          q = p == 112;
        }
        if (eqz(g_b)) {
          if (q) goto B_mi;
          q = p == 69;
          if (q) goto B_ki;
          q = p == 80;
          if (q) goto B_mi;
          q = p == 101;
          if (q) goto B_ki;
          j = p != 46;
          if (j) goto B_ji;
          v = 1;
          goto B_gi;
          label B_mi:
          if (h > k) goto B_s;
          p = f + 8;
          h = d + h;
        }
        if (eqz(g_b) | m == 47) {
          runtime_sliceAppend(p, e, j, t, r, h, 1);
          47;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[182]:int = (e = f[2]:int);
          r = f[4]:int;
          t = f[3]:int;
          h = i;
          goto B_gi;
        }
        label B_ki:
        if (eqz(g_b)) {
          if (u) goto B_ji;
          if (h > k) goto B_s;
          p = f + 24;
          h = d + h;
        }
        if (eqz(g_b) | m == 48) {
          runtime_sliceAppend(p, e, j, t, r, h, 1);
          48;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[183]:int = (e = f[6]:int);
          r = f[8]:int;
          t = f[7]:int;
          h = i;
          goto B_gi;
        }
        label B_ji:
        if (eqz(g_b)) {
          c = c - (j = (y = y | p != 48) & 1);
          goto B_gi;
        }
        label B_hi:
        d = select_if(d, v & 1, g_b);
        if (eqz(g_b)) {
          if (d) goto B_ti;
          if (h == 2) { c = c - (g[1]:ubyte == 48) }
          f[502]:byte = 46;
          j = f + 72;
          d = f + 502;
        }
        if (eqz(g_b) | m == 49) {
          runtime_sliceAppend(j, g, d, h, k, 1, 1);
          49;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[187]:int = (g = f[18]:int);
          k = f[20]:int;
          h = f[19]:int;
        }
        label B_ti:
        loop L_yi {
          if (eqz(g_b)) {
            f[184]:int = g;
            d = c <= 0;
            if (d) goto B_zi;
            f[503]:byte = 48;
            j = f + 40;
            d = f + 503;
          }
          if (eqz(g_b) | m == 50) {
            runtime_sliceAppend(j, g, d, h, k, 1, 1);
            50;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            f[185]:int = (g = f[10]:int);
            c = c - 1;
            k = f[12]:int;
            h = f[11]:int;
            continue L_yi;
          }
          label B_zi:
        }
        c = select_if(c, f + 56, g_b);
        if (eqz(g_b) | m == 51) {
          runtime_sliceAppend(c, g, e, h, k, t, 1);
          51;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[186]:int = (g = f[14]:int);
          k = f[16]:int;
          h = f[15]:int;
          goto B_xh;
        }
        label B_gi:
        if (eqz(g_b)) {
          f[181]:int = g;
          f[180]:int = e;
          d = d - 1;
          i = i + 1;
          continue L_ei;
        }
      }
      label B_xh:
      if (eqz(g_b)) {
        f[188]:int = g;
        c = a[7]:ubyte;
      }
      if (eqz(g_b)) {
        if (c) goto B_hj;
        c = eqz(h);
        if (c) goto B_t;
        c = g[0]:ubyte != 43;
        if (c) goto B_hj;
        c = k <= (h = h - 1);
        if (c) goto B_s;
        d = g + 1;
        c = k - 1;
      }
      if (eqz(g_b) | m == 52) {
        pad(a, d, h, c);
        52;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_p;
      label B_hj:
      if (eqz(g_b)) { c = eqz(a[10]:ubyte) }
      if (eqz(g_b)) {
        if (c) goto B_lj;
        c = a[6]:ubyte;
        if (c) goto B_lj;
        c = eqz(a[4]:ubyte);
        if (c) goto B_lj;
        c = h >= a[4]:int;
        if (c) goto B_lj;
        f[189]:int = (i = a[0]:int);
        c = eqz(h);
        if (c) goto B_t;
        c = g[0]:ubyte;
      }
      if (eqz(g_b) | m == 53) {
        writeByte(i, c);
        53;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { c = a[4]:int - h }
      if (eqz(g_b) | m == 54) {
        writePadding(a, c);
        54;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f[190]:int = (i = a[0]:int);
        a = k <= (h = h - 1);
        if (a) goto B_s;
        a = g + 1;
      }
      if (eqz(g_b) | m == 55) {
        write_1(i, a, h);
        55;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_p;
      label B_lj:
      if (eqz(g_b) | m == 56) {
        pad(a, g, h, k);
        56;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_p;
      label B_t:
      if (eqz(g_b) | m == 57) {
        runtime_lookupPanic();
        57;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_s:
      if (eqz(g_b) | m == 58) {
        runtime_slicePanic();
        58;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_r:
      i = select_if(i, g, g_b);
      label B_q:
      if (eqz(g_b)) { f[176]:int = i }
      if (eqz(g_b) | m == 59) {
        pad(a, i, h, k);
        59;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { a[10]:byte = c & 1 }
      label B_p:
      if (eqz(g_b)) {
        90044[0]:int = ba;
        stack_pointer = f + 768;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = n;
  g_c[0]:int = g_c[0]:int + 4;
  n = g_c[0]:int;
  n[0]:int = a;
  n[1]:int = c;
  n[2]:int = d;
  n[3]:int = e;
  n[4]:int = f;
  n[5]:int = g;
  n[6]:int = h;
  n[7]:int = i;
  n[8]:int = j;
  n[9]:int = k;
  n[10]:long@4 = l;
  n[12]:long@4 = o;
  n[14]:int = p;
  n[15]:int = q;
  n[16]:int = r;
  n[17]:long@4 = s;
  n[19]:int = t;
  n[20]:int = u;
  n[21]:long@4 = w;
  n[23]:int = v;
  n[24]:long@4 = x;
  n[26]:int = y;
  n[27]:long@4 = z;
  n[29]:long@4 = aa;
  n[31]:int = ba;
  g_c[0]:int = g_c[0]:int + 128;
}

function pad(a:int, b:int, c:int, d:int) { // func192
  var g:int;
  var k:int;
  var e:int;
  var l:int;
  var j:byte_ptr;
  var i:int;
  var h:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    f = g_c[0]:int;
    a = f.a;
    c = f.c;
    d = f.d;
    e = f.e;
    g = f.f;
    i = f.g;
    j = f.h;
    k = f.i;
    l = f.j;
    b = f.b;
  }
  f = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = stack_pointer - 32;
          stack_pointer = g;
          (g + 24)[0]:long = 0L;
          g[2]:long = 0L;
          g[3]:int = 4;
          k = 90044[0]:int;
          90044[0]:int = g + 8;
          g[2]:int = k;
          e = eqz(a);
        }
        if (eqz(g_b)) {
          if (e) goto B_f;
          e = eqz(a[4]:ubyte);
        }
        if (eqz(g_b)) {
          if (e) goto B_h;
          l = a[4]:int;
          e = eqz(l);
          if (e) goto B_h;
          i = select_if(c, 0, c > 0);
          e = 0;
        }
        loop L_l {
          j = select_if(j, e == i, g_b);
          if (eqz(g_b)) {
            if (j) goto B_o;
            if (c == e) goto B_m;
            j = b + e;
            if (j[0] >= 0) goto B_n;
            if (c > d) goto B_k;
            d = c - e;
          }
          if (eqz(g_b) | eqz(h)) {
            runtime_stringFromBytes(g, j, d);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g[4]:int = (i = g[0]:int);
            d = g[1]:int;
          }
          if (eqz(g_b) | h == 1) {
            unicode_utf8_RuneCountInString(i, d);
            let t0 = 1;
            if (g_b == 1) goto B_b;
            d = t0;
          }
          i = select_if(i, d + e, g_b);
          label B_o:
          if (eqz(g_b)) {
            e = l - i;
            d = eqz(a[6]:ubyte);
            if (d) goto B_j;
            g[5]:int = (i = a[0]:int);
          }
          if (eqz(g_b) | h == 2) {
            write_1(i, b, c);
            2;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | h == 3) {
            writePadding(a, e);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_e;
          label B_n:
          if (eqz(g_b)) {
            e = e + 1;
            continue L_l;
          }
          label B_m:
        }
        if (eqz(g_b) | h == 4) {
          runtime_lookupPanic();
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_k:
        if (eqz(g_b) | h == 5) {
          runtime_slicePanic();
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_j:
        if (eqz(g_b) | h == 6) {
          writePadding(a, e);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { g[6]:int = (e = a[0]:int) }
        if (eqz(g_b) | h == 7) {
          write_1(e, b, c);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_h:
        if (eqz(g_b)) { g[7]:int = (e = a[0]:int) }
        if (eqz(g_b) | h == 8) {
          write_1(e, b, c);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_f:
        if (eqz(g_b) | h == 9) {
          runtime_nilPanic();
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = k;
          stack_pointer = g + 32;
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
  f.g = i;
  f.h = j;
  f.i = k;
  f.j = l;
  g_c[0]:int = g_c[0]:int + 40;
}

function writePadding(a:int, b:{ a:int, b:int, c:int }) { // func193
  var d:int;
  var j:int;
  var c:int;
  var f:int;
  var k:int;
  var g:int;
  var i:int;
  var h:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    e = g_c[0]:int;
    a = e.a;
    b = e.b;
    d = e.c;
    f = e.d;
    g = e.e;
    h = e.f;
    j = e.g;
    e = e.h;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          k = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 48;
          stack_pointer = d;
          (d + 28)[0]:long@4 = 0L;
          (d + 36)[0]:long@4 = 0L;
          d[5]:long@4 = 0L;
          d[3]:int = 7;
          j = 90044[0]:int;
          90044[0]:int = d + 8;
          d[2]:int = j;
          c = b <= 0;
        }
        if (eqz(g_b)) {
          if (c) goto B_g;
          d[4]:int = (c = a[0]:int);
          if (eqz(c)) goto B_e;
          d[5]:int = (g = c[0]:int);
          f = c[2]:int;
          c = f >= (h = (e = c[1]:int) + b);
        }
        if (eqz(g_b)) {
          if (c) goto B_i;
          f = (f << 1) + b;
          if (f < 0) goto B_f;
        }
        if (eqz(g_b) | eqz(k)) {
          runtime_alloc(f);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          g = t0;
        }
        if (eqz(g_b)) {
          d[6]:int = g;
          d[7]:int = (c = a[0]:int);
          if (eqz(c)) goto B_e;
          d[8]:int = (i = c[0]:int);
          memory_copy(g, i, select_if(c = c[1]:int, f, c < f));
        }
        label B_i:
        if (eqz(g_b)) {
          d[9]:int = g;
          i = 32;
          if (a[10]:ubyte) { i = select_if(32, 48, a[6]:ubyte) }
          if (f < h | e > h) goto B_f;
          c = e + g;
          loop L_o {
            if (b) {
              c[0]:byte = i;
              c = c + 1;
              b = b - 1;
              continue L_o;
            }
          }
          d[10]:int = (b = a[0]:int);
          if (eqz(b)) goto B_e;
          b.c = f;
          b.b = h;
          b.a = g;
        }
        label B_g:
        if (eqz(g_b)) {
          90044[0]:int = j;
          stack_pointer = d + 48;
          return ;
        }
        label B_f:
        if (eqz(g_b) | k == 1) {
          runtime_slicePanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b) | k == 2) {
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
  c[2]:int = d;
  c[3]:int = f;
  c[4]:int = g;
  c[5]:int = h;
  c[6]:int = j;
  c[7]:int = e;
  g_c[0]:int = g_c[0]:int + 32;
}

function fmtInteger(a:int, b:long, c:int, d:int, e:int, f:ubyte_ptr) { // func194
  var l:int;
  var p:int;
  var h:int;
  var m:int;
  var i:int;
  var j:int;
  var n:long;
  var o:int;
  var k:int;
  var g:int;
  var q:byte_ptr;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int + -64;
    g = g_c[0]:int;
    a = g[0]:int;
    c = g[3]:int;
    d = g[4]:int;
    e = g[5]:int;
    f = g[6]:int;
    h = g[7]:int;
    i = g[8]:int;
    j = g[9]:int;
    k = g[10]:int;
    l = g[11]:int;
    n = g[12]:long@4;
    o = g[14]:int;
    p = g[15]:int;
    b = g[1]:long@4;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        m = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        l = stack_pointer - 16;
        stack_pointer = l;
        l[1]:long@4 = 2L;
        p = 90044[0]:int;
        90044[0]:int = l;
        l[0]:int = p;
        h = eqz(a);
      }
      if (eqz(g_b | h)) {
        n = 0L - b;
        h = b < 0L;
        o = h & d;
        j = a + 24;
        d = a[4]:ubyte;
        if (d) goto B_h;
        d = a[5]:ubyte;
        if (d) goto B_h;
        goto B_g;
      }
      if (eqz(g_b) | eqz(m)) {
        runtime_nilPanic();
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_h:
      if (eqz(g_b)) {
        h = a[5]:int;
        i = h + a[4]:int + 3;
        d = i >= 69;
        if (d) goto B_f;
      }
      label B_g:
      if (eqz(g_b)) {
        i = 68;
        goto B_e;
      }
      label B_f:
      if (eqz(g_b) | m == 1) {
        runtime_alloc(i);
        let t0 = 1;
        if (g_b == 1) goto B_b;
        j = t0;
      }
      if (eqz(g_b)) { l[2]:int = j }
      label B_e:
      if (eqz(g_b)) {
        l[3]:int = j;
        d = eqz(a[5]:ubyte);
        b = select_if(n, b, o);
      }
      if (eqz(g_b)) {
        if (d) goto B_s;
        k = a[5]:int;
        if (k) goto B_r;
        k = 0;
        d = b != 0L;
        if (d) goto B_r;
        d = a[10]:ubyte;
        a[10]:byte = 0;
        c = a[4]:int;
      }
      if (eqz(g_b) | m == 2) {
        writePadding(a, c);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a[10]:byte = d & 1;
        goto B_q;
      }
      label B_s:
      if (eqz(g_b)) {
        k = 0;
        d = eqz(a[10]:ubyte);
        if (d) goto B_r;
        d = a[6]:ubyte;
        if (d) goto B_r;
        d = eqz(a[4]:ubyte);
        if (d) goto B_r;
        k = a[4]:int;
        if (o) goto B_x;
        d = a[7]:ubyte;
        if (d) goto B_x;
        d = eqz(a[9]:ubyte);
        if (d) goto B_r;
        label B_x:
        k = k - 1;
      }
      label B_r:
      d = select_if(d, c - 2 << 31, g_b);
      if (eqz(g_b)) {
        br_table[B_da, B_fa, B_fa, B_ca, B_aa, B_fa, B_fa, B_ba, ..B_fa](d)
        label B_fa:
      }
      if (eqz(g_b) | m == 3) {
        runtime_panic(86928, 86448);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_da:
      if (eqz(g_b)) {
        g = j - 1;
        h = i;
        loop L_ja {
          d = b < 2L;
          if (d) goto B_z;
          if (i <= (d = h - 1)) goto B_y;
          (g + h)[0]:byte = (i32_wrap_i64(b) & 1) | 48;
          b = b >> 1L;
          h = d;
          continue L_ja;
        }
        unreachable;
      }
      label B_ca:
      if (eqz(g_b)) {
        g = j - 1;
        h = i;
        loop L_la {
          d = b < 8L;
          if (d) goto B_z;
          if (i <= (d = h - 1)) goto B_y;
          (g + h)[0]:byte = (i32_wrap_i64(b) & 7) | 48;
          b = b >> 3L;
          h = d;
          continue L_la;
        }
        unreachable;
      }
      label B_ba:
      if (eqz(g_b)) {
        g = j - 1;
        h = i;
        loop L_na {
          d = b < 16L;
          if (d) goto B_z;
          if (i <= (d = h - 1)) goto B_y;
          (g + h)[0]:byte = ((i32_wrap_i64(b) & 15) + f)[0]:ubyte;
          b = b >> 4L;
          h = d;
          continue L_na;
        }
        unreachable;
      }
      label B_aa:
      if (eqz(g_b)) {
        g = j - 1;
        h = i;
        loop L_pa {
          d = b < 10L;
          if (d) goto B_z;
          if (i <= (d = h - 1)) goto B_y;
          (g + h)[0]:byte = (n = b / 10L) * 246L + b + 48L;
          b = n;
          h = d;
          continue L_pa;
        }
        unreachable;
      }
      label B_z:
      if (eqz(g_b)) {
        if (i <= (d = h - 1)) goto B_y;
        h = i - h + 1;
        g = (i32_wrap_i64(b) + f)[0]:ubyte;
        loop L_sa {
          q = d + j;
          q[0] = g;
          if (d <= 0 | h >= k) goto B_ra;
          h = h + 1;
          g = 48;
          if (i > (d = d - 1)) continue L_sa;
        }
        goto B_y;
        label B_ra:
        if (eqz(a[8]:ubyte)) goto B_ta;
        if (c != 2) {
          if (c == 8) goto B_va;
          if (c != 16) goto B_ta;
          if (i <= d - 1) goto B_y;
          (q - 1)[0]:byte = f[16];
          if (i <= (d = d - 2)) goto B_y;
          goto B_ua;
        }
        if (i <= d - 1) goto B_y;
        (q - 1)[0]:byte = 98;
        if (i <= (d = d - 2)) goto B_y;
        goto B_ua;
        label B_va:
        if ((g & 255) == 48) goto B_ta;
        if (i <= (d = d - 1)) goto B_y;
        label B_ua:
        (d + j)[0]:byte = 48;
        label B_ta:
        if (e == 79) {
          if (i <= (h = d - 1)) goto B_y;
          (h + j)[0]:byte = 111;
          if (i <= (d = d - 2)) goto B_y;
          (d + j)[0]:byte = 48;
        }
        h = {
              if (o) {
                if (i <= (d = d - 1)) goto B_y;
                45;
                goto B_za;
              }
              if (a[7]:ubyte) {
                if (i <= (d = d - 1)) goto B_y;
                43;
                goto B_za;
              }
              if (eqz(a[9]:ubyte)) goto B_ya;
              if (i <= (d = d - 1)) goto B_y;
              32;
              label B_za:
            }
        (d + j)[0]:byte = h;
        label B_ya:
        h = a[10]:ubyte;
        a[10]:byte = 0;
        c = d > i;
      }
      if (eqz(g_b)) {
        if (c) goto B_cb;
        c = d + j;
        d = i - d;
      }
      if (eqz(g_b) | m == 4) {
        pad(a, c, d, d);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a[10]:byte = h & 1;
        goto B_q;
      }
      label B_cb:
      if (eqz(g_b) | m == 5) {
        runtime_slicePanic();
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_y:
      if (eqz(g_b) | m == 6) {
        runtime_lookupPanic();
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_q:
      if (eqz(g_b)) {
        90044[0]:int = p;
        stack_pointer = l + 16;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = g;
  g_c[0]:int = g_c[0]:int + 4;
  g = g_c[0]:int;
  g[0]:int = a;
  g[1]:long@4 = b;
  g[3]:int = c;
  g[4]:int = d;
  g[5]:int = e;
  g[6]:int = f;
  g[7]:int = h;
  g[8]:int = i;
  g[9]:int = j;
  g[10]:int = k;
  g[11]:int = l;
  g[12]:long@4 = n;
  g[14]:int = o;
  g[15]:int = p;
  g_c[0]:int = g_c[0]:int - -64;
}

function fmtQ(a:ubyte_ptr, b:int, c:int) { // func195
  var d:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var f:int;
  var i:int;
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    g = g_c[0]:int;
    a = g.a;
    b = g.b;
    c = g.c;
    d = g.d;
    f = g.e;
    h = g.f;
    i = g.g;
    g = g.h;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 112;
          stack_pointer = d;
          (d + 92)[0]:long@4 = 0L;
          (d + 100)[0]:long@4 = 0L;
          (d + 108)[0]:int = 0;
          d[21]:long@4 = 0L;
          d[19]:int = 8;
          g = 90044[0]:int;
          90044[0]:int = d + 72;
          d[18]:int = g;
          f = d - -64;
        }
        if (eqz(g_b) | eqz(e)) {
          truncateString(f, a, b, c);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[20]:int = (f = d[16]:int);
          b = eqz(a);
        }
        if (eqz(g_b)) {
          if (b) goto B_g;
          i = d[17]:int;
          b = eqz(a[8]);
        }
        if (eqz(g_b)) {
          if (b) goto B_m;
          c = i;
          b = f;
        }
        loop L_o {
          if (eqz(g_b)) {
            d[21]:int = b;
            if (c <= 0) goto B_k;
            h = d + 56;
          }
          if (eqz(g_b) | e == 1) {
            unicode_utf8_DecodeRuneInString(h, b, c);
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            var j:int = d[15]:int;
            if (j > c) goto B_l;
            h = d[14]:int;
            c = c - j;
            b = b + j;
            if (j >= 2) {
              h = h != 65279;
              if (h) continue L_o;
              goto B_m;
            }
            if (((h != 9 & h < 32) | h == 65533) | h == 96) goto B_m;
            h = h != 127;
            if (h) continue L_o;
          }
        }
        label B_m:
        if (eqz(g_b)) {
          c = a + 24;
          b = eqz(a[7]);
          if (b) goto B_j;
          b = d + 24;
        }
        if (eqz(g_b) | e == 2) {
          strconv_appendQuotedWith(b, c, f, i, 1);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[25]:int = (c = d[6]:int);
          d[24]:int = c;
          f = d[8]:int;
          b = d[7]:int;
        }
        if (eqz(g_b) | e == 3) {
          pad(a, c, b, f);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_i;
        label B_l:
        if (eqz(g_b) | e == 4) {
          runtime_slicePanic();
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_k:
        b = select_if(b, d + 16, g_b);
        if (eqz(g_b) | e == 5) {
          runtime_stringConcat(b, 86456, 1, f, i);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[22]:int = (c = d[4]:int);
          f = d[5]:int;
          b = d + 8;
        }
        if (eqz(g_b) | e == 6) {
          runtime_stringConcat(b, c, f, 86456, 1);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[23]:int = (c = d[2]:int);
          b = d[3]:int;
        }
        if (eqz(g_b) | e == 7) {
          padString(a, c, b);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_i;
        label B_j:
        b = select_if(b, d + 40, g_b);
        if (eqz(g_b) | e == 8) {
          strconv_appendQuotedWith(b, c, f, i, 0);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d[27]:int = (c = d[10]:int);
          d[26]:int = c;
          f = d[12]:int;
          b = d[11]:int;
        }
        if (eqz(g_b) | e == 9) {
          pad(a, c, b, f);
          9;
          if (g_b == 1) goto B_b;
        }
        label B_i:
        if (eqz(g_b)) {
          90044[0]:int = g;
          stack_pointer = d + 112;
          return ;
        }
        label B_g:
        if (eqz(g_b) | e == 10) {
          runtime_nilPanic();
          10;
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
  e.f = h;
  e.g = i;
  e.h = g;
  g_c[0]:int = g_c[0]:int + 32;
}

function truncateString(a:{ a:int, b:int }, b:int, c:int, d:int) { // func196
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

function padString(a:int, b:int, c:int) { // func197
  var f:int;
  var i:int;
  var e:int;
  var g:int;
  var h:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 28;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    e = d.d;
    f = d.e;
    g = d.f;
    i = d.g;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 32;
          stack_pointer = f;
          f[5]:long@4 = 0L;
          f[3]:long@4 = 3L;
          i = 90044[0]:int;
          90044[0]:int = f + 8;
          f[2]:int = i;
          e = eqz(a);
        }
        if (eqz(g_b)) {
          if (e) goto B_f;
          e = eqz(a[4]:ubyte);
        }
        if (eqz(g_b)) {
          if (e) goto B_h;
          e = a[4]:int;
          g = eqz(e);
          if (g) goto B_h;
        }
        if (eqz(g_b) | eqz(h)) {
          unicode_utf8_RuneCountInString(b, c);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          g = t0;
        }
        if (eqz(g_b)) {
          e = e - g;
          g = eqz(a[6]:ubyte);
        }
        if (eqz(g_b)) {
          if (g) goto B_l;
          f[4]:int = (g = a[0]:int);
        }
        if (eqz(g_b) | h == 1) {
          writeString(g, b, c);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | h == 2) {
          writePadding(a, e);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_l:
        if (eqz(g_b) | h == 3) {
          writePadding(a, e);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { f[5]:int = (a = a[0]:int) }
        if (eqz(g_b) | h == 4) {
          writeString(a, b, c);
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_h:
        if (eqz(g_b)) { f[6]:int = (a = a[0]:int) }
        if (eqz(g_b) | h == 5) {
          writeString(a, b, c);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_f:
        if (eqz(g_b) | h == 6) {
          runtime_nilPanic();
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b)) {
          90044[0]:int = i;
          stack_pointer = f + 32;
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
  d.d = e;
  d.e = f;
  d.f = g;
  d.g = i;
  g_c[0]:int = g_c[0]:int + 28;
}

function fmtS(a:int, b:int, c:int) { // func198
  var f:int_ptr;
  var g:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    d = g_c[0]:int;
    a = d.a;
    b = d.b;
    c = d.c;
    f = d.d;
    g = d.e;
    d = d.f;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          f = stack_pointer - 32;
          stack_pointer = f;
          f[5] = 1;
          g = 90044[0]:int;
          90044[0]:int = f + 16;
          f[4] = g;
          d = f + 8;
        }
        if (eqz(g_b) | eqz(e)) {
          truncateString(d, a, b, c);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[6] = (c = f[2]);
          b = f[3];
        }
        if (eqz(g_b) | e == 1) {
          padString(a, c, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          90044[0]:int = g;
          stack_pointer = f + 32;
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
  e.d = f;
  e.e = g;
  e.f = d;
  g_c[0]:int = g_c[0]:int + 24;
}

function fmtSx(a:int, b:int, c:int, d:{ a:int, b:int, c:int, d:int }) { // func199
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
        fmtSbx(a, b, c, 0, 0, d);
        0;
        if (g_b == 1) goto B_b;
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

function argNumber(a:{ a:int, b:int, c:byte }, b:byte_ptr, c:int, d:ubyte_ptr, e:int, f:int) { // func200
  var j:{ a:int, b:ubyte, c:int }
  var g:int;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int }
  var l:int;
  var k:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
    h = g_c[0]:int;
    a = h.a;
    b = h.b;
    c = h.c;
    d = h.d;
    e = h.e;
    f = h.f;
    g = h.g;
    j = h.h;
    k = h.i;
    l = h.j;
    h = h.k;
  }
  i = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          i = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          j = stack_pointer - 16;
          stack_pointer = j;
          g = e <= f;
        }
        if (eqz(g_b)) {
          if (g) goto B_f;
          g = e <= f;
        }
        g = {
              if (eqz(g_b)) {
                if (g) goto B_j;
                d = d + f;
                g = d[0] != 91;
                if (g) goto B_f;
                b[124] = 1;
                l = 0;
                k = 1;
                g = 0;
                g;
                if ((h = e - f) < 3) goto B_h;
                e = 1;
              }
              loop L_l {
                if (eqz(g_b)) {
                  g = e == h;
                  if (g) goto B_i;
                  g = (d + e)[0]:ubyte != 93;
                }
                if (select_if(g_b, 1, g)) {
                  if (eqz(g_b) | eqz(i)) {
                    fmt_parsenum(j, d, h, 1, e);
                    0;
                    if (g_b == 1) goto B_b;
                  }
                  if (eqz(g_b)) {
                    if (eqz(j.b)) goto B_q;
                    if (e != j.c) goto B_q;
                    k = e + 1;
                    l = j.a - 1;
                    1;
                    goto B_h;
                    label B_q:
                    k = e + 1;
                    goto B_i;
                  }
                }
                if (eqz(g_b)) {
                  e = e + 1;
                  continue L_l;
                }
              }
              label B_j:
              if (eqz(g_b) | i == 1) {
                runtime_lookupPanic();
                1;
                if (g_b == 1) goto B_b;
              }
              if (eqz(g_b)) { unreachable }
              label B_i:
              if (g_b) {
                g
              } else {
                l = 0;
                0;
              }
              label B_h:
            }
        if (eqz(g_b)) {
          if (eqz(eqz(g & 1) | l)) {
            f = f + k;
            c = 0;
            g = 1;
            goto B_e;
          }
          b[125] = 0;
          f = f + k;
          goto B_e;
        }
        label B_f:
        g = select_if(g, 0, g_b);
        label B_e:
        if (eqz(g_b)) {
          a.b = f;
          a.a = c;
          a.c = g & 1;
          stack_pointer = j + 16;
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
  i.i = k;
  i.j = l;
  i.k = h;
  g_c[0]:int = g_c[0]:int + 44;
}

function fmt_parsenum(a:{ a:int, b:byte, c:int }, b:{ a:int, b:int, c:int, d:int }, c:int, d:int, e:int) { // func201
  var g:int;
  var f:{ a:int, b:int, c:int, d:int }
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    f = g_c[0]:int;
    a = f.a;
    e = f.b;
    g = f.c;
    f = f.d;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          h = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          g = d >= e;
          f = 0;
        }
        if (eqz(g_b)) {
          if (g) goto B_f;
          var i:int = select_if(d, c, c < d);
          f = 0;
          g = 0;
          loop L_h {
            if (d == e) goto B_e;
            if (d != i) {
              c = (b + d)[0]:ubyte - 48 & 255;
              if (c > 9) {
                e = d;
                goto B_e;
              }
              g = f - 1000001 >= -2000001;
              if (eqz(g)) {
                f = 0;
                goto B_f;
              }
              f = f * 10 + c;
              g = 1;
              d = d + 1;
              continue L_h;
            }
          }
        }
        if (eqz(g_b) | eqz(h)) {
          runtime_lookupPanic();
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_f:
        g = select_if(g, 0, g_b);
        label B_e:
        if (eqz(g_b)) {
          a.c = e;
          a.a = f;
          a.b = g & 1;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = e;
  b.c = g;
  b.d = f;
  g_c[0]:int = g_c[0]:int + 16;
}

function badVerb(a:int, b:int) { // func202
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int, w:int, x:int, y:int, z:int, aa:int, ba:int }
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int }
  var f:int;
  var d:int;
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int }
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
  e = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        e = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer - 112;
        stack_pointer = c;
        c.j = 18;
        memory_fill(c + 48, 0, 64);
        a[127]:byte = 1;
        c.i = (g = 90044[0]:int);
        90044[0]:int = (d = c + 32);
      }
      if (eqz(g_b) | eqz(e)) {
        writeString(a, 86569, 2);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | e == 1) {
        writeRune(a, b);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | e == 2) {
        writeByte(a, 40);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c.k = (b = a[3]:int);
        c.l = (d = a[4]:int);
        f = eqz(b);
      }
      if (eqz(g_b)) {
        if (f) goto B_j;
        c.n = d;
        c.m = b;
        d = c + 24;
      }
      if (eqz(g_b) | e == 3) {
        reflect_TypeOf(d, b);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c.p = (b = c.h);
        c.o = (d = c.g);
        f = c + 16;
      }
      if (eqz(g_b) | e == 4) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          f,
          b,
          d);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c.q = (b = c.e);
        d = c.f;
      }
      if (eqz(g_b) | e == 5) {
        writeString(a, b, d);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | e == 6) {
        writeByte(a, 61);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c.r = (b = a[3]:int);
        c.s = (d = a[4]:int);
      }
      if (eqz(g_b) | e == 7) {
        printArg(a, b, d, 118);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_i;
      label B_j:
      if (eqz(g_b)) {
        c.u = (d = a[6]:int);
        c.t = (b = a[5]:int);
        f = eqz(b);
      }
      if (eqz(g_b)) {
        if (f) goto B_u;
        c.w = d;
        c.v = b;
        d = c + 8;
      }
      if (eqz(g_b) | e == 8) {
        reflect_toType(d, 87380, b);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c.y = (b = c.d);
        c.x = (d = c.c);
      }
      if (eqz(g_b) | e == 9) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          c,
          b,
          d);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c.z = (b = c.a);
        d = c.b;
      }
      if (eqz(g_b) | e == 10) {
        writeString(a, b, d);
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | e == 11) {
        writeByte(a, 61);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c.ba = (b = a[6]:int);
        c.aa = (d = a[5]:int);
        f = a[28]:ubyte;
      }
      if (eqz(g_b) | e == 12) {
        printValue(a, d, b, f, 118, 0);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_i;
      label B_u:
      if (eqz(g_b) | e == 13) {
        writeString(a, 86613, 5);
        13;
        if (g_b == 1) goto B_b;
      }
      label B_i:
      if (eqz(g_b) | e == 14) {
        writeByte(a, 41);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        90044[0]:int = g;
        a[127]:byte = 0;
        stack_pointer = c + 112;
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
  g_c[0]:int = g_c[0]:int + 24;
}

function printValue(a:int, b:int, c:{ a:int, b:int, c:int }, d:int, e:int, f:int) { // func203
  var g:int;
  var h:ubyte_ptr;
  var i:int;
  var j:{ a:ubyte, b:ushort, c:int }
  var m:int;
  var s:long;
  var r:double;
  var u:double;
  var l:int;
  var n:long_ptr@4;
  var o:int;
  var p:byte_ptr;
  var q:long_ptr@4;
  var t:int;
  var w:long_ptr@4;
  var x:int;
  var k:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 96;
    k = g_c[0]:int;
    a = k[0]:int;
    c = k[2]:int;
    d = k[3]:int;
    e = k[4]:int;
    f = k[5]:int;
    g = k[6]:int;
    h = k[7]:int;
    j = k[8]:int;
    l = k[9]:int;
    m = k[10]:int;
    n = k[11]:int;
    o = k[12]:int;
    p = k[13]:int;
    q = k[14]:int;
    r = k[15]:double@4;
    t = k[17]:int;
    s = k[18]:long@4;
    u = k[20]:double@4;
    w = k[22]:int;
    x = k[23]:int;
    b = k[1]:int;
  }
  k = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = stack_pointer - 1120;
        stack_pointer = g;
        g[107]:int = 171;
        memory_fill(g + 432, 0, 684);
        g[106]:int = (x = 90044[0]:int);
        90044[0]:int = g + 424;
        h = eqz(b);
      }
      if (eqz(g_b)) {
        if (h) goto B_g;
        h = f <= 0;
        if (h) goto B_g;
        h = (d & 14) != 2;
        if (h) goto B_g;
        h = g + 392;
      }
      if (eqz(g_b) | eqz(i)) {
        Interface(h, b, c, d);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        j = g[98]:int;
        a[4]:int = (m = g[99]:int);
        a[3]:int = j;
        g[109]:int = m;
        g[108]:int = j;
      }
      if (eqz(g_b) | i == 1) {
        handleMethods(a, e);
        let t0 = 1;
        if (g_b == 1) goto B_b;
        h = t0;
      }
      if (eqz(g_b)) {
        h = h & 1;
        if (h) goto B_f;
      }
      label B_g:
      if (eqz(g_b)) {
        a[5]:int = b;
        a[3]:long@4 = 0L;
        a[6]:int = c;
        a[28]:byte = d;
        h = eqz(b);
      }
      if (eqz(g_b)) {
        if (h) goto B_la;
        h = b & 3;
        if (h) goto B_x;
        h = b[0]:ubyte & 31;
        br_table[B_la, B_ja, B_ia, B_ia, B_ia, B_ia, B_ia, B_ha, B_ha, B_ha, B_ha, B_ha, B_ha, B_ga, B_fa, B_ea, B_da, B_ca, B_w, B_w, B_u, B_x, B_v, B_v, B_w, B_ba, B_aa, ..B_y](
          h);
        label B_la:
      }
      if (select_if(g_b, 1, f)) {
        if (eqz(g_b) | i == 2) {
          writeString(a, 86586, 23);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
      }
      if (eqz(g_b)) {
        b = e != 118;
        if (b) goto B_z;
      }
      if (eqz(g_b) | i == 3) {
        writeString(a, 86613, 5);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_ja:
      if (eqz(g_b) | i == 4) {
        Bool(b, c, d);
        let t1 = 4;
        if (g_b == 1) goto B_b;
        b = t1;
      }
      if (eqz(g_b) | i == 5) {
        fmtBool(a, b, e);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_ia:
      if (eqz(g_b) | i == 6) {
        Int(b, c, d);
        let t2 = 6;
        if (g_b == 1) goto B_b;
        s = t2;
      }
      if (eqz(g_b) | i == 7) {
        fmtInteger_1(a, s, 1, e);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_ha:
      if (eqz(g_b) | i == 8) {
        Uint(b, c, d);
        let t3 = 8;
        if (g_b == 1) goto B_b;
        s = t3;
      }
      if (eqz(g_b) | i == 9) {
        fmtInteger_1(a, s, 0, e);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_ga:
      if (eqz(g_b) | i == 10) {
        Float(b, c, d);
        let t4 = 10;
        if (g_b == 1) goto B_b;
        r = t4;
      }
      if (eqz(g_b) | i == 11) {
        fmtFloat_1(a, r, 32, e);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_fa:
      if (eqz(g_b) | i == 12) {
        Float(b, c, d);
        let t5 = 12;
        if (g_b == 1) goto B_b;
        r = t5;
      }
      if (eqz(g_b) | i == 13) {
        fmtFloat_1(a, r, 64, e);
        13;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_ea:
      d = select_if(d, g + 24, g_b);
      if (eqz(g_b) | i == 14) {
        Complex(d, b, c);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        u = g[4]:double;
        r = g[3]:double;
      }
      if (eqz(g_b) | i == 15) {
        fmtComplex(a, r, u, 64, e);
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_da:
      d = select_if(d, g + 40, g_b);
      if (eqz(g_b) | i == 16) {
        Complex(d, b, c);
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        u = g[6]:double;
        r = g[5]:double;
      }
      if (eqz(g_b) | i == 17) {
        fmtComplex(a, r, u, 128, e);
        17;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_ca:
      d = select_if(d, g + 56, g_b);
      if (eqz(g_b) | i == 18) {
        String_2(d, b, c);
        18;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[110]:int = (b = g[14]:int);
        c = g[15]:int;
      }
      if (eqz(g_b) | i == 19) {
        fmtString(a, b, c, e);
        19;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_ba:
      if (eqz(g_b)) { h = eqz(a[44]:ubyte) }
      if (eqz(g_b)) {
        if (h) goto B_kb;
        h = g + 144;
      }
      if (eqz(g_b) | i == 20) {
        reflect_toType(h, 87380, b);
        20;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[112]:int = (j = g[37]:int);
        g[111]:int = (m = g[36]:int);
        h = g + 136;
      }
      if (eqz(g_b) | i == 21) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          h,
          j,
          m);
        21;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[113]:int = (j = g[34]:int);
        h = g[35]:int;
      }
      if (eqz(g_b) | i == 22) {
        writeString(a, j, h);
        22;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | i == 23) {
        IsNil(b, c, d);
        let t6 = 23;
        if (g_b == 1) goto B_b;
        h = t6;
      }
      if (select_if(g_b, 1, h = select_if(h, eqz(h & 1), g_b))) {
        if (eqz(g_b) | i == 24) {
          writeString(a, 86618, 5);
          24;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
      }
      if (eqz(g_b) | i == 25) {
        writeByte(a, 123);
        25;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_t;
      label B_kb:
      if (eqz(g_b) | i == 26) {
        writeString(a, 86609, 4);
        26;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_t;
      label B_aa:
      if (eqz(g_b)) { h = eqz(a[44]:ubyte) }
      if (eqz(g_b)) {
        if (h) goto B_xb;
        h = g + 248;
      }
      if (eqz(g_b) | i == 27) {
        reflect_toType(h, 87380, b);
        27;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[182]:int = (j = g[63]:int);
        g[181]:int = (m = g[62]:int);
        h = g + 240;
      }
      if (eqz(g_b) | i == 28) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          h,
          j,
          m);
        28;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[183]:int = (j = g[60]:int);
        h = g[61]:int;
      }
      if (eqz(g_b) | i == 29) {
        writeString(a, j, h);
        29;
        if (g_b == 1) goto B_b;
      }
      label B_xb:
      if (eqz(g_b) | i == 30) {
        writeByte(a, 123);
        30;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        p = f + 1;
        j = 0;
      }
      loop L_gc {
        if (eqz(g_b) | i == 31) {
          NumField(b);
          let t7 = 31;
          if (g_b == 1) goto B_b;
          f = t7;
        }
        f = select_if(f, f <= j, g_b);
        if (eqz(g_b)) {
          if (f) goto B_kc;
          f = eqz(j);
        }
        if (eqz(g_b)) {
          if (f) goto B_mc;
          f = eqz(a[44]:ubyte);
        }
        if (select_if(g_b, 1, f)) {
          if (eqz(g_b) | i == 32) {
            writeString(a, 86623, 2);
            32;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_mc;
        }
        if (eqz(g_b) | i == 33) {
          writeByte(a, 32);
          33;
          if (g_b == 1) goto B_b;
        }
        label B_mc:
        if (eqz(g_b)) {
          f = a[43]:ubyte;
          if (f) goto B_jc;
          f = a[44]:ubyte;
          if (f) goto B_jc;
          goto B_ic;
        }
        label B_kc:
        if (eqz(g_b) | i == 34) {
          writeByte(a, 125);
          34;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
        label B_jc:
        f = select_if(f, g + 232, g_b);
        if (eqz(g_b) | i == 35) {
          reflect_toType(f, 87380, b);
          35;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[185]:int = (m = g[59]:int);
          g[184]:int = (l = g[58]:int);
          f = l != 87484;
          if (f) goto B_q;
          f = eqz(m);
          if (f) goto B_q;
          f = g + 192;
        }
        if (eqz(g_b) | i == 36) {
          rawField(f, m, j);
          36;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[208]:int = (f = g[52]:int);
          g[187]:int = (l = g[50]:int);
          g[186]:int = (m = g[48]:int);
          g[203]:int = f;
          g[198]:int = f;
          g[195]:int = f;
          g[192]:int = f;
          g[225]:int = m;
          g[189]:int = (h = g[53]:int);
          g[188]:int = f;
          g[219]:int = m;
          g[199]:int = h;
          g[191]:int = l;
          g[197]:int = l;
          g[193]:int = h;
          g[204]:int = h;
          g[202]:int = l;
          g[207]:int = l;
          g[214]:int = l;
          g[220]:int = l;
          g[190]:int = m;
          g[226]:int = l;
          g[196]:int = m;
          g[201]:int = m;
          g[206]:int = m;
          g[213]:int = m;
          o = g[49]:int;
        }
        if (eqz(g_b) | i == 37) {
          runtime_alloc(4);
          let t8 = 37;
          if (g_b == 1) goto B_b;
          l = t8;
        }
        if (eqz(g_b)) {
          l[0]:int = j;
          g[200]:int = l;
          g[205]:int = l;
          g[194]:int = l;
          n = g + 184;
        }
        if (eqz(g_b) | i == 38) {
          reflect_toType(n, 87380, f);
          38;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[229]:int = h;
          g[223]:int = h;
          g[217]:int = h;
          g[230]:int = l;
          g[211]:int = h;
          g[224]:int = l;
          g[218]:int = l;
          g[212]:int = l;
          g[227]:int = (l = g[46]:int);
          g[221]:int = l;
          g[215]:int = l;
          g[228]:int = (h = g[47]:int);
          g[209]:int = l;
          g[222]:int = h;
          g[216]:int = h;
          g[210]:int = h;
          f = eqz(o);
          if (f) goto B_ic;
        }
        if (eqz(g_b) | i == 39) {
          writeString(a, m, o);
          39;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | i == 40) {
          writeByte(a, 58);
          40;
          if (g_b == 1) goto B_b;
        }
        label B_ic:
        f = select_if(f, g + 168, g_b);
        if (eqz(g_b) | i == 41) {
          Field_1(f, b, c, d, j);
          41;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[232]:int = (l = g[43]:int);
          g[231]:int = (m = g[42]:int);
          h = g[176]:ubyte;
        }
        if (eqz(g_b)) {
          if (eqz(m)) {
            m = 0;
            goto B_fd;
          }
          f = m & 3;
          if (f) goto B_fd;
          f = (m[0]:ubyte & 31) != 20;
          if (f) goto B_fd;
        }
        if (eqz(g_b) | i == 42) {
          IsNil(m, l, h);
          let t9 = 42;
          if (g_b == 1) goto B_b;
          f = t9;
        }
        if (eqz(g_b)) {
          f = f & 1;
          if (f) goto B_fd;
          f = g + 152;
        }
        if (eqz(g_b) | i == 43) {
          Elem_2(f, m, l, h);
          43;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[234]:int = (l = g[39]:int);
          g[233]:int = (m = g[38]:int);
          h = g[160]:ubyte;
        }
        label B_fd:
        if (eqz(g_b)) {
          g[237]:int = m;
          g[238]:int = l;
          g[236]:int = l;
          g[235]:int = m;
        }
        if (eqz(g_b) | i == 44) {
          printValue(a, m, l, h, e, p);
          44;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j = j + 1;
          continue L_gc;
        }
      }
      label B_z:
      if (eqz(g_b) | i == 45) {
        badVerb(a, e);
        45;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_y:
      if (eqz(g_b) | i == 46) {
        writeByte(a, 63);
        46;
        if (g_b == 1) goto B_b;
      }
      c = select_if(c, g + 16, g_b);
      if (eqz(g_b) | i == 47) {
        reflect_toType(c, 87380, b);
        47;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[277]:int = (b = g[5]:int);
        g[276]:int = (d = g[4]:int);
        c = g + 8;
      }
      if (eqz(g_b) | i == 48) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          c,
          b,
          d);
        48;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[278]:int = (b = g[2]:int);
        c = g[3]:int;
      }
      if (eqz(g_b) | i == 49) {
        writeString(a, b, c);
        49;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | i == 50) {
        writeByte(a, 63);
        50;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_x:
      if (eqz(select_if(g_b, 1, f))) goto B_w;
      if (eqz(g_b) | i == 51) {
        UnsafePointer(b, c, d);
        let t10 = 51;
        if (g_b == 1) goto B_b;
        j = t10;
      }
      if (eqz(g_b)) {
        g[273]:int = j;
        f = eqz(j);
        if (f) goto B_w;
        f = g + 376;
      }
      if (eqz(g_b) | i == 52) {
        Elem_2(f, b, c, d);
        52;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[275]:int = (m = g[95]:int);
        g[274]:int = (j = g[94]:int);
        f = eqz(j);
        if (f) goto B_w;
        f = j & 3;
        if (f) goto B_w;
        l = j.a & 31;
        f = l > 26;
        if (f) goto B_w;
        f = eqz(1 << l & 113246208);
        if (f) goto B_w;
        b = g[384]:ubyte;
      }
      if (eqz(g_b) | i == 53) {
        writeByte(a, 38);
        53;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | i == 54) {
        printValue(a, j, m, b, e, 1);
        54;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_w:
      if (eqz(g_b) | i == 55) {
        fmtPointer(a, b, c, d, e);
        55;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_v:
      h = select_if(h, e - 113, g_b);
      if (eqz(g_b)) {
        br_table[B_me, B_ke, B_me, ..B_ne](h)
        label B_ne:
        if (e == 120) goto B_me;
        h = e != 88;
        if (h) goto B_ke;
        label B_me:
        h = g + 368;
      }
      if (eqz(g_b) | i == 56) {
        reflect_toType(h, 87380, b);
        56;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[245]:int = (o = g[93]:int);
        g[244]:int = (j = g[92]:int);
        h = j != 87484;
        if (h) goto B_q;
        h = eqz(o);
        if (h) goto B_q;
      }
      if (eqz(g_b) | i == 57) {
        Elem(o);
        let t11 = 57;
        if (g_b == 1) goto B_b;
        j = t11;
      }
      if (eqz(g_b)) {
        g[246]:int = j;
        h = g + 360;
      }
      if (eqz(g_b) | i == 58) {
        reflect_toType(h, 87380, j);
        58;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[249]:int = (j = g[90]:int);
        g[250]:int = (m = g[91]:int);
        g[247]:int = j;
        g[248]:int = m;
      }
      if (eqz(g_b) | i == 59) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu(
          m,
          j);
        let t12 = 59;
        if (g_b == 1) goto B_b;
        h = t12;
      }
      if (eqz(g_b)) {
        h = (h & 255) != 8;
        if (h) goto B_ke;
        j = d & 1;
        m = b[0]:ubyte & 31;
        f = m == 22;
      }
      if (eqz(g_b)) {
        if (eqz(f)) {
          f = eqz(j);
          if (f) goto B_we;
        }
        f = m - 22;
      }
      if (eqz(g_b)) {
        br_table[B_cf, B_af, ..B_ge](f)
        label B_cf:
      }
      if (eqz(g_b) | i == 60) {
        elem(b);
        let t13 = 60;
        if (g_b == 1) goto B_b;
        d = t13;
      }
      if (eqz(g_b)) {
        g[251]:int = d;
        f = eqz(d);
        if (f) goto B_je;
        f = d & 3;
        if (f) goto B_je;
        d = (d[0]:ubyte & 31) != 8;
        if (d) goto B_je;
        b = c.c;
        h = c.b;
        c = c.a;
        goto B_ze;
      }
      label B_af:
      if (eqz(g_b)) {
        f = eqz(j);
        if (f) goto B_ie;
      }
      if (eqz(g_b) | i == 61) {
        elem(b);
        let t14 = 61;
        if (g_b == 1) goto B_b;
        j = t14;
      }
      if (eqz(g_b)) {
        g[254]:int = j;
        f = eqz(j);
        if (f) goto B_he;
        f = j & 3;
        if (f) goto B_he;
        f = (j.a & 31) != 8;
        if (f) goto B_he;
      }
      if (eqz(g_b) | i == 62) {
        Len_1(b, c, d);
        let t15 = 62;
        if (g_b == 1) goto B_b;
        h = t15;
      }
      if (eqz(g_b)) {
        b = h < 0;
        if (b) goto B_fe;
        b = h;
        f = b != 0;
        d = f & eqz(c);
        if (d) goto B_fe;
      }
      label B_ze:
      if (eqz(g_b)) {
        g[259]:int = c;
        g[260]:int = c;
        goto B_ee;
      }
      label B_we:
      j = select_if(j, 0, g_b);
      if (eqz(g_b) | i == 63) {
        Len_1(b, c, d);
        let t16 = 63;
        if (g_b == 1) goto B_b;
        h = t16;
      }
      if (eqz(g_b)) {
        f = h < 0;
        if (f) goto B_s;
      }
      if (eqz(g_b) | i == 64) {
        runtime_alloc(h);
        let t17 = 64;
        if (g_b == 1) goto B_b;
        f = t17;
      }
      if (eqz(g_b)) { g[263]:int = f }
      loop L_pf {
        if (eqz(g_b)) {
          l = h != j;
          if (eqz(l)) {
            c = f;
            b = h;
            goto B_ee;
          }
          l = g + 344;
        }
        if (eqz(g_b) | i == 65) {
          Index_1(l, b, c, d, j);
          65;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[265]:int = (m = g[87]:int);
          g[264]:int = (l = g[86]:int);
          p = f + j;
          n = g[352]:ubyte;
        }
        if (eqz(g_b) | i == 66) {
          Uint(l, m, n);
          let t18 = 66;
          if (g_b == 1) goto B_b;
          s = t18;
        }
        if (eqz(g_b)) {
          p[0] = s;
          j = j + 1;
          continue L_pf;
        }
      }
      label B_ke:
      if (eqz(g_b)) { h = eqz(a[44]:ubyte) }
      if (eqz(g_b)) {
        if (h) goto B_xf;
        h = g + 312;
      }
      if (eqz(g_b) | i == 67) {
        reflect_toType(h, 87380, b);
        67;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[267]:int = (j = g[79]:int);
        g[266]:int = (m = g[78]:int);
        h = g + 304;
      }
      if (eqz(g_b) | i == 68) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          h,
          j,
          m);
        68;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[268]:int = (j = g[76]:int);
        h = g[77]:int;
      }
      if (eqz(g_b) | i == 69) {
        writeString(a, j, h);
        69;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { h = (b[0]:ubyte & 31) != 22 }
      if (eqz(select_if(g_b, 1, h))) goto B_fg;
      if (eqz(g_b) | i == 70) {
        IsNil(b, c, d);
        let t19 = 70;
        if (g_b == 1) goto B_b;
        h = t19;
      }
      if (eqz(g_b)) {
        h = eqz(h & 1);
        if (h) goto B_fg;
      }
      if (eqz(g_b) | i == 71) {
        writeString(a, 86618, 5);
        71;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_fg:
      if (eqz(g_b) | i == 72) {
        writeByte(a, 123);
        72;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        j = 0;
        h = f + 1;
      }
      loop L_lg {
        if (eqz(g_b) | i == 73) {
          Len_1(b, c, d);
          let t20 = 73;
          if (g_b == 1) goto B_b;
          f = t20;
        }
        if (eqz(g_b)) {
          f = f <= j;
          if (f) goto B_mg;
          f = eqz(j);
        }
        if (select_if(select_if(g_b, 1, f), 0, eqz(g_b) | i == 74)) {
          writeString(a, 86623, 2);
          74;
          if (g_b == 1) goto B_b;
        }
        f = select_if(f, g + 288, g_b);
        if (eqz(g_b) | i == 75) {
          Index_1(f, b, c, d, j);
          75;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[270]:int = (m = g[73]:int);
          g[269]:int = (l = g[72]:int);
          f = g[296]:ubyte;
        }
        if (eqz(g_b) | i == 76) {
          printValue(a, l, m, f, e, h);
          76;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j = j + 1;
          continue L_lg;
        }
        label B_mg:
      }
      if (eqz(g_b) | i == 77) {
        writeByte(a, 125);
        77;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_xf:
      if (eqz(g_b) | i == 78) {
        writeByte(a, 91);
        78;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        j = 0;
        h = f + 1;
      }
      loop L_xg {
        if (eqz(g_b) | i == 79) {
          Len_1(b, c, d);
          let t21 = 79;
          if (g_b == 1) goto B_b;
          f = t21;
        }
        if (eqz(g_b)) {
          f = f <= j;
          if (f) goto B_yg;
          f = eqz(j);
        }
        if (select_if(select_if(g_b, 1, f), 0, eqz(g_b) | i == 80)) {
          writeByte(a, 32);
          80;
          if (g_b == 1) goto B_b;
        }
        f = select_if(f, g + 320, g_b);
        if (eqz(g_b) | i == 81) {
          Index_1(f, b, c, d, j);
          81;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[272]:int = (m = g[81]:int);
          g[271]:int = (l = g[80]:int);
          f = g[328]:ubyte;
        }
        if (eqz(g_b) | i == 82) {
          printValue(a, l, m, f, e, h);
          82;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          j = j + 1;
          continue L_xg;
        }
        label B_yg:
      }
      if (eqz(g_b) | i == 83) {
        writeByte(a, 93);
        83;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_je:
      if (eqz(g_b) | i == 84) {
        runtime_alloc(12);
        let t22 = 84;
        if (g_b == 1) goto B_b;
        a = t22;
      }
      if (eqz(g_b)) {
        g[252]:int = a;
        g[253]:int = a;
        a[8]:byte = (b = Kind(b));
        a[1]:int = 5;
        a[0]:int = 66578;
      }
      if (eqz(g_b) | i == 85) {
        runtime_panic(87404, a);
        85;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_ie:
      if (eqz(g_b) | i == 86) {
        runtime_panic(86928, 66824);
        86;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_he:
      if (eqz(g_b) | i == 87) {
        runtime_alloc(12);
        let t23 = 87;
        if (g_b == 1) goto B_b;
        a = t23;
      }
      if (eqz(g_b)) {
        g[255]:int = a;
        g[256]:int = a;
        a[8]:byte = (b = Kind(b));
        a[1]:int = 5;
        a[0]:int = 66578;
      }
      if (eqz(g_b) | i == 88) {
        runtime_panic(87404, a);
        88;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_ge:
      if (eqz(g_b) | i == 89) {
        runtime_alloc(12);
        let t24 = 89;
        if (g_b == 1) goto B_b;
        a = t24;
      }
      if (eqz(g_b)) {
        g[257]:int = a;
        g[258]:int = a;
        a[8]:byte = (b = Kind(b));
        a[1]:int = 5;
        a[0]:int = 66578;
      }
      if (eqz(g_b) | i == 90) {
        runtime_panic(87404, a);
        90;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_fe:
      if (eqz(g_b) | i == 91) {
        runtime_unsafeSlicePanic();
        91;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_ee:
      if (eqz(g_b)) {
        g[261]:int = c;
        d = g + 336;
      }
      if (eqz(g_b) | i == 92) {
        String_4(d, o);
        92;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[262]:int = (d = g[84]:int);
        f = g[85]:int;
      }
      if (eqz(g_b) | i == 93) {
        fmtBytes(a, c, h, b, e, d, f);
        93;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_u:
      h = select_if(h, g + 272, g_b);
      if (eqz(g_b) | i == 94) {
        Elem_2(h, b, c, d);
        94;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[240]:int = (j = g[69]:int);
        g[239]:int = (d = g[68]:int);
        c = eqz(d);
      }
      if (eqz(g_b)) {
        if (c) goto B_di;
        c = f + 1;
        b = g[280]:ubyte;
      }
      if (eqz(g_b) | i == 95) {
        printValue(a, d, j, b, e, c);
        95;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_di:
      if (eqz(g_b)) { c = eqz(a[44]:ubyte) }
      if (eqz(g_b)) {
        if (c) goto B_hi;
        c = g + 264;
      }
      if (eqz(g_b) | i == 96) {
        reflect_toType(c, 87380, b);
        96;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[242]:int = (b = g[67]:int);
        g[241]:int = (d = g[66]:int);
        c = g + 256;
      }
      if (eqz(g_b) | i == 97) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
          c,
          b,
          d);
        97;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[243]:int = (b = g[64]:int);
        c = g[65]:int;
      }
      if (eqz(g_b) | i == 98) {
        writeString(a, b, c);
        98;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | i == 99) {
        writeString(a, 86618, 5);
        99;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_hi:
      if (eqz(g_b) | i == 100) {
        writeString(a, 86613, 5);
        100;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_t:
      h = select_if(h, g + 128, g_b);
      if (eqz(g_b) | i == 101) {
        reflect_toType(h, 87380, b);
        101;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[115]:int = (l = g[33]:int);
        g[114]:int = (h = g[32]:int);
        o = 0;
        m = 0;
        j = 0;
      }
      if (eqz(g_b) | i == 102) {
        interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu(
          l,
          h);
        let t25 = 102;
        if (g_b == 1) goto B_b;
        h = t25;
      }
      if (eqz(g_b)) {
        h = (h & 255) != 25;
        if (h) goto B_n;
      }
      if (eqz(g_b) | i == 103) {
        Len_1(b, c, d);
        let t26 = 103;
        if (g_b == 1) goto B_b;
        p = t26;
      }
      if (eqz(g_b)) {
        h = p > 178956970;
        if (h) goto B_s;
        h = p * 24;
      }
      if (eqz(g_b) | i == 104) {
        runtime_alloc(h);
        let t27 = 104;
        if (g_b == 1) goto B_b;
        m = t27;
      }
      if (eqz(g_b)) { g[116]:int = m }
      if (eqz(g_b) | i == 105) {
        runtime_alloc(44);
        let t28 = 105;
        if (g_b == 1) goto B_b;
        l = t28;
      }
      if (eqz(g_b)) {
        g[124]:int = l;
        g[125]:int = l;
        g[117]:int = l;
        h = (b[0]:ubyte & 31) != 25;
        if (h) goto B_r;
      }
      if (eqz(g_b) | i == 106) {
        key(b);
        let t29 = 106;
        if (g_b == 1) goto B_b;
        h = t29;
      }
      if (eqz(g_b)) {
        g[120]:int = h;
        j = eqz(h);
        if (j) goto B_q;
        q = h & 3;
        j = h[0];
      }
      if (eqz(g_b)) {
        if (q) goto B_cj;
        n = (j & 31) != 20;
      }
      if (eqz(g_b)) {
        if (n) goto B_ej;
        j = h;
      }
      loop L_gj {
        if (eqz(g_b) | i == 107) {
          isNamed(j);
          let t30 = 107;
          if (g_b == 1) goto B_b;
          n = t30;
        }
        if (eqz(g_b)) {
          n = n & 1;
          if (n) goto B_hj;
          n = 0;
          t = eqz(j);
          if (t) goto B_o;
          t = j & 3;
          if (t) goto B_hj;
          t = (j.a & 31) - 20;
          br_table[B_kj, B_hj, B_o, B_o, B_o, B_o, B_hj, ..B_o](t);
          label B_kj:
          j = j.c;
          continue L_gj;
        }
        label B_hj:
      }
      if (eqz(g_b)) {
        j = eqz(j.b);
        if (j) goto B_p;
        j = h[0];
        if (q) goto B_cj;
      }
      label B_ej:
      if (eqz(g_b)) {
        h = (j & 31) == 17;
        if (h) goto B_p;
      }
      label B_cj:
      if (eqz(g_b)) {
        h = i32_extend8_s(j);
        n = h >= 0;
        goto B_o;
      }
      label B_s:
      if (eqz(g_b) | i == 108) {
        runtime_slicePanic();
        108;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_r:
      if (eqz(g_b) | i == 109) {
        runtime_alloc(12);
        let t31 = 109;
        if (g_b == 1) goto B_b;
        a = t31;
      }
      if (eqz(g_b)) {
        g[118]:int = a;
        g[119]:int = a;
        a[8]:byte = (b = Kind(b));
        a[1]:int = 8;
        a[0]:int = 66832;
      }
      if (eqz(g_b) | i == 110) {
        runtime_panic(87404, a);
        110;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_q:
      if (eqz(g_b) | i == 111) {
        runtime_nilPanic();
        111;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_p:
      n = select_if(n, 0, g_b);
      label B_o:
      j = select_if(j, 0, g_b);
      if (eqz(g_b) | i == 112) {
        runtime_alloc(24);
        let t32 = 112;
        if (g_b == 1) goto B_b;
        h = t32;
      }
      if (eqz(g_b)) {
        (l + 40)[0]:int = 0;
        l[4]:long@4 = 0L;
        (l + 24)[0]:long@4 = 0L;
        q = l + 32;
        q[0] = 0L;
        l[0]:int = b;
        l[1]:int = c;
        l[8]:byte = d;
        l[3]:int = h;
        l[41]:byte = n;
        g[122]:int = h;
        g[123]:int = h;
        g[121]:int = h;
        b = g + 400;
        n = b + 8;
      }
      loop L_yj {
        if (eqz(g_b)) {
          g[126]:int = m;
          g[133]:int = (b = l[0]:int);
          g[127]:int = b;
        }
        if (eqz(g_b) | i == 113) {
          key(b);
          let t33 = 113;
          if (g_b == 1) goto B_b;
          d = t33;
        }
        if (eqz(g_b)) {
          g[129]:int = d;
          g[130]:int = d;
          g[128]:int = d;
          c = g + 120;
        }
        if (eqz(g_b) | i == 114) {
          internal_reflectlite_New(c, d);
          114;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          d = g[31]:int;
          l[4]:int = (c = g[30]:int);
          l[5]:int = d;
          l[24]:byte = 2;
          g[132]:int = d;
          g[131]:int = c;
        }
        if (eqz(g_b) | i == 115) {
          Elem(b);
          let t34 = 115;
          if (g_b == 1) goto B_b;
          b = t34;
        }
        if (eqz(g_b)) {
          g[134]:int = b;
          c = g + 112;
        }
        if (eqz(g_b) | i == 116) {
          internal_reflectlite_New(c, b);
          116;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          b = g[29]:int;
          l[7]:int = (d = g[28]:int);
          l[8]:int = b;
          l[36]:byte = 2;
          g[136]:int = b;
          g[135]:int = d;
          g[138]:int = (b = l[1]:int);
          g[137]:int = l[0]:int;
          if (l[8]:ubyte & 1) { b = b[0]:int }
          g[139]:int = b;
          g[140]:int = (c = l[3]:int);
          g[144]:int = (d = l[5]:int);
          g[143]:int = d;
          g[141]:int = d;
          g[142]:int = (h = l[8]:int);
        }
        if (eqz(g_b) | i == 117) {
          runtime_hashmapNext(b, c, d, h);
          let t35 = 117;
          if (g_b == 1) goto B_b;
          b = t35;
        }
        if (eqz(g_b)) { l[40]:byte = (b = b & 1) }
        if (eqz(g_b)) {
          if (b) goto B_mk;
          b = 0;
        }
        loop L_ok {
          if (eqz(g_b)) {
            c = j < (d = b + 20);
            if (c) goto B_lk;
          }
          if (eqz(g_b) | i == 118) {
            slices_insertionSortCmpFunc_internal_fmtsort_KeyValue(m, j, b, d);
            118;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = d;
            continue L_ok;
          }
        }
        label B_mk:
        if (eqz(g_b)) { b = eqz(l[41]:ubyte) }
        if (eqz(g_b)) {
          if (eqz(b)) {
            g[145]:int = (b = d[0]:int);
            g[146]:int = (d = d[1]:int);
            q = 2;
            c = 1;
            goto B_tk;
          }
          g[148]:int = (b = l[5]:int);
          g[147]:int = (d = l[4]:int);
          h = l[24]:ubyte;
          c = g + 96;
        }
        if (eqz(g_b) | i == 119) {
          Elem_1(c, d, b, h);
          119;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          c = l[40]:ubyte;
          q = g[104]:ubyte;
          d = g[25]:int;
          b = g[24]:int;
        }
        label B_tk:
        if (eqz(g_b)) {
          g[155]:int = b;
          g[167]:int = b;
          g[153]:int = b;
          g[151]:int = b;
          g[149]:int = b;
          g[168]:int = d;
          g[156]:int = d;
          g[154]:int = d;
          g[152]:int = d;
          g[150]:int = d;
          if (eqz(c & 1)) goto B_e;
          g[158]:int = (c = l[8]:int);
          g[157]:int = (h = l[7]:int);
          w = l[36]:ubyte;
          t = g + 80;
        }
        if (eqz(g_b) | i == 120) {
          Elem_1(t, h, c, w);
          120;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          t = g[88]:ubyte;
          c = g[21]:int;
          h = g[20]:int;
          w = n + 8;
          w[0] = 0L;
          n[0] = 0L;
          g[101]:int = d;
          g[100]:int = b;
          g[169]:int = h;
          g[165]:int = h;
          g[163]:int = h;
          g[161]:int = h;
          g[170]:int = c;
          g[159]:int = h;
          g[166]:int = c;
          g[164]:int = c;
          g[162]:int = c;
          g[160]:int = c;
          g[103]:int = h;
          g[420]:byte = t;
          g[104]:int = c;
          g[408]:byte = q;
          c = g + 400;
          b = g - -64;
        }
        if (eqz(g_b) | i == 121) {
          runtime_sliceAppend(b, m, c, j, p, 1, 24);
          121;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[171]:int = (m = g[16]:int);
          p = g[18]:int;
          j = g[17]:int;
          continue L_yj;
        }
        label B_lk:
      }
      if (eqz(g_b) | i == 122) {
        slices_insertionSortCmpFunc_internal_fmtsort_KeyValue(m, j, b, j);
        122;
        if (g_b == 1) goto B_b;
      }
      l = select_if(l, 20, g_b);
      loop L_el {
        if (eqz(g_b)) {
          b = j <= l;
          if (b) goto B_n;
          h = l << 1;
          b = 0;
        }
        loop L_gl {
          if (eqz(g_b)) {
            c = b + l;
            p = j < (d = b + h);
            if (p) goto B_hl;
          }
          if (eqz(g_b) | i == 123) {
            slices_symMergeCmpFunc_internal_fmtsort_KeyValue(m, j, b, c, d);
            123;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = d;
            continue L_gl;
          }
          label B_hl:
        }
        if (eqz(g_b)) {
          l = h;
          d = c >= j;
          if (d) continue L_el;
        }
        if (eqz(g_b) | i == 124) {
          slices_symMergeCmpFunc_internal_fmtsort_KeyValue(m, j, b, c, j);
          124;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) continue L_el;
      }
      label B_n:
      if (eqz(g_b)) {
        g[172]:int = m;
        n = select_if(j, 0, b = j > 0);
        h = f + 1;
      }
      loop L_pl {
        if (eqz(g_b)) {
          b = n == o;
          if (b) goto B_ql;
          if (j == o) goto B_ol;
          f = (m + 20)[0]:ubyte;
          b = (m + 12)[0]:int;
          d = (m + 16)[0]:int;
          p = m[8]:ubyte;
          c = m[0]:int;
          g[178]:int = (l = m[1]:int);
          g[173]:int = c;
          g[177]:int = c;
          g[176]:int = d;
          g[175]:int = b;
          g[174]:int = l;
          q = o - 1 > 2147483646;
        }
        if (eqz(g_b)) {
          if (q) goto B_sl;
          q = eqz(a[44]:ubyte);
        }
        if (select_if(g_b, 1, q)) {
          if (eqz(g_b) | i == 125) {
            writeString(a, 86623, 2);
            125;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_sl;
        }
        if (eqz(g_b) | i == 126) {
          writeByte(a, 32);
          126;
          if (g_b == 1) goto B_b;
        }
        label B_sl:
        if (eqz(g_b) | i == 127) {
          printValue(a, c, l, p, e, h);
          127;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | i == 128) {
          writeByte(a, 58);
          128;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g[180]:int = d;
          g[179]:int = b;
        }
        if (eqz(g_b) | i == 129) {
          printValue(a, b, d, f, e, h);
          129;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          m = m + 24;
          o = o + 1;
          continue L_pl;
        }
        label B_ql:
      }
      if (select_if(g_b, 1, if (g_b) { b } else { eqz(a[44]:ubyte) })) {
        if (eqz(g_b) | i == 130) {
          writeByte(a, 125);
          130;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
      }
      if (eqz(g_b) | i == 131) {
        writeByte(a, 93);
        131;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_f;
      label B_ol:
      if (eqz(g_b) | i == 132) {
        runtime_lookupPanic();
        132;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      if (eqz(g_b)) {
        90044[0]:int = x;
        stack_pointer = g + 1120;
        return ;
      }
      label B_e:
      if (eqz(g_b) | i == 133) {
        runtime_panic(86928, 66888);
        133;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = k;
  g_c[0]:int = g_c[0]:int + 4;
  k = g_c[0]:int;
  k[0]:int = a;
  k[1]:int = b;
  k[2]:int = c;
  k[3]:int = d;
  k[4]:int = e;
  k[5]:int = f;
  k[6]:int = g;
  k[7]:int = h;
  k[8]:int = j;
  k[9]:int = l;
  k[10]:int = m;
  k[11]:int = n;
  k[12]:int = o;
  k[13]:int = p;
  k[14]:int = q;
  k[15]:double@4 = r;
  k[17]:int = t;
  k[18]:long@4 = s;
  k[20]:double@4 = u;
  k[22]:int = w;
  k[23]:int = x;
  g_c[0]:int = g_c[0]:int + 96;
}

function fmt0x64(a:int, b:long, c:int) { // func204
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
          fmtInteger(c, b, 16, 0, 118, 86516);
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

function fmtBool(a:int, b:{ a:int, b:int }, c:{ a:int, b:int }) { // func205
  var d:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    c = g_c[0]:int;
    a = c.a;
    c = c.b;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        var e:int = select_if(0, c - 116, g_b);
        if (eqz(g_b)) {
          br_table[B_f, B_d, B_f, ..B_d](e)
          label B_f:
          c = a + 32;
          a = eqz(b & 1);
        }
        if (select_if(g_b, 1, a)) {
          if (eqz(g_b) | eqz(d)) {
            padString(c, 86408, 4);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { return  }
        }
        if (eqz(g_b) | d == 1) {
          padString(c, 86412, 5);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_d:
        if (eqz(g_b) | d == 2) {
          badVerb(a, c);
          2;
          if (g_b == 1) goto B_b;
        }
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

function fmtBytes(a:int, b:int, c:int, d:int, e:int, f:int, g:{ a:int, b:int, c:int }) { // func206
  var j:int;
  var m:int;
  var k:int;
  var i:int;
  var l:long;
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 48;
    h = g_c[0]:int;
    a = h[0]:int;
    c = h[2]:int;
    d = h[3]:int;
    e = h[4]:int;
    f = h[5]:int;
    g = h[6]:int;
    j = h[7]:int;
    k = h[8]:int;
    l = h[9]:long@4;
    m = h[11]:int;
    b = h[1]:int;
  }
  h = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        j = stack_pointer - 48;
        stack_pointer = j;
        (j + 32)[0]:long = 0L;
        (j + 40)[0]:int = 0;
        j[3]:long = 0L;
        j[5]:int = 5;
        m = 90044[0]:int;
        90044[0]:int = j + 16;
        j[4]:int = m;
        k = e - 113;
      }
      if (eqz(g_b)) {
        br_table[B_k, B_j, B_n, B_j, B_j, B_p, B_j, B_m, ..B_q](k)
        label B_q:
        if (e == 88) goto B_l;
        k = e != 100;
        if (k) goto B_j;
        label B_p:
        d = eqz(a[44]:ubyte);
      }
      if (select_if(g_b, 1, d)) {
        if (eqz(g_b) | eqz(i)) {
          writeString(a, f, g);
          0;
          if (g_b == 1) goto B_b;
        }
        if (select_if(g_b, 1, b)) {
          if (eqz(g_b) | i == 1) {
            writeString(a, 86618, 5);
            1;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_e;
        }
        if (eqz(g_b) | i == 2) {
          writeByte(a, 123);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = 0;
          e = select_if(c, 0, d = c > 0);
        }
        loop L_x {
          if (eqz(g_b)) {
            d = e == g;
            if (d) goto B_y;
            d = c == g;
            if (d) goto B_i;
            l = (b + g)[0]:ubyte;
            d = g - 1 > 2147483646;
          }
          if (select_if(select_if(g_b, 1, d), 0, eqz(g_b) | i == 3)) {
            writeString(a, 86623, 2);
            3;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b) | i == 4) {
            fmt0x64(a, l, 1);
            4;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            g = g + 1;
            continue L_x;
          }
          label B_y:
        }
        if (eqz(g_b) | i == 5) {
          writeByte(a, 125);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
      }
      if (eqz(g_b) | i == 6) {
        writeByte(a, 91);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        f = select_if(c, 0, c > 0);
        g = 0;
        d = a + 32;
      }
      loop L_ga {
        if (eqz(g_b)) {
          if (f == g) goto B_ha;
          if (c == g) goto B_i;
          l = (b + g)[0]:ubyte;
          k = g - 1 > 2147483646;
        }
        if (select_if(select_if(g_b, 1, k), 0, eqz(g_b) | i == 7)) {
          writeByte(a, 32);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | i == 8) {
          fmtInteger(d, l, 10, 0, e, 86516);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          g = g + 1;
          continue L_ga;
        }
        label B_ha:
      }
      if (eqz(g_b) | i == 9) {
        writeByte(a, 93);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_n:
      if (eqz(g_b)) {
        if (eqz(a[37]:ubyte)) goto B_g;
        e = a[13]:int - 1;
        g = 0;
        loop L_oa {
          if (c <= g) goto B_g;
          if (e < 0) {
            c = d >= g;
            if (c) goto B_f;
            goto B_h;
          }
          if (c <= g) goto B_i;
          f = 1;
          var n:{ a:byte, b:ubyte, c:byte, d:byte } = b + g;
          k = n.a;
          if (k >= 0) goto B_qa;
          if (c > d) goto B_h;
          h = c - g;
          if (h <= 0) {
            f = 0;
            goto B_qa;
          }
          k = k & 255;
          var o:int = k - 245;
          if (o < -51) goto B_qa;
          if (h < ((k = (k + 65552)[0]:ubyte) & 7)) goto B_qa;
          if (h == 1) goto B_i;
          var p:int = n.b;
          if (p < ((k = k >> 3 & 30) + 65808)[0]:ubyte) goto B_qa;
          if (p > (k + 65809)[0]:ubyte) goto B_qa;
          if (o < -21) {
            f = 2;
            goto B_qa;
          }
          if (h < 3) goto B_i;
          if (n.c > -65) goto B_qa;
          if (o < -5) {
            f = 3;
            goto B_qa;
          }
          if (h == 3) goto B_i;
          f = select_if(1, 4, n.d > -65);
          label B_qa:
          e = e - 1;
          g = f + g;
          continue L_oa;
        }
        unreachable;
      }
      label B_m:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 10) {
        fmtBx(a, b, c, 86516);
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_l:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 11) {
        fmtBx(a, b, c, 86533);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_k:
      d = select_if(d, j + 8, g_b);
      if (eqz(g_b) | i == 12) {
        runtime_stringFromBytes(d, b, c);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        j[6]:int = (g = j[2]:int);
        b = j[3]:int;
        a = a + 32;
      }
      if (eqz(g_b) | i == 13) {
        fmtQ(a, g, b);
        13;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_j:
      if (eqz(g_b) | i == 14) {
        runtime_alloc(12);
        let t0 = 14;
        if (g_b == 1) goto B_b;
        g = t0;
      }
      if (eqz(g_b)) {
        g.c = d;
        g.b = c;
        g.a = b;
        j[7]:int = g;
        j[8]:int = g;
        j[10]:int = g;
        j[9]:int = 85640;
      }
      if (eqz(g_b) | i == 15) {
        printValue(a, 85640, g, 2, e, 0);
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_i:
      if (eqz(g_b) | i == 16) {
        runtime_lookupPanic();
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_h:
      if (eqz(g_b) | i == 17) {
        runtime_slicePanic();
        17;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      g = select_if(g, c, g_b);
      label B_f:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 18) {
        pad(a, b, g, d);
        18;
        if (g_b == 1) goto B_b;
      }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = m;
        stack_pointer = j + 48;
      }
      return ;
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
  h[7]:int = j;
  h[8]:int = k;
  h[9]:long@4 = l;
  h[11]:int = m;
  g_c[0]:int = g_c[0]:int + 48;
}

function fmtComplex(a:int, b:double, c:double, d:int, e:int) { // func207
  var g:int;
  var h:int;
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 32;
    g = g_c[0]:int;
    a = g[0]:int;
    b = g[1]:double@4;
    c = g[3]:double@4;
    d = g[5]:int;
    e = g[6]:int;
    g = g[7]:int;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = e - 88;
        h = g > 15;
      }
      if (eqz(g_b)) {
        if (eqz(select_if(h, 1, 1 << g & 58369)) | e - 69 < 3) goto B_g;
        br_table[B_g, B_e, B_g, ..B_e](e - 118);
        label B_g:
        g = a[39]:ubyte;
      }
      if (eqz(g_b) | eqz(f)) {
        writeByte(a, 40);
        0;
        if (g_b == 1) goto B_b;
      }
      d = select_if(d, d >> 1, g_b);
      if (eqz(g_b) | f == 1) {
        fmtFloat_1(a, b, d, e);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { a[39]:byte = 1 }
      if (eqz(g_b) | f == 2) {
        fmtFloat_1(a, c, d, e);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b) | f == 3) {
        writeString(a, 86509, 2);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a[39]:byte = g & 1;
        return ;
      }
      label B_e:
      if (eqz(g_b) | f == 4) {
        badVerb(a, e);
        4;
        if (g_b == 1) goto B_b;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f[0]:int = a;
  f[1]:double@4 = b;
  f[3]:double@4 = c;
  f[5]:int = d;
  f[6]:int = e;
  f[7]:int = g;
  g_c[0]:int = g_c[0]:int + 32;
}

function fmtFloat_1(a:int, b:double, c:int, d:int) { // func208
  var e:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 20;
    d = g_c[0]:int;
    a = d[0]:int;
    b = d[1]:double@4;
    c = d[3]:int;
    d = d[4]:int;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        var f:int = select_if(0, d - 98, g_b);
        if (eqz(g_b)) {
          br_table[B_d, B_e, B_e, B_h, B_h, B_d, ..B_j](f)
          label B_j:
          br_table[B_h, B_g, B_d, ..B_k](d - 69)
          label B_k:
          br_table[B_l, B_e, B_d, ..B_f](d - 118)
          label B_l:
          a = a + 32;
        }
        if (eqz(g_b) | eqz(e)) {
          fmtFloat(a, b, c, 103, -1);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_h:
        a = select_if(a, a + 32, g_b);
        if (eqz(g_b) | e == 1) {
          fmtFloat(a, b, c, d, 6);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_g:
        a = select_if(a, a + 32, g_b);
        if (eqz(g_b) | e == 2) {
          fmtFloat(a, b, c, 102, 6);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_f:
        if (eqz(g_b) & d == 88) goto B_d;
        label B_e:
        if (eqz(g_b) | e == 3) {
          badVerb(a, d);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_d:
        a = select_if(a, a + 32, g_b);
        if (eqz(g_b) | e == 4) {
          fmtFloat(a, b, c, d, -1);
          4;
          if (g_b == 1) goto B_b;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e[0]:int = a;
  e[1]:double@4 = b;
  e[3]:int = c;
  e[4]:int = d;
  g_c[0]:int = g_c[0]:int + 20;
}

function fmtInteger_1(a:int, b:long, c:int, d:byte_ptr) { // func209
  var g:int;
  var m:int;
  var f:int;
  var i:int;
  var h:byte_ptr;
  var l:int;
  var j:int;
  var k:int;
  var e:int;
  var n:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 52;
    e = g_c[0]:int;
    a = e[0]:int;
    c = e[3]:int;
    d = e[4]:int;
    f = e[5]:int;
    g = e[6]:int;
    h = e[7]:int;
    j = e[8]:int;
    k = e[9]:int;
    l = e[10]:int;
    m = e[11]:int;
    n = e[12]:int;
    b = e[1]:long@4;
  }
  e = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        i = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = stack_pointer + -64;
        stack_pointer = g;
        (g + 48)[0]:long = 0L;
        (g + 56)[0]:long = 0L;
        g[5]:long = 0L;
        g[9]:int = 6;
        m = 90044[0]:int;
        90044[0]:int = g + 32;
        g[8]:int = m;
        f = d - 111;
      }
      if (eqz(g_b)) {
        br_table[B_f, B_i, B_l, B_i, B_i, B_i, B_i, B_s, B_i, B_o, ..B_t](f)
        label B_t:
        f = d - 98;
        br_table[B_p, B_m, B_q, ..B_u](f);
        label B_u:
        f = d - 85;
        br_table[B_k, B_i, B_i, B_n, ..B_j](f);
        label B_s:
        d = eqz(a[44]:ubyte);
      }
      if (eqz(g_b)) {
        if (d) goto B_v;
        d = c & 1;
        if (d) goto B_v;
      }
      if (eqz(g_b) | eqz(i)) {
        fmt0x64(a, b, 1);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_v:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 1) {
        fmtInteger(a, b, 10, c, 118, 86516);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_q:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 2) {
        fmtInteger(a, b, 10, c, 100, 86516);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_p:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 3) {
        fmtInteger(a, b, 2, c, 98, 86516);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_o:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 4) {
        fmtInteger(a, b, 16, c, 120, 86516);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_n:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 5) {
        fmtInteger(a, b, 16, c, 88, 86533);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_m:
      if (eqz(g_b)) {
        d = select_if(65533, i32_wrap_i64(b), f = b > 1114111L);
        c = a + 56;
      }
      if (eqz(g_b) | i == 6) {
        unicode_utf8_AppendRune(g, c, 0, 68, d);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        g[10]:int = (d = g[0]:int);
        c = g[1]:int;
        f = g[2]:int;
        a = a + 32;
      }
      if (eqz(g_b) | i == 7) {
        pad(a, d, c, f);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_l:
      if (eqz(g_b)) {
        f = a + 56;
        h = select_if(65533, i32_wrap_i64(b), b > 1114111L);
        d = a[39]:ubyte;
        c = g + 16;
      }
      if (eqz(g_b) | i == 8) {
        strconv_appendQuotedRuneWith(c, f, h, d);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        (g + 32 + select_if(12, 16, d))[0]:int = (d = g[4]:int);
        g[13]:int = d;
        c = g[5]:int;
        f = g[6]:int;
        a = a + 32;
      }
      if (eqz(g_b) | i == 9) {
        pad(a, d, c, f);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_k:
      if (eqz(g_b)) {
        j = a + 56;
        c = eqz(a[37]:ubyte);
        if (c) goto B_h;
        l = a[13]:int;
        c = l < 5;
        if (c) goto B_h;
        c = l + 9;
        d = c >= 69;
        if (eqz(d)) {
          c = 68;
          goto B_g;
        }
      }
      if (eqz(g_b) | i == 10) {
        runtime_alloc(c);
        let t0 = 10;
        if (g_b == 1) goto B_b;
        j = t0;
      }
      if (eqz(g_b)) {
        g[14]:int = j;
        goto B_g;
      }
      label B_j:
      if (eqz(g_b)) {
        f = d == 79;
        if (f) goto B_f;
      }
      label B_i:
      if (eqz(g_b) | i == 11) {
        badVerb(a, d);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_h:
      if (eqz(g_b)) {
        l = 4;
        c = 68;
      }
      label B_g:
      if (eqz(g_b)) {
        g[15]:int = j;
        f = c;
        d = eqz(a[40]:ubyte);
      }
      if (eqz(g_b)) {
        if (d) goto B_va;
        f = c;
        d = b > 1114111L;
        if (d) goto B_va;
        h = i32_wrap_i64(b);
      }
      if (eqz(g_b) | i == 12) {
        strconv_IsPrint(h);
        let t1 = 12;
        if (g_b == 1) goto B_b;
        d = t1;
      }
      if (eqz(g_b)) {
        d = eqz(d & 1);
        if (d) goto B_va;
        (j + (f = c - 1))[0]:byte = 39;
        d = {
              -1;
              if (b < 128L) goto B_za;
              -2;
              if (b < 2048L) goto B_za;
              1;
              if ((h & 2095104) == 55296) goto B_za;
              select_if(-3, -4, b < 65536L);
              label B_za:
            } +
            f;
        if (d > c) goto B_ua;
        k = c - d;
        f = d + j;
      }
      if (eqz(g_b) | i == 13) {
        unicode_utf8_EncodeRune(f, k, h);
        let t2 = 13;
        if (g_b == 1) goto B_b;
        f = t2;
      }
      if (eqz(g_b)) {
        h = d - 1;
        if (h >= c) goto B_ta;
        (h + j)[0]:byte = 39;
        f = d - 2;
        d = f >= c;
        if (d) goto B_ta;
        d = f + j;
        d[0] = 32;
      }
      label B_va:
      if (eqz(g_b)) {
        n = a + 32;
        e = j + (k = f - 1);
        d = 0;
        loop L_db {
          h = d + k;
          if (b < 16L) goto B_eb;
          if (c <= h) goto B_ta;
          (d + e)[0]:byte = ((i32_wrap_i64(b) & 15) + 86533)[0]:ubyte;
          d = d - 1;
          b = b >> 4L;
          continue L_db;
          label B_eb:
        }
        if (c <= h) goto B_ta;
        k = l - 1;
        l = f + j;
        e = l - 3;
        h = (i32_wrap_i64(b) + 86533)[0]:ubyte;
        loop L_gb {
          (d + e + 2)[0]:byte = h;
          if (d + k <= 0) goto B_fb;
          h = 48;
          if (f + (d = d - 1) - 1 < c) continue L_gb;
        }
        goto B_ta;
        label B_fb:
        h = d + f;
        if (h - 2 >= c) goto B_ta;
        (j + (h = h - 3) + 1)[0]:byte = 43;
        if (c <= h) goto B_ta;
        h = d + l - 3;
        h[0] = 85;
        k = a[42]:ubyte;
        a[42]:byte = 0;
        c = c - f - d;
        d = c + 3;
      }
      if (eqz(g_b) | i == 14) {
        pad(n, h, d, d);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a[42]:byte = k & 1;
        goto B_e;
      }
      label B_ua:
      if (eqz(g_b) | i == 15) {
        runtime_slicePanic();
        15;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_ta:
      if (eqz(g_b) | i == 16) {
        runtime_lookupPanic();
        16;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_f:
      a = select_if(a, a + 32, g_b);
      if (eqz(g_b) | i == 17) {
        fmtInteger(a, b, 8, c, d, 86516);
        17;
        if (g_b == 1) goto B_b;
      }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = m;
        stack_pointer = g - -64;
      }
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
  e[5]:int = f;
  e[6]:int = g;
  e[7]:int = h;
  e[8]:int = j;
  e[9]:int = k;
  e[10]:int = l;
  e[11]:int = m;
  e[12]:int = n;
  g_c[0]:int = g_c[0]:int + 52;
}

function fmtPointer(a:ubyte_ptr, b:ubyte_ptr, c:int, d:int, e:int) { // func210
  var f:int;
  var i:int;
  var g:int;
  var h:int;
  var j:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    i = g_c[0]:int;
    a = i[0]:int;
    b = i[1]:int;
    c = i[2]:int;
    d = i[3]:int;
    e = i[4]:int;
    f = i[5]:int;
    j = i[6]:long@4;
    i = i[8]:int;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        h = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = stack_pointer - 48;
        stack_pointer = f;
        (f + 44)[0]:int = 0;
        f[9]:long@4 = 0L;
        f[7]:int = 4;
        i = 90044[0]:int;
        90044[0]:int = f + 24;
        f[6]:int = i;
        g = eqz(b);
      }
      if (eqz(g_b)) {
        if (g) goto B_h;
        if (eqz(b & 3)) {
          g = b[0] & 31;
          if (g > 25 | eqz(1 << g & 57409536)) goto B_h;
        }
      }
      if (eqz(g_b) | eqz(h)) {
        UnsafePointer(b, c, d);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        d = t0;
      }
      if (eqz(g_b)) {
        f[8]:int = d;
        c = e - 111;
      }
      if (eqz(g_b)) {
        br_table[B_g, B_n, B_h, B_h, B_h, B_h, B_h, B_p, B_h, B_g, ..B_q](c)
        label B_q:
        br_table[B_g, B_h, B_g, ..B_m](e - 98);
        label B_p:
        c = eqz(a[44]);
      }
      if (select_if(g_b, 1, c)) {
        if (eqz(g_b) | h == 1) {
          writeByte(a, 40);
          1;
          if (g_b == 1) goto B_b;
        }
        c = select_if(c, f + 16, g_b);
        if (eqz(g_b) | h == 2) {
          reflect_toType(c, 87380, b);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[10]:int = (b = f[5]:int);
          f[9]:int = (e = f[4]:int);
          c = f + 8;
        }
        if (eqz(g_b) | h == 3) {
          interface_Align_func_AssignableTo_func_named_reflect_Type_bool_Bits_func_CanSeq_func_bool_CanSeq2_fu_1(
            c,
            b,
            e);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          f[11]:int = (b = f[2]:int);
          c = f[3]:int;
        }
        if (eqz(g_b) | h == 4) {
          writeString(a, b, c);
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | h == 5) {
          writeString(a, 86511, 2);
          5;
          if (g_b == 1) goto B_b;
        }
        if (select_if(g_b, 1, d)) {
          if (eqz(g_b) | h == 6) {
            writeString(a, 86513, 3);
            6;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_f;
        }
        j = select_if(j, i64_extend_i32_u(d), g_b);
        if (eqz(g_b) | h == 7) {
          fmt0x64(a, j, 1);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_f;
      }
      if (eqz(g_b)) {
        if (d) goto B_ca;
        a = a + 32;
      }
      if (eqz(g_b) | h == 8) {
        padString(a, 86613, 5);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_ca:
      if (eqz(g_b)) {
        j = i64_extend_i32_u(d);
        b = a[40] ^ 1;
      }
      if (eqz(g_b) | h == 9) {
        fmt0x64(a, j, b);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_n:
      if (eqz(g_b)) {
        j = i64_extend_i32_u(d);
        b = a[40] ^ 1;
      }
      if (eqz(g_b) | h == 10) {
        fmt0x64(a, j, b);
        10;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_m:
      if (eqz(g_b) & e == 88) goto B_g;
      label B_h:
      if (eqz(g_b) | h == 11) {
        badVerb(a, e);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_g:
      j = select_if(j, i64_extend_i32_u(d), g_b);
      if (eqz(g_b) | h == 12) {
        fmtInteger_1(a, j, 0, e);
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_f:
      if (eqz(g_b) | h == 13) {
        writeByte(a, 41);
        13;
        if (g_b == 1) goto B_b;
      }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = i;
        stack_pointer = f + 48;
      }
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
  g[5]:int = f;
  g[6]:long@4 = j;
  g[8]:int = i;
  g_c[0]:int = g_c[0]:int + 36;
}

function fmtString(a:ubyte_ptr, b:int, c:int, d:{ a:int, b:int, c:int, d:int }) { // func211
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
        var f:int = select_if(0, d - 113, g_b);
        if (eqz(g_b)) {
          br_table[B_g, B_e, B_i, B_e, B_e, B_k, B_e, B_h, ..B_f](f)
          label B_k:
          d = a + 32;
          a = eqz(a[44]);
        }
        if (select_if(g_b, 1, a)) {
          if (eqz(g_b) | eqz(e)) {
            fmtQ(d, b, c);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { return  }
        }
        if (eqz(g_b) | e == 1) {
          fmtS(d, b, c);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_i:
        a = select_if(a, a + 32, g_b);
        if (eqz(g_b) | e == 2) {
          fmtS(a, b, c);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_h:
        a = select_if(a, a + 32, g_b);
        if (eqz(g_b) | e == 3) {
          fmtSx(a, b, c, 86516);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_g:
        a = select_if(a, a + 32, g_b);
        if (eqz(g_b) | e == 4) {
          fmtQ(a, b, c);
          4;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_f:
        if (eqz(g_b) & d == 88) goto B_d;
        label B_e:
        if (eqz(g_b) | e == 5) {
          badVerb(a, d);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_d:
        a = select_if(a, a + 32, g_b);
        if (eqz(g_b) | e == 6) {
          fmtSx(a, b, c, 86533);
          6;
          if (g_b == 1) goto B_b;
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

function handleMethods(a:int, b:int):int { // func212
  var c:int;
  var e:int;
  var d:int;
  var g:int;
  var f:{ a:long, b:long, c:int }
  var j:long;
  var i:long;
  var h:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 44;
    h = g_c[0]:int;
    a = h[0]:int;
    b = h[1]:int;
    c = h[2]:int;
    d = h[3]:int;
    e = h[4]:int;
    f = h[5]:int;
    i = h[6]:long@4;
    j = h[8]:long@4;
    h = h[10]:int;
  }
  g = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        g = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer - 224;
        stack_pointer = c;
        c[35]:int = 20;
        memory_fill(c + 144, 0, 80);
        c[34]:int = (h = 90044[0]:int);
        90044[0]:int = c + 136;
        e = a[127]:ubyte;
        d = 0;
      }
      if (eqz(g_b)) {
        if (e) goto B_e;
        e = a[3]:int;
        d = b == 119;
      }
      if (eqz(g_b)) {
        if (eqz(d)) {
          f = a[4]:int;
          goto B_g;
        }
        c[36]:int = e;
        c[37]:int = (f = a[4]:int);
        d = 1;
        b = eqz(interface_Error_func_string_typeassert(e) & 1);
        if (eqz(b)) {
          b = 118;
          if (a[128]:ubyte) goto B_g;
        }
      }
      if (eqz(g_b) | eqz(g)) {
        badVerb(a, 119);
        0;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) goto B_e;
      label B_g:
      if (eqz(g_b)) {
        c[39]:int = f;
        c[38]:int = e;
        d = eqz(a[44]:ubyte);
      }
      if (eqz(g_b)) {
        if (d) goto B_q;
        c[44]:int = f;
        c[41]:int = f;
        c[40]:int = e;
        d = e == 87516;
        if (eqz(d)) {
          d = 0;
          if (e != 87312) goto B_e;
        }
        c[43]:int = f;
        c[42]:int = e;
        c[17]:int = 8;
        c[16]:int = 86550;
        c[15]:int = b;
        c[14]:int = f;
        c[13]:int = e;
        c[5]:long = 0L;
        c[12]:int = a;
        b = e != 87516;
      }
      if (eqz(g_b)) {
        if (b) goto B_u;
        b = eqz(f);
        if (b) goto B_p;
        i = f.b;
        j = f.a;
        c[45]:int = (d = f.c);
        b = c + 8;
      }
      if (eqz(g_b) | g == 1) {
        GoString(b, j, i, d);
        1;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[46]:int = (d = c[2]:int);
        e = c[3]:int;
        goto B_t;
      }
      label B_u:
      if (eqz(g_b)) {
        b = e != 87312;
        if (b) goto B_p;
        i = f.a;
        j = f.b;
        d = f.c;
        b = c + 16;
      }
      if (eqz(g_b) | g == 2) {
        GoString(b, i, j, d);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e = c[5]:int;
        d = c[4]:int;
      }
      label B_t:
      if (eqz(g_b)) {
        c[47]:int = d;
        a = a + 32;
      }
      if (eqz(g_b) | g == 3) {
        fmtS(a, d, e);
        3;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a = c + 40;
        loop L_ea {
          if (eqz(a)) goto B_m;
          a = a[1]:int;
          continue L_ea;
        }
        unreachable;
      }
      label B_q:
      if (eqz(g_b)) {
        d = b - 113;
        if (d > 7) goto B_o;
        d = eqz(1 << d & 165);
        if (d) goto B_o;
        goto B_n;
      }
      label B_p:
      if (eqz(g_b) | g == 4) {
        runtime_nilPanic();
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_o:
      if (eqz(g_b)) {
        d = 0;
        if (b != 88) goto B_e;
      }
      label B_n:
      if (eqz(g_b)) {
        c[49]:int = f;
        c[48]:int = e;
        d = eqz(interface_Error_func_string_typeassert(e) & 1);
      }
      if (eqz(g_b)) {
        if (d) goto B_ka;
        c[51]:int = f;
        c[50]:int = e;
        c[25]:int = 5;
        c[24]:int = 86558;
        c[23]:int = b;
        c[22]:int = f;
        c[21]:int = e;
        c[20]:int = a;
        c[9]:long = 0L;
        d = c + 24;
      }
      if (eqz(g_b) | g == 5) {
        interface_Error_func_string_Error_invoke(d, f, e);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[52]:int = (d = c[6]:int);
        e = c[7]:int;
      }
      if (eqz(g_b) | g == 6) {
        fmtString(a, d, e, b);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a = c + 72;
        loop L_qa {
          if (eqz(a)) goto B_m;
          a = a[1]:int;
          continue L_qa;
        }
        unreachable;
      }
      label B_ka:
      if (eqz(g_b)) {
        d = 0;
        if (eqz(interface_String_func_string_typeassert(e) & 1)) goto B_e;
        c[54]:int = f;
        c[53]:int = e;
        c[33]:int = 6;
        c[32]:int = 86563;
        c[31]:int = b;
        c[30]:int = f;
        c[29]:int = e;
        c[28]:int = a;
        c[13]:long = 0L;
        d = c + 32;
      }
      if (eqz(g_b) | g == 7) {
        interface_String_func_string_String_invoke(d, f, e);
        7;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c[55]:int = (d = c[8]:int);
        e = c[9]:int;
      }
      if (eqz(g_b) | g == 8) {
        fmtString(a, d, e, b);
        8;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        a = c + 104;
        loop L_wa {
          if (eqz(a)) goto B_m;
          a = a[1]:int;
          continue L_wa;
        }
        unreachable;
      }
      label B_m:
      d = select_if(d, 1, g_b);
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = h;
        stack_pointer = c + 224;
        return d;
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
  g[6]:long@4 = i;
  g[8]:long@4 = j;
  g[10]:int = h;
  g_c[0]:int = g_c[0]:int + 44;
  return 0;
}

function fmt_intFromArg(a:{ a:int, b:byte }, b:{ a:int, b:int }, c:int) { // func213
  var g:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }
  var d:int;
  var e:ubyte_ptr;
  var h:int;
  var j:int;
  var i:long;
  var f:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 36;
    d = g_c[0]:int;
    a = d[0]:int;
    b = d[1]:int;
    c = d[2]:int;
    e = d[3]:int;
    f = d[4]:int;
    g = d[5]:int;
    i = d[6]:long@4;
    d = d[8]:int;
  }
  h = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        j = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        g = stack_pointer - 32;
        stack_pointer = g;
        g.b = 6;
        d = 90044[0]:int;
        90044[0]:int = g;
        g.a = d;
        e = 0;
        f = 0;
        c = c > 0;
      }
      if (eqz(g_b)) {
        if (c) goto B_e;
        g.c = (e = b.a);
        g.d = (c = b.b);
        b = e != 86204;
      }
      if (eqz(g_b)) {
        if (eqz(b)) {
          b = 1;
          f = c;
          goto B_g;
        }
        g.h = c;
        g.g = e;
        g.f = c;
        g.e = e;
        f = 0;
        if (eqz(e)) {
          b = 0;
          goto B_g;
        }
        b = 0;
        if (e & 3) goto B_g;
        h = (e[0] & 31) - 2;
      }
      if (eqz(g_b)) {
        br_table[B_m, B_m, B_m, B_m, B_m, B_k, B_k, B_k, B_k, B_k, B_k, ..B_g](
          h)
        label B_m:
      }
      if (eqz(g_b) | eqz(j)) {
        Int(e, c, 2);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        i = t0;
      }
      if (eqz(g_b)) {
        f = select_if(i32_wrap_i64(i), 0, b = i + 2147483648L < 4294967296L);
        goto B_g;
      }
      label B_k:
      if (eqz(g_b) | j == 1) {
        Uint(e, c, 2);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        i = t1;
      }
      if (eqz(g_b)) { f = select_if(i32_wrap_i64(i), 0, b = i < 2147483648L) }
      label B_g:
      if (eqz(g_b)) {
        e = select_if(f, 0, c = f + 1000000 < 2000001);
        f = b & c;
      }
      label B_e:
      if (eqz(g_b)) {
        90044[0]:int = d;
        a.b = f;
        a.a = e;
        stack_pointer = g + 32;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = h;
  g_c[0]:int = g_c[0]:int + 4;
  h = g_c[0]:int;
  h[0]:int = a;
  h[1]:int = b;
  h[2]:int = c;
  h[3]:int = e;
  h[4]:int = f;
  h[5]:int = g;
  h[6]:long@4 = i;
  h[8]:int = d;
  g_c[0]:int = g_c[0]:int + 36;
}

export function asyncify_start_unwind(a:int) { // func214
  g_b = 1;
  g_c = a;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_stop_unwind() { // func215
  g_b = 0;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_start_rewind(a:int) { // func216
  g_b = 2;
  g_c = a;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_stop_rewind() { // func217
  g_b = 0;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_get_state():int { // func218
  return g_b
}

