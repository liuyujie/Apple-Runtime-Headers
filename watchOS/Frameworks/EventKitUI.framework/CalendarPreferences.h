//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalPreferences, NSArray, NSDate, NSNumber, NSString;

@interface CalendarPreferences : NSObject
{
    CalPreferences *_preferences;
    _Bool _drawDebugViewColors;
}

+ (id)sharedPreferences;
@property(nonatomic) _Bool drawDebugViewColors; // @synthesize drawDebugViewColors=_drawDebugViewColors;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *upNextColor;
@property(retain, nonatomic) NSString *upNextLocation;
@property(nonatomic) double upNextDuration;
@property(retain, nonatomic) NSDate *upNextStartTime;
@property(retain, nonatomic) NSString *upNextTitle;
@property(nonatomic) _Bool upNextSimpleModeEnabled;
@property(retain, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property(nonatomic) _Bool eventAutocompleteEnabled;
@property(nonatomic) _Bool enableAvatars;
@property(nonatomic) _Bool disableTodayPushes;
@property(nonatomic, getter=isShortResumeToTodayTimeout) _Bool shortResumeToTodayTimeout;
@property(nonatomic) _Bool hideInlineDayViewInEventDetails;
@property(nonatomic) _Bool showWindowDebugButton;
@property(nonatomic) _Bool largeListViewDisclosingEventDetails;
@property(nonatomic) _Bool swipeToDeleteEnabled;
@property(nonatomic) _Bool disableContinuity;
@property(nonatomic) _Bool showDetailedListView;
@property(nonatomic) _Bool showExperimentalUI;
@property(nonatomic) unsigned int debugOccurrenceViewIconOverload;
@property(nonatomic) unsigned int promptForCommentWhenDeclining;
@property(retain, nonatomic) NSNumber *locationSearchResultLimit;
@property(nonatomic) _Bool showEventsInPhoneMonthView;
@property(retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property(nonatomic) _Bool requestSyncOnApplicationLaunch;
@property(nonatomic) _Bool viewedTimeZoneAutomatic;
@property(nonatomic) _Bool immediateAlarmCreation;
@property(nonatomic) _Bool showMonthDividedListView;
@property(nonatomic) _Bool showListView;
@property(nonatomic) _Bool showWeekNumbers;
@property(retain, nonatomic) NSString *overlayCalendarID;
@property(retain, nonatomic) NSString *searchString;
@property(retain, nonatomic) NSNumber *weekViewHourScale;
@property(retain, nonatomic) NSNumber *dayViewHourScale;
@property(retain, nonatomic) NSNumber *lastSuspendTime;
@property(retain, nonatomic) NSNumber *lastViewedDate;
@property(retain, nonatomic) NSNumber *lastViewMode;
@property(retain, nonatomic) NSNumber *weekStart;
@property(retain, nonatomic) NSDate *simulatedCurrentDate;
- (id)init;

@end

