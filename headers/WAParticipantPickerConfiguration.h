//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, WAContact;

@interface WAParticipantPickerConfiguration : NSObject
{
    _Bool _includeToolbar;
    _Bool _singleSelection;
    _Bool _showInvites;
    unsigned long long _participantType;
    long long _minContacts;
    long long _maxContacts;
    NSString *_screenTitle;
    NSString *_rightButtonTitle;
    WAContact *_shareContact;
    NSSet *_listSubset;
    NSString *_noContactsTextOverride;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool includeToolbar; // @synthesize includeToolbar=_includeToolbar;
- (id)initWithParticipantType:(unsigned long long)arg1 minContacts:(long long)arg2 maxContacts:(long long)arg3 screenTitle:(id)arg4 rightButtonTitle:(id)arg5 includeToolbar:(_Bool)arg6 singleSelection:(_Bool)arg7 showInvites:(_Bool)arg8 shareContact:(id)arg9 listSubset:(id)arg10 noContactsTextOverride:(id)arg11;
@property(copy, nonatomic) NSSet *listSubset; // @synthesize listSubset=_listSubset;
@property(nonatomic) long long maxContacts; // @synthesize maxContacts=_maxContacts;
@property(nonatomic) long long minContacts; // @synthesize minContacts=_minContacts;
@property(copy, nonatomic) NSString *noContactsTextOverride; // @synthesize noContactsTextOverride=_noContactsTextOverride;
@property(nonatomic) unsigned long long participantType; // @synthesize participantType=_participantType;
@property(copy, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(copy, nonatomic) NSString *screenTitle; // @synthesize screenTitle=_screenTitle;
@property(retain, nonatomic) WAContact *shareContact; // @synthesize shareContact=_shareContact;
@property(nonatomic) _Bool showInvites; // @synthesize showInvites=_showInvites;
@property(nonatomic) _Bool singleSelection; // @synthesize singleSelection=_singleSelection;

@end
