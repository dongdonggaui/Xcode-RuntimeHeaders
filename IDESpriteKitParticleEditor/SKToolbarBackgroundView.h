/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@interface SKToolbarBackgroundView : NSView
{
    struct CGContext *_ctx;
    struct CGColor *_greyColor;
    struct CGColor *_blueColor;
    BOOL _isActive;
}

- (void)setActive:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
