//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

@interface ESDRoot : ESDObject
{
    NSMutableArray *mChildren;
}

- (void).cxx_destruct;
- (void)writeToWriter:(struct OcWriter *)arg1;
- (void)addChild:(id)arg1;
- (id)childAt:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (struct EshRoot *)eshRoot;
- (id)initFromReader:(struct OcReader *)arg1;
- (id)init;
- (id)initWithEshObject:(struct EshObject *)arg1;
- (id)pbReferenceWithID:(unsigned int)arg1;
- (id)initWithPbState:(id)arg1;

@end

