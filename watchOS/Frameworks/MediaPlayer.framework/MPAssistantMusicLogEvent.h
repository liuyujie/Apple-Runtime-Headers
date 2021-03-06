//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPAssistantLogEvent.h"

@class NSMutableDictionary, NSString;

@interface MPAssistantMusicLogEvent : NSObject <MPAssistantLogEvent>
{
    unsigned int _sessionID;
    NSString *_siriSessionIdentifier;
}

@property(copy, nonatomic) NSString *siriSessionIdentifier; // @synthesize siriSessionIdentifier=_siriSessionIdentifier;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *eventPayload;
@property(readonly, nonatomic) int eventCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

