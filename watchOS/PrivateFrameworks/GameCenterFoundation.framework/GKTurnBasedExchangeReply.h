//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKTurnBasedExchangeReplyInternal, GKTurnBasedMatch, GKTurnBasedParticipant, NSData, NSDate, NSString;

@interface GKTurnBasedExchangeReply : NSObject
{
    GKTurnBasedParticipant *_recipient;
    GKTurnBasedExchangeReplyInternal *_internal;
    GKTurnBasedMatch *_matchWeak;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
@property(retain) GKTurnBasedExchangeReplyInternal *internal; // @synthesize internal=_internal;
@property(retain, nonatomic) GKTurnBasedParticipant *recipient; // @synthesize recipient=_recipient;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
@property(nonatomic) GKTurnBasedMatch *match; // @synthesize match=_matchWeak;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(readonly, nonatomic) NSDate *replyDate; // @dynamic replyDate;

@end

