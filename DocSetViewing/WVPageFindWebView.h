/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WebView.h"

@class WVPageFindContainerView, WVPageFindController;

@interface WVPageFindWebView : WebView
{
    WVPageFindContainerView *_containerView;
}

@property(retain) WVPageFindContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly) WVPageFindController *pageFindController;

@end

