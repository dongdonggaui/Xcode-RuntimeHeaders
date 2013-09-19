/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointPin : SKPhysicsJoint
{
    BOOL _shouldEnableLimits;
    double _lowerAngleLimit;
    double _upperAngleLimit;
    double _frictionTorque;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property double frictionTorque; // @synthesize frictionTorque=_frictionTorque;
@property double upperAngleLimit; // @synthesize upperAngleLimit=_upperAngleLimit;
@property double lowerAngleLimit; // @synthesize lowerAngleLimit=_lowerAngleLimit;
@property BOOL shouldEnableLimits; // @synthesize shouldEnableLimits=_shouldEnableLimits;

@end
