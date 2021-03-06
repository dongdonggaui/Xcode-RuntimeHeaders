/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<IBAutolayoutItem>;

@interface IBAutolayoutMisplacementStatus : NSObject
{
    NSObject<IBAutolayoutItem> *_view;
    struct CGRect _expectedLayoutFrameOrBounds;
    struct CGRect _actualLayoutFrameOrBounds;
}

@property(readonly, nonatomic) struct CGRect actualLayoutFrameOrBounds; // @synthesize actualLayoutFrameOrBounds=_actualLayoutFrameOrBounds;
@property(readonly, nonatomic) struct CGRect expectedLayoutFrameOrBounds; // @synthesize expectedLayoutFrameOrBounds=_expectedLayoutFrameOrBounds;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (BOOL)isEqualToMisplacementStatus:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)hasMisplacedSizeInOrientation:(unsigned long long)arg1;
- (BOOL)hasMisplacedPositionInOrientation:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL hasMisplacedVerticalSize;
@property(readonly, nonatomic) BOOL hasMisplacedHorizontalSize;
@property(readonly, nonatomic) BOOL hasMisplacedVerticalPosition;
@property(readonly, nonatomic) BOOL hasMisplacedHorizontalPosition;
- (id)representationWithObjectRepresentationForObjectBlock:(id)arg1;
- (id)initWithRepresentation:(id)arg1 objectForObjectRepresentationBlock:(id)arg2;
- (id)initWithView:(id)arg1 expectedLayoutFrameOrBounds:(struct CGRect)arg2 actualLayoutFrameOrBounds:(struct CGRect)arg3;
- (id)init;

@end

