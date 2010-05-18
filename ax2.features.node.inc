<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _ax2_node_info() {
  $items = array(
    'website' => array(
      'name' => t('Website'),
      'module' => 'features',
      'description' => t('Create a website.'),
      'has_title' => '1',
      'title_label' => t('Domain'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('<h1>Three easy steps to get started with your own Stars with Stripes website in minutes:</h1>

<br/>
<h2>1. Choose a domain (website address).</h2>

<p>To use a free Stars with Stripes domain, enter a website address like this in the <strong>Domain</strong> box below:</p>

<ul>
<li>something.starswithstripes.com</li>
<li>anything.starswithstripes.com</li>
<li>yourname.starswithstripes.com</li>
</ul>

<p>
If you have your own domain, such as example.com or janeforsenate.com, enter this in the <strong>Domain</strong> box below. Then go to your registrar (whoever you bought the your domain from, e.g. Register.com or GoDaddy.com) and set the name servers for your domain to <strong>ns1.starswithstripes.com</strong> and <strong>ns2.starswithstripes.com</strong>.
</p>

<p>Please note: It can take up to 48 hours for your own website address to come online. Until then you can use an alias to start building your website immediately.
 </p>

<br/>
<h2>2. Set up aliases (optional).</h2>

<p>
There are two reasons you might want to set up an alias:
</p>
<p>
1. If you\'re using a domain like janeforsenate.com rather than jane.starswithstripes.com, your domain requires set up (see step 1) and may take time to get up and running. You can create an alias such as: jane.starswithstripes.com. This alias will be ready immediately, so you can log in and start building your website right away.
</p>
<p>
2. If you own additional domains which should re-direct to your main domain, these are aliases. Please point your domain aliases to Stars with Stripes\'s name servers (as described in step #1).
</p>
<p>
Enter aliases in the <strong>Alias/Aliases</strong> box below. For multiple aliases, enter one domain per line. For example:
</p>
<ul>
<li>jane.starswithstripes.com</li>
<li>janesmithforsenate.com</li>
<li>janeforsenate.net</li>
<li>janeforsenate.org</li>
</ul>

<br/>
<h2>3. Fill out the form below, click save, and then log into your new website.</h2>
<p>A username and temporary password will be sent to your email address. When you log into your new website you\'ll find tips for getting started there.</p>
<p><strong>Additional resources:</strong></p>
<p>Additional free resources for getting started are available on www.starswithstripes.org. Tune in for weekly video webinars and visit the  
<a href="http://starswithstripes.org/instructions">LEARN</a> and 
<a href="http://starswithstripes.org/support">SUPPORT</a>
pages on our website.</p>
<p>Stars with Stripes is also available to do trainings for your staff, help you build your website, or provide additional graphic design or website development. If you are interested in these additional services please see the <strong>Optional Extras</strong> section below and a sales representative will be in touch with you shortly.</p>
<br/><br/>'),
    ),
  );
  return $items;
}
