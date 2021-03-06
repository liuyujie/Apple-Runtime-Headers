//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPSectionedCollection, NSUUID;

@interface _MPModelLibraryRegisteredTransientState : NSObject
{
    int _addState;
    int _keepLocalState;
    MPSectionedCollection *_modelObjects;
    MPSectionedCollection *_relatedModelObjects;
    NSUUID *_token;
}

@property(copy, nonatomic) NSUUID *token; // @synthesize token=_token;
@property(copy, nonatomic) MPSectionedCollection *relatedModelObjects; // @synthesize relatedModelObjects=_relatedModelObjects;
@property(copy, nonatomic) MPSectionedCollection *modelObjects; // @synthesize modelObjects=_modelObjects;
@property(nonatomic) int keepLocalState; // @synthesize keepLocalState=_keepLocalState;
@property(nonatomic) int addState; // @synthesize addState=_addState;
- (void).cxx_destruct;

@end

