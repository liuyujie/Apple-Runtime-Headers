//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class LAContext, NSArray, NSDate, NSString, NSTimer, TIKeyboardCandidate, UIKBBackgroundView, UITouch;

__attribute__((visibility("hidden")))
@interface UIKeyboardPredictionView : UIView
{
    UIKBBackgroundView *m_backgroundView;
    NSArray *m_predictionCells;
    int m_predictionStyle;
    unsigned int m_visibleCellCount;
    unsigned int m_activeIndex;
    int m_pendingAutofillCandidateIndex;
    _Bool m_lightKeyboard;
    NSString *m_openQuote;
    NSString *m_closeQuote;
    struct CGPoint m_initLocation;
    _Bool m_dragging;
    _Bool m_hasLongCandidates;
    _Bool m_currentInputModeEnablePrediction;
    unsigned int m_autocorrectionCell;
    _Bool m_delayActive;
    _Bool m_isMinimized;
    int _notifyBatterySaverToken;
    LAContext *m_myContext;
    UITouch *_activeTouch;
    int _state;
    TIKeyboardCandidate *_currentFirstTextSuggestion;
    NSTimer *_updateTimer;
    NSArray *_scheduledPredictions;
    TIKeyboardCandidate *_scheduledAutocorrection;
    NSArray *_scheduledEmojiList;
    NSDate *_lastUpdateDate;
    NSDate *_lastTextSuggestionUpdateDate;
    int _lastTextSuggestionUpdateOrientation;
}

+ (id)cellWidthOptions;
+ (id)resultCountToSingleCellWidth;
+ (void)_deregisterActiveInstance:(id)arg1;
+ (void)_registerActiveInstance:(id)arg1;
+ (id)_activeInstances;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (float)overlapHeight;
+ (float)predictionViewWidthForOrientation:(int)arg1;
+ (float)predictionViewHeightPaddingForOrientation:(int)arg1;
+ (float)predictionViewHeightForScreenTraits:(id)arg1 orientation:(int)arg2;
+ (float)predictionViewHeightForState:(int)arg1 orientation:(int)arg2;
+ (float)predictionCellHeightForOrientation:(int)arg1;
+ (unsigned int)numberOfCandidates;
@property(nonatomic) int lastTextSuggestionUpdateOrientation; // @synthesize lastTextSuggestionUpdateOrientation=_lastTextSuggestionUpdateOrientation;
@property(retain, nonatomic) NSDate *lastTextSuggestionUpdateDate; // @synthesize lastTextSuggestionUpdateDate=_lastTextSuggestionUpdateDate;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) NSArray *scheduledEmojiList; // @synthesize scheduledEmojiList=_scheduledEmojiList;
@property(retain, nonatomic) TIKeyboardCandidate *scheduledAutocorrection; // @synthesize scheduledAutocorrection=_scheduledAutocorrection;
@property(retain, nonatomic) NSArray *scheduledPredictions; // @synthesize scheduledPredictions=_scheduledPredictions;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) TIKeyboardCandidate *currentFirstTextSuggestion; // @synthesize currentFirstTextSuggestion=_currentFirstTextSuggestion;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (id)description;
- (_Bool)setOriginalUserInput:(id)arg1 asTypedText:(id)arg2;
- (_Bool)hasPredictions;
- (_Bool)isTextSuggestion;
- (float)heightBeforeStateChangeForInterfaceOrientation:(int)arg1;
- (float)heightForInterfaceOrientation:(int)arg1;
- (float)heightForInterfaceOrientation:(int)arg1 state:(int)arg2;
- (void)setPredictionViewState:(int)arg1 animate:(_Bool)arg2 notify:(_Bool)arg3 hostView:(id)arg4;
- (void)setPredictionViewState:(int)arg1 animate:(_Bool)arg2 notify:(_Bool)arg3;
- (void)setPredictionViewState:(int)arg1 animate:(_Bool)arg2;
- (_Bool)_hostViewAlreadyContainsPredictionView:(id)arg1;
- (id)_designatedHostView;
- (void)_updateAssistantBarForPredictionViewState:(int)arg1;
- (_Bool)_predictionViewHostedByAssistantBar;
- (void)suppressLayoutSubviewsForCellLabels:(_Bool)arg1;
@property(readonly, nonatomic) _Bool show;
- (void)setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3;
- (void)touchUpdateTimer;
- (void)updateTimerFired:(id)arg1;
- (void)invalidateUpdateTimer;
- (void)_setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3;
- (_Bool)_shouldUpdatePredictions;
- (id)labelTextForPrediction:(id)arg1 typedString:(id)arg2;
- (void)deactivateCandidate;
- (void)activateCandidateAtPoint:(struct CGPoint)arg1;
- (void)acceptCandidate;
- (void)acceptCandidateAtCell:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)delayActivateCellForPrediction:(id)arg1;
- (void)commitPrediction:(id)arg1;
- (void)_commitPrediction:(id)arg1;
- (void)acceptPredictiveInput:(id)arg1;
- (id)autocorrection;
- (unsigned int)indexForPoint:(struct CGPoint)arg1;
- (void)setActiveCellWithIndex:(unsigned int)arg1;
- (void)setTouchedCellActive:(_Bool)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameForCells;
- (void)setFrameForCells:(id)arg1 start:(float)arg2 width:(float)arg3 cellCount:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initCells;
- (void)contentSizeDidChange:(id)arg1;
- (void)inputModeDidChange;
- (void)dimKeys:(id)arg1;
- (int)stateForCurrentPreferences;
- (_Bool)enabled;

@end

