//
//  MLAccountEdit.h
//  Monal
//
//  Created by Anurodh Pokharel on 8/3/15.
//  Copyright (c) 2015 Monal.im. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MLAccountEdit : NSViewController

@property (nonatomic, weak) IBOutlet NSTextField *jabberID;
@property (nonatomic, weak) IBOutlet NSTextField *password;

@property (nonatomic, weak) IBOutlet NSButton *enabledCheck;

@property (nonatomic, weak) IBOutlet NSTextField *server;
@property (nonatomic, weak) IBOutlet NSTextField *port;

@property (nonatomic, weak) IBOutlet NSTextField *resource;

@property (nonatomic, weak) IBOutlet NSButton *sslCheck;
@property (nonatomic, weak) IBOutlet NSButton *oldStyleSSL;
@property (nonatomic, weak) IBOutlet NSButton *selfSigned;

@property (nonatomic, strong) NSString *accountType;

-(IBAction)save:(id)sender;



@end
