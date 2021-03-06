/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSView.h"

@class NSColor;

@interface ContainerView : NSView
{
    struct CGSize shadowOffset;
    NSColor *marginColor;
    struct CGColor *shadowColor;
    float _minMarginTop;
    float _minMarginBottom;
    float _minMarginLeft;
    float _minMarginRight;
    NSView *_contentView;
}

- (id)contentView;
- (void)setContentView:(id)arg1;
- (float)minMarginTop;
- (void)setMinMarginTop:(float)arg1;
- (float)minMarginBottom;
- (void)setMinMarginBottom:(float)arg1;
- (float)minMarginLeft;
- (void)setMinMarginLeft:(float)arg1;
- (float)minMarginRight;
- (void)setMinMarginRight:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateContentFrame:(struct CGRect)arg1;
- (void)updateContentFrame;
- (void)setFrame:(struct CGRect)arg1;

@end

