//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIInputViewControllerInterface.h>

#import "UITextDocumentProxy.h"

@class NSString, NSUUID, TIDocumentState, TIKeyboardOutput, TITextInputTraits, UITextInputMode, UITextInputPasswordRules, _UIInputViewControllerOutput, _UIInputViewControllerState;

__attribute__((visibility("hidden")))
@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy>
{
    id <_UITextDocumentInterfaceDelegate> _delegate;
    _UIInputViewControllerState *_controllerState;
    _UIInputViewControllerOutput *_controllerOutput;
    TIKeyboardOutput *_keyboardOutput;
}

@property(readonly, nonatomic, getter=_keyboardOutput) TIKeyboardOutput *keyboardOutput; // @synthesize keyboardOutput=_keyboardOutput;
@property(retain, nonatomic, getter=_controllerOutput) _UIInputViewControllerOutput *controllerOutput; // @synthesize controllerOutput=_controllerOutput;
@property(retain, nonatomic, getter=_controllerState) _UIInputViewControllerState *controllerState; // @synthesize controllerState=_controllerState;
@property(nonatomic, getter=_delegate) id <_UITextDocumentInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setInputModeList:(int)arg1 touchBegan:(double)arg2 fromLocation:(struct CGPoint)arg3 updatePoint:(struct CGPoint)arg4;
- (void)_setHasDictation:(_Bool)arg1;
- (void)_setShouldAdvanceInputMode;
- (void)_setProceedShouldReturnIfPossibleForASP;
- (void)_setShouldDismiss;
- (void)_setPrimaryLanguage:(id)arg1;
- (void)_didPerformOutputOperation;
- (void)_willPerformOutputOperation;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)adjustTextPositionByCharacterOffset:(int)arg1;
- (_Bool)needsInputModeSwitchKey;
@property(readonly, copy, nonatomic) NSUUID *documentIdentifier;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly, nonatomic) UITextInputMode *documentInputMode;
@property(readonly, nonatomic) NSString *documentContextAfterInput;
@property(readonly, nonatomic) NSString *documentContextBeforeInput;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) int smartInsertDeleteType;
@property(nonatomic) int smartDashesType;
@property(nonatomic) int smartQuotesType;
@property(copy, nonatomic) NSString *textContentType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) int returnKeyType;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int spellCheckingType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) int autocapitalizationType;
@property(readonly, nonatomic, getter=_textInputTraits) TITextInputTraits *textInputTraits;
@property(readonly, nonatomic, getter=_documentState) TIDocumentState *documentState;
- (void)_createControllerOutputIfNecessary;
- (void)setForwardingInterface:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(readonly) Class superclass;

@end

