/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDELanguageSupportUI/IDEPlaygroundResult.h>

@class NSDate;

@interface IDETimestampedPlaygroundResult : IDEPlaygroundResult
{
    NSDate *_date;
}

@property(readonly) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2 resultDate:(id)arg3;

@end
