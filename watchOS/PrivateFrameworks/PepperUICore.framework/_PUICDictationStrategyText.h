//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_PUICDictationStrategy.h"

@class AFDictationConnection, AFSpeechRequestOptions, NSString, STSiriContext;

@interface _PUICDictationStrategyText : NSObject <_PUICDictationStrategy>
{
    AFDictationConnection *_dictationConnection;
    AFSpeechRequestOptions *_speechRequestOptions;
    _Bool _isListening;
    _Bool _didSpeechRecordingBegin;
    _Bool _didCancel;
    id <_PUICDictationStrategyDelegate> _delegate;
    CDUnknownBlockType _prelisteningContinuation;
    CDUnknownBlockType _completionHandler;
    NSString *_languageCode;
    STSiriContext *_context;
}

+ (_Bool)isDisabledInAirplaneMode;
+ (_Bool)isEnabled;
@property(retain, nonatomic) STSiriContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void).cxx_destruct;
- (struct __CFString *)resultTransformForLanguageModel:(id)arg1;
- (id)yieldDictationConnection;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)receivedFinalText:(id)arg1;
- (void)updatedText:(id)arg1;
- (id)createSpeechRequestOptions;
- (id)createDictationOptions;
- (id)disabledErrorMessage;
- (id)disabledErrorTitle;
- (int)transcriptionMode;
- (void)finishedListeningWithResult:(id)arg1;
- (void)failedToListenWithError:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)currentText;
- (void)cancelListening;
- (void)finishListening:(CDUnknownBlockType)arg1;
- (void)startListeningForDelegate:(id)arg1;
- (void)cancelPrelistening;
- (void)startPrelisteningForDelegate:(id)arg1;
@property(readonly, nonatomic) float audioAveragePower;
@property(readonly, nonatomic) _Bool didCancel;
@property(readonly, nonatomic) _Bool isListening;
@property(readonly, nonatomic) id <_PUICDictationStrategyDelegate> delegate;
- (id)initWithPreheatedConnection:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
