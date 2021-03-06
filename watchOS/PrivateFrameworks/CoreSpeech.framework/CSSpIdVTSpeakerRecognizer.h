//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSSpIdSpeakerRecognizer.h"

@class NSDictionary, NSString;

@interface CSSpIdVTSpeakerRecognizer : NSObject <CSSpIdSpeakerRecognizer>
{
}

- (void)processMyriadDecision:(unsigned int)arg1;
@property(readonly, nonatomic) NSDictionary *lastSpeakerIdInfo;
- (void)recordingStoppedForReason:(int)arg1;
- (void)processAudioChunk:(id)arg1;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

