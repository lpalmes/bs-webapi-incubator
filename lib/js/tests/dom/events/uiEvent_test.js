'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var UiEventRe = require("../../../src/dom/events/UiEventRe.js");

var $$event = new UIEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(UiEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

exports.$$event = $$event;
/* event Not a pure module */
