//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUndoManager.h"

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextUndoManager : NSUndoManager
{
    UITextInputController *_inputController;
}

@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
- (void).cxx_destruct;
- (void)removeAllActions;

@end

