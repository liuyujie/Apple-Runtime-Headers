//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBArchivedObject;

@protocol _INPBRunWorkflowIntentResponse <NSObject>
@property(nonatomic) BOOL hasWaitingForResume;
@property(nonatomic) BOOL waitingForResume;
@property(readonly, nonatomic) BOOL hasUtterance;
@property(copy, nonatomic) NSString *utterance;
@property(readonly, nonatomic) BOOL hasUnderlyingIntentResponse;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property(readonly, nonatomic) BOOL hasUnderlyingIntent;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property(nonatomic) BOOL hasContinueRunning;
@property(nonatomic) BOOL continueRunning;
@end

