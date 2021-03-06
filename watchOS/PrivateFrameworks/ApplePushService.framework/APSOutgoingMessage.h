//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ApplePushService/APSMessage.h>

@class APSOutgoingMessageCheckpointTrace, NSString;

@interface APSOutgoingMessage : APSMessage
{
    APSOutgoingMessageCheckpointTrace *_checkpointTrace;
}

@property(retain, nonatomic) APSOutgoingMessageCheckpointTrace *checkpointTrace; // @synthesize checkpointTrace=_checkpointTrace;
- (int)retries;
- (void)setRetries:(int)arg1;
- (id)sentTimestamp;
- (void)setSentTimestamp:(id)arg1;
- (id)originator;
- (void)setOriginator:(id)arg1;
@property(copy, nonatomic) NSString *senderTokenName;
- (void)setPriority:(int)arg1;
- (int)priority;
@property(nonatomic) unsigned int payloadLength;
@property(nonatomic) unsigned int payloadFormat;
- (void)setTimedOut:(_Bool)arg1;
- (_Bool)hasTimedOut;
- (void)setCancelled:(_Bool)arg1;
- (_Bool)wasCancelled;
- (void)setSendInterface:(int)arg1;
- (int)sendInterface;
- (void)setSent:(_Bool)arg1;
- (_Bool)wasSent;
@property(nonatomic, getter=isCritical) _Bool critical;
- (_Bool)isEager;
- (id)rawTimeoutTime;
- (id)eagernessTimeoutTime;
- (id)sendTimeoutTime;
- (unsigned int)_effectiveSendTimeout;
@property(nonatomic) unsigned int timeout;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)setMessageID:(unsigned int)arg1;
- (unsigned int)messageID;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

