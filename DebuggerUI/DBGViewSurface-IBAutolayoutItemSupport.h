/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DBGViewSurface.h"

@interface DBGViewSurface (IBAutolayoutItemSupport)
- (double)ibBaselineAtIndex:(long long)arg1;
- (long long)ibBaselineCount;
- (id)parentViewSurface;
- (id)superview;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toOverlayView:(id)arg2;
- (id)ibEffectiveWindowForConversions;
- (BOOL)isFlipped;
- (struct CGRect)ibLayoutBounds;
@end
