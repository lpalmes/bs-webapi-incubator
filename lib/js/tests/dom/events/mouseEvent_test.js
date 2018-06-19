'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var MouseEventRe = require("../../../src/dom/events/MouseEventRe.js");

var $$event = new MouseEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(MouseEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.altKey;

$$event.button;

$$event.buttons;

$$event.clientX;

$$event.clientY;

$$event.ctrlKey;

$$event.metaKey;

$$event.movementX;

$$event.movementY;

$$event.offsetX;

$$event.offsetY;

$$event.pageX;

$$event.pageY;

$$event.region;

$$event.relatedTarget;

$$event.screenX;

$$event.screenY;

$$event.shiftKey;

$$event.x;

$$event.y;

MouseEventRe.getModifierState(/* Alt */0, $$event);

exports.$$event = $$event;
/* event Not a pure module */
