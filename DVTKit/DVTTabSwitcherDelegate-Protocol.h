/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DVTTabSwitcherDelegate <NSObject>

@optional
- (void)tabSwitcherDidChangeNumberOfTabViewItems:(id)arg1;
- (void)tabSwitcher:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabSwitcher:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabSwitcher:(id)arg1 shouldSelectTabViewItem:(id)arg2;
@end

