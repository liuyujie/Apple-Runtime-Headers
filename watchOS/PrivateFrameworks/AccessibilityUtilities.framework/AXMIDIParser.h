//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXMIDIParser : NSObject
{
}

- (unsigned short)_channelForStatusByte:(unsigned char)arg1;
- (unsigned long)_expectedPacketLengthForEventType:(int)arg1;
- (int)_eventTypeForStatusByte:(unsigned char)arg1;
- (id)parse:(const struct MIDIPacketList *)arg1 error:(id *)arg2;

@end

