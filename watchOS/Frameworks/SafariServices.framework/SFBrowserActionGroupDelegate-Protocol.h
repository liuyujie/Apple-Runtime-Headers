//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFBrowserActionGroup;

@protocol SFBrowserActionGroupDelegate <NSObject>

@optional
- (void)browserActionGroupInvokedReaderAction:(SFBrowserActionGroup *)arg1;
- (void)browserActionGroupInvokedStopAction:(SFBrowserActionGroup *)arg1;
- (void)browserActionGroupInvokedReloadAction:(SFBrowserActionGroup *)arg1;
- (void)browserActionGroupInvokedForwardAction:(SFBrowserActionGroup *)arg1;
- (void)browserActionGroupInvokedBackAction:(SFBrowserActionGroup *)arg1;
@end

