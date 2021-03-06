//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface WLKPlayEvent : NSObject
{
    _Bool _played;
    NSString *_bundleID;
    NSString *_channelID;
    NSString *_externalPlayableID;
    NSString *_showID;
    double _elapsedTime;
    double _duration;
    NSDate *_occurrenceDate;
}

@property(readonly, copy, nonatomic) NSDate *occurrenceDate; // @synthesize occurrenceDate=_occurrenceDate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(readonly, copy, nonatomic) NSString *showID; // @synthesize showID=_showID;
@property(readonly, copy, nonatomic) NSString *externalPlayableID; // @synthesize externalPlayableID=_externalPlayableID;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

