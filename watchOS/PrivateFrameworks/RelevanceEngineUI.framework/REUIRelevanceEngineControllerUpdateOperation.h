//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "REElementUpdateOperation.h"

@interface REUIRelevanceEngineControllerUpdateOperation : REElementUpdateOperation
{
    unsigned int _updateType;
}

+ (id)hideElement:(id)arg1 atPath:(id)arg2;
+ (id)showElement:(id)arg1 atPath:(id)arg2;
@property(readonly, nonatomic) unsigned int updateType; // @synthesize updateType=_updateType;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;

@end

