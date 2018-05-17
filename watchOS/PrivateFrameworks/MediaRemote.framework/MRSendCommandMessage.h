//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate, NSDictionary, _MRNowPlayingPlayerPathProtobuf;

@interface MRSendCommandMessage : MRProtocolMessage
{
    NSDate *_serializationDate;
}

@property(readonly, nonatomic) NSDate *serializationDate; // @synthesize serializationDate=_serializationDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) unsigned int command;
- (unsigned int)type;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3;

@end
