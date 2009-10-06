/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSAnimation.h"

@class DOMCSSStyleDeclaration, NSString;

@interface DOMCSSStylePropertyAnimation : NSAnimation
{
    NSString *_property;
    float _startValue;
    float _endValue;
    DOMCSSStyleDeclaration *_style;
}

- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long)arg2 element:(id)arg3 property:(id)arg4;
- (void)dealloc;
- (BOOL)isIncreasing;
- (void)reset;
- (void)reverse;
- (void)setCurrentProgress:(float)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (float)startValue;
- (void)setStartValue:(float)arg1;
- (float)endValue;
- (void)setEndValue:(float)arg1;
- (id)property;
- (void)setProperty:(id)arg1;

@end
