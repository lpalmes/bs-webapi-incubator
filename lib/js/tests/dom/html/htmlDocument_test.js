'use strict';

var DocumentRe = require("../../../src/dom/nodes/DocumentRe.js");
var TestHelpers = require("../../testHelpers.js");
var HtmlDocumentRe = require("../../../src/dom/html/HtmlDocumentRe.js");

var el = document.createElement("strong");

var htmlDocument = TestHelpers.unsafelyUnwrapOption(DocumentRe.asHtmlDocument(document));

htmlDocument.activeElement;

htmlDocument.body;

htmlDocument.body = el;

htmlDocument.cookie;

htmlDocument.cookie = "foo=bar;reason=ml";

htmlDocument.defaultView;

HtmlDocumentRe.designMode(htmlDocument);

HtmlDocumentRe.setDesignMode(htmlDocument, /* On */0);

HtmlDocumentRe.dir(htmlDocument);

HtmlDocumentRe.setDir(htmlDocument, /* Ltr */0);

htmlDocument.domain;

htmlDocument.domain = "reason.ml";

htmlDocument.embeds;

htmlDocument.forms;

htmlDocument.head;

htmlDocument.images;

htmlDocument.lastModified;

htmlDocument.links;

htmlDocument.location;

htmlDocument.location = "http://reason.ml";

htmlDocument.plugins;

HtmlDocumentRe.readyState(htmlDocument);

htmlDocument.referrer;

htmlDocument.scripts;

htmlDocument.title;

htmlDocument.title = "Reason: Rapid Expressive Systems Programming.";

htmlDocument.URL;

htmlDocument.close();

HtmlDocumentRe.execCommand("copy", false, /* None */0, htmlDocument);

htmlDocument.getElementsByName("angry-joe");

htmlDocument.getSelection();

htmlDocument.hasFocus();

htmlDocument.open();

htmlDocument.queryCommandEnabled("copy");

htmlDocument.queryCommandIndeterm("cut");

htmlDocument.queryCommandSupported("paste");

htmlDocument.queryCommandValue("fontName");

htmlDocument.write("Hello World!");

htmlDocument.writeln("Hello Newline!");

exports.el = el;
exports.htmlDocument = htmlDocument;
/* el Not a pure module */
