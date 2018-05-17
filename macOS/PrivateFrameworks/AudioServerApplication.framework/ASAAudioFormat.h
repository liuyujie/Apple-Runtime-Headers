//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ASAAudioFormat : NSObject
{
    unsigned int _formatID;
    unsigned int _formatFlags;
    unsigned int _bytesPerPacket;
    unsigned int _framesPerPacket;
    unsigned int _bytesPerFrame;
    unsigned int _channelsPerFrame;
    unsigned int _bitsPerChannel;
    double _sampleRate;
    double _minimumSampleRate;
    double _maximumSampleRate;
}

@property(nonatomic) double maximumSampleRate; // @synthesize maximumSampleRate=_maximumSampleRate;
@property(nonatomic) double minimumSampleRate; // @synthesize minimumSampleRate=_minimumSampleRate;
@property(nonatomic) unsigned int bitsPerChannel; // @synthesize bitsPerChannel=_bitsPerChannel;
@property(nonatomic) unsigned int channelsPerFrame; // @synthesize channelsPerFrame=_channelsPerFrame;
@property(nonatomic) unsigned int bytesPerFrame; // @synthesize bytesPerFrame=_bytesPerFrame;
@property(nonatomic) unsigned int framesPerPacket; // @synthesize framesPerPacket=_framesPerPacket;
@property(nonatomic) unsigned int bytesPerPacket; // @synthesize bytesPerPacket=_bytesPerPacket;
@property(nonatomic) unsigned int formatFlags; // @synthesize formatFlags=_formatFlags;
@property(nonatomic) unsigned int formatID; // @synthesize formatID=_formatID;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct AudioStreamRangedDescription)audioStreamRangedDescription;
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;
- (id)initWithAudioStreamRangedDescription:(struct AudioStreamRangedDescription *)arg1;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1;

@end
