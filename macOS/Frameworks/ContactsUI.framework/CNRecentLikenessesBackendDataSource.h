//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNRecentLikenessesDataSource.h"

@class CNContact, CNContactLikenessesModel, CNObservable, CNReplaySubject, NSString;

@interface CNRecentLikenessesBackendDataSource : NSObject <CNRecentLikenessesDataSource>
{
    CNContact *_contact;
    CNReplaySubject *_contactLikenessesModelReplaySubject;
    CNObservable *_contactLikenessesModelFetchObservable;
    CNContactLikenessesModel *_contactLikenessModel;
    id <CNCancelable> _contactLikenessesModelFetchToken;
    id <CNContactLikenessesFetchStrategyFactory> _likenessFetchStrategyFactory;
    id <CNContactLikenessesFetchStrategy> _likenessFetchStrategy;
    id <CNContactLikenessMutatorFactory> _likenessMutatorFactory;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(retain, nonatomic) id <CNContactLikenessMutatorFactory> likenessMutatorFactory; // @synthesize likenessMutatorFactory=_likenessMutatorFactory;
@property(retain, nonatomic) id <CNContactLikenessesFetchStrategy> likenessFetchStrategy; // @synthesize likenessFetchStrategy=_likenessFetchStrategy;
@property(retain, nonatomic) id <CNContactLikenessesFetchStrategyFactory> likenessFetchStrategyFactory; // @synthesize likenessFetchStrategyFactory=_likenessFetchStrategyFactory;
@property(retain, nonatomic) id <CNCancelable> contactLikenessesModelFetchToken; // @synthesize contactLikenessesModelFetchToken=_contactLikenessesModelFetchToken;
@property(retain, nonatomic) CNContactLikenessesModel *contactLikenessModel; // @synthesize contactLikenessModel=_contactLikenessModel;
@property(retain, nonatomic) CNObservable *contactLikenessesModelFetchObservable; // @synthesize contactLikenessesModelFetchObservable=_contactLikenessesModelFetchObservable;
@property(retain, nonatomic) CNReplaySubject *contactLikenessesModelReplaySubject; // @synthesize contactLikenessesModelReplaySubject=_contactLikenessesModelReplaySubject;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)commitEditing;
- (void)setAsCurrentLikeness:(id)arg1;
- (void)updateLikeness:(id)arg1;
- (void)deleteLikeness:(id)arg1;
- (void)addNewLikeness:(id)arg1;
- (id)contactLikenessModelObservable;
- (void)fetchLikenessesForContact:(id)arg1;
- (void)clearState;
- (id)currentLikeness;
- (id)initWithLikenessFetchStrategyFactory:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithLikenessFetchStrategyFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

