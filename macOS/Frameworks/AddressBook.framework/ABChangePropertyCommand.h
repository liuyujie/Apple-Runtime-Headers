//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABCommand.h"

@class ABInputController, ABPerson, NSString;

@interface ABChangePropertyCommand : ABCommand
{
    NSString *_propertyPath;
    id _oldValue;
    id _newValue;
    ABPerson *_person;
    ABInputController *_controller;
}

- (id)description;
- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)setNewValue:(id)arg1;
- (id)propertyPath;
- (void)finalize;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 propertyPath:(id)arg2 oldValue:(id)arg3 inputController:(id)arg4;

@end

