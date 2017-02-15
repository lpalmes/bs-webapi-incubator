type t = DomRe.htmlDocument;

external asNode : t => DomRe.node = "%identity";
external asEventTarget : t => DomRe.eventTarget = "%identity";
external asDocument : t => DomRe.document = "%identity";

type designMode =
| On
| Off
| Unknown;
let encodeDesignMode = fun /* internal */
| On      => "on"
| Off     => "off"
| Unknown => "";
let decodeDesignMode = fun /* internal */
| "on"  => On
| "off" => Off
| _     => Unknown;

type readyState =
| Loading
| Interactive
| Complete
| Unknown;
let decodeReadyState = fun /* internal */
| "loading"     => Loading
| "interactive" => Interactive
| "complete"    => Complete
| _             => Unknown;

external activeElement : t => Js.null DomRe.element = "" [@@bs.get];
let activeElement : t => option DomRe.element = fun self => Js.Null.to_opt (activeElement self);
external body : t => Js.null DomRe.element = "" [@@bs.get]; /* returns Js.null HTMLBodyElement */
let body : t => option DomRe.element = fun self => Js.Null.to_opt (body self);
external setBody : t => DomRe.element => unit = "body" [@@bs.set]; /* accepth HTMLBodyElement */
external cookie : t => string = "" [@@bs.get];
external setCookie : t => string => unit = "cookie" [@@bs.set];
external defaultView : t => Js.null DomRe.window = "" [@@bs.get];
let defautView : t => option DomRe.window = fun self => Js.Null.to_opt (defaultView self);
external designMode : t => string /* designMode enum */ = "" [@@bs.get];
let designMode : t => designMode = fun self => decodeDesignMode (designMode self);
external setDesignMode : t => string /* designMode enum */ => unit = "designMode" [@@bs.set];
let setDesignMode : t => designMode => unit = fun self value => setDesignMode self (encodeDesignMode value);
external dir : t => string /* dir enum */ = "" [@@bs.get];
let dir : t => DomRe.dir = fun self => DomRe.decodeDir (dir self);
external setDir : t => string /* dir enum */ => unit = "dir" [@@bs.set];
let setDir : t => DomRe.dir => unit = fun self value => setDir self (DomRe.encodeDir value);
external domain : t => Js.null string = "" [@@bs.get];
let domain : t => option string = fun self => Js.Null.to_opt (domain self);
external setDomain : t => string => unit = "domain" [@@bs.set];
external embeds : t => DomRe.nodeList = "" [@@bs.get];
external forms : t => DomRe.htmlCollection = "" [@@bs.get];
external head : t => DomRe.element = "" [@@bs.get]; /* returns HTMLHeadElement */
external images : t => DomRe.htmlCollection = "" [@@bs.get];
external lastModified : t => string = "" [@@bs.get];
external links : t => DomRe.nodeList = "" [@@bs.get];
external location : t => DomRe.location = "" [@@bs.get];
external setLocation : t => string => unit = "location" [@@bs.set];
external plugins : t => DomRe.htmlCollection = "" [@@bs.get];
external readyState : t => string /* enum */ = "" [@@bs.get];
let readyState : t => readyState = fun self => decodeReadyState (readyState self);
external referrer : t => string = "" [@@bs.get];
external scripts : t => DomRe.htmlCollection = "" [@@bs.get];
external title : t => string = "" [@@bs.get];
external setTitle : t => string => unit = "title" [@@bs.set];
external url : t => string = "URL" [@@bs.get];

external close : unit = "" [@@bs.send.pipe: t];
external execCommand : string => Js.boolean => Js.null string => Js.boolean = "" [@@bs.send.pipe: t];
let execCommand : string => bool => option string => t => bool = fun command show value self => Js.to_bool (execCommand command (Js.Boolean.to_js_boolean show) (Js.Null.from_opt value) self);
external getElementsByName : string => DomRe.nodeList = "" [@@bs.send.pipe: t];
external getSelection : DomRe.selection = "" [@@bs.send.pipe: t];
external hasFocus : Js.boolean = "" [@@bs.send.pipe: t];
let hasFocus : t => bool = fun self => Js.to_bool (hasFocus self);
external open_ : unit = "open" [@@bs.send.pipe: t];
external queryCommandEnabled : string => Js.boolean = "" [@@bs.send.pipe: t];
let queryCommandEnabled : string => t => bool = fun command self => Js.to_bool (queryCommandEnabled command self);
external queryCommandIndeterm : string => Js.boolean = "" [@@bs.send.pipe: t];
let queryCommandIndeterm : string => t => bool = fun command self => Js.to_bool (queryCommandIndeterm command self);
external queryCommandSupported : string => Js.boolean = "" [@@bs.send.pipe: t];
let queryCommandSupported : string => t => bool = fun command self => Js.to_bool (queryCommandSupported command self);
external queryCommandValue : string => string = "" [@@bs.send.pipe: t];
external write : string => unit = "" [@@bs.send.pipe: t];
external writeln : string => unit = "" [@@bs.send.pipe: t];