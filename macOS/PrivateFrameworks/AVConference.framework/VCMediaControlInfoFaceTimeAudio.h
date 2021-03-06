//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo
{
    unsigned char _controlInfoFeedback[6];
    unsigned char _controlInfoMediaQueue[6];
    unsigned int _controlInfoStats;
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoAudioPacketSize;
    unsigned int _controlInfoAudioTimestamp;
    double _controlInfoArrivalTime;
}

- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (BOOL)hasInfoType:(unsigned int)arg1;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_475a354f *)arg3;
- (int)handleOptionalControlInfo:(CDStruct_475a354f *)arg1;
- (unsigned long long)serializedSize;

@end

