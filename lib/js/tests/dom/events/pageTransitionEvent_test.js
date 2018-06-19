'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var PageTransitionEventRe = require("../../../src/dom/events/PageTransitionEventRe.js");

var $$event = new PageTransitionEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(PageTransitionEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.persisted;

exports.$$event = $$event;
/* event Not a pure module */
