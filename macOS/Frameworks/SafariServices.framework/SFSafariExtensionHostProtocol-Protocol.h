//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSURL, SFSafariPage, SFSafariTab, SFSafariToolbarItem, SFSafariWindow;

@protocol SFSafariExtensionHostProtocol <NSObject>
- (void)setToolbarItem:(SFSafariToolbarItem *)arg1 label:(NSString *)arg2;
- (void)setToolbarItem:(SFSafariToolbarItem *)arg1 imageData:(NSData *)arg2;
- (void)setToolbarItem:(SFSafariToolbarItem *)arg1 badgeText:(NSString *)arg2;
- (void)setToolbarItem:(SFSafariToolbarItem *)arg1 isEnabled:(BOOL)arg2;
- (void)setToolbarItem:(SFSafariToolbarItem *)arg1 isEnabled:(BOOL)arg2 withBadgeText:(NSString *)arg3;
- (void)setToolbarItemsNeedUpdate;
- (void)openWindowWithURL:(NSURL *)arg1 completionHandler:(void (^)(SFSafariWindow *))arg2;
- (void)getActiveWindowWithCompletionHandler:(void (^)(SFSafariWindow *))arg1;
- (void)activateTab:(SFSafariTab *)arg1 completionHandler:(void (^)(void))arg2;
- (void)getPagesInTab:(SFSafariTab *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)getActivePageInTab:(SFSafariTab *)arg1 completionHandler:(void (^)(SFSafariPage *))arg2;
- (void)getToolbarItemInWindow:(SFSafariWindow *)arg1 completionHandler:(void (^)(SFSafariToolbarItem *))arg2;
- (void)openTabInWindow:(SFSafariWindow *)arg1 withURL:(NSURL *)arg2 makeActiveIfPossible:(BOOL)arg3 completionHandler:(void (^)(SFSafariTab *))arg4;
- (void)getActiveTabInWindow:(SFSafariWindow *)arg1 completionHandler:(void (^)(SFSafariTab *))arg2;
- (void)getPropertiesOfPage:(SFSafariPage *)arg1 completionHandler:(void (^)(SFSafariPageProperties *))arg2;
- (void)reloadPage:(SFSafariPage *)arg1;
- (void)dispatchMessageWithName:(NSString *)arg1 fromPage:(SFSafariPage *)arg2 userInfo:(NSDictionary *)arg3;
@end
