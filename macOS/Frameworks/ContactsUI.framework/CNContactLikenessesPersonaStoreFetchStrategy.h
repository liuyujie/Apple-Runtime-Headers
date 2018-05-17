//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessesFetchStrategy.h"

@class CNContact, NSString, PRPersonaStore;

@interface CNContactLikenessesPersonaStoreFetchStrategy : NSObject <CNContactLikenessesFetchStrategy>
{
    PRPersonaStore *_personaStore;
    CNContact *_contact;
}

@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)contactLikenessesModel;
- (id)initWithPersonaStore:(id)arg1 contact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
