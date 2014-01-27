/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DBGProcess, DVTStackBacktrace, NSArray;

@interface DBGDisassemblyItemProcessWrapper : NSObject <DVTInvalidation>
{
    DBGProcess *_process;
    NSArray *_threadWrappers;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableItem_image;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(retain) NSArray *threadWrappers; // @synthesize threadWrappers=_threadWrappers;
@property(readonly) DBGProcess *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (id)disassemblyItemForStackFrame:(id)arg1;
- (void)_handleThreadsChanged:(id)arg1;
- (id)initWithProcess:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
