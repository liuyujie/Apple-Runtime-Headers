//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreServices/_LSQuery.h>

@interface _UTTypeQuery : _LSQuery
{
    unsigned long long _flags;
}

+ (id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned long long)arg2;
+ (id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4;
+ (id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3;
+ (id)typeQueryWithIdentifier:(id)arg1;
+ (id)typeQueryForAllDeclaredIdentifiers;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, setter=_setResolveInactiveDeclarations:) _Bool _resolveInactiveDeclarations; // @dynamic _resolveInactiveDeclarations;
- (id)resolve;

@end
