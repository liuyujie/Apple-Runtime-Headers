//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCROutputComponent.h>

@class NSArray, NSDictionary, NSLock, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SCROutputSpeechComponent : SCROutputComponent
{
    NSMutableArray *_synthesizers;
    NSLock *_synthesizersArrayLock;
    NSLock *_speechPausedLock;
    NSLock *_sanitizedAvailableVoicesLock;
    NSArray *_sanitizedAvailableVoices;
    NSDictionary *_defaultLanguageTextProcessingProperties;
    int _characterTypeLookupArray[512];
    BOOL _speechIsPaused;
    NSString *_lastSpokenString;
    BOOL needToRebuildDefaultLanguageTextProcessingProperties;
    struct _NSRange __lastSpokenWordRange;
}

+ (id)_createSanitizedAvailableVoices;
@property struct _NSRange _lastSpokenWordRange; // @synthesize _lastSpokenWordRange=__lastSpokenWordRange;
- (id)_replaceEmbeddedTTSCommandsAttributedString:(id)arg1;
- (id)_replaceEmbeddedTTSCommands:(id)arg1;
- (void)_replaceEmbeddedTTSCommandsMutableString:(id)arg1;
- (void)speechSynthesizer:(id)arg1 willSpeakWord:(struct _NSRange)arg2 ofString:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (BOOL)_isSameVoiceIdentifierUsedForAction1:(id)arg1 andAction2:(id)arg2;
- (id)voicePrefsForCategory:(id)arg1;
- (id)_speakAsNormalText:(id)arg1;
- (void)_makeNumberSubstitutionsInAction:(id)arg1;
- (void)_replaceNonSpeakableWords:(id)arg1;
- (void)_replaceNonSpeakableCharacters:(id)arg1;
- (void)_replaceMathCharacters:(id)arg1;
- (void)replaceVOEmbeddedCommand:(id)arg1 withRange:(struct _NSRange)arg2 inAction:(id)arg3;
- (id)_changeStringToSpeakInCapitalsModeIfStringContainsCapitalLetters:(id)arg1 withAction:(id)arg2;
- (void)changePitchForString:(id)arg1 action:(id)arg2 key:(id)arg3;
- (id)_speakAsLiteralCharacters:(id)arg1;
- (id)offsetStringReplaceEmojiWithDescriptions:(id)arg1 stringForPauses:(id)arg2 language:(id)arg3 rangeReplacements:(id)arg4 appendEmojiSuffix:(BOOL)arg5;
- (id)stringReplaceEmojiWithDescriptions:(id)arg1 stringForPauses:(id)arg2 language:(id)arg3 rangeReplacements:(id)arg4 appendEmojiSuffix:(BOOL)arg5;
- (id)_availableScreenReaderVoices;
- (void)clearAvailableScreenReaderVoicesCache;
- (BOOL)_preflightPauseOrContinueAction:(id)arg1;
- (BOOL)isAnySynthesizerSpeaking;
- (id)categoryBeingSpoken;
- (BOOL)_preflightOnTheFlySynthesizerAdjustmentAction:(id)arg1 adjustRate:(BOOL)arg2 adjustPitch:(BOOL)arg3 adjustVolume:(BOOL)arg4 adjustIntonation:(BOOL)arg5 adjustVoice:(BOOL)arg6 speakResults:(BOOL)arg7;
- (void)setAudioDevice:(unsigned int)arg1;
- (void)_optimizeSequentialSteps:(id)arg1;
- (void)_preflightActionForContextInformation:(id)arg1;
- (id)_preflightIndividualAction:(id)arg1;
- (void)_stopSynthesizerOnSpeechComponentThread:(id)arg1;
- (BOOL)_initializeSynthesizer:(id)arg1 forAction:(id)arg2 withOptions:(id)arg3;
- (BOOL)initializeSynthesizer:(id)arg1 forAction:(id)arg2;
- (id)_synthesizerOptionsForAction:(id)arg1 voiceIdenifier:(id)arg2;
- (id)_speechSynthesizerForAction:(id)arg1 owner:(id)arg2;
- (id)_soundCacheSynthesizerForAction:(id)arg1 owner:(id)arg2;
- (id)_findSynthesizerForAction:(id)arg1 owner:(id)arg2;
- (id)copyAllSpeechSynthesizersLocked;
- (id)copyAllSynthesizersLocked;
- (void)setIsSpeechPaused:(BOOL)arg1;
- (BOOL)isSpeechPaused;
- (void)stopAllSynthesizersForRunner:(id)arg1;
- (int)preflightSequentialSteps:(id)arg1 runnerName:(id)arg2;
- (id)objectForAttribute:(id)arg1;
- (void)_handleVoicesChangedNotification:(id)arg1;
- (void)handleEvent:(id)arg1;
- (id)lastSpokenString;
- (void)dealloc;
- (id)init;
- (BOOL)_makeSubstitutionsInAction:(id)arg1 stringsFileName:(id)arg2 verbosityLevel:(long long)arg3 ranges:(id)arg4;
- (BOOL)_makeSubstitutionsInAction:(id)arg1 stringsFileName:(id)arg2 verbosityLevel:(long long)arg3;
- (int)typeForCharacter:(int)arg1;
- (int)typeForComposedCharacter:(id)arg1;
- (id)_createSubstitutionStringForPunctuationString:(id)arg1 punctuationTable:(id)arg2 stringsFileName:(id)arg3;
- (int)_substitutionActionForPunctuationString:(id)arg1 punctuationTable:(id)arg2;
- (id)mergedPunctuationTableForVerboseness:(long long)arg1;
- (id)_textProcessingProperties;

@end

