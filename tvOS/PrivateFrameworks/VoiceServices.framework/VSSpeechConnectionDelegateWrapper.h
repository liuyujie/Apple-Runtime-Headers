//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VSSpeechServiceDelegate.h"

@class NSMutableDictionary, NSString, VSPresynthesizedAudioRequest, VSSpeechConnection, VSSpeechRequest;

__attribute__((visibility("hidden")))
@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>
{
    id <VSSpeechConnectionDelegate> _delegate;
    VSSpeechRequest *_request;
    NSMutableDictionary *_concurrentSynthesisRequests;
    VSPresynthesizedAudioRequest *_presynthesizedAudioRequest;
    VSSpeechConnection *_connection;
}

@property(nonatomic) __weak VSSpeechConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest; // @synthesize presynthesizedAudioRequest=_presynthesizedAudioRequest;
@property(retain, nonatomic) NSMutableDictionary *concurrentSynthesisRequests; // @synthesize concurrentSynthesisRequests=_concurrentSynthesisRequests;
@property(retain, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(_Bool)arg1 error:(id)arg2;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1;
- (oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;
- (oneway void)speechRequestDidReceiveTimingInfo:(id)arg1;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

