//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, NSString;

@interface UNMutableNotificationCategory : UNNotificationCategory
{
}

@property unsigned long long listPriority; // @dynamic listPriority;
@property unsigned long long backgroundStyle; // @dynamic backgroundStyle;
@property unsigned long long options; // @dynamic options;
@property(copy) NSString *categorySummaryFormat; // @dynamic categorySummaryFormat;
@property(copy) NSString *hiddenPreviewsBodyPlaceholder; // @dynamic hiddenPreviewsBodyPlaceholder;
@property(copy) NSArray *intentIdentifiers; // @dynamic intentIdentifiers;
@property(copy) NSArray *minimalActions; // @dynamic minimalActions;
@property(copy) NSArray *actions; // @dynamic actions;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

