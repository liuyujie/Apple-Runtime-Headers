//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVCPacketFilter;

@protocol AVCPacketRelayConnectionProtocol
@property(retain) AVCPacketFilter *packetFilter;
@property(copy) CDUnknownBlockType readHandler;
@property _Bool isDemuxNeeded;
@property(readonly) unsigned char type;
- (_Bool)sendData:(const void *)arg1 size:(unsigned int)arg2 error:(id *)arg3;
- (void)readyToRead;
- (long)stop;
- (long)start;
@end

