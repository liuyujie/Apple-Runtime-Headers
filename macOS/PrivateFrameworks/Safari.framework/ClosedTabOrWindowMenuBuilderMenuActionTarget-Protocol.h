//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenuItem;

@protocol ClosedTabOrWindowMenuBuilderMenuActionTarget <NSObject>
- (void)reopenTabGroupFromPersistentState:(NSMenuItem *)arg1;
- (void)reopenTabFromPersistentStateIntoActiveWindowConsultingPagesOpenInWindowsInsteadOfTabsPreference:(NSMenuItem *)arg1;
- (void)reopenTabFromPersistentStateIntoActiveWindow:(NSMenuItem *)arg1;
- (void)reopenWindowFromPersistentState:(NSMenuItem *)arg1;
@end
